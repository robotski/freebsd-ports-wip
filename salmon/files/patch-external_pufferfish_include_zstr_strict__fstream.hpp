--- external/pufferfish/include/zstr/strict_fstream.hpp.orig	2021-12-05 16:59:19 UTC
+++ external/pufferfish/include/zstr/strict_fstream.hpp
@@ -27,7 +27,7 @@ static std::string strerror()
     {
         buff = "Unknown error";
     }
-#elif (_POSIX_C_SOURCE >= 200112L || _XOPEN_SOURCE >= 600) && ! _GNU_SOURCE || defined(__APPLE__)
+#elif defined(__FreeBSD__)
 // XSI-compliant strerror_r()
     if (strerror_r(errno, &buff[0], buff.size()) != 0)
     {
