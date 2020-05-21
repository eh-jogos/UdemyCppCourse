.PHONY: clean All

All:
	@echo "----------Building project:[ StaticClassMembers - Debug ]----------"
	@cd "Section13/StaticClassMembers/StaticClassMembers" && "$(MAKE)" -f  "StaticClassMembers.mk"
clean:
	@echo "----------Cleaning project:[ StaticClassMembers - Debug ]----------"
	@cd "Section13/StaticClassMembers/StaticClassMembers" && "$(MAKE)" -f  "StaticClassMembers.mk" clean
