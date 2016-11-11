CC_FLAGS = -DHAVE_CONFIG_H -D__USE_GNU -DWIN32 -DMSVC_IGNORE=1 \
	-D_CRT_SECURE_NO_WARNINGS=1 -I. -I..\src -I..\lib -Iinclude -wd4996

DIFF_SRC = \
	analyze.c \
	cmpbuf.c \
	context.c \
	diff.c \
	dir.c \
	dirent.c \
	ed.c \
	fnmatch.c \
	ifdef.c \
	io.c \
	normal.c \
	regex.c \
	side.c \
	strcasecmp.c \
	util.c \
	version.c

DIFF_OBJ = $(DIFF_SRC:.c=.obj)

############################################################################
# WINDOWS BUILD SETTINGS.

APPVER = 6.0
TARGET = WINNT
TARGETLANG = LANG_JAPANESE

!IFDEF SDK_INCLUDE_DIR
!INCLUDE $(SDK_INCLUDE_DIR)\Win32.Mak
!ELSE
!INCLUDE <Win32.Mak>
!ENDIF

############################################################################

build: diff.exe

diff.exe: $(DIFF_OBJ)
	$(link) /NOLOGO $(ldebug) $(conlflags) $(conlibsdll) $(LDFLAGS) \
		/OUT:$@ $**
	IF EXIST $@.manifest mt -nologo -manifest $@.manifest -outputresource:$@;1

{..\src\}.c.obj::
	$(CC) $(cdebug) $(cflags) $(cvarsdll) $(CC_FLAGS) -c $<

{..\lib\}.c.obj::
	$(CC) $(cdebug) $(cflags) $(cvarsdll) $(CC_FLAGS) -c $<

{src\}.c.obj::
	$(CC) $(cdebug) $(cflags) $(cvarsdll) $(CC_FLAGS) -c $<

version.obj: ..\version.c
	$(CC) $(cdebug) $(cflags) $(cvarsdll) $(CC_FLAGS) -c $**

tags:
	ctags -R ../src ../lib ./src

clean:
	-DEL /F /Q *.obj
	-DEL /F /Q *.exe
	-DEL /F /Q *.exe.manifest
	-DEL /F /Q *.pdb

distclean: clean
	-DEL /F /Q tags
