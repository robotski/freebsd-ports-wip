PORTNAME=	libpare
DISTVERSION=	1.1.1-12
DISTVERSIONSUFFIX=	-gab3da2e
CATEGORIES=	wip devel

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	Misc functions
WWW=		https://github.com/outpaddling/libpare

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	outpaddling

PLIST_FILES=	lib/libpare.a \
		include/pare.h \
		man/man3/pare.3.gz

pre-build:
	(cd ${WRKSRC} && make depend LOCALBASE=${LOCALBASE})

.include <bsd.port.mk>
