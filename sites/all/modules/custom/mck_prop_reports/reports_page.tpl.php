
<?php


print "<div class='divTable'>";
print "<div class='divBody'>";
foreach($table as $key => $row){

    print "<div class='divTableRow'><strong>$key</strong></div>";
    foreach($row as $k => $i){
        print "<div>$k <strong>$i</strong></div>";

    }

    print "<br/>";
}
print "</div>";
print "</div>";

