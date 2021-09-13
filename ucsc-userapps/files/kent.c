/***************************************************************************
 *  Description:
 *      Wrapper to turn ucsc kent commands into subcommands.  The kent suite
 *      contains executables that conflict with multiple other software
 *      packages and therefore cannot be safely installed directly under a
 *      standard prefix.  This wrapper can be installed under the standard
 *      PATH and used to to execute kent commands installed under a
 *      private prefix, without altering PATH, activating a special
 *      environment, opening a container, etc.  This sub-command paradigm
 *      is already familiar to bioinformaticians thanks to other suites
 *      like samtools, bedtools, etc.
 *
 *      Example:
 *
 *          kent bigWigToBedGraph args
 *
 *      instead of one of the following:
 *
 *          prefix/bin/bigWigToBedGraph args
 *
 *          env PATH=prefix/bin:$PATH bigWigToBedGraph args
 *
 *          conda activate kent
 *          bigWigToBedGraph args
 *
 *  Arguments:
 *      The full kent utils command you would use if it were in PATH.
 *
 *  Compile with UCSC_PREFIX set to the parent of the bin directory
 *  containing the kent binaries.
 *
 *  History: 
 *  Date        Name        Modification
 *  2021-09-13  Jason Bacon Begin
 ***************************************************************************/

#include <stdio.h>
#include <sysexits.h>
#include <limits.h>
#include <unistd.h>

#ifndef UCSC_PREFIX
#define UCSC_PREFIX   "/usr/local/userapps"
#endif

int     main(int argc,char *argv[])

{
    char    cmd[PATH_MAX + 1];

    if ( argc < 2 )
    {
        fprintf(stderr, "Usage: %s UCSC-userapps-command\n", argv[0]);
        return EX_USAGE;
    }
    
    snprintf(cmd, PATH_MAX, "%s/bin/%s", UCSC_PREFIX, argv[1]);
    execv(cmd, argv + 1);
}
