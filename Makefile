.PHONY: clean All

All:
	@echo "----------Building project:[ DeclareClassesAndObjects - Debug ]----------"
	@cd "Section13/DeclareClassesAndObjects/DeclareClassesAndObjects" && "$(MAKE)" -f  "DeclareClassesAndObjects.mk"
clean:
	@echo "----------Cleaning project:[ DeclareClassesAndObjects - Debug ]----------"
	@cd "Section13/DeclareClassesAndObjects/DeclareClassesAndObjects" && "$(MAKE)" -f  "DeclareClassesAndObjects.mk" clean
