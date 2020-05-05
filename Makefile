.PHONY: clean All

All:
	@echo "----------Building project:[ Section11Challeng - Debug ]----------"
	@cd "Section11/Section11Challeng" && "$(MAKE)" -f  "Section11Challeng.mk"
clean:
	@echo "----------Cleaning project:[ Section11Challeng - Debug ]----------"
	@cd "Section11/Section11Challeng" && "$(MAKE)" -f  "Section11Challeng.mk" clean
