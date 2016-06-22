CC_FLAGS = -DMSVC_IGNORE=1 -I. -I..\src -I..\lib -Irt_inc -Ilib_inc

# TODO: dir.c
# TODO: fnmatch()
# TODO: regex.h (GNU libc compatible regex)

DIFF_SRC = \
	analyze.c \
	cmpbuf.c \
	context.c \
	diff.c \
	ed.c \
	ifdef.c \
	io.c \
	normal.c \
	side.c \
	util.c \
	version.c

DIFF_OBJ = $(DIFF_SRC:.c=.obj)

diff.exe: $(DIFF_OBJ)
	$(CC) -Fe$@ $** $(LDFLAGS)

{..\src\}.c.obj::
	$(CC) $(cdebug) $(cflags) $(cvarsdll) $(CC_FLAGS) -c $<

{..\lib\}.c.obj::
	$(CC) $(cdebug) $(cflags) $(cvarsdll) $(CC_FLAGS) -c $<

version.obj: ..\version.c
	$(CC) $(cdebug) $(cflags) $(cvarsdll) $(CC_FLAGS) -c $**

clean:
	-DEL /F /Q *.obj
