.PHONY: clean All

All:
	@echo "----------Building project:[ IfStatements - Debug ]----------"
	@cd "IfStatements" && "$(MAKE)" -f  "IfStatements.mk"
clean:
	@echo "----------Cleaning project:[ IfStatements - Debug ]----------"
	@cd "IfStatements" && "$(MAKE)" -f  "IfStatements.mk" clean
