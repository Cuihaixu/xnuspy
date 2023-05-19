RP = $(realpath $(shell pwd))

export RP

TARGET_DIRS = loader module 

all : $(TARGET_DIRS)

.PHONY: all $(TARGET_DIRS)

$(TARGET_DIRS) :
	$(MAKE) -C $@

clean : $(TARGET_DIRS) 
.PHONY : clean $(TARGET_DIRS)
	[tab]-rm main $(variable)
