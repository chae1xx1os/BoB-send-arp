CXX = g++
CXXFLAGS = -std=c++11 -Iinclude
LDFLAGS = -lpcap

TARGET = send-arp
SRCS = src/main.cpp src/arphdr.cpp src/ethhdr.cpp src/ip.cpp src/mac.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
