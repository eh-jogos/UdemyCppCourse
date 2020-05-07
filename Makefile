.PHONY: clean All

All:
	@echo "----------Building project:[ PointerArithmetic - Debug ]----------"
	@cd "Section12/PointerArithmetic" && "$(MAKE)" -f  "PointerArithmetic.mk"
clean:
	@echo "----------Cleaning project:[ PointerArithmetic - Debug ]----------"
	@cd "Section12/PointerArithmetic" && "$(MAKE)" -f  "PointerArithmetic.mk" clean
