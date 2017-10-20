#!/bin/sh

CURRENT_DATE=`date +%Y-%m-%d`
FILENAME_AND_PATH="tags_tmp.txt"

/bin/echo -e "List of Existing Tags\n" >> $FILENAME_AND_PATH
/bin/echo -e "If you need suggestions for tags, this is a good list for reference.\n" >> $FILENAME_AND_PATH
/bin/echo -e "Last updated $CURRENT_DATE\n" >> $FILENAME_AND_PATH

curl https://github.com/mhwkb/mhwkb.github.io | grep -o '>[^" ]\+.html<' >> $FILENAME_AND_PATH 

sed -i 's/>//g' $FILENAME_AND_PATH
sed -i 's/<//g' $FILENAME_AND_PATH
sed -i 's/.html//g' $FILENAME_AND_PATH

exit 0;

## THIS IS THE OLD VERSION IN CASE THE HTML CHANGES

# #!/bin/sh

# CURRENT_DATE=`date +%Y-%m-%d`
# GIT_REPO_WITH_HTML='https://github.com/mhwkb/mhwkb.github.io'

# DEFAULT_TARGET_CLONE_DIR='tags_mhwkb_tmp'
# TARGET_CLONE_DIR=$DEFAULT_TARGET_CLONE_DIR

# cd ../..
# git clone $GIT_REPO_WITH_HTML $TARGET_CLONE_DIR
# cd $TARGET_CLONE_DIR

# /bin/echo -e "List of Existing Tags\n" >> tags.txt
# /bin/echo -e "If you need suggestions for tags, this is a good list for reference.\n" >> tags.txt
# /bin/echo -e "Last updated $CURRENT_DATE\n" >> tags.txt

# ls >> tags.txt

# sed -i 's/.html//g' tags.txt

# sed -i '/LICENSE/d' tags.txt
# sed -i '/README.md/d' tags.txt
# sed -i '/mhwkb_style.css/d' tags.txt
# sed -i '/tags.txt/d' tags.txt

# exit 0;
