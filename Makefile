.PHONY: clean All

All:
	@echo "----------Building project:[ ReturnPointer - Debug ]----------"
	@cd "Section12/ReturnPointer/ReturnPointer" && "$(MAKE)" -f  "ReturnPointer.mk"
clean:
	@echo "----------Cleaning project:[ ReturnPointer - Debug ]----------"
	@cd "Section12/ReturnPointer/ReturnPointer" && "$(MAKE)" -f  "ReturnPointer.mk" clean
