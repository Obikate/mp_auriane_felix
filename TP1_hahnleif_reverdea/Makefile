.PHONY : clean
clean:
	$(MAKE) -C src/ clean
	$(MAKE) -C doc/ clean

.PHONY : doc
doc: 
	$(MAKE) -C doc/ doc

.PHONY : all
all: doc
	$(MAKE) -C src/ all

.PHONY : check
check: 
	$(MAKE) -C src/ check
