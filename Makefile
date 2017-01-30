.PHONY: clean All

All:
	@echo "----------Building project:[ NetFlix - Debug ]----------"
	@"$(MAKE)" -f  "NetFlix.mk"
clean:
	@echo "----------Cleaning project:[ NetFlix - Debug ]----------"
	@"$(MAKE)" -f  "NetFlix.mk" clean
