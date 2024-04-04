<?php
$db = 'C:\Users\Mansurbek\Desktop\Acsessda qilingan loyiha\ATT2000.MDB';
if (!file_exists($db)) {
    die('Could Not Find Database File');
}

$db = new PDO("odbc:DRIVER={Microsoft Access Driver (*.mdb)};DBQ=$db; Uid=; Pwd=;");

$sql = "SELECT * FROM userinfo";

$result = $db->query($sql);
$users = $result->fetchAll();
//echo "<pre>"; print_r($users); echo "</pre>";
?>
<table>
    <tr>
        <th>№</th>
        <th>Xarakteri</th>
        <th>Kasbi</th>
        <th>Hobbisi</th>
        <th>Faoliyati</th>
        <th>Rangi</th>
        <th>Shakillar va rasmlar</th>
        <th>Musiqasi</th>
        <th>Videosi</th>
        <th>Gif</th>
    </tr>

    <?php
    foreach ($users as $key => $row) {
        echo "<tr>";
        echo "<td>" . ($key + 1) . "</td>";
        echo "<td>" . $row['Xarakteri'] . "</td>";
        echo "<td>" . $row['Kasbi'] . "</td>";
        echo "<td>" . $row['Hobbisi'] . "</td>";
        echo "<td>" . $row['Faoliyati'] . "</td>";
        echo "<td>" . $row['Rangi'] . "</td>";
        echo "<td>" . $row['Shakillar_va_rasmlar'] . "</td>";
        echo "<td>" . $row['Musiqasi'] . "</td>";
        echo "<td>" . $row['Videosi'] . "</td>";
        echo "<td>" . $row['Gif'] . "</td>";
        echo "</tr>";
    }
    ?>

</table>

