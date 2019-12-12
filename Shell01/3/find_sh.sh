find . -type f -name '*.sh' -exec basename {} \; | cut -d '.' -f1
