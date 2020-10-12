PROGNAME := main
SRCDIR := src
OUTDIR := bin
TARGET := $(OUTDIR)/$(PROGNAME)
HDRS := $(wildcard $(SRCDIR)/*.hpp)
OBJS := $(addprefix $(OUTDIR)/,$(patsubst %.cpp,%.o,$(shell find src/ -type f -name '*.cpp')))
DEPS := $(OBJS:%.o=%.d)
LIBS := /opt/OpenSiv3D/Linux/build/libSiv3D.a /opt/angelscript/2.32.0/angelscript/lib/libangelscript.a
#$(warning $(OBJS))

#CC = clang++
CC = g++
CFLAGS = \
	-std=c++1z \
	-Wall \
	-Wextra \
	-Wpedantic \
	-O2 \
	-I$(SRCDIR) \
	-I/opt/OpenSiv3D/Siv3D/include \
	-I/opt/OpenSiv3D/Siv3D/include/ThirdParty/ \
	-isystem /opt/OpenSiv3D/Siv3D/include/
LFLAGS = \
	-lX11 -lXi -lXinerama -lXcursor -lXrandr \
	-lGL \
	-lGLEW \
	-lopencv_core -lopencv_imgproc -lopencv_core -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc -lopencv_java -lopencv_photo -lopencv_objdetect \
	-lpng -lturbojpeg -lgif -lwebp \
	-lfreetype -lharfbuzz \
	-lopenal \
	-logg \
	-lvorbis -lvorbisenc -lvorbisfile \
	-lboost_filesystem -lboost_system \
	-lglib-2.0 \
	-lgobject-2.0 \
	-lgio-2.0 \
	-ludev \
	-ldl \
	-lpthread \
	-lavformat \
	-lavcodec \
	-lavutil \
	-lswresample \
	-lXft

.PHONY: all clean
all: $(TARGET)

-include $(DEPS)

$(TARGET): $(OBJS) $(LIBS)
	$(CC) $(CFLAGS) $(LFLAGS) -o $@ $^

$(OUTDIR)/%.o:%.cpp
	@if [ ! -e `dirname $@` ]; then mkdir -p `dirname $@`; fi
	$(CC) $(CFLAGS) -o $@ -c -MMD $<

clean:
	rm -rf $(OUTDIR)/$(SRCDIR)
	rm -rf $(TARGET)
