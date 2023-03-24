<?php

// дата для рандомной статистики
// male ФИО
define('FIRST_NAME_ARRAY_MALE', array('Андрей','Михаил','Никита','Матвей','Дмитрий',
'Максим','Тимур','Алексей','Владимир','Руслан',
'Святослав'));
define('SECOND_NAME_ARRAY_MALE', array('Корявин','Лачков','Якимов',
'Катькин','Негес','Ябуров','Кочкорбаев','Кадцын','Абакумов',
'Решетилов','Меркулов','Осинцев'));
define('THIRD_NAME_ARRAY_MALE', array('Никанорович','Максимович','Егорович',
'Прохорович','Алексеевич','Макарович','Афанасьевич','Макарович',
'Прокльев','Никанорович','Елизарович', ''));

// female ФИО
define('FIRST_NAME_ARRAY_FEMALE', array('София','Софья','Ксения','Виктория',
'Ева','Таисия','Мария','Агата','Есения'));
define('SECOND_NAME_ARRAY_FEMALE', array('Авдонина','Шипицына','Гришкина','Тетерева',
'Нилова','Ткаченко','Волобуева','Парфенова','Фотина','Козловская','Дёмшина'));
define('THIRD_NAME_ARRAY_FEMALE', array('Серафимовна','Иннокентьевна','Севастьяновна',
'Никифоровна','Тимофеевна','Антоновна','Макаровна','Феоктистовна',
'Николаевна','Юрьевна','Емельяновна','Афанасьевна','Прохоровна', ''));

//Случайные ID заявок
define('ID_ARRAY', array((mt_rand(0,300000)),(mt_rand(0,300000)),
(mt_rand(0,300000)),(mt_rand(0,300000)),(mt_rand(0,300000)),
(mt_rand(0,300000)),(mt_rand(0,300000)),(mt_rand(0,300000)),
(mt_rand(0,300000)),(mt_rand(0,300000)),(mt_rand(0,300000))));

//Случайные ИНН
define('INN_ARRAY',array('967655776576','962782265381','968067606610',
'967654925627','962793787020','961151448180','966964038334','964803688264',
'961759994306','969375946405','960382179568','967145001980','961084869624'));

//Случайные СНИЛСы
define('SNILS_ARRAY',array('51389484114','83344826211','19724213583','40641039942',
'32562909380','42741704166','04207209915','73498097957','78037851633',
'00833641531','27387019502','98367271470','16675195409','74132815478'));

//Пол
define('sex_array', array('male','female'));

//Случайные номера
define('phonenumber_array', array('+7 (984) 230-96-84', '+7 (917) 141-33-85',
'+7 (943) 622-83-95','+7 (943) 622-83-95','+7 (943) 622-83-95',
'+7 (949) 288-89-92','+7 (924) 408-19-17','+7 (968) 512-29-23',
'+7 (907) 256-22-44','+7 (908) 817-62-76','+7 (916) 454-46-18'));

//Случайные email
define('EMAIL_ARRAY', array('kira96@yandex.ru', 'ignat2350@gmail.com','syuzanna.kornilova@mail.ru',
'aleksandra1969@outlook.com','larisa31@gmail.com','valeriy28031968@rambler.ru',
'prohor7605@ya.ru','yaroslava8988@outlook.com','ivan1975@rambler.ru',
'vasilisa8319@gmail.com','tamara1969@ya.ru','yakov14@yandex.ru'));

//Случайные д/р
define('BIRTHDATE_ARRAY', array('21.05.1991','10.08.1977','20.10.1971','03.10.1968'
,'10.07.1963','04.01.1979','01.09.1965','14.10.1960','23.02.1968','26.03.1982','02.06.1996',
'18.08.1991','28.10.1969','10.02.1979','23.04.1992','05.07.1976','08.02.1968'));

