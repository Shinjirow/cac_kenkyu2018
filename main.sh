for i in `\ls -F | \grep /`;
do
    cd $i;
    ls;
    cd ../;
done
