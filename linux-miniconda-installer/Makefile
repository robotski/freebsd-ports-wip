PORTNAME=	miniconda-installer
DISTVERSION=	0.1.0
PORTREVISION=	1
CATEGORIES=	wip sysutils linux
PKGNAMEPREFIX=	linux-

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	Aid for installing and using miniconda
WWW=		https://github.com/outpaddling/miniconda-installer

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64
ONLY_FOR_ARCHS_REASON=	Requires a 64-bit processor, specific CPU features

RUN_DEPENDS=	auto-admin>=0.7.13:sysutils/auto-admin

USES=		linux python:3.9+
USE_GITHUB=	yes

GH_ACCOUNT=	outpaddling
NO_BUILD=	yes
PLIST_FILES=	bin/miniconda-installer bin/conda-shell

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/miniconda-installer ${WRKSRC}/conda-shell \
		${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
