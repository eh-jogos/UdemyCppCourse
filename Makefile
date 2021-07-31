.PHONY: clean All

All:
	@echo "----------Building project:[ MyString-move-assignment - Debug ]----------"
	@cd "Section14/MyString-move-assignment" && "$(MAKE)" -f  "MyString-move-assignment.mk"
clean:
	@echo "----------Cleaning project:[ MyString-move-assignment - Debug ]----------"
	@cd "Section14/MyString-move-assignment" && "$(MAKE)" -f  "MyString-move-assignment.mk" clean
