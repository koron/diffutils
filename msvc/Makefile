CC_FLAGS = -DHAVE_CONFIG_H -D__USE_GNU -DWIN32 -DMSVC_IGNORE=1 -I. -I..\src -I..\lib -Iinclude

# TODO: regex.h (GNU libc compatible regex)

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

diff.exe: $(DIFF_OBJ)
	$(CC) -Fe$@ $** $(LDFLAGS)

{..\src\}.c.obj::
	$(CC) $(cdebug) $(cflags) $(cvarsdll) $(CC_FLAGS) -c $<

{..\lib\}.c.obj::
	$(CC) $(cdebug) $(cflags) $(cvarsdll) $(CC_FLAGS) -c $<

{src\}.c.obj::
	$(CC) $(cdebug) $(cflags) $(cvarsdll) $(CC_FLAGS) -c $<

version.obj: ..\version.c
	$(CC) $(cdebug) $(cflags) $(cvarsdll) $(CC_FLAGS) -c $**

clean:
	-DEL /F /Q *.obj
	-DEL /F /Q *.exe
