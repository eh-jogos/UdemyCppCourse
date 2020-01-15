.PHONY: clean All

All:
	@echo "----------Building project:[ Section08Challenge - Debug ]----------"
	@cd "Section08Challenge" && "$(MAKE)" -f  "Section08Challenge.mk"
clean:
	@echo "----------Cleaning project:[ Section08Challenge - Debug ]----------"
	@cd "Section08Challenge" && "$(MAKE)" -f  "Section08Challenge.mk" clean
