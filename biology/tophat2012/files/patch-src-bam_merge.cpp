--- src/bam_merge.cpp.orig	2012-07-12 21:06:38 UTC
+++ src/bam_merge.cpp
@@ -1,3 +1,4 @@
+#include <getopt.h>
 #include "bam_merge.h"
 
 #define USAGE "Usage: bam_merge [-Q] <out.bam> <in1.bam> <in2.bam> [...]\n"
