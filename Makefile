.PHONY: clean All

All:
	@echo "----------Building project:[ ForLoops - Debug ]----------"
	@cd "ForLoops" && "$(MAKE)" -f  "ForLoops.mk"
clean:
	@echo "----------Cleaning project:[ ForLoops - Debug ]----------"
	@cd "ForLoops" && "$(MAKE)" -f  "ForLoops.mk" clean
