.PHONY: clean All

All:
	@echo "----------Building project:[ Section07Challenge - Debug ]----------"
	@cd "Section07Challenge" && "$(MAKE)" -f  "Section07Challenge.mk"
clean:
	@echo "----------Cleaning project:[ Section07Challenge - Debug ]----------"
	@cd "Section07Challenge" && "$(MAKE)" -f  "Section07Challenge.mk" clean
