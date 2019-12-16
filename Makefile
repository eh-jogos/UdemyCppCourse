.PHONY: clean All

All:
	@echo "----------Building project:[ ExerciseDraftsS06 - Debug ]----------"
	@cd "ExerciseDraftsS06" && "$(MAKE)" -f  "ExerciseDraftsS06.mk"
clean:
	@echo "----------Cleaning project:[ ExerciseDraftsS06 - Debug ]----------"
	@cd "ExerciseDraftsS06" && "$(MAKE)" -f  "ExerciseDraftsS06.mk" clean
