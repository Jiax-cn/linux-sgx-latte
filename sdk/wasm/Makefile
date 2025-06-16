include ../../buildenv.mk

CXXFLAGS += $(ENCLAVE_CXXFLAGS) -Werror -fno-exceptions -fno-rtti

CPPFLAGS := -I$(COMMON_DIR)/inc/tlibc	\
			-I$(COMMON_DIR)/inc 		\
			-I$(LATTE_DIR)/src

OBJ := sgx_wasm.o

LIBWASM := libsgx_wasm.a

.PHONY:all
all: $(LIBWASM) | $(BUILD_DIR)
	@$(CP) $^ $|

$(LIBWASM): $(OBJ)
	$(AR) rcs $@ $^

$(OBJ): %.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) $< -o $@

.PHONY: clean
clean:
	@$(RM) *.o *.a

.PHONY: rebuild
rebuild: 
	$(MAKE) clean
	$(MAKE) all