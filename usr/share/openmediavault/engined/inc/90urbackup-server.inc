<?php
/**
 * @license   http://www.gnu.org/licenses/gpl.html GPL Version 3
 * @copyright Copyright (c) 2013-2016 OpenMediaVault Plugin Developers
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
 require_once("openmediavault/functions.inc");

\OMV\System\LogFileSpec::registerSpecification("urbackup-server", [
    "filename" => "urbackup.log",
    "filepath" => "/var/log/urbackup.log",
    "regex" => "/^(\d+-\d+-\d+\s+\d+:\d+:\d+):\s+(.*)$/",
    "columns" => [
        "ts" => [
            "index" => 1,
            "func" => function($v) { return strpdate($v,"Y-M-d H:i:s"); }
        ],
        "date" => 1,
        "message" => 2
    ]
]);