//Случайные адреса
define('ADDRESS_ARRAY', array(
    'Россия, г. Подольск, Советская ул., д. 19 кв.170',
    'Россия, г. Комсомольск-на-Амуре, Пролетарская ул., д. 20 кв.129',
    'Россия, г. Каспийск, Мира ул., д. 9 кв.51',
    'Россия, г. Пенза, Центральная ул., д. 25 кв.26',
    'Россия, г. Новокузнецк, Чапаева ул., д. 12 кв.171',
    'Россия, г. Елец, Якуба Коласа ул., д. 5 кв.67',
    'Россия, г. Каменск - Уральский, 17 Сентября ул., д. 14 кв.51',
    'Россия, г. Смоленск, Южная ул., д. 12 кв.201',
    'Россия, г. Йошкар-Ола, Молодежный пер., д. 17 кв.78',
    'Россия, г. Краснодар, ЯнкиКупалы ул., д. 7 кв.80',
    'Россия, г. Псков, Космонавтов ул., д. 11 кв.30',
    'Россия, г. Комсомольск-на-Амуре, Колхозный пер., д. 20'));

define('REG_FORM',array('P21001','P11001'));
function b_stats_faker_statistics_generator ($record_counts){
    
    $answer_array=[];

    for ($i = 0; $i<$record_counts; $i++ ){
        $record_array=[];

        $random_id_key=array_rand(constant('ID_ARRAY'));
        $random_id_value=ID_ARRAY[$random_id_key];
        array_push($record_array, $random_id_value);

        $random_sex_key=array_rand(constant('sex_array'));
        $random_sex_value=sex_array[$random_sex_key];
        array_push($record_array, $random_sex_value);

        if ($random_sex_value === 'male'){

            $random_second_name_key=array_rand(constant('SECOND_NAME_ARRAY_MALE'));
            $random_second_name_value=SECOND_NAME_ARRAY_MALE[$random_second_name_key];
            array_push($record_array, $random_second_name_value);

            $random_first_name_key=array_rand(constant('FIRST_NAME_ARRAY_MALE'));
            $random_first_name_value=FIRST_NAME_ARRAY_MALE[$random_first_name_key];
            array_push($record_array, $random_first_name_value);

            $random_third_name_key=array_rand(constant('THIRD_NAME_ARRAY_MALE'));
            $random_third_name_value=THIRD_NAME_ARRAY_MALE[$random_third_name_key];
            array_push($record_array, $random_third_name_value);    
        
        } elseif ($random_sex_value === 'female'){

            $random_second_name_key=array_rand(constant('SECOND_NAME_ARRAY_FEMALE'));
            $random_second_name_value=SECOND_NAME_ARRAY_FEMALE[$random_second_name_key];
            array_push($record_array, $random_second_name_value);

            $random_first_name_key=array_rand(constant('FIRST_NAME_ARRAY_FEMALE'));
            $random_first_name_value=FIRST_NAME_ARRAY_FEMALE[$random_first_name_key];
            array_push($record_array, $random_first_name_value);

            $random_third_name_key=array_rand(constant('THIRD_NAME_ARRAY_FEMALE'));
            $random_third_name_value=THIRD_NAME_ARRAY_FEMALE[$random_third_name_key];
            array_push($record_array, $random_third_name_value);
        }

        $random_inn_key=array_rand(constant('INN_ARRAY'));
        $random_inn_value=INN_ARRAY[$random_inn_key];
        array_push($record_array, $random_inn_value);

        $random_reg_form_key=array_rand(constant('REG_FORM'));
        $random_reg_form__value=REG_FORM[$random_reg_form_key];
        array_push($record_array, $random_reg_form__value);

        $random_snils_key=array_rand(constant('SNILS_ARRAY'));
        $random_snils_value=SNILS_ARRAY[$random_snils_key];
        array_push($record_array, $random_snils_value);

        $random_email_key=array_rand(constant('EMAIL_ARRAY'));
        $random_email_value=EMAIL_ARRAY[$random_email_key];
        array_push($record_array, $random_email_value);

        $random_phonenumber_key=array_rand(constant('phonenumber_array'));
        $random_phonenumber_value=phonenumber_array[$random_phonenumber_key];
        array_push($record_array, $random_phonenumber_value);

        $random_birthdate_key=array_rand(constant('BIRTHDATE_ARRAY'));
        $random_birthdate_value=BIRTHDATE_ARRAY[$random_birthdate_key];
        array_push($record_array, $random_birthdate_value);

        $random_address_key=array_rand(constant('ADDRESS_ARRAY'));
        $random_address_value=ADDRESS_ARRAY[$random_address_key];
        array_push($record_array, $random_address_value);

        array_push($answer_array, $record_array);
    };

    return $answer_array;
}