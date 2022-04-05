.PHONY: all

all:

gitrepo:
	git archive HEAD --prefix="gitrepo/" | tar -xf -
	cp -a ../api gitrepo/api
	cd gitrepo; \
	  git init; \
	  mkdir -p .github/workflows; \
	  mv github_workflow.yml .github/workflows/avh_build_and_test.yml; \
	  git add .; \
	  git commit -m 'Initial commit'
	@echo Example repository created in $(PWD)/gitrepo
ifneq ($(GITREMOTE),)
	cd gitrepo; \
	  git remote add origin $(GITREMOTE); \
	  git push -fu origin $$(git rev-parse --abbrev-ref HEAD)
endif

clean:
	rm -rf gitrepo
