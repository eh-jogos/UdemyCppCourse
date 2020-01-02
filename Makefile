.PHONY: clean All

All:
	@echo "----------Building project:[ Section06Challenge - Debug ]----------"
	@cd "Section06Challenge" && "$(MAKE)" -f  "Section06Challenge.mk"
clean:
	@echo "----------Cleaning project:[ Section06Challenge - Debug ]----------"
	@cd "Section06Challenge" && "$(MAKE)" -f  "Section06Challenge.mk" clean
