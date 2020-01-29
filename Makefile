.PHONY: clean All

All:
	@echo "----------Building project:[ Section09Challenge - Debug ]----------"
	@cd "Section09Challenge" && "$(MAKE)" -f  "Section09Challenge.mk"
clean:
	@echo "----------Cleaning project:[ Section09Challenge - Debug ]----------"
	@cd "Section09Challenge" && "$(MAKE)" -f  "Section09Challenge.mk" clean
