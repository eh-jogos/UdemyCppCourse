.PHONY: clean All

All:
	@echo "----------Building project:[ ImplementingMethods2 - Debug ]----------"
	@cd "Section13/ImplementingMethods2/ImplementingMethods2" && "$(MAKE)" -f  "ImplementingMethods2.mk"
clean:
	@echo "----------Cleaning project:[ ImplementingMethods2 - Debug ]----------"
	@cd "Section13/ImplementingMethods2/ImplementingMethods2" && "$(MAKE)" -f  "ImplementingMethods2.mk" clean
