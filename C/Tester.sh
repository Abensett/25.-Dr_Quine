mkdir -p  diff

./Colleen > ./diff/tmp_Colleen ; diff diff/tmp_Colleen src/Colleen.c > diff/diffColleen

if ! [[ -s diff/diffColleen ]];
then
    printf "%-20s%-15s\n" :"  " ✅ ""
else
    echo -e "Colleen ❌ "
fi
