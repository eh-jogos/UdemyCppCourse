.PHONY: clean All

All:
	@echo "----------Building project:[ CppStrings - Debug ]----------"
	@cd "CppStrings" && "$(MAKE)" -f  "CppStrings.mk"
clean:
	@echo "----------Cleaning project:[ CppStrings - Debug ]----------"
	@cd "CppStrings" && "$(MAKE)" -f  "CppStrings.mk" clean
