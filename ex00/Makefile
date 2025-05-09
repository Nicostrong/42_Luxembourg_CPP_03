# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 09:35:29 by nfordoxc          #+#    #+#              #
#    Updated: 2025/02/19 07:58:26 by nfordoxc         ###   Luxembourg.lu      #
#                                                                              #
# **************************************************************************** #

################################################################################
#	Makefile variables														   #
################################################################################

CXX				=	c++
CXXFLAGS		=	-Wall -Werror -Wextra -g
CXX_OPT			=	-std=c++98
CXX_DEF			=	

DEB				=	valgrind
DEB_OPT			=	--tool=memcheck \
					--leak-check=full \
					--show-leak-kinds=all


ARG0			=	

ARG1			=	

ARG2			=	

ARG3			=	

ARG4			=	

RM				=	rm -f

################################################################################
#	Librairies																   #
################################################################################

LIB_LIBFT_DIR	=	
LIB_PRINTF_DIR	=	
LIB_GNL_DIR		=	

LIBFT_NAME		=	
FTPRINTF_NAME	=	
LIB_GNL_NAME	=	

LIB_PROG		=
LIB_OPTI		=
LIB_OPTI		=
LIB_NAME		=

MYLIBS			=	

MYLIBS_BONUS	=	

################################################################################
#	Mandatory part															   #
################################################################################

SRC				=	main.cpp \
					ClapTrap.cpp

OBJ				=	$(SRC:.cpp=.o)

NAME			=	ClapTrap

################################################################################
#	Bonus part																   #
################################################################################

SRC_BONUS		=	

OBJ_BONUS		=	$(SRC_BONUS:.cpp=.o)

NAME_BONUS		=	

################################################################################
#	Tester part
################################################################################

SRC_TESTER		=	
BONUS_TESTER	=	

OBJ_TESTER		=	$(SRC_TESTER:.cpp=.o)
OBJ_BONUS_TESTER=	$(BONUS_TESTER:.cpp=.o)

TESTER			=	
TESTER_BONUS	=	

################################################################################
#	Colors																	   #
################################################################################

RESET			=	'\033[0m'

# Regular

BLACK			=	'\033[0;30m'
RED				=	'\033[0;31m'
GREEN			=	'\033[0;92m'
YELLOW			=	'\033[0;93m'
BLUE			=	'\033[0;94m'
PURPLE			=	'\033[0;95m'
CYAN			=	'\033[0;96m'
WHITE			=	'\033[0;97m'

# Bold

BBLACK			=	'\033[1;30m'
BRED			=	'\033[1;31m'
BGREEN			=	'\033[1;92m'
BYELLOW			=	'\033[1;93m'
BBLUE			=	'\033[1;94m'
BPURPLE			=	'\033[1;95m'
BCYAN			=	'\033[1;96m'
BWHITE			=	'\033[1;97m'

# Blink

CBLACK			=	'\033[5;30m'
CRED			=	'\033[5;31m'
CGREEN			=	'\033[5;32m'
CYELLOW			=	'\033[5;93m'
CBLUE			=	'\033[5;34m'
CPURPLE			=	'\033[5;35m'
CCYAN			=	'\033[5;36m'
CWHITE			=	'\033[5;97m'

################################################################################
#	Progress bar															   #
################################################################################

CURRENT_FILE	= 	0
NB_SRC			=	$(words $(SRC))
NB_BONUS		=	$(words $(SRC_BONUS))
NB_TESTER		=	$(words $(SRC_TESTER))
NB_TESTER_BONUS	=	$(words $(BONUS_TESTER))
SLEEP_TIME		=	0.001

################################################################################
#	Functions
################################################################################

define compile_c_to_o
	@$(eval CURRENT_FILE=$(shell echo $$(($(CURRENT_FILE)+1))))
	@$(CXX) $(CXXFLAGS) $(CXX_OPT) -c -o $@ $<
	@printf $(BLUE)"\r\033[K\033[0KCompiling files => $< ["
	@for i in $$(seq 0 $$(($(CURRENT_FILE)*100/$(NUM_FILES)))); do \
		printf $(YELLOW)"="; \
	done
	@printf $(BBLUE)"] $(CURRENT_FILE)/$(NUM_FILES)$(RESET)"
	@if [ $(CURRENT_FILE) -eq $(NUM_FILES) ]; then \
		echo ; \
	fi
	@$(eval CURRENT_FILE=$(if \
		$(filter $(CURRENT_FILE), $(NUM_FILES)), 0, $(CURRENT_FILE)))
endef

define optimise_lib
	@printf "$(BYELLOW)Optimisation of $(LIB_NAME)$(YELLOW)\n"
	@$(LIB_OPTI) $(LIB_NAME) > /dev/null 2>&1
	@for i in $$(seq 1 50); do \
		printf "\r\033[K\033[0K["; \
		for j in $$(seq 1 $$i); do \
			printf "=="; \
		done; \
		printf " %d%% ]" $$((i * 2)); \
		sleep $(SLEEP_TIME); \
	done; \
	echo $(RESET)
endef

define delete_progress
	@$(RM) $(1) > /dev/null 2>&1
	@for i in $$(seq 100 -1 0); do \
		printf "\r\033[K\033[0K"; \
		if [ $$((i % 4)) -eq 0 ]; then \
			printf "$(BRED)DELETE - ["; \
		elif [ $$((i % 4)) -eq 1 ]; then \
			printf "$(BRED)DELETE / ["; \
		elif [ $$((i % 4)) -eq 2 ]; then \
			printf "$(BRED)DELETE | ["; \
		else \
			printf "$(BRED)DELETE \\ ["; \
		fi; \
		for j in $$(seq 0 $$i); do \
			printf '='; \
		done; \
		printf " %d/100 ]$(RESET)" $$i; \
		sleep $(SLEEP_TIME); \
	done
	@printf "\r\033[K\033[0K$(GREEN)All files $(1) of $(NAME) deleted$(RESET)\n"
endef

define delete_file
	@$(RM) $(1) > /dev/null 2>&1
	@printf "\r\033[K\033[0K$(GREEN)$(1) deleted$(RESET)\n"
endef

################################################################################
#	Rules																	   #
################################################################################

.PHONY : all $(NAME) deb clean fclean re

all: 		$(NAME)

$(NAME):	NUM_FILES=$(NB_SRC)
$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(CXX_OPT) $(CC_DEF) $(OBJ) $(MYLIBS) -o $(NAME)
	@echo "$(CGREEN)The programm $(NAME) successfully compilled"

%.o :		%.cpp
	$(call compile_c_to_o)

deb:		$(NAME)
	@echo "$(BBLUE)==========	RUN DEBUG MODE	==========$(RESET)"
	$(DEB) $(DEB_OPT) ./$(NAME)

clean:
	$(call delete_progress, *.o)

fclean: 	clean
	$(call delete_file, $(NAME))

re : 		fclean all
