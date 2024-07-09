CXX 		:= c++
CXXFLAGS	:= -std=c++11
RM			:= rm -f

OBJS 		:= $(SRCS:.cpp=.o)

$(NAME)		:	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o			: %.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# make commands
.PHONY		:	all
all			:	$(NAME)

.PHONY		:	clean
clean		:
	$(RM) $(OBJS)

.PHONY		:	fclean
fclean		:	clean
	$(RM) $(NAME)

.PHONY		:	re
re			:
	$(MAKE) fclean
	$(MAKE) all