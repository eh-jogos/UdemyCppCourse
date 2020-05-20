.PHONY: clean All

All:
	@echo "----------Building project:[ DeepCopy - Debug ]----------"
	@cd "Section13/DeepCopy/DeepCopy" && "$(MAKE)" -f  "DeepCopy.mk"
clean:
	@echo "----------Cleaning project:[ DeepCopy - Debug ]----------"
	@cd "Section13/DeepCopy/DeepCopy" && "$(MAKE)" -f  "DeepCopy.mk" clean
