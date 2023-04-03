<?php

//дата для рандомной статистики
//ФИО
define(
    'FIRST_NAME_ARRAY',
    array(
        'София',
        'Софья',
        'Ксения',
        'Виктория',
        'Андрей',
        'Михаил',
        'Никита',
        'Матвей',
    )
);
define(
    'SECOND_NAME_ARRAY',
    array(
        'Авдонина',
        'Шипицына',
        'Гришкина',
        'Тетерева',
        'Корявин',
        'Лачков',
        'Якимов',
        'Катькин'
    )
);
define(
    'THIRD_NAME_ARRAY',
    array(
        'Серафимовна',
        'Иннокентьевна',
        'Севастьяновна',
        'Никифоровна',
        '',
        'Никанорович',
        'Максимович',
        'Егорович'
    )
);

//Случайные ИНН
define(
    'INN_ARRAY',
    array(
        '967655776576',
        '962782265381',
        '968067606610',
        '967654925627',
        '962793787020',
        '961151448180',
        '966964038334',
        '964803688264'
    )
);

//Случайные СНИЛСы
define(
    'SNILS_ARRAY',
    array(
        '51389484114',
        '83344826211',
        '19724213583',
        '40641039942',
        '32562909380',
        '42741704166',
        '04207209915',
        '73498097957'
    )
);

//Пол
define('SEX_ARRAY', array('female', 'female', 'female', 'female', 'male', 'male', 'male', 'male'));

//Случайные номера
define(
    'PHONE_NUMBER_ARRAY',
    array(
        '+7 (984) 230-96-84',
        '+7 (917) 141-33-85',
        '+7 (943) 610-12-95',
        '+7 (943) 622-83-95',
        '+7 (943) 610-32-95',
        '+7 (949) 288-89-92',
        '+7 (924) 408-19-17',
        '+7 (968) 512-29-23'
    )
);

//Случайные email
define(
    'EMAIL_ARRAY',
    array(
        'kira96@yandex.ru',
        'ignat2350@gmail.com',
        'syuzanna.kornilova@mail.ru',
        'aleksandra1969@outlook.com',
        'larisa31@gmail.com',
        'valeriy28031968@rambler.ru',
        'prohor7605@ya.ru',
        'yaroslava8988@outlook.com'
    )
);

//Случайные д/р
define(
    'BIRTHDATE_ARRAY',
    array(
        '21.05.1991',
        '10.08.1977',
        '20.10.1971',
        '03.10.1968'
        ,
        '10.07.1963',
        '04.01.1979',
        '01.09.1965',
        '14.10.1960'
    )
);

//Случайные адреса
define(
    'ADDRESS_ARRAY',
    array(
        'Россия, г. Подольск, Советская ул., д. 19 кв.170',
        'Россия, г. Комсомольск-на-Амуре, Пролетарская ул., д. 20 кв.129',
        'Россия, г. Каспийск, Мира ул., д. 9 кв.51',
        'Россия, г. Пенза, Центральная ул., д. 25 кв.26',
        'Россия, г. Новокузнецк, Чапаева ул., д. 12 кв.171',
        'Россия, г. Елец, Якуба Коласа ул., д. 5 кв.67',
        'Россия, г. Каменск - Уральский, 17 Сентября ул., д. 14 кв.51',
        'Россия, г. Смоленск, Южная ул., д. 12 кв.201'
    )
);

define('REG_FORM_ARRAY', array('P21001', 'P11001', 'P24001', 'P11001', 'P21001', 'P13014', 'P21002', 'P24001'));
function b_stats_faker_statistics_generator($record_counts)
{
    // максимум 8 записей
    $answer_array = [];
    for ($i = 0; $i < $record_counts; $i++) {

        $record_array = [
            'ID' => strval($i + 1),
            'First_name' => FIRST_NAME_ARRAY[$i],
            'Second_name' => SECOND_NAME_ARRAY[$i],
            'Third_name' => THIRD_NAME_ARRAY[$i],
            'Inn' => INN_ARRAY[$i],
            'Snils' => SNILS_ARRAY[$i],
            'Sex' => SEX_ARRAY[$i],
            'Phone' => PHONE_NUMBER_ARRAY[$i],
            'Email' => EMAIL_ARRAY[$i],
            'Bday' => BIRTHDATE_ARRAY[$i],
            'Address' => ADDRESS_ARRAY[$i],
            'Reg_form' => REG_FORM_ARRAY[$i]
        ];

        $answer_array[] = $record_array;
    }
    return $answer_array;
}