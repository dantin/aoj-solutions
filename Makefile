ROOT := $(shell dirname `pwd`)

format:
	find $(ROOT) \( -iname "*.cpp" -o -iname "*.c" \) -print0 | \
		xargs -0 astyle --style=bsd -A1

clean:
	find $(ROOT) \( -iname "*.cpp.orig" -o -iname "*.c.orig" \) -print0 | \
		xargs -0 rm -f
	
