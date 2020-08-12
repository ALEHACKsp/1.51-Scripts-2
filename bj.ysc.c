#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	vector3 vLocal_22 = { 0f, 0f, 0f };
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	struct<68> Local_66 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	vector3 vLocal_69 = { 0f, 0f, 0f };
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 3;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 4;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 2;
	var uLocal_187 = 0;
	var uLocal_188 = 4;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 4;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 12;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 3;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	struct<4> Local_516 = { 0, 0, 0, 0 } ;
	var uLocal_517 = 16;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
	var uScriptParam_76 = 0;
	var uScriptParam_77 = 0;
	var uScriptParam_78 = 0;
	var uScriptParam_79 = 0;
	var uScriptParam_80 = 0;
	var uScriptParam_81 = 0;
	var uScriptParam_82 = 0;
	var uScriptParam_83 = 0;
	var uScriptParam_84 = 0;
	var uScriptParam_85 = 0;
	var uScriptParam_86 = 0;
	var uScriptParam_87 = 0;
	var uScriptParam_88 = 0;
	var uScriptParam_89 = 0;
	var uScriptParam_90 = 0;
	var uScriptParam_91 = 0;
	var uScriptParam_92 = 0;
	var uScriptParam_93 = 0;
	var uScriptParam_94 = 0;
	var uScriptParam_95 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	var uVar4;
	var uVar5;
	struct<27> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<11> Var11;
	var uVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	vector3 vVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39[3];
	int iVar40;
	var uVar41;
	int iVar42;
	int iVar43;
	int iVar44[6];
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	var uVar51;
	var uVar52;
	char[] cVar53[8];
	char* sVar54;
	struct<4> Var55;
	vector3 vVar56;
	vector3 vVar57;
	vector3 vVar58;
	vector3 vVar59;
	var uVar60;
	vector3 vVar61;
	vector3 vVar62;
	var uVar63;
	var uVar64;
	float fVar65;
	var uVar66;
	var uVar67;
	var uVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	var uVar87;
	var uVar88;
	int iVar89;
	bool bVar90;
	bool bVar91;
	int iVar92;
	bool bVar93;
	bool bVar94;
	var uVar95;
	bool bVar96;
	bool bVar97;
	bool bVar98;
	bool bVar99;
	bool bVar100;
	bool bVar101;
	bool bVar102;
	bool bVar103;
	bool bVar104;
	bool bVar105;
	bool bVar106;
	bool bVar107;
	bool bVar108;
	bool bVar109;
	bool bVar110;
	bool bVar111;
	bool bVar112;
	bool bVar113;
	int iVar114;
	vector3 vVar115;
	int iVar116;
	bool bVar117;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = 4294967295;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	vLocal_69 = { 500f, 500f, 500f };
	uVar0 = 13;
	Var3.f_C = 12;
	uVar5 = 2;
	Var6.f_3 = 8;
	Var6.f_C = 8;
	Var6.f_15 = 4;
	Var6.f_1A.f_20 = 3;
	Var6.f_1A.f_24 = 1;
	Var6.f_1A.f_35 = 2;
	Var6.f_1A.f_39 = 13;
	Var6.f_1A.f_47 = 13;
	Var6.f_1A.f_118 = 13;
	Var6.f_1A.f_1E9 = 13;
	Var6.f_1A.f_1F7 = 13;
	Var6.f_1A.f_205 = 13;
	Var6.f_1A.f_213 = 13;
	Var11.f_A.f_2 = 8;
	Var11.f_A.f_2.f_1.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	iVar14 = 4294967295;
	uVar32 = 16;
	iVar33 = ScriptParam_516;
	iVar42 = ScriptParam_516.f_3;
	cVar53 = "BJ_FAIL";
	sVar54 = "";
	vVar59 = { 5f, 5f, 10f };
	fVar65 = 1f;
	fVar69 = -1f;
	iVar70 = 4294967295;
	iVar73 = 4294967295;
	iVar77 = Global_1B416.f_4A12;
	iVar80 = 1;
	iVar81 = 4294967295;
	bVar100 = false;
	bVar105 = true;
	bVar107 = false;
	bVar108 = false;
	bVar110 = true;
	bVar111 = false;
	bVar112 = false;
	bVar113 = false;
	if (unk_0xC844350D5D58C99A(ScriptParam_516.f_1))
	{
		iVar40 = ScriptParam_516.f_1;
	}
	else
	{
		iVar40 = unk_0x728870EB733D12A1();
	}
	bVar111 = unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0);
	bVar112 = unk_0x42CF608FD1475F11(unk_0xD803B885F5E47A62());
	if (bVar111)
	{
		unk_0xBDCADF8E5030FC79(unk_0xD803B885F5E47A62(), &iVar86);
		unk_0x812D6591566D640E(unk_0xD803B885F5E47A62(), &uVar87);
	}
	if (bVar112)
	{
		unk_0x1E9DAC645AEE64F0(unk_0xD803B885F5E47A62(), &uVar88);
	}
	if (unk_0xC844350D5D58C99A(iVar40))
	{
		unk_0x73270B3C9CC833FD(iVar40, true, 1);
	}
	if (unk_0xF45FDB21A0F137CB())
	{
		unk_0xC1B8EFD8630D086B(0);
	}
	if (unk_0x2EBF608FFE6CA406(82))
	{
		func_554(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, &iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
	}
	if (iVar77 < 0)
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4A12.f_1, iVar77))
	{
		fVar65 = 0.1f;
	}
	iVar13 = iVar77;
	func_553(0);
	unk_0xA37A90C62806D848(1);
	unk_0x7798376279BB5369(1);
	func_552(23, 1);
	unk_0xF5637CC664BEAAD0(1500f, 0, 21);
	func_526(&Var3, iVar13);
	if (unk_0xC844350D5D58C99A(iVar42))
	{
		unk_0x73270B3C9CC833FD(iVar42, true, 1);
	}
	if (unk_0xC844350D5D58C99A(iVar33))
	{
		unk_0x73270B3C9CC833FD(iVar33, true, 1);
		if (func_525(&Var3) != 0 && unk_0x134B62B726CEC8E6(iVar33) == func_525(&Var3))
		{
			iVar36 = iVar33;
			iVar33 = 0;
		}
	}
	while (true)
	{
		if (!bVar105)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			bVar105 = false;
		}
		if ((iVar7 >= 6 && iVar7 <= 10) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			iVar15 = func_514();
		}
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 177, true);
		}
		func_513();
		func_505(&uVar4);
		func_501(&Var6, iVar7);
		func_497(&Var6, iVar7, iVar13, bVar93);
		switch (iVar7)
		{
			case 0:
				func_496();
				if (unk_0xD0BB2359EC70FC37())
				{
					break;
				}
				func_490();
				func_489(1);
				func_485("AM_H_BASEJ", 1);
				unk_0x790015DC92C918E2();
				unk_0xA37A90C62806D848(1);
				if (iVar13 == 0)
				{
					unk_0xB5376EA942202450(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 1, false, 1);
					uVar41 = unk_0xE120F7BE93901C1B(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f);
				}
				else if (iVar13 == 5)
				{
					unk_0xB5376EA942202450(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 1, false, 1);
				}
				else if (iVar13 == 4)
				{
					func_481(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					unk_0x536F1BE96C726C4B(-74.9632f, -827.4467f, 324.9521f, 25f, 1, 0, 0, false);
				}
				else if (iVar13 == 8)
				{
					func_481(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					unk_0x536F1BE96C726C4B(-807.073f, 330.8846f, 232.6766f, 25f, 1, 0, 0, false);
				}
				if (unk_0xC844350D5D58C99A(iVar33))
				{
					func_480(&iVar23);
				}
				if ((iVar13 == 6 || iVar13 == 12) || iVar13 == 5)
				{
					if (unk_0xC844350D5D58C99A(ScriptParam_516.f_2))
					{
						unk_0x73270B3C9CC833FD(ScriptParam_516.f_2, true, 1);
						unk_0xF690C84DADBB3551(&(ScriptParam_516.f_2));
					}
					func_471(&uVar5, &Var3, iVar13, iVar13 == 6);
					bVar102 = true;
				}
				iVar7 = 1;
				break;
			
			case 1:
				if (unk_0x757EF87A33649210() || (((iVar13 == 5 || iVar13 == 6) || iVar13 == 12) && !bVar93))
				{
					if (!bVar93)
					{
						if ((iVar13 != 5 && iVar13 != 6) && iVar13 != 12)
						{
							vVar57 = { func_470(iVar13) };
							vVar57 = { func_469(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), unk_0x76F7F8AA07822C28(vVar57.x)) };
							if (func_468(iVar13))
							{
								unk_0xD67D6A3F0D653D93(func_467(iVar13), vVar57, 4000f, 0);
							}
						}
						func_461(&Var3, iVar13, &uVar0, &iVar1, &iVar2, &uVar51, &iVar84);
					}
					else if (func_459(func_460(iVar13)))
					{
						vVar62 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_458(&Var3))), SYSTEM::SIN((-97.4239f + func_458(&Var3)))) };
						vVar61 = { unk_0x68E4ADDDDCD7BDDE(iVar33, 1.12046f, -0.317773f, 1.3385f) };
						vVar62 = { func_457(vVar62, 8.909f) };
						if (func_468(iVar13))
						{
							unk_0xD67D6A3F0D653D93(vVar61 + vVar62, vVar62, 4000f, 0);
						}
					}
					else
					{
						vVar57 = { -10f, 0f, func_458(&Var3) };
						vVar57 = { func_469(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), unk_0x76F7F8AA07822C28(vVar57.x)) };
						if (func_468(iVar13))
						{
							unk_0xD67D6A3F0D653D93(func_467(iVar13), vVar57, 4000f, 0);
						}
					}
					if (((bVar93 || iVar13 == 4) || iVar13 == 8) || iVar13 == 3)
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							unk_0x975C58E0FC4955A9(unk_0x16F2683693E537C9(), 1);
						}
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), func_467(iVar13), 0, false, 0, 1);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), func_458(&Var3));
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
					}
					iVar7 = 2;
				}
				else if (!unk_0xD0BB2359EC70FC37() && (!func_456(&iVar23) || func_455(&iVar23) > 0.05f))
				{
					if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
					{
						unk_0x53491B90E4FD0E56(2500);
					}
					else
					{
						unk_0x53491B90E4FD0E56(800);
					}
				}
				break;
			
			case 2:
				if (func_453(&uVar0, &iVar16, &uVar51, iVar13, iVar84, ((iVar13 != 5 && iVar13 != 6) && iVar13 != 12)))
				{
					func_452(&iVar16);
					func_429(&Var3, &uVar32, &iVar72, &iVar33, &iVar34, &iVar36, &iVar35, &iVar37, &iVar42, &iVar43, iVar1, iVar2, &iVar19, iVar13, &iVar81);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 1, 0);
					if (!bVar93 && !bVar102)
					{
						func_471(&uVar5, &Var3, iVar13, 0);
					}
					iVar7 = 3;
				}
				break;
			
			case 3:
				if (!func_456(&iVar16) && !bVar93)
				{
					func_428(0, 0, 1);
					func_480(&iVar16);
				}
				else if ((func_456(&iVar16) && func_455(&iVar16) > 0.2f) || bVar93)
				{
					if (func_459(func_460(iVar13)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "oddjobs@basejump@", "Heli_door_loop", 3))
					{
					}
					else if (bVar93)
					{
						unk_0x53491B90E4FD0E56(800);
						if (func_456(&iVar16))
						{
							func_452(&iVar16);
						}
						if (func_525(&Var3) != 0)
						{
							unk_0x1E9649458B15960F(iVar36, false);
							func_480(&iVar22);
						}
						iVar7 = 4;
					}
					else
					{
						func_452(&iVar16);
						if (unk_0x757EF87A33649210())
						{
							SYSTEM::WAIT(1000);
							unk_0xF1E4C781086FABC1(func_427(&uVar5, 1), func_427(&uVar5, 0), 10000, 1, 1);
							unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
							unk_0x82E51BCA72537B6C(800);
						}
						unk_0x486B4ADE317F0689();
						if (func_459(func_460(iVar13)))
						{
							vVar62 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_458(&Var3))), SYSTEM::SIN((-97.4239f + func_458(&Var3)))) };
							vVar61 = { unk_0x68E4ADDDDCD7BDDE(iVar33, 1.12046f, -0.317773f, 1.3385f) };
							vVar62 = { func_457(vVar62, 8.909f) };
							if (func_468(iVar13))
							{
								unk_0xD67D6A3F0D653D93(vVar61 + vVar62, vVar62, 4000f, 0);
							}
						}
						else
						{
							vVar57 = { -10f, 0f, func_458(&Var3) };
							vVar57 = { func_469(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), unk_0x76F7F8AA07822C28(vVar57.x)) };
							if (func_468(iVar13))
							{
								unk_0xD67D6A3F0D653D93(func_467(iVar13), vVar57, 4000f, 0);
							}
						}
						if (!func_425(func_426(iVar13)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
						{
							unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
							unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 177, true);
							if (unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
							{
								unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
							}
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), func_426(iVar13), 1, false, 0, 1);
							unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), func_424(func_426(iVar13), func_467(iVar13)));
							unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 177, true);
							if (func_422() == 0)
							{
								unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 9, 5, 0, 0);
							}
							else if (func_422() == 1)
							{
								unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 8, 1, 0, 0);
							}
							else if (func_422() == 2)
							{
								unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 8, 3, 0, 0);
							}
							unk_0xDD353D0E9C789D0E(&iVar48);
							if (func_421(iVar13) > 0)
							{
								unk_0x93D47DFD0AE94949(0, func_421(iVar13));
							}
							unk_0x80AA372E04ED318D(0, func_467(iVar13), 1f, 4294967295, func_458(&Var3), 1056964608);
							unk_0x75ABDC5F81978924(iVar48);
							unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iVar48);
							unk_0xF82EA857DA10E0CD(&iVar48);
						}
						if (!func_459(func_460(iVar13)))
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &iVar39);
							}
							iVar82 = 0;
							while (iVar82 < iVar39)
							{
								if (unk_0xC844350D5D58C99A(iVar39[iVar82]) && !unk_0x437347B10A200C4B(iVar39[iVar82], 0))
								{
									if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iVar39[iVar82], false), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false)) < 2500f)
									{
										unk_0x25BD67336EA4AECE(iVar39[iVar82], 1000);
										unk_0xF8CF67C6E39C23A9(iVar39[iVar82], 5f);
										unk_0xE8832A9E16A57A1F(iVar39[iVar82], true, 1);
									}
								}
								iVar82++;
							}
						}
						if (func_525(&Var3) != 0)
						{
							func_480(&iVar22);
						}
						if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
						}
						if (func_420(iVar13, iVar84) > 0f)
						{
							func_480(&iVar28);
						}
						iVar7 = 4;
					}
				}
				break;
			
			case 4:
				if (iVar13 == 0)
				{
					unk_0x29AA598B93E45D37(200f);
				}
				if (bVar96 || bVar97)
				{
					if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
					{
						unk_0x82E51BCA72537B6C(300);
						SYSTEM::WAIT(300);
					}
					unk_0xA37A90C62806D848(1);
					unk_0x790015DC92C918E2();
					unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 1, 0);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
					iVar7 = 10;
				}
				else if (unk_0x757EF87A33649210())
				{
					func_412(0, 1, 1, 0, 0, 0);
					if (func_459(func_460(iVar13)))
					{
						func_411(&uVar5, &Var3, &vVar56, &vVar61, &vVar62, iVar33, &uVar63, &uVar64);
						iVar85 = unk_0xD68EA767274B7444();
						if (bVar110)
						{
							unk_0xCEAA091B490F8407(iVar85, "Helicopter_Wind_Idle", iVar33, "BASEJUMPS_SOUNDS", false, 0);
						}
						if (bVar109)
						{
							unk_0xA742A6B0DF3576C2(1, 300362576);
						}
					}
					else
					{
						if (unk_0xF45FDB21A0F137CB())
						{
							unk_0xC1B8EFD8630D086B(0);
						}
						unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 1, 0);
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xEF6276132B396452(0f, 1065353216);
					}
					unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
					unk_0x03846294119069F1(unk_0x16F2683693E537C9());
					unk_0xADCFE13F048E110C(unk_0x16F2683693E537C9());
					unk_0x759A5E1D0F0A31A1(unk_0x16F2683693E537C9());
					unk_0xBFE31971E49FA500(false);
					unk_0x8BCB70EB440DED83(false);
					iVar7 = 5;
				}
				else
				{
					if (!bVar104)
					{
						if (!func_456(&iVar30))
						{
							func_480(&iVar30);
						}
						else if (func_455(&iVar30) > 4f || (func_459(func_460(iVar13)) && func_455(&iVar30) > 0.5f))
						{
							func_395(&uVar32, "OJBJAUD", func_410(&Var3), 8, 0, 0, 0);
							bVar104 = true;
						}
					}
					if (!unk_0xD0BB2359EC70FC37() && !bVar93)
					{
						if (func_373(&Var3, iVar13, &iVar36, &uVar5, &uVar4, &iVar17, &iVar18, &iVar22, &iVar28, iVar84, &bVar94, &bVar106, bVar98))
						{
							unk_0xA37A90C62806D848(1);
							bVar98 = false;
							if (func_372(&Var3))
							{
								unk_0x53491B90E4FD0E56(800);
							}
							else
							{
								unk_0xBFE31971E49FA500(false);
								unk_0x8BCB70EB440DED83(false);
								iVar7 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				if (iVar13 == 0)
				{
					unk_0x29AA598B93E45D37(200f);
				}
				func_370();
				func_369();
				if (unk_0x757EF87A33649210())
				{
					if (bVar93 && bVar103)
					{
						unk_0x71592C07333285FE(func_368(iVar15), func_367(iVar15), func_366(iVar15));
					}
					SYSTEM::WAIT(2000);
					if (bVar93)
					{
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
						func_365(&iVar29);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 177, true);
						}
						while (func_455(&iVar29) < 1.1f)
						{
							SYSTEM::WAIT(0);
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 177, true);
							}
						}
						func_452(&iVar29);
					}
					unk_0x82E51BCA72537B6C(800);
				}
				if (unk_0xC844350D5D58C99A(iVar34) && !unk_0x437347B10A200C4B(iVar34, 0))
				{
					iVar45 = unk_0x6CC513A908911CF0(unk_0x68E4ADDDDCD7BDDE(iVar34, func_364(&Var3)));
					unk_0x61755AC17D8F538E(iVar45, 5);
					unk_0xF2D30B8ACAF12A39(iVar45, true);
					unk_0xDC5B2F9D0CCE3A10(iVar45, "BJ_BLIP_TGT");
				}
				else
				{
					iVar45 = unk_0x6CC513A908911CF0(func_363(&Var3, 0));
					unk_0x61755AC17D8F538E(iVar45, 5);
					if (iVar72 == 1)
					{
						unk_0xDC5B2F9D0CCE3A10(iVar45, "BJ_BLIP_TGT");
					}
					else
					{
						unk_0xDC5B2F9D0CCE3A10(iVar45, "BJ_BLIP_CHK");
					}
				}
				unk_0x516E63E474722206(iVar45, 1.2f);
				if (iVar72 > 1)
				{
					iVar46 = unk_0x6CC513A908911CF0(func_363(&Var3, 1));
					unk_0x61755AC17D8F538E(iVar46, 5);
					unk_0xF2D30B8ACAF12A39(iVar45, true);
					unk_0x516E63E474722206(iVar46, 0.7f);
					if (iVar72 == 2)
					{
						unk_0xDC5B2F9D0CCE3A10(iVar46, "BJ_BLIP_TGT");
					}
					else
					{
						unk_0xDC5B2F9D0CCE3A10(iVar46, "BJ_BLIP_CHK");
					}
				}
				if (unk_0xC844350D5D58C99A(iVar34) && !unk_0x437347B10A200C4B(iVar34, 0))
				{
					unk_0x25BD67336EA4AECE(iVar34, 2000);
					if (unk_0xC844350D5D58C99A(iVar43) && !unk_0xEB6A8945D1AC98A1(iVar43))
					{
						unk_0xA3BF0AA5A2608191(iVar43);
					}
					if (func_361(func_362(&Var3)))
					{
						unk_0x86AA47F87DFBA4D0(&iVar34);
					}
					else
					{
						unk_0xA47B46945FF6DE74(iVar34, func_363(&Var3, 0), 1, false, 0, 1);
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4A12.f_1, (func_360(&Var3) - 125)))
				{
					unk_0xDF9891243C73DEA5(unk_0xD803B885F5E47A62(), true);
					unk_0x940BAD39F84C002F(unk_0xD803B885F5E47A62(), unk_0x09AC81E49EA267F7(0, 256), unk_0x09AC81E49EA267F7(0, 256), unk_0x09AC81E49EA267F7(0, 256));
				}
				if (func_359(func_460(iVar13)))
				{
					func_358(1, 1, 1);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_365(&iVar19);
					iVar7 = 6;
					func_357(88, 1);
				}
				else if (func_459(func_460(iVar13)))
				{
					func_358(0, 0, 1);
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
					iVar7 = 7;
					func_357(88, 1);
				}
				else
				{
					func_358(1, 1, 1);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 177, true);
					iVar7 = 6;
					func_357(88, 1);
				}
				if (iVar13 == 5)
				{
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 146, true);
				}
				if (!bVar94 && unk_0xC844350D5D58C99A(iVar36))
				{
					func_356(&iVar36, 1);
					bVar94 = true;
				}
				if (!func_372(&Var3))
				{
					if (func_459(func_460(iVar13)))
					{
						func_411(&uVar5, &Var3, &vVar56, &vVar61, &vVar62, iVar33, &uVar63, &uVar64);
					}
					else
					{
						if ((func_355(&Var3) && !bVar106) && !bVar93)
						{
							unk_0x04B065D07D2FB5B9(1, 0, 3, 0);
						}
						else if (iVar13 == 4 && !func_354())
						{
							unk_0x608A456FDD8A83D8(func_427(&uVar5, 0), -76.7226f, -829.9866f, 326.0427f);
							unk_0x5F3CBA6EB9341C90(func_427(&uVar5, 0), 0.8541f, 0f, -17.012f, 2);
							unk_0x5818C8D5303DCCF8(func_427(&uVar5, 0), 53.883f);
							unk_0xE3BB8E05FCEB3FBE(func_427(&uVar5, 0), true);
						}
						else
						{
							if (unk_0xF45FDB21A0F137CB())
							{
								unk_0xC1B8EFD8630D086B(0);
							}
							unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 1, 0);
						}
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xEF6276132B396452(0f, 1065353216);
						unk_0x486B4ADE317F0689();
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (bVar111)
					{
						if (!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0))
						{
							unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 1, false, true);
						}
						unk_0x4B1EE5FDF7BAC7D7(unk_0x16F2683693E537C9(), iVar86);
						if (bVar112)
						{
							if (!unk_0x42CF608FD1475F11(unk_0xD803B885F5E47A62()))
							{
								unk_0xDD0DEB90BA7FE85C(unk_0xD803B885F5E47A62());
							}
							unk_0x0D0DC18C4D9A7AAB(unk_0x16F2683693E537C9(), uVar88);
						}
					}
					else
					{
						unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 1, false, true);
						unk_0x4B1EE5FDF7BAC7D7(unk_0x16F2683693E537C9(), (unk_0x09AC81E49EA267F7(0, 65535) % 8));
					}
				}
				unk_0x3F423BF5B8125A50("skydive@base");
				unk_0x3F423BF5B8125A50("skydive@freefall");
				unk_0x3F423BF5B8125A50("skydive@parachute@chute");
				unk_0x3F423BF5B8125A50("skydive@parachute@");
				break;
			
			case 6:
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					iVar7 = 12;
					break;
				}
				else if ((bVar97 || bVar96) || func_353(&Var3, iVar13, &bVar99))
				{
					unk_0xA37A90C62806D848(1);
					unk_0x790015DC92C918E2();
					iVar7 = 10;
				}
				else
				{
					if (iVar13 == 5)
					{
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 146, unk_0x62438065F1C29508(unk_0x16F2683693E537C9(), -118.4f, -973.1f, 295.2f, -117.1f, -975.7f, 297.7f, 0, 1, 0));
					}
					if (bVar98)
					{
						vVar58 = { func_363(&Var3, (iVar72 - 1)) };
						vVar58.z = (vVar58.z + 100f);
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar58, 1, false, 0, 1);
						bVar98 = false;
					}
					if (!bVar101)
					{
						if (iVar13 == 4)
						{
							if (((((unk_0x06F8112AA79C53D9(0, 71) || unk_0x06F8112AA79C53D9(0, 72)) || unk_0x06F8112AA79C53D9(0, 1)) || unk_0x06F8112AA79C53D9(0, 2)) || unk_0x06F8112AA79C53D9(0, 75)) || !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								unk_0xB3A1B75CB59FEB56(false, true, 1300, 1, 1, 0);
								bVar101 = true;
							}
						}
					}
					func_352(&iVar19);
					func_342(&Var3, iVar34, iVar42, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
					func_341(&uVar52);
					if (func_456(&iVar16))
					{
						if (func_455(&iVar16) > 10f)
						{
							func_337(&iVar20, &iVar80);
						}
					}
					else
					{
						func_336(&iVar16, 0f);
					}
					if (unk_0xC844350D5D58C99A(iVar36) && !unk_0x437347B10A200C4B(iVar36, 0))
					{
						if (!unk_0x0A059E0DB9253280(iVar36) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iVar36, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > 40000f)
						{
							iVar114 = unk_0xA30B8362589C124A(iVar36, 4294967295, 0);
							if (!unk_0xEB6A8945D1AC98A1(iVar114))
							{
								unk_0xEBA53F35D0085654(&iVar114);
							}
							unk_0xA954465BA6FDEFE2(&iVar36);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iVar78, 0))
					{
						if (unk_0xD17F06053799A7CA() || !func_456(&iVar31))
						{
							func_365(&iVar31);
						}
						else if (func_455(&iVar31) > 0.25f)
						{
							Var55 = { func_335(iVar13) };
							func_334(&Var55, 7500, 0);
							func_452(&iVar31);
							unk_0x5D96D8530B3D0904(&iVar78, 0);
						}
					}
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						func_333(&Var6, 1);
						iVar38 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1);
						if (unk_0xDF1306B443CD3D15(iVar38, 0) && unk_0xE934758D273C899A(iVar38))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iVar78, 1))
							{
								if (!func_456(&iVar24))
								{
									func_480(&iVar24);
								}
								else if (func_455(&iVar24) > 0.15f)
								{
									func_332("BJ_VEHHELP", 4294967295);
									func_452(&iVar24);
									unk_0x5D96D8530B3D0904(&iVar78, 1);
								}
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&iVar78, 1);
							if (func_331("BJ_VEHHELP"))
							{
								unk_0xA37A90C62806D848(1);
							}
							if (func_456(&iVar24))
							{
								func_452(&iVar24);
							}
						}
					}
					else
					{
						func_333(&Var6, 0);
						unk_0x0674E58A79778E99(&iVar78, 1);
						if (func_331("BJ_VEHHELP"))
						{
							unk_0xA37A90C62806D848(1);
						}
						if (func_456(&iVar24))
						{
							func_452(&iVar24);
						}
					}
					if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) != 4294967295)
					{
						if (iVar13 == 5)
						{
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 146, false);
						}
						unk_0x7B0C620E7A619AA1(1);
						unk_0x7352ACF3368DF65F("DisableFlightMusic", 0);
						iVar7 = 9;
						func_452(&iVar16);
					}
				}
				break;
			
			case 7:
				if (iVar13 == 0)
				{
					unk_0x29AA598B93E45D37(200f);
				}
				if (bVar96 || bVar97)
				{
					if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
					{
						unk_0x82E51BCA72537B6C(300);
						SYSTEM::WAIT(300);
					}
					unk_0xA37A90C62806D848(1);
					unk_0x790015DC92C918E2();
					if (unk_0xF45FDB21A0F137CB())
					{
						unk_0xC1B8EFD8630D086B(0);
					}
					unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
					iVar7 = 10;
				}
				else
				{
					func_352(&iVar19);
					func_342(&Var3, iVar34, iVar42, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
					func_341(&uVar52);
					if (func_459(func_460(iVar13)) && !unk_0x437347B10A200C4B(iVar33, 0))
					{
						func_330(iVar33, func_467(iVar13));
					}
					if (func_456(&iVar16))
					{
						if (func_455(&iVar16) > 10f)
						{
							func_337(&iVar20, &iVar80);
						}
					}
					else
					{
						func_336(&iVar16, 0f);
					}
					if (func_326(&Var3, &uVar5, &uVar4, &iVar18, &vVar56, &uVar60, vVar61, vVar62) || bVar98)
					{
						func_452(&iVar16);
						unk_0xA37A90C62806D848(1);
						if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
						{
							if (unk_0xC844350D5D58C99A(iVar33) && !unk_0x437347B10A200C4B(iVar33, 0))
							{
								unk_0xA47B46945FF6DE74(iVar33, func_467(iVar13), 1, false, 0, 1);
								unk_0xD8F6A53F4799FAFE(iVar33, func_458(&Var3));
								unk_0x1E9649458B15960F(iVar33, true);
								iVar81 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
								unk_0x6BE2EAE992FD7C26(iVar81, iVar33, unk_0xF653B9B22DA806A9(iVar33, "Chassis"));
								unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iVar81, "oddjobs@basejump@", "Heli_jump", 4f, -4f, 7, 0, 1148846080, 0);
								unk_0x57E0CF9BF653D99A(iVar81, 0.6f);
								func_324(iVar33, &uVar5, &iVar17);
								unk_0x486B4ADE317F0689();
							}
						}
						if (bVar109)
						{
							unk_0xA742A6B0DF3576C2(0, 300362576);
						}
						unk_0xCEAA091B490F8407(iVar85, "Helicopter_Wind", iVar33, "BASEJUMPS_SOUNDS", false, 0);
						bVar98 = false;
						iVar7 = 8;
					}
				}
				break;
			
			case 8:
				if (iVar13 == 0)
				{
					unk_0x29AA598B93E45D37(200f);
				}
				func_352(&iVar19);
				func_342(&Var3, iVar34, iVar42, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
				if (unk_0x69DF961355195C3C(iVar81))
				{
					if (unk_0xA45992A6CE82FB43(iVar81) > 0.92f)
					{
						unk_0xDD353D0E9C789D0E(&iVar47);
						unk_0x818303F509839F80(0, 3133206795, 0);
						unk_0x12E1315CBD2320BD(0, 1, 0);
						unk_0x75ABDC5F81978924(iVar47);
						unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iVar47);
						unk_0xF82EA857DA10E0CD(&iVar47);
					}
				}
				if (unk_0xC844350D5D58C99A(iVar33))
				{
					if (func_323(&uVar5, &iVar17, vVar61, vVar62, vVar56, &uVar63, &uVar64))
					{
						unk_0xB0703A3FDD659128(unk_0x16F2683693E537C9(), iVar33, false);
						if (!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "oddjobs@basejump@", "Heli_jump", 3))
						{
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
							unk_0xBFE31971E49FA500(true);
							if (unk_0xF45FDB21A0F137CB())
							{
								unk_0xC1B8EFD8630D086B(0);
							}
							unk_0x7352ACF3368DF65F("DisableFlightMusic", 0);
							unk_0x7B0C620E7A619AA1(1);
							iVar7 = 9;
						}
					}
				}
				break;
			
			case 9:
				if (iVar13 == 0)
				{
					unk_0x29AA598B93E45D37(200f);
				}
				if (Global_56C3.f_87)
				{
					unk_0x38C3A68D7861DCFD(0, 144, 1);
				}
				if (Global_56C3.f_87)
				{
					unk_0x38C3A68D7861DCFD(0, 144, 1);
				}
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					iVar7 = 12;
					break;
				}
				if (bVar96 || bVar97)
				{
					unk_0xA37A90C62806D848(1);
					unk_0x790015DC92C918E2();
					iVar7 = 10;
				}
				else if (func_322(&uVar4, 3, 1000) && !Global_56C3.f_87)
				{
					unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), true);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
					unk_0x53491B90E4FD0E56(800);
					while (unk_0xD0BB2359EC70FC37())
					{
						func_342(&Var3, iVar34, iVar43, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
						SYSTEM::WAIT(0);
					}
					func_276(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
					bVar93 = true;
					iVar7 = 0;
				}
				else
				{
					func_273(&iVar26, &iVar44);
					if (bVar98)
					{
						vVar58 = { func_363(&Var3, (iVar72 - 1)) };
						func_271(unk_0x16F2683693E537C9(), vVar58);
						bVar98 = false;
					}
					func_352(&iVar19);
					if (func_361(func_362(&Var3)))
					{
						if (!unk_0xC844350D5D58C99A(iVar34) && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), func_363(&Var3, 0), false) <= 200f)
						{
							iVar34 = unk_0x9F136BAA293FE131(6, func_363(&Var3, 0), 1);
							if (!unk_0x437347B10A200C4B(iVar34, 0))
							{
								unk_0x5D6C12CA95187FB3(iVar34, 7.5f);
							}
						}
					}
					else if ((unk_0xC844350D5D58C99A(iVar34) && !unk_0x437347B10A200C4B(iVar34, 0)) && !func_425(func_363(&Var3, 0)))
					{
						unk_0xEB6A8945D1AC98A1(iVar43);
						if (func_270(unk_0x16F2683693E537C9(), iVar34, 0) <= 325f)
						{
							if (iVar13 == 5)
							{
								vVar115 = { 28.8687f, -299.1065f, 46.5693f };
							}
							else
							{
								vVar115 = { -819.7591f, -1512.229f, 0.1336f };
							}
							if (unk_0xD1960163A3042274(iVar43, 3021937204) != 1)
							{
								if (iVar13 == 5)
								{
									unk_0x132B85BCE016BCA0(iVar43, iVar34, vVar115, 4, 5f, 16785408, 5f, 10f, 1);
								}
								else
								{
									unk_0x132B85BCE016BCA0(iVar43, iVar34, vVar115, 4, 5f, 16777216, 4f, -1f, 1);
								}
							}
							else
							{
								func_265(&iVar34);
							}
						}
					}
					iVar8 = func_342(&Var3, iVar34, iVar43, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 1, 1, fVar65);
					if (iVar8 == 1 || iVar8 >= 2)
					{
						unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
						if (iVar8 >= 2)
						{
							if (unk_0xFEBC1E4EC9E001F0())
							{
								unk_0xA37A90C62806D848(1);
							}
							if (unk_0xD17F06053799A7CA())
							{
								unk_0x790015DC92C918E2();
							}
						}
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), false);
						if (iVar13 == 5)
						{
							unk_0xA3BF0AA5A2608191(iVar43);
							unk_0x4E885A246A9D983A(iVar43, 296, true);
						}
						iVar116 = 0;
						while (iVar116 < iVar44)
						{
							if (unk_0xC844350D5D58C99A(iVar44[iVar116]) && !unk_0x437347B10A200C4B(iVar44[iVar116], 0))
							{
								unk_0xA3BF0AA5A2608191(iVar44[iVar116]);
								iVar44[iVar116] = 0;
							}
							iVar116++;
						}
						iVar7 = 10;
					}
					func_264(&Var6, &Var3, iVar13, iVar72);
				}
				break;
			
			case 10:
				if (iVar13 == 0)
				{
					unk_0x29AA598B93E45D37(200f);
				}
				if (unk_0xC844350D5D58C99A(iVar43) && !unk_0x437347B10A200C4B(iVar43, 0))
				{
					if (unk_0xD1960163A3042274(iVar43, 3312640106) != 0 && unk_0xD1960163A3042274(iVar43, 3312640106) != 1)
					{
						unk_0xA3BF0AA5A2608191(iVar43);
						unk_0x93D47DFD0AE94949(iVar43, 4294967295);
					}
				}
				if ((!bVar96 && !bVar97) && !bVar99)
				{
					if (!func_456(&iVar21))
					{
						if (!func_456(&iVar18))
						{
							func_480(&iVar18);
						}
						if (unk_0xE4EDC4B0E92C078B(iVar45))
						{
							unk_0x142CC44DB769B57E(&iVar45);
						}
						if (unk_0xE4EDC4B0E92C078B(iVar46))
						{
							unk_0x142CC44DB769B57E(&iVar46);
						}
						if (iVar73 > 4294967295)
						{
							unk_0xE223EB8FE6F8CC15(iVar49);
							unk_0xE223EB8FE6F8CC15(iVar50);
							iVar73 = 4294967295;
						}
						func_336(&iVar21, 0f);
					}
					if (!func_456(&vVar27))
					{
						func_480(&vVar27);
					}
					if (func_362(&Var3) == 0)
					{
						func_263(func_363(&Var3, (iVar72 - 1)), vVar27);
					}
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (((((unk_0xC844350D5D58C99A(iVar34) && !unk_0x437347B10A200C4B(iVar34, 0)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0)) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iVar34, vVar59, 0, 1, 0)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), func_363(&Var3, iVar71), vVar59, false, true, 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9()))
						{
							bVar117 = false;
							if (unk_0xE934758D273C899A(unk_0x16F2683693E537C9()) && (unk_0xC844350D5D58C99A(iVar34) && !unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iVar34)))
							{
								bVar117 = true;
							}
							else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
							{
								bVar117 = true;
							}
							if (bVar117)
							{
								if (func_322(&uVar4, 3, 1000) && !Global_56C3.f_87)
								{
									unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), true);
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
									unk_0x53491B90E4FD0E56(800);
									while (unk_0xD0BB2359EC70FC37())
									{
										func_342(&Var3, iVar34, iVar43, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
										SYSTEM::WAIT(0);
									}
									func_276(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
									bVar93 = true;
									iVar7 = 0;
								}
								break;
							}
						}
					}
				}
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					iVar7 = 12;
					break;
				}
				if (((bVar96 || bVar97) || bVar99) || (func_456(&iVar21) && func_455(&iVar21) > 0.25f))
				{
					if (func_456(&iVar21) && func_455(&iVar21) > 0.25f)
					{
						func_259(func_363(&Var3, iVar71), iVar34, iVar43, &iVar8, &iVar75, &fVar69);
					}
					func_452(&iVar21);
					if (bVar96 || iVar8 == 1)
					{
						iVar10 = func_258();
						while (!unk_0x83D8570832F172A7(iVar10))
						{
							SYSTEM::WAIT(0);
							if (func_362(&Var3) == 0)
							{
								func_263(func_363(&Var3, (iVar72 - 1)), vVar27);
							}
							iVar10 = func_258();
						}
						if (iVar13 == 0)
						{
							if (!unk_0xEB6A8945D1AC98A1(iVar43))
							{
								func_395(&uVar32, "OJBJAUD", "BJ_01D", 8, 1, 1, 0);
							}
						}
						iVar7 = 11;
						if (!func_257(&Var6, 7))
						{
							iVar79 = 125;
							unk_0x5D96D8530B3D0904(&(Global_1B416.f_4A12.f_1), (func_360(&Var3) - iVar79));
							func_256(func_360(&Var3), 1);
							iVar89 = 1;
							bVar90 = true;
							bVar91 = true;
							iVar83 = 0;
							while (iVar83 < 13)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4A12.f_1, iVar83))
								{
									if (func_459(func_460(iVar83)))
									{
										bVar91 = false;
									}
									else
									{
										bVar90 = false;
									}
									iVar89 = 0;
								}
								iVar83++;
							}
							if (iVar89 && !func_255(98))
							{
								func_254(98, 1);
							}
							if (bVar90)
							{
								func_251(128, 0, 0);
							}
							if (bVar91)
							{
								func_251(129, 0, 0);
							}
							func_214(&iVar74, iVar72, &iVar75, &iVar76, fVar65);
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), false);
							}
							func_213(&Var6, 7, 1);
							func_212(1, 0);
							func_480(&iVar25);
							func_211();
						}
					}
					else if ((bVar97 || bVar99) || iVar8 >= 2)
					{
						unk_0xA37A90C62806D848(1);
						unk_0x790015DC92C918E2();
						if (!bVar99)
						{
							func_208();
						}
						if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							iVar92 = 1;
						}
						if (unk_0x1963B11DE70153E0())
						{
							func_206(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 361, 0, 361, 0);
						}
						else
						{
							func_213(&Var6, 27, 1);
							func_206(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
						}
						iVar7 = 12;
					}
					func_452(&iVar18);
				}
				break;
			
			case 11:
				unk_0x38C3A68D7861DCFD(2, 200, 1);
				if (!bVar96 && !bVar97)
				{
					if (func_205() && !func_257(&Var6, 26))
					{
						func_194(iVar13);
						if (func_182(iVar13, iVar75, fVar69, iVar76))
						{
							func_206(&Var6, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
							func_213(&Var6, 26, 1);
						}
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					bVar108 = unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0);
				}
				if (func_362(&Var3) == 0)
				{
					func_263(func_363(&Var3, (iVar72 - 1)), vVar27);
				}
				if (!bVar113)
				{
					iVar9 = func_76(iVar13, &Var6, &uVar51, &uVar4, iVar74, iVar72, iVar75, &iVar76, fVar65, &bVar100);
					bVar113 = iVar9 == true;
				}
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (iVar77 == 0)
					{
						unk_0xB5376EA942202450(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, true, 1);
					}
					else if (iVar77 == 5)
					{
						unk_0xB5376EA942202450(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, true, 1);
					}
					func_75(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
				}
				else if (!unk_0xD0BB2359EC70FC37() && (!func_74() || func_455(&iVar25) >= 2f))
				{
					unk_0x38C3A68D7861DCFD(0, 22, 1);
					unk_0x38C3A68D7861DCFD(0, 21, 1);
					unk_0x38C3A68D7861DCFD(0, 55, 1);
					unk_0x38C3A68D7861DCFD(0, 140, 1);
					unk_0x38C3A68D7861DCFD(0, 142, 1);
					unk_0x38C3A68D7861DCFD(0, 141, 1);
					unk_0x38C3A68D7861DCFD(0, 80, 1);
					unk_0x38C3A68D7861DCFD(0, 95, 1);
					unk_0x38C3A68D7861DCFD(0, 96, 1);
					unk_0x38C3A68D7861DCFD(0, 97, 1);
					unk_0x38C3A68D7861DCFD(0, 98, 1);
					unk_0x38C3A68D7861DCFD(0, 0, 1);
					if (func_456(&iVar18))
					{
						if ((iVar9 == 1 || func_455(&iVar18) >= 60f) || ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xE64AC821059A938D(unk_0x16F2683693E537C9())) || (!bVar108 && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))))
						{
							if (!bVar113)
							{
								func_73(&(Var6.f_1A));
								bVar113 = true;
							}
							if (func_47(&(Var6.f_1A), 0, 1065353216, 0, 0, 0))
							{
								if (!bVar96 && !bVar97)
								{
									if (func_205() && !func_257(&Var6, 26))
									{
										if (func_182(iVar13, iVar75, fVar69, iVar76))
										{
											func_213(&Var6, 26, 1);
										}
									}
								}
								func_44(&(Var6.f_1A));
								func_452(&iVar25);
								if (iVar13 == 0)
								{
									unk_0xB5376EA942202450(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, true, 1);
								}
								else if (iVar13 == 5)
								{
									unk_0xB5376EA942202450(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, true, 1);
								}
								func_75(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
							}
						}
						else if (iVar9 == 0)
						{
							if (!bVar96 && !bVar97)
							{
								if (func_205() && !func_257(&Var6, 26))
								{
									if (func_182(iVar13, iVar75, fVar69, iVar76))
									{
										func_213(&Var6, 26, 1);
									}
								}
							}
							func_44(&(Var6.f_1A));
							func_452(&iVar25);
							func_213(&Var6, 5, 0);
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
							unk_0x53491B90E4FD0E56(800);
							while (unk_0xD0BB2359EC70FC37())
							{
								SYSTEM::WAIT(0);
								if (func_362(&Var3) == 0)
								{
									func_263(func_363(&Var3, (iVar72 - 1)), vVar27);
								}
							}
							func_276(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
							bVar93 = true;
							iVar7 = 0;
							break;
						}
						else if (bVar100)
						{
							if (func_455(&iVar18) > (60f - 5f))
							{
								func_42(&iVar18, (60f - 5f));
							}
						}
					}
					else
					{
						func_336(&iVar18, 0f);
					}
				}
				break;
			
			case 12:
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					bVar108 = unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0);
				}
				unk_0x38C3A68D7861DCFD(2, 200, 1);
				if (iVar76 > 0)
				{
					iVar76 = 0;
				}
				if (!bVar96 && !bVar97)
				{
					if (func_205() && !func_257(&Var6, 26))
					{
						func_194(iVar13);
						if (func_182(iVar13, iVar75, fVar69, iVar76))
						{
							func_206(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
							func_213(&Var6, 26, 1);
						}
					}
				}
				if (!func_257(&Var6, 24))
				{
					if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						bVar103 = true;
					}
					else
					{
						bVar103 = false;
					}
					unk_0x38DC636F3D2D2FA8("OJBJ_START");
					unk_0x38DC636F3D2D2FA8("OJBJ_JUMPED");
					unk_0x38DC636F3D2D2FA8("OJBJ_LANDED");
					unk_0xC92DB9682A650680("OJBJ_STOP");
					if (unk_0xE4EDC4B0E92C078B(iVar45))
					{
						unk_0x142CC44DB769B57E(&iVar45);
					}
					if (unk_0xE4EDC4B0E92C078B(iVar46))
					{
						unk_0x142CC44DB769B57E(&iVar46);
					}
					if (iVar13 == 0)
					{
						unk_0x29AA598B93E45D37(200f);
					}
					iVar10 = func_258();
					while (!unk_0x83D8570832F172A7(iVar10))
					{
						if (func_362(&Var3) == 0)
						{
							func_263(func_363(&Var3, (iVar72 - 1)), vVar27);
						}
						SYSTEM::WAIT(0);
						iVar10 = func_258();
					}
					if (bVar103)
					{
						func_41(&uVar12, 0);
					}
					else
					{
						func_40(&Var11, 1050253722, 1073741824);
					}
					func_213(&Var6, 24, 1);
				}
				if (!bVar103 && unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					func_213(&Var6, 24, 0);
					break;
				}
				if (func_362(&Var3) == 0)
				{
					func_263(func_363(&Var3, (iVar72 - 1)), vVar27);
				}
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					switch (func_36(unk_0x16F2683693E537C9()))
					{
						case 0:
							sVar54 = "BJ_FAIL_M";
							break;
						
						case 1:
							sVar54 = "BJ_FAIL_F";
							break;
						
						case 2:
							sVar54 = "BJ_FAIL_T";
							break;
					}
				}
				else if (bVar99)
				{
					sVar54 = "BJ_FAIL_02";
				}
				else
				{
					sVar54 = "BJ_FAIL_01";
				}
				bVar107 = false;
				unk_0x38C3A68D7861DCFD(0, 0, 1);
				unk_0x38C3A68D7861DCFD(0, 80, 1);
				if (bVar103)
				{
					bVar107 = func_16(&uVar12, &Var11, &iVar10, cVar53, sVar54, &bVar93, 78);
				}
				else
				{
					bVar107 = func_3(&iVar10, &Var11, cVar53, sVar54, &bVar93, 79, 7, 1, 1097859072, 1);
				}
				if (bVar107)
				{
					if (bVar93)
					{
						if (!bVar96 && !bVar97)
						{
							if (func_205() && !func_257(&Var6, 26))
							{
								if (func_182(iVar13, iVar75, fVar69, iVar76))
								{
									func_213(&Var6, 26, 1);
								}
							}
						}
						func_276(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
						iVar7 = 0;
					}
					else
					{
						if (!bVar96 && !bVar97)
						{
							if (func_205() && !func_257(&Var6, 26))
							{
								if (func_182(iVar13, iVar75, fVar69, iVar76))
								{
									func_213(&Var6, 26, 1);
								}
							}
						}
						func_2(bVar103, &Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
					}
					func_1(&iVar10);
				}
				iVar8 = 0;
				break;
		}
	}
}

void func_1(int iParam0)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
}

void func_2(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, var uParam17, bool bParam18)
{
	if (bParam0)
	{
		func_554(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &iParam7, uParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, uParam17, bParam18);
	}
	else
	{
		func_554(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &iParam7, uParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, uParam17, bParam18);
	}
}

int func_3(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
			{
				unk_0x53491B90E4FD0E56(2500);
				unk_0xC2127C0F64D6A3B9();
			}
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(true);
			}
			unk_0x9A82EEAF6CA12AEE(0.2f);
			if (func_15(iParam5, 4))
			{
				if (unk_0xAE317D00A5A55DF6("generic_failed", false, 4294967295))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0x7E60C62A7CE58FC8(*iParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x7ACC3006A87F8B39("STRING");
			unk_0x3A820E495A7BA3E5(6);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
			func_14(sParam3);
			unk_0x3CAEA85DA607305E(100);
			unk_0x1200CC973A2399C8(true);
			unk_0x7A8BB56B212464AC();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					unk_0x7E60C62A7CE58FC8(*iParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_86);
					unk_0x7E60D21B163E9D56();
					uParam1->f_88 = 1;
				}
			}
			if (!func_15(iParam5, 1))
			{
				unk_0x5EEBDFEE72949D59(0);
			}
			func_13(&(uParam1->f_A), 0, 1, 1, 1);
			func_12(&(uParam1->f_A), "IB_RETRY", 2, 201, 1, 1, 0);
			func_12(&(uParam1->f_A), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_15(iParam5, 4))
			{
				unk_0x4D7F4CC43D4D0DE3(4294967295, "ScreenFlash", "MissionFailedSounds", true);
			}
			if (func_15(iParam5, 8))
			{
				switch (func_422())
				{
					case 0:
						unk_0x82A772610883F395("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x82A772610883F395("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x82A772610883F395("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_456(&(uParam1->f_1)))
			{
				func_480(&(uParam1->f_1));
			}
			if (func_15(iParam5, 2))
			{
				if (!func_456(&(uParam1->f_4)))
				{
					func_480(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0xBD706C594F6DCD4A();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					unk_0x7E60C62A7CE58FC8(*iParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_86);
					unk_0x7E60D21B163E9D56();
					uParam1->f_88 = 1;
				}
			}
			unk_0xD9ACBBA59FD5A09E(iParam6);
			func_11(iParam0, 0, 0);
			if (!func_15(iParam5, 16) && (func_455(&(uParam1->f_1)) >= uParam1->f_87 || unk_0x757EF87A33649210()))
			{
				func_5(&(uParam1->f_A), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x5D80F91A16C40CDE();
				if (unk_0xB9132A06AE472728(2, 201))
				{
					uParam1->f_8A = 1;
					unk_0x4D7F4CC43D4D0DE3(4294967295, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_15(iParam5, 1))
					{
						unk_0x18B28213EC89540F(0);
					}
					func_4(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0xB9132A06AE472728(2, 202))
				{
					uParam1->f_8A = 0;
					unk_0x4D7F4CC43D4D0DE3(4294967295, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_15(iParam5, 1))
					{
						unk_0x18B28213EC89540F(0);
					}
					func_4(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_15(iParam5, 2))
			{
				if (func_455(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_8A = 0;
					unk_0x4D7F4CC43D4D0DE3(4294967295, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_15(iParam5, 1))
					{
						unk_0x18B28213EC89540F(0);
					}
					func_4(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_11(iParam0, 0, 0);
			unk_0x9A82EEAF6CA12AEE(1f);
			if (uParam1->f_8A || !((unk_0x7F8A39872A07D2CE("stunt_plane_races", unk_0xBB0808A181D4745C()) || unk_0x7F8A39872A07D2CE("pilot_school", unk_0xBB0808A181D4745C())) || (unk_0x7F8A39872A07D2CE("bj", unk_0xBB0808A181D4745C()) && unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))))
			{
				unk_0x82E51BCA72537B6C(2500);
			}
			if (func_15(iParam5, 64) && uParam1->f_8A)
			{
				unk_0x53491B90E4FD0E56(500);
			}
			func_365(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_455(&(uParam1->f_4)) <= 0.1f)
			{
				func_11(iParam0, 0, 0);
			}
			else
			{
				*bParam4 = uParam1->f_8A;
				return 1;
			}
			break;
	}
	return 0;
}

void func_4(int iParam0)
{
	if (*iParam0 != 0)
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_7B = 0;
}

void func_5(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749()) || unk_0x757EF87A33649210()) || unk_0x06980BB66EBA4D95())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_10(uParam0))
	{
		return;
	}
	unk_0xBD706C594F6DCD4A();
	unk_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_15(uParam0->f_1, 256) || (func_15(uParam0->f_1, 8192) && unk_0xB8E3620B82AD47D7(2)))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_CLEAR_SPACE");
		unk_0x7C19E5E4784BD7CF(fParam1);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
		unk_0x7C19E5E4784BD7CF(fParam5);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7E60D21B163E9D56();
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(func_15(uParam0->f_1, 4096));
			unk_0x7E60D21B163E9D56();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_7B)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x91E3F625EF57450D(2);
					break;
				
				case 2:
					bVar4 = !unk_0x91E3F625EF57450D(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x3CAEA85DA607305E(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
						{
							sVar3 = unk_0xF59058FCB716F903(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xE32F7AC5E6DF304A(iVar0, iVar1, bVar2);
						}
						if (!unk_0xEA6BC48857E0AC4C(sVar3))
						{
							func_9(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_14(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (func_15(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x1200CC973A2399C8(true);
								unk_0x3CAEA85DA607305E(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x1200CC973A2399C8(false);
								unk_0x3CAEA85DA607305E(4294967295);
							}
						}
					}
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar6++;
		}
		fVar8 = func_8(bParam4, func_8(func_15(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(fVar8);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_7(&(uParam0->f_1), 256);
		func_6(&(uParam0->f_1), 128);
	}
	unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 0, 0);
}

void func_6(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_8(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_9(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_10(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_7(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_456(&(uParam0->f_2)))
	{
		func_365(&(uParam0->f_2));
	}
	unk_0x3584F71E5CA29322(14);
	if (!bParam2)
	{
		unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x06F8112AA79C53D9(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == 4294967295)
	{
		return 1;
	}
	if (func_455(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_452(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

int func_12(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_7B;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_C = 0;
		uParam0->f_2[iVar1 /*15*/].f_D = 0;
		uParam0->f_2[iVar1 /*15*/].f_E = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2[iVar1 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
	if (bParam1)
	{
		func_7(&(uParam0->f_1), 32);
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		func_7(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x5461A9D388F592B4(*uParam0, 1);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_7(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_7(&(uParam0->f_1), 8192);
	}
}

void func_14(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_16(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x8BC9595FD2792B5D("DEATH_SCENE");
			unk_0x4D7F4CC43D4D0DE3(4294967295, "ScreenFlash", "WastedSounds", true);
			func_35(&(uParam0->f_1));
			func_34();
			func_40(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x31A33F7BCB08CB80(true);
			break;
		
		case 1:
			if (func_24() || unk_0x757EF87A33649210())
			{
				*uParam0 = 2;
			}
			if (!func_23(uParam0->f_4, 4))
			{
				if (unk_0xAE317D00A5A55DF6("OFFMISSION_WASTED", false, 4294967295))
				{
					unk_0x4D7F4CC43D4D0DE3(4294967295, "Bed", "WastedSounds", true);
					func_21(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_23(uParam0->f_4, 2))
				{
					unk_0x4D7F4CC43D4D0DE3(4294967295, "TextHit", "WastedSounds", true);
					func_21(&(uParam0->f_4), 2);
				}
				func_3(iParam2, uParam1, sParam3, sParam4, bParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_3(iParam2, uParam1, sParam3, sParam4, bParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_20(0, 1);
				func_18(0, 1);
				func_34();
				if (*bParam5)
				{
					unk_0x4DB69487E1A9EE2A(1);
				}
				else if (!uParam0->f_5)
				{
					func_17(0);
				}
				unk_0x31A33F7BCB08CB80(false);
				unk_0x65C5EBCA17A891FC(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x67E5ECB8FD7F5018(1);
				func_20(0, 1);
				func_18(0, 1);
				unk_0x8910D3D58E0132B8("DEATH_SCENE");
				unk_0x31A33F7BCB08CB80(false);
				return 1;
			}
			break;
		
		case 4:
			unk_0x31A33F7BCB08CB80(false);
			return 1;
			break;
	}
	return 0;
}

void func_17(bool bParam0)
{
	if ((Global_A1D7 == 9 || Global_A1D7 == 10) || Global_A1D7 == 5)
	{
		Global_1AECF = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_1AECF = 0;
	}
}

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_20(0, 0);
		unk_0x82A772610883F395("DeathFailOut", 0, 0);
		unk_0x5D96D8530B3D0904(&iLocal_41, 1);
		func_19(1, 2, 0);
		unk_0x4AED3E7834924DC8(2);
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 1) || iParam1)
		{
			unk_0x9A1335ECD7BD117F("DeathFailOut");
			func_19(0, 2, 1);
			unk_0x4AED3E7834924DC8(0);
		}
		unk_0x0674E58A79778E99(&iLocal_41, 1);
	}
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&iLocal_41, 2);
		if (!unk_0x8CD06866876216F2())
		{
			if (iParam1 == 1)
			{
				unk_0x9A82EEAF6CA12AEE(0.2f);
			}
			else
			{
				unk_0x9A82EEAF6CA12AEE(0.075f);
			}
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 2) || iParam2)
		{
			if (!unk_0x8CD06866876216F2())
			{
				unk_0x9A82EEAF6CA12AEE(1f);
			}
		}
		unk_0x0674E58A79778E99(&iLocal_41, 2);
	}
}

void func_20(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_422())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0) || iParam1)
		{
			unk_0x82A772610883F395(sVar0, 0, 0);
			unk_0x5D96D8530B3D0904(&iLocal_41, 0);
			func_19(1, 1, 0);
			unk_0x4AED3E7834924DC8(1);
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0) || iParam1)
		{
			unk_0x9A1335ECD7BD117F(sVar0);
			func_19(0, 1, 1);
			unk_0x4AED3E7834924DC8(0);
		}
		unk_0x0674E58A79778E99(&iLocal_41, 0);
	}
}

void func_21(var uParam0, int iParam1)
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_24()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0) && !unk_0xEAE0D21A50E6C7F4(iLocal_41, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_20(1, 0);
	}
	if (!unk_0x22A8E52414415B76())
	{
		unk_0x790015DC92C918E2();
	}
	unk_0x38C3A68D7861DCFD(2, 199, 1);
	unk_0x38C3A68D7861DCFD(0, 59, 1);
	unk_0x38C3A68D7861DCFD(0, 60, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
	unk_0x38C3A68D7861DCFD(0, 25, 1);
	unk_0x95235C19032FCE7D();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 1))
		{
			func_18(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || unk_0x757EF87A33649210())
		{
			if (!unk_0x757EF87A33649210())
			{
				if (!unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(1500);
				}
			}
			else if (iLocal_42 == 0)
			{
				iLocal_42 = unk_0x1C0640BA9A7327B3() + 1000;
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				}
				func_19(0, 2, 1);
				func_412(1, 1, 1, 0, 0, 0);
				func_26(1);
				unk_0x7BBABEC524CBF883(0);
				unk_0x86E4B20DE8E91A57(0);
				unk_0xA37A90C62806D848(1);
				unk_0x790015DC92C918E2();
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				}
				func_20(0, 0);
				func_25(0);
			}
			else if (unk_0x1C0640BA9A7327B3() < iLocal_42)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 3))
			{
				unk_0x21387C9EECC2B220(true);
				unk_0x5D96D8530B3D0904(&iLocal_41, 3);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 3))
		{
			unk_0x21387C9EECC2B220(false);
			unk_0x0674E58A79778E99(&iLocal_41, 3);
		}
	}
}

void func_26(bool bParam0)
{
	if (bParam0)
	{
		func_33();
		if (Global_4C1E.f_1 == 10 || Global_4C1E.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 16);
		}
		Global_4C1E.f_1 = 1;
		if (func_32(0))
		{
			func_27(0);
		}
	}
	else if (Global_4C1E.f_1 == 1)
	{
		if (!Global_4C1E.f_1 == 0)
		{
			Global_4C1E.f_1 = 3;
		}
	}
}

void func_27(int iParam0)
{
	if (func_31())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_30())
		{
			func_29(1, 1);
		}
		else
		{
			func_29(0, 0);
		}
	}
	if (Global_4C1E.f_1 == 10 || Global_4C1E.f_1 == 9)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 16);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(false);
	}
	Global_5145 = 5;
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 30);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 30);
	}
	if (!func_28())
	{
		Global_4C1E.f_1 = 3;
	}
}

int func_28()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_29(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
		{
			Global_4CD0 = 1;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_4BDF);
			}
			Global_4BD6 = { Global_4BE8[Global_4BE7 /*3*/] };
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
	else if (Global_4CD0 == 1)
	{
		Global_4CD0 = 0;
		Global_4BD6 = { Global_4BEF[Global_4BE7 /*3*/] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_4BDF);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
}

bool func_30()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 5);
}

bool func_31()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 19);
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_4C1E.f_1 > 3)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_4C1E.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	if (Global_4C1E.f_1 == 9 || Global_4C1E.f_1 == 10)
	{
		Global_517A = 0;
		Global_5176 = 1;
	}
}

void func_34()
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	func_412(0, 1, 1, 0, 0, 0);
	func_26(1);
}

void func_35(int iParam0)
{
	if (!func_456(iParam0))
	{
		func_480(iParam0);
	}
	else
	{
		func_365(iParam0);
	}
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_37(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_38(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_38(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

void func_40(var uParam0, int iParam1, int iParam2)
{
	if (func_456(&(uParam0->f_1)))
	{
		func_452(&(uParam0->f_1));
	}
	if (func_456(&(uParam0->f_4)))
	{
		func_452(&(uParam0->f_4));
	}
	func_4(&(uParam0->f_A));
	uParam0->f_86 = iParam1;
	uParam0->f_87 = iParam2;
	uParam0->f_89 = 1;
	uParam0->f_88 = 0;
	*uParam0 = 0;
}

void func_41(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0xAE317D00A5A55DF6("OFFMISSION_WASTED", false, 4294967295);
}

void func_42(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_43(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_43(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()) / 1000f);
}

void func_44(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(false);
			unk_0x7E60D21B163E9D56();
		}
		unk_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_234)
	{
		unk_0x31A33F7BCB08CB80(false);
		uParam0->f_234 = 0;
	}
	if (!Global_12C5A)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
		{
			if (!Global_12C5B)
			{
				if (unk_0x757EF87A33649210() && !func_46(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_45(0);
}

void func_45(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

int func_47(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xF4CCC8CB6DE7F1AE() == uParam0->f_23E)
	{
		return uParam0->f_23F;
	}
	uParam0->f_23E = unk_0xF4CCC8CB6DE7F1AE();
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0x28072FDD60CE3A6E(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 1))
		{
			uParam0->f_23F = 1;
			return 1;
		}
		if (unk_0x946BFA82EB988C81(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())))
		{
			uParam0->f_23F = 1;
			return 1;
		}
	}
	if (!uParam0->f_234)
	{
		if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
		{
			unk_0x31A33F7BCB08CB80(true);
			uParam0->f_234 = 1;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
			{
				unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
			}
		}
	}
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(19);
	unk_0x38C3A68D7861DCFD(2, 19, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
	unk_0x38C3A68D7861DCFD(0, 21, 1);
	unk_0x38C3A68D7861DCFD(0, 28, 1);
	unk_0x38C3A68D7861DCFD(0, 29, 1);
	unk_0x38C3A68D7861DCFD(0, 171, 1);
	func_72(0);
	if (unk_0x91E3F625EF57450D(2))
	{
		if (unk_0xBB16188FFCC4B1B5() || (unk_0x757EF87A33649210() && !unk_0x7BCE0E6DD4A1F749()))
		{
			unk_0x5D80F91A16C40CDE();
		}
	}
	Global_A3FD = 1;
	if (!uParam0->f_233)
	{
		switch (func_36(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())))
		{
			case 1:
				unk_0x82A772610883F395("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x82A772610883F395("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x82A772610883F395("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_233 = 1;
	}
	if (uParam0->f_22E == 0)
	{
		uParam0->f_22E = (uParam0->f_23C + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_23C >= (uParam0->f_22E - 1500))
	{
		uParam0->f_22E = uParam0->f_23C + 3000;
	}
	if (uParam0->f_230 == 0f)
	{
		uParam0->f_230 = (uParam0->f_230 + func_71(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_71(25f)));
		if (uParam0->f_38 > 0)
		{
			uParam0->f_230 = (uParam0->f_230 + func_71((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_71(30f) - func_71(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_45(1);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_50(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_49(uParam0->f_1E, 0f, 1f);
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_235)
				{
					uParam0->f_235 = 0;
					uParam0->f_236 = 0;
					uParam0->f_23D = 0.75f;
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x7E60D21B163E9D56();
				}
				uParam0->f_223 = (uParam0->f_223 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_223 = func_49(uParam0->f_223, 0f, 1f);
		if ((uParam0->f_223 <= 0.7f && !uParam0->f_221) && uParam0->f_1 != 0)
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_OUT");
			unk_0x7E60D21B163E9D56();
			uParam0->f_222 = uParam0->f_23C;
			uParam0->f_221 = 1;
		}
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_224 < 1f)
				{
					uParam0->f_224 = (uParam0->f_224 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_224 = func_49(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (unk_0xB8E3620B82AD47D7(2))
			{
				if (unk_0x83D8570832F172A7(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_48(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
					}
				}
			}
		}
		if (unk_0xBFC0798A6E3417F9(2, 216) && uParam0->f_22E > uParam0->f_23C + 333)
		{
			if (((!uParam0->f_236 && uParam0->f_38 != 0) && unk_0x83D8570832F172A7(uParam0->f_4)) && IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_235)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x7E60D21B163E9D56();
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					if (uParam0->f_23C > (uParam0->f_22E - 5000))
					{
						uParam0->f_22E = uParam0->f_23C + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x7E60D21B163E9D56();
					uParam0->f_235 = 0;
					uParam0->f_23D = 0.75f;
				}
				func_48(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
			}
		}
		if ((uParam0->f_235 || uParam0->f_236) && uParam0->f_38 != 0)
		{
			if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_236 && !uParam0->f_235)
				{
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x7E60D21B163E9D56();
				}
				uParam0->f_22F = func_49((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_49((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_49((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_49((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_23C > uParam0->f_22E)
		{
			if (uParam0->f_231)
			{
				if (!uParam0->f_237)
				{
					if (unk_0xBFC0798A6E3417F9(2, 215))
					{
						uParam0->f_231 = 0;
					}
				}
			}
			else if ((uParam0->f_23C - uParam0->f_222) > 1000 && uParam0->f_221)
			{
				bVar0 = false;
			}
		}
		uParam0->f_23F = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_45(0);
			}
			return !bVar0;
		}
	}
	func_45(0);
	return 1;
}

void func_48(var uParam0, bool bParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	unk_0x7E60D21B163E9D56();
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(true);
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0);
	func_9(unk_0xF59058FCB716F903(2, 215, true));
	func_14("ES_HELP");
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x1200CC973A2399C8(true);
		unk_0x3CAEA85DA607305E(215);
	}
	unk_0x7E60D21B163E9D56();
	if (bParam1)
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(1);
		func_9(unk_0xF59058FCB716F903(2, 216, true));
		func_14("ES_XPAND");
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x1200CC973A2399C8(true);
			unk_0x3CAEA85DA607305E(216);
		}
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

float func_49(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_50(var uParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_223 * 255f));
	fVar1 = (func_70() * 0.25f);
	if (unk_0x83D8570832F172A7(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_14(&(uParam0->f_5));
				if (uParam0->f_22C == 4)
				{
					func_69(&(uParam0->f_D));
				}
				else
				{
					func_14(&(uParam0->f_D));
				}
				if (unk_0x8CD06866876216F2())
				{
					unk_0x3CAEA85DA607305E(150);
				}
				else
				{
					unk_0x3CAEA85DA607305E(100);
				}
				unk_0x1200CC973A2399C8(true);
				if (uParam0->f_22C == 4)
				{
					unk_0x3CAEA85DA607305E((uParam0->f_38 - 1));
				}
				else
				{
					unk_0x3CAEA85DA607305E(uParam0->f_38);
				}
				unk_0x1200CC973A2399C8(bParam2);
				if (uParam0->f_22C == 4 || uParam0->f_22C == 3)
				{
					unk_0x3CAEA85DA607305E(2);
				}
				else
				{
					unk_0x3CAEA85DA607305E(69);
				}
				unk_0x7E60D21B163E9D56();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_38 > 0 && !uParam0->f_3) && uParam0->f_23C > 600)
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_UP");
				unk_0x7C19E5E4784BD7CF(0.15f);
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
				uParam0->f_3 = 1;
			}
		}
		func_68();
		unk_0x6567AE843FADBA94(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_71((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_224 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_1E >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_70());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_22C != 4)
	{
		fVar7 = func_67(&(uParam0->f_D));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x33D480CCE15C991A(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_67(&(uParam0->f_226));
		fVar8 = (((0.119f + 0.05f) / func_70()) / 2.5f);
		if ((uParam0->f_22C == 1 || uParam0->f_22C == 0) && uParam0->f_22D != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_22C == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x558EC149EB2BC0A2(2, 215);
	unk_0x558EC149EB2BC0A2(2, 216);
	unk_0x558EC149EB2BC0A2(2, 200);
	unk_0x38C3A68D7861DCFD(2, 200, 1);
	if (uParam0->f_232 || uParam0->f_237)
	{
		if ((IntToFloat(uParam0->f_22E) - (14000f * fParam1)) < IntToFloat(uParam0->f_23C) || ((uParam0->f_237 && uParam0->f_22F > 0.95f) && (uParam0->f_22E - 10000) < uParam0->f_23C))
		{
			if (uParam0->f_237)
			{
				if (uParam0->f_23A < 0)
				{
					uParam0->f_23A = (uParam0->f_23A * 4294967295);
					uParam0->f_23A = (uParam0->f_23C + uParam0->f_23A);
				}
				if (uParam0->f_23A > 0)
				{
					if ((uParam0->f_23A - uParam0->f_23C) > 0)
					{
						func_64((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0, 0, 4294967295, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
					}
					else
					{
						uParam0->f_23A = 0;
						uParam0->f_239 = 1;
						uParam0->f_237 = 0;
						uParam0->f_231 = 0;
						uParam0->f_232 = 0;
						uParam0->f_22E = uParam0->f_23C + 500;
						uParam0->f_23A = 0;
					}
				}
				if (uParam0->f_238 < 1f)
				{
					uParam0->f_238 = (uParam0->f_238 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_238 > 1f)
					{
						uParam0->f_238 = 1f;
					}
				}
			}
			if (unk_0x757EF87A33649210())
			{
				unk_0xBD706C594F6DCD4A();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_224 < 0.1f) && uParam0->f_23C <= uParam0->f_22E)
			{
				unk_0x3584F71E5CA29322(7);
				unk_0x3584F71E5CA29322(8);
				unk_0x3584F71E5CA29322(9);
				unk_0x3584F71E5CA29322(6);
				unk_0x6567AE843FADBA94(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_237)
			{
				unk_0x38C3A68D7861DCFD(0, 140, 1);
				unk_0x38C3A68D7861DCFD(0, 141, 1);
				unk_0x38C3A68D7861DCFD(0, 142, 1);
				unk_0x38C3A68D7861DCFD(2, 188, 1);
				if (unk_0xD245978525608929(2, 188))
				{
					unk_0x4D7F4CC43D4D0DE3(4294967295, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 3;
					uParam0->f_23A = 0;
					unk_0x4D7F4CC43D4D0DE3(4294967295, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				unk_0x38C3A68D7861DCFD(2, 187, 1);
				if (unk_0xD245978525608929(2, 187))
				{
					unk_0x4D7F4CC43D4D0DE3(4294967295, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 4;
					uParam0->f_23A = 0;
					unk_0x4D7F4CC43D4D0DE3(4294967295, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				unk_0x38C3A68D7861DCFD(2, 202, 1);
				if (unk_0xD245978525608929(2, 202))
				{
					unk_0x4D7F4CC43D4D0DE3(4294967295, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 2;
					uParam0->f_23A = 0;
					unk_0x4D7F4CC43D4D0DE3(4294967295, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
			else if (uParam0->f_232)
			{
				unk_0x3584F71E5CA29322(7);
				unk_0x3584F71E5CA29322(8);
				unk_0x3584F71E5CA29322(9);
				unk_0x3584F71E5CA29322(6);
				unk_0x38C3A68D7861DCFD(0, 140, 1);
				unk_0x38C3A68D7861DCFD(0, 141, 1);
				unk_0x38C3A68D7861DCFD(0, 142, 1);
				if (unk_0xBFC0798A6E3417F9(2, 215) || unk_0xD245978525608929(2, 200))
				{
					unk_0x4D7F4CC43D4D0DE3(4294967295, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_232 = 0;
					uParam0->f_231 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					unk_0x4D7F4CC43D4D0DE3(4294967295, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
		}
	}
	unk_0xA402F6C87C08815C(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, iVar0);
	unk_0xF1F881BAAAFB43B1(fVar9, fVar10);
	unk_0xEEF67251E263A87F(0);
	unk_0xD3539A877EC25E86(1f, 0.4f);
	fVar1 = (fVar1 - func_71(6f));
	fVar1 = (fVar1 + (func_71(30f) - func_71((2f * 2f))));
	fVar11 = (fVar2 - func_71((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_49((fVar11 / (0.6f * func_71(25f))), 0f, 1f);
		func_68();
		unk_0xC1032CAC14DE468A(0.5f, (fVar1 - (func_71((2f - 0.5f)) - 0.001388889f)), fVar6, func_63(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_71((2f * 0.3f)));
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_71((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_49((fVar11 / (0.8f * func_71(25f))), 0f, 1f);
			func_60(uParam0, iVar17, (fVar1 + func_71(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_71(25f));
		if (uParam0->f_22C == 4)
		{
			if (iVar17 == (uParam0->f_240 - 1))
			{
				fVar1 = (fVar1 + func_71((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_71(2f));
					fVar12 = func_49((fVar11 / (0.6f * func_71(25f))), 0f, 1f);
					func_68();
					unk_0xC1032CAC14DE468A(0.5f, (fVar1 + func_71((2f * 0.5f))), fVar6, func_63(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_71((2f * 0.3f)));
					if (uParam0->f_38 > 0)
					{
						fVar1 = (fVar1 + func_71((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_22C == 4)
	{
		return;
	}
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_71((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_71(2f));
			fVar12 = func_49((fVar11 / (0.6f * func_71(25f))), 0f, 1f);
			func_68();
			unk_0xC1032CAC14DE468A(0.5f, (fVar1 + func_71((2f * 0.5f))), fVar6, func_63(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_71((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_49((fVar11 / (0.8f * func_71(25f))), 0f, 1f);
			unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_53(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xB3260A60545D3F11() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_70()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_70()) / 2.5f));
				if (uParam0->f_22C == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_70()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_70()) / 2.5f));
				}
			}
			if (uParam0->f_22D == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_22C != 3)
			{
				unk_0xF1F881BAAAFB43B1(fVar20, fVar21);
				unk_0xEEF67251E263A87F(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0xEEF67251E263A87F(0);
			}
			unk_0xD3539A877EC25E86(1f, 0.4f);
			func_52(&(uParam0->f_226), fVar20, (fVar1 + func_71((2f * 2f))), 0, 0, 0);
			unk_0xF1F881BAAAFB43B1(fVar20, fVar21);
			unk_0xEEF67251E263A87F(2);
			unk_0xD3539A877EC25E86(1f, 0.4f);
			unk_0xAAE406A7DA443B93(0);
			func_68();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0xF1F881BAAAFB43B1(fVar20, fVar22);
			unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_22C)
			{
				case 0:
					unk_0x070005E852D4C0E9("PERCENTAGE");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_71((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x070005E852D4C0E9("FO_TWO_NUM");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0x6D99DF8263D35CE5(uParam0->f_22B);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_71((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x070005E852D4C0E9("MTPHPER_XPNO");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_71((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x070005E852D4C0E9("ESDOLLA");
					unk_0xCBD015EC7E4226BC(uParam0->f_22A, 1);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_71((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_22D != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_22D)
				{
					case 1:
						unk_0xA402F6C87C08815C(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0xA402F6C87C08815C(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0xA402F6C87C08815C(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_51(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_71(10f)) + fVar29);
				if (uParam0->f_22C == 4294967295)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0x539E86AE011A8B38(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_71(30f) - 2f));
		}
	}
}

float func_51(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_52(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xAAE406A7DA443B93(iParam3);
	unk_0x7BBAC160090910C3(iParam5);
	func_68();
	if (bParam4)
	{
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(sParam0);
	}
	else
	{
		unk_0x070005E852D4C0E9(sParam0);
	}
	unk_0xE0026608C37C7C41(fParam1, fParam2, 0);
}

int func_53(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_59(iParam0), 64);
	StringCopy(&cVar1, func_56(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0);
			if (func_55())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_55())
			{
				fVar4 = 1f;
			}
			if (unk_0x8A22C4C08282BF26(joaat("director_mode")) > 0)
			{
				unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
		}
		vVar7 = { unk_0xDE43A059FBFFF38A(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_54(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_54(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x12AB0310C2281427(&(Global_574E.f_1B75[29 /*16*/])) == 2807284209)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x0D71AFA59EF5104F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_574D)
			{
				*fParam4 = (*fParam4 * (Global_574D / *fParam3));
				*fParam3 = Global_574D;
			}
		}
		return 1;
	}
	return 0;
}

float func_54(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_55()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_56(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 2807284209)
		{
			Var2 = { func_58(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_57(&uVar1);
			}
		}
		else
		{
			return func_57(&(Global_574E.f_1B75[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_57(var uParam0)
{
	return uParam0;
}

struct<13> func_58(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

char* func_59(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 2807284209)
		{
			Var1 = { func_58(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_57(&uVar0);
		}
		else
		{
			return func_57(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_60(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	unk_0xF1F881BAAAFB43B1(fParam3, fParam4);
	unk_0xEEF67251E263A87F(1);
	unk_0xD3539A877EC25E86(1f, func_62(14f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7BBAC160090910C3(0);
	func_68();
	if (uParam0->f_213[iParam1])
	{
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(&(uParam0->f_47[iParam1 /*16*/]));
	}
	else
	{
		unk_0x070005E852D4C0E9(&(uParam0->f_47[iParam1 /*16*/]));
		if (uParam0->f_39[iParam1] == 16 || uParam0->f_39[iParam1] == 17)
		{
			unk_0x6D99DF8263D35CE5(uParam0->f_1E9[iParam1]);
		}
	}
	unk_0xE0026608C37C7C41(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_205[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_53(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x539E86AE011A8B38("CommonMenu", func_56(7, 0), (fParam4 - 0.006f), ((fParam2 + func_71(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_53(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x539E86AE011A8B38("CommonMenu", func_56(5, 0), (fParam4 - 0.006f), ((fParam2 + func_71(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_53(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x539E86AE011A8B38("CommonMenu", func_56(6, 0), (fParam4 - 0.006f), ((fParam2 + func_71(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_39[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_39[iParam1] == 15)
	{
		unk_0xEEF67251E263A87F(1);
	}
	else
	{
		unk_0xEEF67251E263A87F(2);
	}
	unk_0xD3539A877EC25E86(1f, func_62(14f));
	if (uParam0->f_39[iParam1] == 5 || uParam0->f_39[iParam1] == 4)
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	func_61(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_61(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0xAAE406A7DA443B93(0);
	unk_0x7BBAC160090910C3(0);
	func_68();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0xD3539A877EC25E86(1f, func_62(18f));
			unk_0x7BBAC160090910C3(4);
			if (iParam0 < 0)
			{
				unk_0xBBA442527B4BB1A6("ESMINDOLLA");
				unk_0xCBD015EC7E4226BC((4294967295 * iParam0), 1);
				fVar1 = unk_0x79E367314AFBB5CA(0);
			}
			else
			{
				unk_0xBBA442527B4BB1A6("ESDOLLA");
				unk_0xCBD015EC7E4226BC(iParam0, 1);
				fVar1 = unk_0x79E367314AFBB5CA(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x539E86AE011A8B38("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x539E86AE011A8B38("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x539E86AE011A8B38("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xD3539A877EC25E86(1f, func_62(14f));
			break;
	}
	unk_0x3A820E495A7BA3E5(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x070005E852D4C0E9("PERCENTAGE");
			unk_0x6D99DF8263D35CE5(iParam0);
			break;
		
		case 1:
			unk_0x7BBAC160090910C3(5);
			unk_0x070005E852D4C0E9("FO_NUM");
			unk_0x6D99DF8263D35CE5(iParam0);
			break;
		
		case 2:
			unk_0x7BBAC160090910C3(5);
			unk_0x070005E852D4C0E9("FO_TWO_NUM");
			unk_0x6D99DF8263D35CE5(iParam0);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xD3539A877EC25E86(1f, func_62(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x070005E852D4C0E9("ESMINDOLLA");
				unk_0xCBD015EC7E4226BC((4294967295 * iParam0), 1);
			}
			else
			{
				unk_0x070005E852D4C0E9("ESDOLLA");
				unk_0xCBD015EC7E4226BC(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x070005E852D4C0E9(sParam4);
			break;
		
		case 7:
			unk_0x070005E852D4C0E9("STRING");
			unk_0xD06AC7C87A34A6AD(sParam4);
			break;
		
		case 8:
			unk_0x7BBAC160090910C3(5);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 14);
			break;
		
		case 9:
			unk_0x7BBAC160090910C3(5);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 6);
			break;
		
		case 10:
			unk_0x7BBAC160090910C3(5);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 2055);
			break;
		
		case 18:
			unk_0x7BBAC160090910C3(5);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 2055);
			break;
		
		case 12:
			unk_0x070005E852D4C0E9("AHD_DIST");
			unk_0x6D99DF8263D35CE5(iParam0);
			break;
		
		case 13:
			unk_0x070005E852D4C0E9(sParam4);
			unk_0x6D99DF8263D35CE5(iParam0);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x070005E852D4C0E9(sParam4);
			unk_0x6D99DF8263D35CE5(iParam0);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 16:
			unk_0x070005E852D4C0E9(sParam4);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 20:
			unk_0x070005E852D4C0E9(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xE0026608C37C7C41((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0xD3539A877EC25E86(1f, func_62(14f));
		}
		else
		{
			unk_0xE0026608C37C7C41(fParam2, fParam3, 0);
		}
	}
}

float func_62(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_63(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_64(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_66(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_150976.f_1 = 1;
		func_65(7, iVar0);
		Global_150976.f_11D2[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_11D2.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_11D2.f_AC[iVar0] = iParam2;
		Global_150976.f_11D2.f_D8[iVar0] = iParam3;
		Global_150976.f_11D2.f_B7[iVar0] = iParam4;
		Global_150976.f_11D2.f_C2[iVar0] = iParam5;
		Global_150976.f_11D2.f_F9[iVar0] = iParam6;
		Global_150976.f_11D2.f_104[iVar0] = iParam7;
		Global_150976.f_11D2.f_CD[iVar0] = iParam8;
		Global_150976.f_11D2.f_13A[iVar0] = iParam9;
		Global_150976.f_11D2.f_145[iVar0] = iParam10;
		Global_150976.f_11D2.f_165[iVar0] = iParam11;
		Global_150976.f_11D2.f_EE[iVar0] = iParam12;
		Global_150976.f_11D2.f_10F[iVar0] = iParam13;
		Global_150976.f_11D2.f_170[iVar0] = iParam14;
		Global_150976.f_11D2.f_17B[iVar0] = iParam15;
		Global_150976.f_11D2.f_186[iVar0] = iParam16;
		Global_150976.f_11D2.f_E3[iVar0] = iParam17;
	}
}

void func_65(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_66(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

float func_67(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return (unk_0x79E367314AFBB5CA(1) / 2f);
}

void func_68()
{
	unk_0xD9ACBBA59FD5A09E(1);
	if (unk_0xD0BB2359EC70FC37() || unk_0x757EF87A33649210())
	{
		unk_0xD9ACBBA59FD5A09E(7);
	}
	unk_0x5DD950F92F816F03(0);
}

void func_69(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

float func_70()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x0EFF6B4415DAF4A1())
	{
	}
	return fVar0;
}

float func_71(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_72(int iParam0)
{
	if (func_31())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 1)
	{
		if (func_32(0))
		{
			func_27(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 2);
	}
}

void func_73(var uParam0)
{
	if (uParam0->f_231 || uParam0->f_23C <= uParam0->f_22E)
	{
		uParam0->f_231 = 0;
		uParam0->f_22E = (uParam0->f_23C - 1);
	}
}

bool func_74()
{
	return Global_181DF.f_1;
}

void func_75(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, var uParam16, bool bParam17)
{
	func_554(uParam0, uParam1, iParam2, iParam3, iParam4, iParam5, &iParam6, uParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, uParam16, bParam17);
}

int func_76(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (!func_257(iParam1, 5))
	{
		unk_0xA37A90C62806D848(1);
		func_177(iParam1, func_181(iParam0), iParam4, (iParam5 - 1), iParam6, iParam7, fParam8);
		func_206(iParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 361, 0, 361, 0);
		func_213(iParam1, 5, 1);
		SYSTEM::SETTIMERA(0);
	}
	if (!func_257(iParam1, 6))
	{
		if (func_173(&(iParam1->f_1A), 0, 0))
		{
			func_213(iParam1, 6, 1);
		}
		else
		{
			return 2;
		}
	}
	if (func_257(iParam1, 27) && unk_0x1963B11DE70153E0())
	{
		if (!func_257(iParam1, 26))
		{
			func_206(iParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 361, 0, 361, 0);
		}
		func_213(iParam1, 27, 0);
	}
	if (SYSTEM::TIMERA() > 1000)
	{
		if (*iParam9)
		{
			if (unk_0x1963B11DE70153E0())
			{
				func_95(uParam2, iParam0);
				func_91(iParam1);
			}
			else if (func_78(&iLocal_510, 0))
			{
				iLocal_510 = 0;
				*iParam9 = 0;
				func_206(iParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
			}
		}
		else
		{
			if (!func_257(iParam1, 10))
			{
				unk_0x4D7F4CC43D4D0DE3(4294967295, "BASE_JUMP_PASSED", "HUD_AWARDS", true);
				func_213(iParam1, 10, 1);
			}
			func_47(&(iParam1->f_1A), 0, 1065353216, 0, 1, 0);
			func_91(iParam1);
		}
		if (*iParam9)
		{
			if (unk_0x1963B11DE70153E0())
			{
				if (!func_257(iParam1, 28) && func_77(&uLocal_73))
				{
					func_213(iParam1, 28, 1);
					func_206(iParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 361, 0, 361, 0);
				}
			}
			if (func_322(uParam3, 7, 1000))
			{
				*iParam9 = 0;
				func_206(iParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
			}
		}
		else if (func_322(uParam3, 5, 1000))
		{
			func_73(&(iParam1->f_1A));
			return 1;
		}
		else if (func_322(uParam3, 4, 1000))
		{
			return 0;
		}
		else if ((!*iParam9 && func_322(uParam3, 8, 1000)) && (!unk_0x1963B11DE70153E0() || func_257(iParam1, 26)))
		{
			*iParam9 = 1;
			if (unk_0x1963B11DE70153E0())
			{
				if (func_77(&uLocal_73))
				{
					func_213(iParam1, 28, 1);
					func_206(iParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 361, 0, 361, 0);
				}
				else
				{
					func_213(iParam1, 28, 0);
					func_206(iParam1, 0, 202, "HUD_INPUT53", 361, 0, 361, 0, 361, 0);
				}
			}
		}
	}
	return 2;
}

int func_77(var uParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 1) && Global_1C0180.f_A90[0] > 0) && uParam0->f_F6.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1C171C.f_2 + 5 < unk_0xF4CCC8CB6DE7F1AE() && Global_1C171C.f_2 > 0)
	{
		func_90(&Global_1C171C);
		func_90(&(Global_1C171C.f_31));
		*iParam0 = 0;
		Global_1C171C.f_2 = 0;
		func_89(0);
	}
	Global_1C171C.f_2 = unk_0xF4CCC8CB6DE7F1AE();
	iVar1 = 4294967295;
	if (unk_0x33A494591F2C1975())
	{
		if (unk_0x98DF743F0BF6732B() == 0)
		{
			iVar1 = unk_0xFBB4B649DD3EA6F0();
		}
	}
	if ((unk_0x33A494591F2C1975() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_87() && unk_0x58424C49F8924842()))
	{
		if (unk_0xACED3FBF20B322FA())
		{
			func_84(&(Global_1C171C.f_3), func_86(&(Global_1C171C.f_3)));
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 4))
			{
				unk_0x5D96D8530B3D0904(iParam0, 4);
				StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
				func_82(&(Global_1C171C.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			else if (!func_87())
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
			{
				if (!unk_0x06F8112AA79C53D9(2, 201))
				{
					unk_0x5D96D8530B3D0904(iParam0, 0);
				}
			}
			else if (unk_0xB9132A06AE472728(2, 201))
			{
				func_90(&(Global_1C171C.f_31));
				func_90(&Global_1C171C);
				*iParam0 = 0;
				Global_1C171C.f_2 = 0;
				func_89(0);
				return 1;
			}
		}
	}
	else
	{
		func_84(&(Global_1C171C.f_3), func_86(&(Global_1C171C.f_3)));
		if ((func_81(&(Global_1C171C.f_31)) && !func_79(&(Global_1C171C.f_31), 2000, 1)) && !unk_0x58424C49F8924842())
		{
			unk_0x5D96D8530B3D0904(iParam0, 3);
			StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
			func_82(&(Global_1C171C.f_3), 0);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 3))
		{
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 1))
			{
				unk_0xB0A3CB46BE5B746A(0);
				unk_0x5D96D8530B3D0904(iParam0, 1);
				StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
				func_82(&(Global_1C171C.f_3), 0);
			}
		}
		if (func_81(&Global_1C171C))
		{
			if (!func_79(&Global_1C171C, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x58424C49F8924842())
				{
					if (unk_0x1E517F9E1F09160C())
					{
						UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
					}
					else
					{
						UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
					}
					if (!unk_0x1A72D8C9F025E5E3())
					{
						if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
						{
							if (!unk_0x06F8112AA79C53D9(2, 201))
							{
								unk_0x5D96D8530B3D0904(iParam0, 0);
							}
						}
						else if (unk_0xB9132A06AE472728(2, 201))
						{
							func_90(&Global_1C171C);
							*iParam0 = 0;
							Global_1C171C.f_2 = 0;
							func_89(0);
							return 1;
						}
					}
				}
				else
				{
					func_90(&Global_1C171C);
					*iParam0 = 0;
					Global_1C171C.f_2 = 0;
					func_89(0);
					return 1;
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(*iParam0, 3))
			{
				if (unk_0x1E517F9E1F09160C())
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
				}
				else
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
				}
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
				{
					if (!unk_0x06F8112AA79C53D9(2, 201))
					{
						unk_0x5D96D8530B3D0904(iParam0, 0);
					}
				}
				else if (unk_0xB9132A06AE472728(2, 201))
				{
					func_90(&(Global_1C171C.f_31));
					func_90(&Global_1C171C);
					*iParam0 = 0;
					Global_1C171C.f_2 = 0;
					func_89(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x1E517F9E1F09160C())
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
				}
				else
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
				}
				if (!unk_0x1A72D8C9F025E5E3())
				{
					if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0))
					{
						if (!unk_0x06F8112AA79C53D9(2, 201))
						{
							unk_0x5D96D8530B3D0904(iParam0, 0);
						}
					}
					else if (unk_0xB9132A06AE472728(2, 201))
					{
						func_90(&(Global_1C171C.f_31));
						func_90(&Global_1C171C);
						*iParam0 = 0;
						Global_1C171C.f_2 = 0;
						func_89(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_79(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_80(uParam0, bParam2, 0);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_80(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

bool func_81(var uParam0)
{
	return uParam0->f_1;
}

void func_82(var uParam0, bool bParam1)
{
	func_83(uParam0);
	if (bParam1)
	{
		func_89(0);
	}
	uParam0->f_23 = 1;
}

void func_83(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_29 = 1;
	*uParam0 = { Var0 };
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_85(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_24)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x6D99DF8263D35CE5(uParam0->f_21);
			unk_0x6D99DF8263D35CE5(uParam0->f_22);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_25)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x6D99DF8263D35CE5(uParam0->f_21);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_27)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_11));
			unk_0x6D99DF8263D35CE5(uParam0->f_21);
			unk_0x6D99DF8263D35CE5(uParam0->f_22);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_26)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_11));
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_28)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x164431059FF80580(uParam0->f_21, 70);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_85(var uParam0)
{
	uParam0->f_23 = 0;
}

int func_86(var uParam0)
{
	return uParam0->f_23;
}

int func_87()
{
	if (func_88())
	{
		return 0;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_88()
{
	return Global_258DFD;
}

void func_89(bool bParam0)
{
	unk_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		unk_0xA3B57116ADBCDF5F();
	}
}

void func_90(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_91(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!func_94(iParam0))
	{
		return;
	}
	unk_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 0, 0);
	if (unk_0xB8E3620B82AD47D7(2))
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_3)
		{
			if (iParam0->f_3[iVar0] != 361)
			{
				iParam0->f_C[iVar0] = unk_0xF59058FCB716F903(2, iParam0->f_3[iVar0], true);
			}
			iVar0++;
		}
		func_92(&(iParam0->f_1), 4);
	}
	if (!func_23(iParam0->f_1, 4))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_CLEAR_SPACE");
		unk_0x7C19E5E4784BD7CF(200f);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7E60D21B163E9D56();
		fVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (!unk_0xEA6BC48857E0AC4C(iParam0->f_15[iVar2]))
			{
				if (!unk_0xEA6BC48857E0AC4C(iParam0->f_C[iVar2 + 4]))
				{
					unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT");
					unk_0x7C19E5E4784BD7CF(fVar1);
					func_9(iParam0->f_C[iVar2 + 4]);
					func_9(iParam0->f_C[iVar2]);
					func_14(iParam0->f_15[iVar2]);
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT");
					unk_0x7C19E5E4784BD7CF(fVar1);
					func_9(iParam0->f_C[iVar2]);
					func_14(iParam0->f_15[iVar2]);
					unk_0x7E60D21B163E9D56();
				}
				fVar1 = (fVar1 + 1f);
			}
			iVar2++;
		}
		unk_0x7E60C62A7CE58FC8(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(iParam0->f_2));
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_21(&(iParam0->f_1), 4);
	}
}

void func_92(var uParam0, int iParam1)
{
	func_93(uParam0, iParam1);
}

void func_93(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_94(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_21(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_95(var uParam0, int iParam1)
{
	func_96(uParam0, &uLocal_73);
}

void func_96(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar13;
	bool bVar14;
	
	func_172(&(Global_1C171C.f_31), 1, 0);
	unk_0xE19C2AAC820D8ED5();
	func_171();
	func_72(0);
	unk_0x3FC8DBCC154CA56B();
	func_169(1);
	unk_0x3584F71E5CA29322(10);
	func_168(1);
	func_167(1);
	if (!func_164())
	{
		if (!unk_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
		{
			unk_0x8BC9595FD2792B5D("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 3))
	{
		*uParam0 = func_163();
		unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 3);
	}
	Var10 = { func_58(unk_0xD803B885F5E47A62()) };
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (((!unk_0x999A3BFD3E9B5D2C() || !unk_0x1963B11DE70153E0()) || (!unk_0x8BB6DE13A9F3105E() && unk_0x9AE561F9BC3F06D8())) || Global_1C0180.f_B10 != 0)
		{
			if (!unk_0x1963B11DE70153E0())
			{
				if (Global_1C0180.f_B0D != 2)
				{
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 1);
					Global_1C0180.f_B0D = 2;
				}
			}
			else if (!unk_0x8BB6DE13A9F3105E() && unk_0x9AE561F9BC3F06D8())
			{
				if (Global_1C0180.f_B0D != 3)
				{
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 1);
					Global_1C0180.f_B0D = 3;
				}
			}
			else if (!unk_0x999A3BFD3E9B5D2C())
			{
				if (Global_1C0180.f_B0D != 4)
				{
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 1);
					Global_1C0180.f_B0D = 4;
				}
			}
			else if (Global_1C0180.f_B10 != 0)
			{
				if (Global_1C0180.f_B0D != 5)
				{
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 1);
					Global_1C0180.f_B0D = 5;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 1))
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0x7E60D21B163E9D56();
				func_162(*uParam0, Global_1C0180.f_ADC);
				if (unk_0xEF07223F00EBE9C9(&(Global_1C0180.f_ADC.f_1)))
				{
					if (!func_161(uParam1->f_2C))
					{
						if (Global_1C0180.f_ADC.f_1A > 0)
						{
							Var6 = { Global_1C0180.f_ADC.f_9 };
							func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
						}
					}
					else if (!Global_1C0180.f_ADC.f_1B)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1C0180.f_ADC.f_1A > 0)
						{
							func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1C0180.f_ADC.f_1A > 0)
						{
							func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
						}
					}
					func_159(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
				}
				iVar9 = 0;
				unk_0x5D96D8530B3D0904(&iVar9, 4);
				func_158(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x5D96D8530B3D0904(&iVar9, 5);
				func_158(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x5D96D8530B3D0904(&iVar9, 6);
				func_158(*uParam0, &iVar3, iVar9, 1, 1);
				unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 1);
				func_157(*uParam0);
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 2);
				unk_0xA37A90C62806D848(1);
			}
			else
			{
				func_157(*uParam0);
			}
		}
		else
		{
			if (Global_1C0180.f_B0D != 1)
			{
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 1);
				Global_1C0180.f_B0D = 1;
			}
			if (!func_121(uParam1))
			{
				uParam1->f_F6.f_1 = 4294967295;
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 1);
				if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 0))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x7E60D21B163E9D56();
					func_162(*uParam0, Global_1C0180.f_ADC);
					if (unk_0xEF07223F00EBE9C9(&(Global_1C0180.f_ADC.f_1)))
					{
						if (!func_161(uParam1->f_2C))
						{
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								Var6 = { Global_1C0180.f_ADC.f_9 };
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, 1, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						else if (!Global_1C0180.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						func_159(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
					}
					unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 0);
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1C0180.f_B09 == 4294967295)
				{
					StringCopy(&vVar12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x5D96D8530B3D0904(&iVar9, 4);
							func_158(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x5D96D8530B3D0904(&iVar9, 5);
							func_158(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x5D96D8530B3D0904(&iVar9, 6);
							func_158(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x5D96D8530B3D0904(&iVar9, 7);
						func_120(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1C0180.f_B09 = 1;
					func_90(&(Global_1C0180.f_B07));
				}
				else if (func_79(&(Global_1C0180.f_B07), 300, 0))
				{
					StringCopy(&vVar13, "SC_LB_DL", 24);
					StringIntConCat(&vVar13, Global_1C0180.f_B09, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x5D96D8530B3D0904(&iVar9, 4);
							func_158(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x5D96D8530B3D0904(&iVar9, 5);
							func_158(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x5D96D8530B3D0904(&iVar9, 6);
							func_158(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x5D96D8530B3D0904(&iVar9, 7);
						func_120(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1C0180.f_B09++;
					if (Global_1C0180.f_B09 > 3)
					{
						Global_1C0180.f_B09 = 0;
					}
					func_90(&(Global_1C0180.f_B07));
				}
				func_157(*uParam0);
			}
			else
			{
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 0);
				if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_F6.f_BB[iVar0] = 0;
						iVar0++;
					}
					unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x7E60D21B163E9D56();
					func_162(*uParam0, Global_1C0180.f_ADC);
					if (unk_0xEF07223F00EBE9C9(&(Global_1C0180.f_ADC.f_1)))
					{
						if (!func_161(uParam1->f_2C))
						{
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								Var6 = { Global_1C0180.f_ADC.f_9 };
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, 1, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						else if (!Global_1C0180.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						func_159(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
					}
					if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 6))
					{
						func_119(&Global_1C126B);
						func_115(uParam1, &Global_1C126B);
						func_114(uParam1, &Global_1C126B);
					}
					iVar3 = 0;
					uParam1->f_F6.f_2 = 0;
					if ((Global_1C0180.f_A90[0] > 1 || (Global_1C0180.f_A90[0] > 0 && Global_1C0180.f_AD7[0] != 4294967295)) || (((Global_1C0180.f_A90[0] > 0 && Global_1C0180.f_ADC.f_1B) && func_161(uParam1->f_2C)) && Global_1C0180.f_AD7[0] != 4294967295))
					{
						uParam1->f_F6.f_1 = 4294967295;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1C126B[iVar0 /*100*/].f_4B == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									unk_0x5D96D8530B3D0904(&iVar9, 4);
									func_158(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1C126B[iVar0 /*100*/].f_4B == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									unk_0x5D96D8530B3D0904(&iVar9, 5);
									if ((Global_1C0180.f_A90[1] < 1 && Global_1C0180.f_AD7[1] == 4294967295) && !(((Global_1C0180.f_A90[1] > 0 && Global_1C0180.f_ADC.f_1B) && func_161(uParam1->f_2C)) && Global_1C0180.f_AD7[1] != 4294967295))
									{
										func_158(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_158(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1C126B[iVar0 /*100*/].f_4B == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									unk_0x5D96D8530B3D0904(&iVar9, 6);
									if (!unk_0xC2F420D189FDB329())
									{
										bVar14 = true;
									}
									else if (!unk_0xB0D6327A81292879())
									{
										bVar14 = true;
									}
									if ((Global_1C0180.f_A90[2] < 2 && Global_1C0180.f_AD7[2] == 4294967295) && !(((Global_1C0180.f_A90[2] > 0 && Global_1C0180.f_ADC.f_1B) && func_161(uParam1->f_2C)) && Global_1C0180.f_AD7[2] != 4294967295))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_158(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_158(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_113(Global_1C126B[iVar0 /*100*/].f_20))
							{
								if (func_161(uParam1->f_2C))
								{
									unk_0x4D8EB33D0EE1D0CB(unk_0xD803B885F5E47A62(), &uVar11);
									if (!Global_1C126B[iVar0 /*100*/].f_4A && unk_0x7F8A39872A07D2CE(&(uParam1->f_2C.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1C0180.f_ADC.f_1B)
									{
										if (func_112(&(Global_1C126B[iVar0 /*100*/].f_20), &Var10))
										{
											unk_0x5D96D8530B3D0904(&iVar9, 1);
											if (uParam1->f_F6.f_1 == 4294967295)
											{
												bVar4 = true;
												uParam1->f_F6.f_1 = iVar0;
												unk_0x5D96D8530B3D0904(&iVar9, 3);
											}
										}
									}
									if (func_161(uParam1->f_2C))
									{
										Var6 = { Global_1C126B[iVar0 /*100*/] };
										if (!unk_0xEA6BC48857E0AC4C(&(Global_1C126B[iVar0 /*100*/].f_54)) && !unk_0x7F8A39872A07D2CE(&(Global_1C126B[iVar0 /*100*/].f_54), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1C126B[iVar0 /*100*/].f_54), 64);
										}
										func_111(*uParam0, iVar3, iVar9, Global_1C126B[iVar0 /*100*/].f_3B, &Var6, &(Global_1C126B[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C126B[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									else
									{
										func_111(*uParam0, iVar3, iVar9, Global_1C126B[iVar0 /*100*/].f_3B, &(Global_1C126B[iVar0 /*100*/]), &(Global_1C126B[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C126B[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1C0180.f_A94)
									{
										bVar5 = false;
										if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD2, iVar1))
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD0, iVar1))
											{
												if (Global_1C0180.f_AC2[iVar1] == Global_1C126B[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_105(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_43[iVar1], 0, Global_1C126B[iVar0 /*100*/].f_3A);
											}
											else
											{
												func_105(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_43[iVar1], Global_1C126B[iVar0 /*100*/].f_4A, Global_1C126B[iVar0 /*100*/].f_3A);
											}
										}
										else
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD0, iVar1))
											{
												if (Global_1C0180.f_AC9[iVar1] == Global_1C126B[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_102(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_3C[iVar1], 0);
											}
											else
											{
												func_102(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_3C[iVar1], Global_1C126B[iVar0 /*100*/].f_4A);
											}
										}
										iVar1++;
									}
									func_101();
									uVar2[(Global_1C126B[iVar0 /*100*/].f_4B - 1)]++;
									if (uVar2[(Global_1C126B[iVar0 /*100*/].f_4B - 1)] == 2)
									{
										if (Global_1C126B[iVar0 /*100*/].f_3B > 2)
										{
											unk_0x5D96D8530B3D0904(&iVar9, 2);
											unk_0x5D96D8530B3D0904(&(uParam1->f_F6.f_6[0 /*15*/].f_1), 2);
											func_100(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_F6.f_BB[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						unk_0x5D96D8530B3D0904(&iVar9, 4);
						func_158(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x5D96D8530B3D0904(&iVar9, 5);
						func_158(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x5D96D8530B3D0904(&iVar9, 6);
						func_158(*uParam0, &iVar3, iVar9, 1, 0);
					}
					unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 1);
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 2);
					func_157(*uParam0);
					unk_0xA37A90C62806D848(1);
					if (uParam1->f_F6.f_1 == 4294967295 && !bVar4 == 1)
					{
						if (Global_1C0180.f_A90[0] > 1)
						{
							uParam1->f_F6.f_1 = 0;
							unk_0x5D96D8530B3D0904(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
							func_100(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_157(*uParam0);
					func_97(uParam0, uParam1);
				}
			}
		}
	}
}

void func_97(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_F6.f_1;
	if (unk_0x91E3F625EF57450D(2))
	{
		unk_0x5D80F91A16C40CDE();
		unk_0x558EC149EB2BC0A2(2, 239);
		unk_0x558EC149EB2BC0A2(2, 240);
		unk_0x558EC149EB2BC0A2(2, 237);
		unk_0x558EC149EB2BC0A2(2, 238);
		unk_0x38C3A68D7861DCFD(2, 200, 1);
		if (unk_0x7FEE810EE9E768EB(2, 241))
		{
			unk_0x3D9702C33283E122(2, 188, 1f);
		}
		if (unk_0x7FEE810EE9E768EB(2, 242))
		{
			unk_0x3D9702C33283E122(2, 187, 1f);
		}
		if (unk_0xE6CD3F2A2067C866(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_F6.f_BB[0])
				{
					if (iVar3 <= (uParam1->f_F6.f_BB[0] + uParam1->f_F6.f_BB[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_F6.f_1 != iVar3)
				{
					uParam1->f_F6.f_1 = iVar3;
					unk_0x4D7F4CC43D4D0DE3(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					bVar0 = true;
				}
				else
				{
					unk_0x3D9702C33283E122(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0x91E3F625EF57450D(2))
	{
		func_99(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_F6.f_2 > 0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_F6, 0))
		{
			if ((unk_0x06F8112AA79C53D9(2, 188) || unk_0x7FEE810EE9E768EB(2, 188)) || iVar6 < 4294967196)
			{
				unk_0x4D7F4CC43D4D0DE3(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_F6.f_1 = (uParam1->f_F6.f_1 + 4294967295);
				unk_0x5D96D8530B3D0904(&(uParam1->f_F6), 0);
				func_90(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_98(uParam1, 188))
		{
			unk_0x0674E58A79778E99(&(uParam1->f_F6), 0);
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_F6, 1))
		{
			if ((unk_0x06F8112AA79C53D9(2, 187) || unk_0x7FEE810EE9E768EB(2, 187)) || iVar6 > 100)
			{
				unk_0x4D7F4CC43D4D0DE3(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_F6.f_1++;
				unk_0x5D96D8530B3D0904(&(uParam1->f_F6), 1);
				func_90(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_98(uParam1, 187))
		{
			unk_0x0674E58A79778E99(&(uParam1->f_F6), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_F6.f_1 < 0)
		{
			uParam1->f_F6.f_1 = (uParam1->f_F6.f_2 - 1);
		}
		if (uParam1->f_F6.f_1 >= uParam1->f_F6.f_2)
		{
			uParam1->f_F6.f_1 = 0;
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_F6, 3))
	{
		if ((unk_0x06F8112AA79C53D9(2, 204) || unk_0xD245978525608929(2, 204)) || unk_0xBFC0798A6E3417F9(2, 237))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_F6), 3);
			func_90(&(uParam1->f_F6.f_3));
			bVar0 = true;
		}
	}
	else if (func_98(uParam1, 204))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_F6), 3);
	}
	if (uParam1->f_F6.f_1 >= 0)
	{
		if (uParam1->f_F6.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x0674E58A79778E99(&(uParam1->f_F6.f_6[iVar1 /*15*/].f_1), 3);
				func_100(*uParam0, uParam1->f_F6.f_6[iVar1 /*15*/], uParam1->f_F6.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x5D96D8530B3D0904(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
			func_100(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
			unk_0x0674E58A79778E99(&(uParam1->f_2A), 2);
		}
		if (func_113(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_F6, 2))
			{
				if (unk_0x06F8112AA79C53D9(2, 217) || unk_0xD245978525608929(2, 217))
				{
					if (!unk_0x1A72D8C9F025E5E3())
					{
						unk_0x4D7F4CC43D4D0DE3(4294967295, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", true);
						unk_0x5D96D8530B3D0904(&(uParam1->f_F6), 2);
						unk_0x7DA6B436D3570520(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x06F8112AA79C53D9(2, 217))
			{
				unk_0x0674E58A79778E99(&(uParam1->f_F6), 2);
			}
		}
	}
}

int func_98(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_99(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x06F8112AA79C53D9(2, iParam1) && !unk_0x7FEE810EE9E768EB(2, iParam1)) && (iVar1 < 75 && iVar1 > 4294967221)) || func_79(&(uParam0->f_F6.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x06F8112AA79C53D9(2, iParam1) && !unk_0x7FEE810EE9E768EB(2, iParam1)) || func_79(&(uParam0->f_F6.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_99(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((unk_0x4F3973434662D795(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x4F3973434662D795(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x4F3973434662D795(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

void func_100(int iParam0, int iParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT_STATE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7E60D21B163E9D56();
}

void func_101()
{
	unk_0x7E60D21B163E9D56();
}

void func_102(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)
{
	switch (Param0.f_1D[iParam14])
	{
		case 4:
			if (bParam16)
			{
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x21994591120B91F0(fParam15, 2);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x6D99DF8263D35CE5(SYSTEM::FLOOR(fParam15));
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 18 || Param0.f_1D[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!unk_0x8ED6EC1BDC7FE067())
				{
					if (Param0.f_1D[iParam14] == 19 || Param0.f_1D[iParam14] == 20)
					{
						fParam15 = func_104(fParam15);
					}
					else
					{
						fParam15 = func_103(fParam15);
					}
				}
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x21994591120B91F0(fParam15, 2);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0:
			break;
	}
}

float func_103(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_104(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_105(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
{
	struct<4> Var0;
	
	if (iParam15 == 2147483647 || iParam15 == 2147483649)
	{
		bParam16 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_1D[iParam14])
	{
		case 5:
			if (bParam16)
			{
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x6D99DF8263D35CE5(iParam15);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x6D99DF8263D35CE5(-iParam15);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * 4294967295);
				}
				if (iParam15 >= 3600000 || iParam15 <= 4291367296)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 14);
					unk_0x779B34565F4D71B1();
				}
				else if (Param0.f_1D[iParam14] == 9)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 6);
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 2055);
					unk_0x779B34565F4D71B1();
				}
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
					unk_0x779B34565F4D71B1();
				}
				else if (iParam15 >= 3600000 || iParam15 <= 4291367296)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 14);
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 2055);
					unk_0x779B34565F4D71B1();
				}
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * 4294967295);
				if (iParam15 >= 3600000 || iParam15 <= 4291367296)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 14);
					unk_0x779B34565F4D71B1();
				}
				else if (Param0.f_1D[iParam14] == 10)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 6);
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 2055);
					unk_0x779B34565F4D71B1();
				}
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (unk_0x3FC14104C3FD24D5(iParam15))
				{
					unk_0x7ACC3006A87F8B39("SCLB_VEH_CUST");
					unk_0x6B012227B3921E18(unk_0x1739BA50603D849C(iParam15));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
					unk_0x779B34565F4D71B1();
				}
			}
			else if (unk_0x3FC14104C3FD24D5(iParam15))
			{
				unk_0x7ACC3006A87F8B39(unk_0x1739BA50603D849C(iParam15));
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 8:
			if (func_110(iParam15) != 0)
			{
				unk_0x7ACC3006A87F8B39(func_107(func_110(iParam15), 0));
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 14 || Param0.f_1D[iParam14] == 16)
				{
					iParam15 = (iParam15 * 4294967295);
				}
				if (!unk_0x8ED6EC1BDC7FE067())
				{
					if (Param0.f_1D[iParam14] == 15 || Param0.f_1D[iParam14] == 16)
					{
						iParam15 = SYSTEM::FLOOR(func_104(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_103(SYSTEM::TO_FLOAT(iParam15)));
					}
				}
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x6D99DF8263D35CE5(iParam15);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 21:
			if (iParam15 > 20)
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			else
			{
				Var0 = { func_106(iParam15) };
				unk_0x7ACC3006A87F8B39(&Var0);
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0:
			break;
	}
}

struct<4> func_106(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_107(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case 2820358688:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case 4129609738:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case 2922292364:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case 3441901897:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case 3173288789:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case 3125143736:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case 2484171525:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case 4135006721:
			return "WT_VEH_WEP";
			break;
		
		case 3219281620:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case 3686625920:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case 4208062921:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case 2526821735:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case 2285322324:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case 3415619887:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case 2228681469:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case 2548703416:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 940833800:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case 2939590305:
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case 1198256469:
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case 3056410471:
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case 2441047180:
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case 727643628:
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		default:
			if (func_109(iParam0, &Var0) != 4294967295)
			{
				if (bParam1)
				{
					return func_108(&(Var0.f_1F));
				}
				else
				{
					return func_108(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_108(var uParam0)
{
	return uParam0;
}

int func_109(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_110(int iParam0)
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return 3722617468;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return 3347935668;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	if (iParam3 > 0)
	{
		unk_0x7ACC3006A87F8B39("NUMBER");
		unk_0x6D99DF8263D35CE5(iParam3);
		unk_0x779B34565F4D71B1();
	}
	else
	{
		unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
		unk_0x779B34565F4D71B1();
	}
	unk_0x045A0775396CC970(sParam4);
	unk_0x045A0775396CC970(sParam5);
}

int func_112(var uParam0, var uParam1)
{
	if (!func_113(*uParam0))
	{
		return 0;
	}
	if (!func_113(*uParam1))
	{
		return 0;
	}
	if (unk_0x4F18738E5BDE9AC9(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_113(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

void func_114(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 5) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_4B != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_4B != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_4B < (uParam1[iVar0 /*100*/])->f_4B)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
							(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
							(uParam1[iVar0 /*100*/])->f_4B = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_4B == (uParam1[iVar0 /*100*/])->f_4B)
						{
							if ((uParam1[iVar1 /*100*/])->f_3B != 4294967295)
							{
								if ((uParam1[iVar1 /*100*/])->f_3B < (uParam1[iVar0 /*100*/])->f_3B || (uParam1[iVar0 /*100*/])->f_3B == 4294967295)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
									(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
									(uParam1[iVar0 /*100*/])->f_4B = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_115(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 5) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_118(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_118(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_118(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_116(uParam1);
	}
}

void func_116(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C0180.f_A90[iVar0] = 0;
		Global_1C0180.f_AD7[iVar0] = 4294967295;
		iVar0++;
	}
	Var3 = { func_58(unk_0xD803B885F5E47A62()) };
	if (unk_0xE4F1C23C6353EC03(Global_1C0180.f_B0A))
	{
		iVar4 = unk_0x9B6FABF659F515A2(Global_1C0180.f_B0A);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_117(&Global_1C11E9);
				iVar2 = 0;
				unk_0xAB008D43188476FB(Global_1C0180.f_B0A, iVar0, &Global_1C11E9);
				*(uParam0[iVar0 /*100*/]) = { Global_1C11E9.f_1 };
				(uParam0[iVar0 /*100*/])->f_10 = { Global_1C11E9.f_11 };
				(uParam0[iVar0 /*100*/])->f_20 = { Global_1C11E9.f_21 };
				(uParam0[iVar0 /*100*/])->f_2D = { Global_1C11E9.f_2E };
				(uParam0[iVar0 /*100*/])->f_3A = Global_1C11E9.f_3B;
				(uParam0[iVar0 /*100*/])->f_3B = Global_1C11E9.f_3C;
				Global_1C0180.f_A94 = Global_1C11E9.f_3E;
				Global_1C0180.f_AD1 = Global_1C11E9.f_3F;
				iVar2 = 0;
				if (unk_0xEAE0D21A50E6C7F4(Global_1C11E9.f_3D, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Global_1C11E9.f_3D, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Global_1C11E9.f_3D, 3))
				{
					iVar2 = 3;
				}
				Global_1C0180.f_A90[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_4B = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_3B != 4294967295)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1C11E9.f_3D, 0))
					{
						(uParam0[iVar0 /*100*/])->f_4A = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_4A = 0;
					}
					if (func_112(&((uParam0[iVar0 /*100*/])->f_20), &Var3))
					{
						Global_1C0180.f_AD7[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1C11E9.f_3E)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1C11E9.f_3F, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_43[iVar1] = Global_1C11E9.f_61[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_3C[iVar1] = Global_1C11E9.f_40[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_117(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_11), "", 64);
	uParam0->f_21 = { Var0 };
	uParam0->f_2E = { Var0 };
	uParam0->f_3B = 0;
	uParam0->f_3C = 0;
	uParam0->f_3D = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_40[iVar1] = 0f;
		uParam0->f_61[iVar1] = 0;
		iVar1++;
	}
}

int func_118(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1C0180[iParam3 /*901*/][0 /*75*/].f_3B > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][0 /*75*/] };
			Global_1C11B0[iParam3 /*16*/] = { Global_1C0180[iParam3 /*901*/][0 /*75*/] };
			Global_1C11B0.f_31[iParam3] = Global_1C0180[iParam3 /*901*/][0 /*75*/].f_43[Global_1C0180.f_ADB];
			Global_1C11B0.f_35[iParam3] = Global_1C0180[iParam3 /*901*/][0 /*75*/].f_3C[Global_1C0180.f_ADB];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1C0180.f_AD7[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][Global_1C0180.f_AD7[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1C0180.f_AD7[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 64);
				(uParam0[iParam1 /*100*/])->f_20 = { func_58(unk_0xD803B885F5E47A62()) };
				(uParam0[iParam1 /*100*/])->f_3B = 4294967295;
				(uParam0[iParam1 /*100*/])->f_43[0] = 4294967295;
				(uParam0[iParam1 /*100*/])->f_43[1] = 4294967295;
				(uParam0[iParam1 /*100*/])->f_43[2] = 4294967295;
				(uParam0[iParam1 /*100*/])->f_43[3] = 4294967295;
				(uParam0[iParam1 /*100*/])->f_3C[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1C0180.f_AD7[iParam3] - iVar0) >= 1)
		{
			if (Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] - iVar0) /*75*/].f_3B > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1C0180.f_AD7[iParam3] + iVar0) < 12 && (Global_1C0180.f_AD7[iParam3] + iVar0) > 0)
		{
			if (Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] + iVar0) /*75*/].f_3B > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_119(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_10), "", 64);
		(uParam0[iVar1 /*100*/])->f_20 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_2D = { Var0 };
		(uParam0[iVar1 /*100*/])->f_3A = 0;
		(uParam0[iVar1 /*100*/])->f_3B = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_3C[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_43[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_4B = 0;
		(uParam0[iVar1 /*100*/])->f_4A = 0;
		(uParam0[iVar1 /*100*/])->f_4C = 0;
		(uParam0[iVar1 /*100*/])->f_4D = 0;
		(uParam0[iVar1 /*100*/])->f_4E = 0;
		(uParam0[iVar1 /*100*/])->f_4F = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_50), "", 16);
		iVar1++;
	}
	func_90(&(Global_1C0180.f_B0E));
}

void func_120(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0x5D96D8530B3D0904(&iParam2, 7);
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7ACC3006A87F8B39(sParam3);
	unk_0x0EF1238B8EFD4D04();
	unk_0x7E60D21B163E9D56();
}

int func_121(var uParam0)
{
	if (!Global_1C017C)
	{
		if (!func_81(&(Global_1C0180.f_B0B)))
		{
			func_80(&(Global_1C0180.f_B0B), 1, 0);
			return 0;
		}
		else if (!func_79(&(Global_1C0180.f_B0B), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0x999A3BFD3E9B5D2C() || !unk_0x1963B11DE70153E0()) || (!unk_0x8BB6DE13A9F3105E() && unk_0x9AE561F9BC3F06D8())) || Global_1C0180.f_B10 != 0)
	{
		unk_0x0674E58A79778E99(&(uParam0->f_2A), 4);
		return 1;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 4))
	{
		func_156(uParam0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 4);
		return 0;
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_154(uParam0))
	{
		return 0;
	}
	if (!func_152(uParam0))
	{
		return 0;
	}
	if (!func_138(uParam0))
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 6))
	{
		func_119(&Global_1C126B);
		func_115(uParam0, &Global_1C126B);
		func_114(uParam0, &Global_1C126B);
		unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 6);
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 7))
	{
		if (!func_81(&(Global_1C0180.f_B0E)))
		{
			func_80(&(Global_1C0180.f_B0E), 1, 0);
		}
		else if (func_79(&(Global_1C0180.f_B0E), 30000, 1))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 7);
		}
		if (func_135(&Global_1C126B))
		{
		}
		else
		{
			return 0;
		}
		if (func_132(&Global_1C126B))
		{
		}
		else
		{
			return 0;
		}
		if (func_126(&Global_1C126B))
		{
			func_122(&Global_1C126B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 7);
			func_122(&Global_1C126B);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_122(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_125(Global_1C0180.f_B0A);
	if (Global_1C0DF1.f_51[iVar2] != 0)
	{
		func_124(4294967295, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_117(&Global_1C11E9);
		if ((uParam0[iVar0 /*100*/])->f_4B != 0)
		{
			Global_1C11E9 = Global_1C0180.f_B0A;
			Global_1C11E9.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*100*/])->f_10), ""))
			{
				Global_1C11E9.f_11 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1C11E9.f_11 = { (uParam0[iVar0 /*100*/])->f_10 };
			}
			Global_1C11E9.f_21 = { (uParam0[iVar0 /*100*/])->f_20 };
			if (func_113((uParam0[iVar0 /*100*/])->f_2D))
			{
				Global_1C11E9.f_2E = { (uParam0[iVar0 /*100*/])->f_2D };
			}
			else
			{
				Global_1C11E9.f_2E = { (uParam0[iVar0 /*100*/])->f_20 };
			}
			Global_1C11E9.f_3B = (uParam0[iVar0 /*100*/])->f_3A;
			Global_1C11E9.f_3C = (uParam0[iVar0 /*100*/])->f_3B;
			Global_1C11E9.f_3E = Global_1C0180.f_A94;
			Global_1C11E9.f_3F = Global_1C0180.f_AD2;
			if ((uParam0[iVar0 /*100*/])->f_4A)
			{
				unk_0x5D96D8530B3D0904(&(Global_1C11E9.f_3D), 0);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1C11E9.f_3D), 0);
			}
			unk_0x5D96D8530B3D0904(&(Global_1C11E9.f_3D), (uParam0[iVar0 /*100*/])->f_4B);
			iVar1 = 0;
			while (iVar1 < Global_1C11E9.f_3E)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1C11E9.f_3F, iVar1))
				{
					Global_1C11E9.f_61[iVar1] = (uParam0[iVar0 /*100*/])->f_43[iVar1];
				}
				else
				{
					Global_1C11E9.f_40[iVar1] = (uParam0[iVar0 /*100*/])->f_3C[iVar1];
				}
				iVar1++;
			}
			Global_1C0DF1.f_51[iVar2] = Global_1C0180.f_B0A;
			unk_0x724501B3F806735C(&Global_1C11E9);
		}
		iVar0++;
	}
	Global_1C0DF1.f_57[iVar2 /*3*/] = { func_123(unk_0xD803B885F5E47A62()) };
}

Vector3 func_123(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

void func_124(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != 4294967295)
	{
		if (unk_0xE4F1C23C6353EC03(Global_1C0DF1.f_51[iParam1]))
		{
			unk_0xCA6EE3119323E45C(Global_1C0DF1.f_51[iParam1]);
		}
		Global_1C0DF1.f_51[iParam1] = 0;
	}
	else if (iParam0 != 4294967295)
	{
		if (unk_0xE4F1C23C6353EC03(iParam0))
		{
			unk_0xCA6EE3119323E45C(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1C0DF1.f_51[iVar0] == iParam0)
			{
				Global_1C0DF1.f_51[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DF1.f_51[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DF1.f_51[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0xE4F1C23C6353EC03(Global_1C0DF1.f_51[iVar0]))
		{
			iVar3 = unk_0x4F4FEC8CCCE2C7B1(Global_1C0DF1.f_51[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_126(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_4C)
	{
		case 0:
			func_130(uParam0);
			if (unk_0x33A494591F2C1975() && !unk_0x4DEB7B48DD0AABA4(0))
			{
				(uParam0[0 /*100*/])->f_4C = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_113((uParam0[iVar0 /*100*/])->f_20))
				{
					if (!func_129(&((uParam0[iVar0 /*100*/])->f_20), &Global_1C177E))
					{
						Global_1C177E[Global_1C177E.f_CE /*13*/] = { (uParam0[iVar0 /*100*/])->f_20 };
						Global_1C177E.f_CE++;
					}
				}
				iVar0++;
			}
			if (Global_1C177E.f_CE > 0)
			{
				(uParam0[0 /*100*/])->f_4C = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4C = 3;
			}
			break;
		
		case 1:
			if (func_127(&((uParam0[1 /*100*/])->f_4C), &(Global_1C177E.f_CE), &Global_1C177E, &(Global_1C177E.f_9D)))
			{
				(uParam0[0 /*100*/])->f_4C = 2;
			}
			break;
		
		case 2:
			if (Global_1C177E.f_CE > 12)
			{
				Global_1C177E.f_CE = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1C177E.f_CE)
				{
					if (func_113((uParam0[iVar0 /*100*/])->f_20) && func_113(Global_1C177E[iVar1 /*13*/]))
					{
						if (unk_0x4F18738E5BDE9AC9(&((uParam0[iVar0 /*100*/])->f_20), &(Global_1C177E[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_50 = { Global_1C177E.f_9D[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_4C = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_127(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x0742540F16CEE0F4())
			{
			}
			else
			{
				unk_0x7BF88BC97F9C422A();
				unk_0x6CEC2945A313AD9E(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x0742540F16CEE0F4())
			{
				if (unk_0x812FCD8C479A4733())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (unk_0x794D5DBA715427A2(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_128(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (unk_0x0742540F16CEE0F4())
			{
				unk_0x47B6D760F5574870();
			}
			else
			{
				unk_0x7BF88BC97F9C422A();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_128(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

int func_129(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_113(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x4F18738E5BDE9AC9(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_130(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_131(&(Global_1C177E[iVar0 /*13*/]));
		StringCopy(&(Global_1C177E.f_9D[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_4C > 0)
	{
		(uParam0[0 /*100*/])->f_4C = 0;
		(uParam0[1 /*100*/])->f_4C = 0;
		if (!unk_0x0742540F16CEE0F4())
		{
			unk_0x7BF88BC97F9C422A();
		}
	}
	if (unk_0x0742540F16CEE0F4())
	{
		unk_0x47B6D760F5574870();
	}
	Global_1C177E.f_CE = 0;
}

void func_131(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

int func_132(var uParam0)
{
	int iVar0;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return 1;
	}
	else if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
	{
		if (!func_134(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_133(&((uParam0[iVar0 /*100*/])->f_4E), &((uParam0[iVar0 /*100*/])->f_20), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_133(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_113(*uParam1))
			{
				if (!unk_0x60F025D317CE2512(uParam1))
				{
					if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
					{
						if (unk_0x341C9B6377CAD883(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0xA3F916BCE430ED26())
					{
						if (unk_0x341C9B6377CAD883(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0xD7926DA4168DF7E1(uParam1), 64);
						if (unk_0xBA301E03A078FA59())
						{
						}
						else if (unk_0x33A494591F2C1975())
						{
						}
						else if (unk_0x0EFF6B4415DAF4A1())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x60F025D317CE2512(uParam1))
			{
				if (!unk_0xE13B4B9D87E527E9())
				{
					if (unk_0xD0FC7E8A7D86B46C())
					{
						StringCopy(sParam2, unk_0xD7926DA4168DF7E1(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_134(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xDC30EF462887322E() && !unk_0x33A494591F2C1975())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_4E == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_4E)
	{
		case 0:
			Global_1C0180.f_C6F = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1C0180.f_B11[iVar1 /*16*/]), "", 64);
				func_131(&(Global_1C0180.f_BD2[iVar1 /*13*/]));
				if (func_113((uParam0[iVar1 /*100*/])->f_20))
				{
					Global_1C0180.f_BD2[Global_1C0180.f_C6F /*13*/] = { (uParam0[iVar1 /*100*/])->f_20 };
					Global_1C0180.f_C6F++;
				}
				iVar1++;
			}
			if (Global_1C0180.f_C6F > 0)
			{
				(uParam0[0 /*100*/])->f_4F = unk_0x3F4BBF0887AB451C(&(Global_1C0180.f_BD2), Global_1C0180.f_C6F);
				(uParam0[0 /*100*/])->f_4E = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x1C71EF085035D439((uParam0[0 /*100*/])->f_4F, &(Global_1C0180.f_B11), Global_1C0180.f_C6F);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_113((uParam0[iVar1 /*100*/])->f_20))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1C0180.f_B11[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else if (iVar0 == 4294967295)
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_4F = 4294967295;
			return 1;
			break;
	}
	return 0;
}

int func_135(var uParam0)
{
	int iVar0;
	
	if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_137(&((uParam0[iVar0 /*100*/])->f_4D), &((uParam0[iVar0 /*100*/])->f_10), &((uParam0[iVar0 /*100*/])->f_54), &(Global_1C0180.f_B11), &((uParam0[iVar0 /*100*/])->f_4F)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_136(&((uParam0[iVar0 /*100*/])->f_4D), (uParam0[iVar0 /*100*/])->f_10, &((uParam0[iVar0 /*100*/])->f_54)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_136(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xEA6BC48857E0AC4C(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0x4DA27762188F26CD(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_113(Var0))
			{
				if (!unk_0x60F025D317CE2512(&Var0))
				{
					if ((unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E()) || unk_0x33A494591F2C1975())
					{
						if (unk_0x341C9B6377CAD883(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0xD7926DA4168DF7E1(&Var0), 64);
						if (unk_0xBA301E03A078FA59())
						{
						}
						else if (unk_0x33A494591F2C1975())
						{
						}
						else if (unk_0x0EFF6B4415DAF4A1())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x60F025D317CE2512(&Var0))
			{
				if (!unk_0xE13B4B9D87E527E9())
				{
					if (unk_0xD0FC7E8A7D86B46C())
					{
						StringCopy(sParam17, unk_0xD7926DA4168DF7E1(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_137(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0xDC30EF462887322E() && !unk_0x33A494591F2C1975())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0x4DA27762188F26CD(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_113(Var1[0 /*13*/]))
			{
				if (!unk_0x60F025D317CE2512(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x3F4BBF0887AB451C(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x1C71EF085035D439(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == 4294967295)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = 4294967295;
			return 1;
			break;
	}
	return 0;
}

int func_138(var uParam0)
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_13.f_1 = 4;
	iVar5 = 4294967295;
	iVar9 = 2;
	Var12 = { func_58(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1C0180.f_AD7[iVar9] = 4294967295;
			Global_1C0180.f_A90[iVar9] = 0;
			Global_1C0005.f_176 = 4294967295;
			if (unk_0x080E9D045AEE5605())
			{
				if (unk_0xF2EC2A39FF9E838D(&Var12))
				{
					if (unk_0xD9DA83C40D038174(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_2C.f_2 = uParam0->f_7;
						uParam0->f_2C.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_150(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var12, func_151(), 0, 0, 0))
			{
				func_149(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_151())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0xBC584396476EE48A(iVar7, &Var0);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_112(&Var0, &Var12) || func_112(&Var0, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var0.f_60;
									}
								}
								if (iVar5 < 0)
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= unk_0x14B893B11D05C490(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= unk_0x1969161BAC0006D6(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_148(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						unk_0xBC584396476EE48A(0, &Var0);
						if (Var0.f_60 <= 1)
						{
							if (Global_1C0180.f_A90[iVar9] < 11)
							{
								if (func_151() && iVar5 == 0)
								{
									func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
									Global_1C0180.f_AD7[iVar9] = 0;
									Global_1C0180.f_A90[iVar9]++;
								}
								if (func_151() && (func_112(&Var0, &Var12) || func_112(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_112(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1C0180.f_AD7[iVar9] = 0;
									}
									MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									if (func_146(uParam0->f_2C))
									{
										iVar4 = unk_0x14B893B11D05C490(0, Global_1C0180.f_A95);
										if (iVar4 == 1)
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_161(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar3] = unk_0x14B893B11D05C490(0, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar3] = unk_0x1969161BAC0006D6(0, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C0180.f_A90[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1C0180.f_A90[iVar9]++;
						}
						if (!func_151())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_148(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0xBC584396476EE48A(iVar7, &Var0);
							if (Global_1C0180.f_A90[iVar9] < 11 && Var0.f_60 > 1)
							{
								if (func_151() && iVar5 == iVar7)
								{
									if (!func_112(&(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20), &Var12))
									{
										func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
										Global_1C0180.f_A90[iVar9]++;
									}
								}
								if (func_151() && (func_112(&Var0, &Var12) || func_112(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[iVar9] < 11)
								{
									if (func_113(Var0) && !func_112(&Var0, &(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_112(&Var0, &Var12))
										{
											if (Global_1C0180.f_AD7[iVar9] < 0)
											{
												Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
											}
										}
										MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
										Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
										Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
										Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 1;
										if (func_146(uParam0->f_2C))
										{
											iVar4 = unk_0x14B893B11D05C490(iVar7, Global_1C0180.f_A95);
											if (iVar4 == 1)
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0;
											}
										}
										if (func_161(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1C0180.f_A94)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar2] = unk_0x14B893B11D05C490(iVar7, Global_1C0180.f_A96[iVar2]);
											}
											else
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar2] = unk_0x1969161BAC0006D6(iVar7, Global_1C0180.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C0180.f_A90[iVar9]++;
									}
								}
							}
							func_148(&Var0);
							iVar7++;
						}
						unk_0xC4492EA0CF4852F9();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar8)
						{
							if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_151())
							{
								if (Global_1C0180.f_A90[iVar9] >= 1)
								{
									func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
								Global_1C0180.f_A90[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1C0180.f_A90[iVar9]++;
						}
						unk_0xC4492EA0CF4852F9();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_AD7[iVar9] = 4294967295;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_AD7[iVar9] = 4294967295;
					(*uParam0)[iVar9] = 2;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1C0180.f_AD7[iVar9] == 4294967295)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_140(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar11))
			{
				func_149(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							unk_0xBC584396476EE48A(iVar2, &Var0);
							bVar10 = false;
							if (Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3B > 1 || Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3B <= 0)
							{
								bVar10 = true;
							}
							if (Global_1C0180.f_A90[iVar9] < 11 || bVar10)
							{
								if (func_151() && (func_112(&Var0, &Var12) || func_112(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1C0180[iVar9 /*901*/][0 /*75*/]), {Var0.f_D}, 16);
									Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20 = { Var0 };
									Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3B = Var0.f_60;
									if (func_146(uParam0->f_2C))
									{
										iVar4 = unk_0x14B893B11D05C490(0, Global_1C0180.f_A95);
										if (iVar4 == 1)
										{
											Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3A = 0;
										}
									}
									if (func_161(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C0180[iVar9 /*901*/][0 /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar9 /*901*/][0 /*75*/].f_43[iVar3] = unk_0x14B893B11D05C490(0, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3C[iVar3] = unk_0x1969161BAC0006D6(0, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (Global_1C0180.f_A90[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1C0180.f_A90[iVar9]++;
										}
									}
								}
								else if (Global_1C0180.f_A90[iVar9] < 11)
								{
									MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									if (func_146(uParam0->f_2C))
									{
										iVar4 = unk_0x14B893B11D05C490(iVar2, Global_1C0180.f_A95);
										if (iVar4 == 1)
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_161(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar3] = unk_0x14B893B11D05C490(iVar2, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar3] = unk_0x1969161BAC0006D6(iVar2, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1C0180.f_A90[iVar9]++;
									}
								}
							}
							func_148(&Var0);
							iVar2++;
						}
					}
					unk_0xC4492EA0CF4852F9();
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					unk_0xC4492EA0CF4852F9();
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), iVar9);
					Global_1C0180.f_A90[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_151())
				{
					if (Global_1C0180.f_A90[iVar9] >= 1)
					{
						func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
					}
					else
					{
						func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
					}
					Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
					Global_1C0180.f_A90[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_139(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_139(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_151() && Global_1C0180.f_A90[iParam0] > Global_1C0180.f_AD7[iParam0]) && Global_1C0180.f_AD7[iParam0] >= 0)
	{
		if (iParam1 != Global_1C0180[iParam0 /*901*/][Global_1C0180.f_AD7[iParam0] /*75*/].f_3B)
		{
			iVar0 = 0;
			while (iVar0 < Global_1C0180.f_A90[iParam0])
			{
				if (iVar0 != Global_1C0180.f_AD7[iParam0])
				{
					if (Global_1C0180[iParam0 /*901*/][iVar0 /*75*/].f_3B >= Global_1C0180[iParam0 /*901*/][Global_1C0180.f_AD7[iParam0] /*75*/].f_3B)
					{
						if (Global_1C0180[iParam0 /*901*/][iVar0 /*75*/].f_3B < iParam1 || iParam1 == 4294967295)
						{
							Global_1C0180[iParam0 /*901*/][iVar0 /*75*/].f_3B++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_151())
		{
		}
		if (Global_1C0180.f_A90[iParam0] <= Global_1C0180.f_AD7[iParam0])
		{
		}
		if (Global_1C0180.f_AD7[iParam0] < 0)
		{
		}
	}
}

int func_140(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
				if (unk_0xDF496D8EA2986832(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, 4294967295))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_141(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)
{
	Global_1C0000 = 1;
	func_172(&(Global_1C0000.f_1), 1, 0);
	Global_1C0000.f_3 = Param0;
	Global_1C0000.f_4 = Param0.f_1;
}

int func_142()
{
	if (unk_0x798A3F1296751F46() && !func_164())
	{
		return 1;
	}
	return 0;
}

int func_143()
{
	if (unk_0xA9C9C7E04514E320() || Global_1C0000)
	{
		func_144();
		return 1;
	}
	return 0;
}

void func_144()
{
	if (func_79(&(Global_1C0000.f_1), 120000, 1))
	{
		unk_0x8EFB4731C3DCDA55(Global_1C0000.f_3, Global_1C0000.f_4, 4294967295);
		Global_1C0000 = 0;
		func_90(&(Global_1C0000.f_1));
	}
}

void func_145(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1C0000 = 0;
	func_90(&(Global_1C0000.f_1));
	unk_0x8EFB4731C3DCDA55(*uParam2, uParam2->f_1, 4294967295);
}

int func_146(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_147(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_161(uParam0->f_2C))
	{
		MemCopy(sParam1, {Global_1C0005.f_163}, 16);
		sParam1->f_20 = { Global_1C0005.f_169 };
		MemCopy(&(sParam1->f_10), {Global_1C0005.f_15D}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 64);
		sParam1->f_20 = { func_58(unk_0xD803B885F5E47A62()) };
	}
	sParam1->f_3B = iParam2;
	if (func_146(uParam0->f_2C))
	{
		iVar0 = Global_1C0005.f_D3.f_24[Global_1C0180.f_A95];
		if (iVar0 == 1)
		{
			sParam1->f_3A = 1;
		}
		else
		{
			sParam1->f_3A = 0;
		}
	}
	sParam1->f_4A = 1;
	iVar1 = 0;
	while (iVar1 < Global_1C0180.f_A94)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1C0005.f_8E.f_2, Global_1C0180.f_A96[iVar1]))
		{
			sParam1->f_43[iVar1] = Global_1C0005.f_D3.f_24[Global_1C0180.f_A96[iVar1]];
		}
		else
		{
			sParam1->f_3C[iVar1] = Global_1C0005.f_D3.f_3[Global_1C0180.f_A96[iVar1]];
		}
		iVar1++;
	}
}

void func_148(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
	StringCopy(&(uParam0->f_D), "", 24);
	uParam0->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_55 = 0;
	StringCopy(&(uParam0->f_56), "", 32);
	StringCopy(&(uParam0->f_5E), "", 8);
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
}

void func_149(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_150(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1C0005.f_D3.f_24[0];
	uVar1 = Global_1C0005.f_D3.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
				if (bParam5)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1C0005.f_8E.f_2, 0))
					{
						if (unk_0xBED23E8D17964CE1(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0xDA5E71D84C8C1F25(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x425FE0104C115EE8(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, 4294967295))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_151()
{
	if (Global_1C017C && Global_1C017D)
	{
		return 1;
	}
	return 0;
}

int func_152(var uParam0)
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_13.f_1 = 4;
	iVar4 = 4294967295;
	iVar9 = 1;
	Var10 = { func_58(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0xB552DC43762F9C85();
			Global_1C0180.f_AD7[1] = 4294967295;
			Global_1C0005.f_176 = 4294967295;
			Global_1C0180.f_A90[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_151())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_153(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &(uParam0->f_71), uParam0->f_71[0 /*66*/], iVar8, 0, 100))
				{
					func_149(&Var1, &(uParam0->f_2C));
					if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
					{
						if (func_151())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0xBC584396476EE48A(iVar6, &Var0);
									if (func_161(uParam0->f_2C))
									{
										if (Global_1C0005.f_176 < 0)
										{
											if (func_112(&Var0, &(Global_1C0005.f_169)))
											{
												Global_1C0005.f_176 = Var0.f_60;
											}
										}
									}
									if (unk_0xEAE0D21A50E6C7F4(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= unk_0x14B893B11D05C490(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= unk_0x1969161BAC0006D6(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_148(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_151() && iVar4 == 0)
						{
							if (Global_1C0180.f_A90[iVar9] < 11)
							{
								func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
								Global_1C0180.f_AD7[iVar9] = 0;
								Global_1C0180.f_A90[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0xBC584396476EE48A(0, &Var0);
							if (func_151() && (func_112(&Var0, &Var10) || func_112(&Var0, &(Global_1C0005.f_169))))
							{
							}
							else if (func_113(Var0) && Global_1C0180.f_A90[iVar9] < 11)
							{
								if (func_112(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1C0180.f_AD7[1] = 0;
								}
								MemCopy(&(Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
								Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
								Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = 1;
								if (func_146(uParam0->f_2C))
								{
									iVar7 = unk_0x14B893B11D05C490(0, Global_1C0180.f_A95);
									if (iVar7 == 1)
									{
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 1;
									}
									else
									{
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0;
									}
								}
								if (func_161(uParam0->f_2C))
								{
									MemCopy(&(Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 1;
								iVar2 = 0;
								while (iVar2 < Global_1C0180.f_A94)
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
									{
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar2] = unk_0x14B893B11D05C490(0, Global_1C0180.f_A96[iVar2]);
									}
									else
									{
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar2] = unk_0x1969161BAC0006D6(0, Global_1C0180.f_A96[iVar2]);
									}
									iVar2++;
								}
								Global_1C0180.f_A90[1]++;
							}
							else
							{
								func_148(&Var0);
								unk_0xC4492EA0CF4852F9();
								func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
								Global_1C0180.f_A90[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_151())
								{
									if (Global_1C0180.f_A90[iVar9] >= 1)
									{
										func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
									}
									else
									{
										func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
									}
									Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
									Global_1C0180.f_A90[iVar9]++;
								}
								return 0;
							}
							func_148(&Var0);
						}
						else
						{
							Global_1C0180.f_A90[1] = 0;
							func_148(&Var0);
							unk_0xC4492EA0CF4852F9();
							func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
							if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_151())
							{
								if (Global_1C0180.f_A90[iVar9] >= 1)
								{
									func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
								Global_1C0180.f_A90[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_151())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							unk_0xBC584396476EE48A(iVar6, &Var0);
							if (Global_1C0180.f_A90[iVar9] < 11 && Var0.f_60 > 1)
							{
								if (func_151() && iVar4 == iVar6)
								{
									if (!func_112(&(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20), &Var10))
									{
										func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
										Global_1C0180.f_A90[iVar9]++;
									}
								}
								if (func_151() && (func_112(&Var0, &Var10) || func_112(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[1] < 12)
								{
									if (func_113(Var0) && !func_112(&Var0, &(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_112(&Var0, &Var10))
										{
											if (Global_1C0180.f_AD7[1] < 0)
											{
												Global_1C0180.f_AD7[1] = Global_1C0180.f_A90[1];
											}
										}
										MemCopy(&(Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/]), {Var0.f_D}, 16);
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_20 = { Var0 };
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_4A = 1;
										if (func_146(uParam0->f_2C))
										{
											iVar7 = unk_0x14B893B11D05C490(iVar6, Global_1C0180.f_A95);
											if (iVar7 == 1)
											{
												Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3A = 0;
											}
										}
										if (func_161(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1C0180.f_A94)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
											{
												Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_43[iVar2] = unk_0x14B893B11D05C490(iVar6, Global_1C0180.f_A96[iVar2]);
											}
											else
											{
												Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3C[iVar2] = unk_0x1969161BAC0006D6(iVar6, Global_1C0180.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C0180.f_A90[1]++;
									}
								}
							}
							func_148(&Var0);
							iVar6++;
						}
						unk_0xC4492EA0CF4852F9();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						(*uParam0)[1] = 1;
						if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_151())
						{
							if (Global_1C0180.f_A90[iVar9] >= 1)
							{
								func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
							}
							else
							{
								func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
							}
							Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
							Global_1C0180.f_A90[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_A90[1] = 0;
						(*uParam0)[1] = 1;
						unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), 1);
						return 0;
					}
				}
			}
			else
			{
				func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
				Global_1C0180.f_A90[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_139(iVar9, Global_1C0005.f_176);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, 4294967295))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_154(var uParam0)
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_13.f_1 = 4;
	iVar6 = 4294967295;
	iVar10 = 0;
	Var0 = { func_58(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1C0180.f_AD7[iVar10] = 4294967295;
			Global_1C0180.f_A90[iVar10] = 0;
			Global_1C0005.f_176 = 4294967295;
			Global_1C017D = 0;
			if (func_155(uParam0->f_2C))
			{
				if (!Global_1C017D)
				{
					Global_1C017D = 1;
				}
			}
			else if (Global_1C017D)
			{
				Global_1C017D = 0;
			}
			if (!Global_1C017D)
			{
			}
			if (func_150(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var0, func_151(), 0, 0, 0))
			{
				func_149(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_151())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0xBC584396476EE48A(iVar8, &Var1);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_112(&Var1, &Var0) || func_112(&Var1, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var1.f_60;
									}
								}
								if (iVar6 < 0)
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= unk_0x14B893B11D05C490(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= unk_0x1969161BAC0006D6(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_148(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						unk_0xBC584396476EE48A(0, &Var1);
						if (Var1.f_60 <= 1)
						{
							if (Global_1C0180.f_A90[iVar10] < 11)
							{
								if (func_151() && iVar6 == 0)
								{
									func_147(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Var1.f_60);
									Global_1C0180.f_AD7[iVar10] = 0;
									Global_1C0180.f_A90[iVar10]++;
								}
								if (func_151() && (func_112(&Var1, &Var0) || func_112(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_112(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1C0180.f_AD7[iVar10] = 0;
									}
									MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
									if (func_146(uParam0->f_2C))
									{
										iVar5 = unk_0x14B893B11D05C490(0, Global_1C0180.f_A95);
										if (iVar5 == 1)
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0;
										}
									}
									if (func_161(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_4A = 1;
									iVar3 = 0;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_43[iVar3] = unk_0x14B893B11D05C490(0, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3C[iVar3] = unk_0x1969161BAC0006D6(0, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C0180.f_A90[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1C0180.f_A90[iVar10]++;
						}
						if (!func_151())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_148(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0xBC584396476EE48A(iVar8, &Var1);
							if (Global_1C0180.f_A90[iVar10] < 11 && Var1.f_60 > 1)
							{
								if (func_151() && iVar6 == iVar8)
								{
									if (!func_112(&(Global_1C0180[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										func_147(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Var1.f_60);
										Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
										Global_1C0180.f_A90[iVar10]++;
									}
								}
								if (func_151() && (func_112(&Var1, &Var0) || func_112(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[iVar10] < 11)
								{
									if (func_113(Var1) && !func_112(&(Global_1C0180[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										if (func_112(&Var1, &Var0))
										{
											if (Global_1C0180.f_AD7[iVar10] < 0)
											{
												Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
											}
										}
										MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_4A = 1;
										if (func_146(uParam0->f_2C))
										{
											iVar5 = unk_0x14B893B11D05C490(iVar8, Global_1C0180.f_A95);
											if (iVar5 == 1)
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_161(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1C0180.f_A94)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_43[iVar3] = unk_0x14B893B11D05C490(iVar8, Global_1C0180.f_A96[iVar3]);
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3C[iVar3] = unk_0x1969161BAC0006D6(iVar8, Global_1C0180.f_A96[iVar3]);
											}
											iVar3++;
										}
										Global_1C0180.f_A90[iVar10]++;
									}
								}
							}
							func_148(&Var1);
							iVar8++;
						}
						unk_0xC4492EA0CF4852F9();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar9)
						{
							if (Global_1C0180.f_AD7[iVar10] == 4294967295 && func_151())
							{
								if (Global_1C0180.f_A90[iVar10] >= 1)
								{
									func_147(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Global_1C0180[iVar10 /*901*/][(Global_1C0180.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_147(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), 1);
								}
								Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
								Global_1C0180.f_A90[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1C0180.f_A90[iVar10]++;
						}
						unk_0xC4492EA0CF4852F9();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_AD7[iVar10] = 4294967295;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_AD7[iVar10] = 4294967295;
					(*uParam0)[iVar10] = 1;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1C0180.f_AD7[iVar10] == 4294967295)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_140(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar12))
			{
				func_149(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0xBC584396476EE48A(iVar3, &Var1);
							if (func_151() && (func_112(&Var1, &Var0) || func_112(&Var1, &(Global_1C0005.f_169))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3B > 1 || Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3B <= 0)
								{
									bVar11 = true;
								}
								if (Global_1C0180.f_A90[iVar10] < 11 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1C0180[iVar10 /*901*/][0 /*75*/]), {Var1.f_D}, 16);
										Global_1C0180[iVar10 /*901*/][0 /*75*/].f_20 = { Var1 };
										Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3B = Var1.f_60;
										if (func_146(uParam0->f_2C))
										{
											iVar5 = unk_0x14B893B11D05C490(0, Global_1C0180.f_A95);
											if (iVar5 == 1)
											{
												Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3A = 0;
											}
										}
										if (func_161(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar10 /*901*/][0 /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C0180[iVar10 /*901*/][0 /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C0180.f_A94)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar4]))
											{
												Global_1C0180[iVar10 /*901*/][iVar3 /*75*/].f_43[iVar4] = unk_0x14B893B11D05C490(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][iVar3 /*75*/].f_3C[iVar4] = unk_0x1969161BAC0006D6(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (Global_1C0180.f_A90[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1C0180.f_A90[iVar10]++;
											}
										}
										else if (Global_1C0180.f_A90[iVar10] == 1 && Global_1C0180.f_AD7[iVar10] == 4294967295)
										{
											Global_1C0180.f_A90[iVar10]++;
										}
									}
									else if (Global_1C0180.f_A90[iVar10] < 11)
									{
										MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										if (func_146(uParam0->f_2C))
										{
											iVar5 = unk_0x14B893B11D05C490(iVar3, Global_1C0180.f_A95);
											if (iVar5 == 1)
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_161(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C0180.f_A94)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar4]))
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_43[iVar4] = unk_0x14B893B11D05C490(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3C[iVar4] = unk_0x1969161BAC0006D6(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1C0180.f_A90[iVar10]++;
										}
									}
								}
							}
							func_148(&Var1);
							iVar3++;
						}
					}
					unk_0xC4492EA0CF4852F9();
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), iVar10);
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_A90[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1C0180.f_A90[1] = 0;
					(*uParam0)[1] = 1;
					Global_1C0180.f_A90[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1C0180.f_AD7[iVar10] == 4294967295 && func_151())
			{
				if (Global_1C0180.f_A90[iVar10] >= 1)
				{
					func_147(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Global_1C0180[iVar10 /*901*/][(Global_1C0180.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
				}
				else
				{
					func_147(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), 1);
				}
				Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
				Global_1C0180.f_A90[iVar10]++;
			}
			break;
		
		case 2:
			func_139(iVar10, Global_1C0005.f_176);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_155(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)
{
	int iVar0;
	
	if (Global_1C017C)
	{
		if (Global_1C0005.f_5 != 0)
		{
			if (Global_1C0005.f_5 == Param0)
			{
				if (Global_1C0005.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0x7F8A39872A07D2CE(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x7F8A39872A07D2CE(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_156(var uParam0)
{
	int iVar0;
	
	if (unk_0xE4F1C23C6353EC03(Global_1C0180.f_B0A))
	{
		iVar0 = unk_0x4F4FEC8CCCE2C7B1(Global_1C0180.f_B0A);
		if (iVar0 < 300000)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 5);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam0->f_2A), 5);
			func_124(Global_1C0180.f_B0A, 4294967295);
		}
	}
}

void func_157(int iParam0)
{
	if (unk_0x83D8570832F172A7(iParam0))
	{
		unk_0x6567AE843FADBA94(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_158(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (unk_0xEAE0D21A50E6C7F4(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0xEAE0D21A50E6C7F4(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0xEAE0D21A50E6C7F4(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x58424C49F8924842() && unk_0x080E9D045AEE5605())
		{
			if (unk_0x33A494591F2C1975() && !unk_0x4DEB7B48DD0AABA4(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_58(unk_0xD803B885F5E47A62()) };
				if (unk_0xF2EC2A39FF9E838D(&Var4))
				{
					unk_0xD9DA83C40D038174(&Var1, 35, &Var4);
					if (!unk_0xEA6BC48857E0AC4C(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	unk_0x3CAEA85DA607305E(*iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	if (bVar3)
	{
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0x0D45A7AB73600CFA(&Var2);
		unk_0x779B34565F4D71B1();
	}
	else
	{
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0x779B34565F4D71B1();
	}
	unk_0x7E60D21B163E9D56();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		unk_0x5D96D8530B3D0904(&iVar5, 7);
		unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
		unk_0x3CAEA85DA607305E(*iParam1);
		unk_0x3CAEA85DA607305E(iVar5);
		if (!unk_0x58424C49F8924842())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0x999A3BFD3E9B5D2C())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1C0180.f_B10 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0x0EF1238B8EFD4D04();
		unk_0x7E60D21B163E9D56();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0xEAE0D21A50E6C7F4(iParam2, 5))
		{
			if (unk_0xB552DC43762F9C85() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iParam2, 6))
		{
			if (unk_0xC2F420D189FDB329())
			{
				if (unk_0xB0D6327A81292879())
				{
					if (unk_0x58424C49F8924842() && unk_0x080E9D045AEE5605())
					{
						if (unk_0x33A494591F2C1975() && !unk_0x4DEB7B48DD0AABA4(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_58(unk_0xD803B885F5E47A62()) };
							if (unk_0xF2EC2A39FF9E838D(&Var6))
							{
								unk_0xD9DA83C40D038174(&Var1, 35, &Var6);
								if (!unk_0xEA6BC48857E0AC4C(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		unk_0x5D96D8530B3D0904(&iVar7, 7);
		unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
		unk_0x3CAEA85DA607305E(*iParam1);
		unk_0x3CAEA85DA607305E(iVar7);
		if (bVar3)
		{
			unk_0x7ACC3006A87F8B39(sVar0);
			unk_0x0D45A7AB73600CFA(&Var2);
			unk_0x0EF1238B8EFD4D04();
		}
		else
		{
			unk_0x7ACC3006A87F8B39(sVar0);
			unk_0x0EF1238B8EFD4D04();
		}
		unk_0x7E60D21B163E9D56();
		*iParam1++;
	}
}

void func_159(int iParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_TITLE");
	unk_0x7ACC3006A87F8B39(sParam1);
	unk_0x779B34565F4D71B1();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x7ACC3006A87F8B39(uParam2[iVar0 /*6*/]);
		unk_0x779B34565F4D71B1();
		iVar0++;
	}
	unk_0x7E60D21B163E9D56();
}

void func_160(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x7ACC3006A87F8B39(sParam1);
	if (!unk_0xEA6BC48857E0AC4C(sParam2))
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	if (iParam5 == 4294967295)
	{
		if (bParam4)
		{
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				unk_0x0D45A7AB73600CFA(sParam3);
			}
		}
		else if (!unk_0xEA6BC48857E0AC4C(sParam3))
		{
			unk_0x6B012227B3921E18(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				unk_0x0D45A7AB73600CFA(sParam3);
			}
		}
		else if (!unk_0xEA6BC48857E0AC4C(sParam3))
		{
			unk_0x6B012227B3921E18(sParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam5);
	}
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
}

int func_161(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_162(int iParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_DISPLAY_TYPE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

int func_163()
{
	return unk_0xB01F55A0FD1CFD49("SC_LEADERBOARD");
}

bool func_164()
{
	return func_165(unk_0xD803B885F5E47A62());
}

int func_165(int iParam0)
{
	switch (func_166(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 41:
		case 36:
		case 39:
		case 42:
			return 0;
		
		default:
	}
	return 1;
}

int func_166(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4;
}

void func_167(int iParam0)
{
	Global_141384 = iParam0;
}

void func_168(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_169(bool bParam0)
{
	if (bParam0)
	{
		func_171();
	}
	func_170(4, 4294967295);
	func_170(6, 4294967295);
	func_170(7, 4294967295);
	func_170(3, 4294967295);
	func_170(1, 4294967295);
	func_170(2, 4294967295);
	func_170(11, 4294967295);
	func_170(13, 4294967295);
	func_170(14, 4294967295);
	func_170(16, 4294967295);
}

void func_170(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150392.f_417), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				Global_150392.f_AA[iParam1] = 1;
			}
			break;
	}
}

void func_171()
{
	Global_26B66F.f_11B4 = 0;
}

void func_172(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 1;
}

int func_173(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_C = iParam2;
	func_176(uParam0);
	func_175(uParam0);
	if (unk_0x7F8A39872A07D2CE(&(uParam0->f_226), "SPR_RESULT") || (unk_0x7F8A39872A07D2CE(&(uParam0->f_226), "") && uParam0->f_38 > 0))
	{
		uParam0->f_236 = 1;
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x0D3BE1DE0262A012("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x0D3BE1DE0262A012("CommonMenu", false);
		unk_0x0D3BE1DE0262A012("MPLeaderboard", false);
		unk_0x0D3BE1DE0262A012("MPHud", false);
		uParam0->f_1 = unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x83D8570832F172A7(uParam0->f_1) || !unk_0x27117E2CDD4D67C3("CommonMenu")) || !unk_0x27117E2CDD4D67C3("MPLeaderboard")) || !unk_0x27117E2CDD4D67C3("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_232 || uParam0->f_237)
		{
			while (!unk_0x83D8570832F172A7(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!unk_0x83D8570832F172A7(uParam0->f_1) || !unk_0x27117E2CDD4D67C3("CommonMenu")) || !unk_0x27117E2CDD4D67C3("MPLeaderboard")) || !unk_0x27117E2CDD4D67C3("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_232)
		{
			if (!unk_0x83D8570832F172A7(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_232)
	{
		if (uParam0->f_237)
		{
			func_174(uParam0);
		}
		else if (uParam0->f_38 != 0)
		{
			func_48(uParam0, 1);
		}
		else
		{
			func_48(uParam0, 0);
		}
	}
	Global_12C53 = 1;
	return 1;
}

void func_174(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	unk_0x7E60D21B163E9D56();
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(true);
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(2);
	func_9(unk_0xF59058FCB716F903(2, 188, true));
	func_14("ES_HELP_TU");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(1);
	func_9(unk_0xF59058FCB716F903(2, 187, true));
	func_14("ES_HELP_TD");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0);
	func_9(unk_0xF59058FCB716F903(2, 202, true));
	func_14("ES_HELP_AB");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

void func_175(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xEEF67251E263A87F(0);
	unk_0xD3539A877EC25E86(1f, func_62(16f));
	if (uParam0->f_1F == 0)
	{
		if (uParam0->f_1D)
		{
			unk_0xBBA442527B4BB1A6("STRING");
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_D));
			fVar0 = unk_0x79E367314AFBB5CA(1);
		}
		else
		{
			unk_0xBBA442527B4BB1A6(&(uParam0->f_D));
			fVar0 = unk_0x79E367314AFBB5CA(1);
		}
	}
	else
	{
		unk_0xBBA442527B4BB1A6("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_1F)
		{
			switch (uParam0->f_20[iVar3])
			{
				case 0:
					unk_0x6D99DF8263D35CE5(uParam0->f_35[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x6B012227B3921E18(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0xD06AC7C87A34A6AD(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x79E367314AFBB5CA(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_176(var uParam0)
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0;
	uParam0->f_233 = 0;
	uParam0->f_23C = 0;
	uParam0->f_234 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_23E = 0;
	uParam0->f_23F = 0;
	uParam0->f_23D = 1f;
}

void func_177(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, var uParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_257(iParam0, 4))
	{
		return;
	}
	else
	{
		func_180(&(iParam0->f_1A));
		func_179(&(iParam0->f_1A), "BJ_SC_PASS", sParam1, 0);
		func_213(iParam0, 4, 1);
	}
	*uParam5 = 0;
	if (iParam3 > 1)
	{
		if (iParam2 == iParam3)
		{
			iVar0 = SYSTEM::CEIL((100f * fParam6));
		}
	}
	iVar3 = SYSTEM::CEIL((IntToFloat(iParam2 * 30) * fParam6));
	iVar1 = SYSTEM::CEIL((fParam6 * 50f));
	iVar2 = SYSTEM::CEIL(((fParam6 * 1.5f) * SYSTEM::TO_FLOAT(iParam4)));
	*uParam5 = (((iVar1 + iVar2) + iVar0) + iVar3);
	if (iParam3 > 1)
	{
		if (iVar0 > 0)
		{
			func_178(&(iParam0->f_1A), 3, "BJ_SC_ALLG_RWD", "", iVar0, 0, 2, 0);
		}
		else
		{
			func_178(&(iParam0->f_1A), 3, "BJ_SC_ALLG_RWD", "", 0, 0, 1, 0);
		}
		func_178(&(iParam0->f_1A), 2, "BJ_SC_GATES", "", iParam2, iParam3, 0, 0);
	}
	func_178(&(iParam0->f_1A), 11, "BJ_SC_LAND_ACC", "", iParam4, 0, 0, 0);
	if (iParam3 > 1)
	{
		func_178(&(iParam0->f_1A), 3, "BJ_SC_GATE_RWD", "", iVar3, 0, 0, 0);
	}
	func_178(&(iParam0->f_1A), 3, "BJ_SC_ACC_RWD", "", SYSTEM::ROUND(((50f + (1.5f * IntToFloat(iParam4))) * fParam6)), 0, 0, 0);
	func_178(&(iParam0->f_1A), 3, "BJ_SC_TOT_RWD", "", *uParam5, 0, 0, 0);
}

void func_178(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_38 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_38;
	uParam0->f_39[iVar0] = iParam1;
	StringCopy(&(uParam0->f_47[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_118[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_1E9[iVar0] = iParam4;
	uParam0->f_1F7[iVar0] = iParam5;
	uParam0->f_205[iVar0] = iParam6;
	uParam0->f_213[iVar0] = iParam7;
	uParam0->f_38++;
}

void func_179(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0;
}

void func_180(var uParam0)
{
	func_176(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

char* func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BJ_JUMP_01";
		
		case 1:
			return "BJ_JUMP_02";
		
		case 2:
			return "BJ_JUMP_03";
		
		case 3:
			return "BJ_JUMP_04";
		
		case 4:
			return "BJ_JUMP_05";
		
		case 5:
			return "BJ_JUMP_06";
		
		case 6:
			return "BJ_JUMP_07";
		
		case 7:
			return "BJ_JUMP_08";
		
		case 8:
			return "BJ_JUMP_09";
		
		case 9:
			return "BJ_JUMP_10";
		
		case 10:
			return "BJ_JUMP_11";
		
		case 11:
			return "BJ_JUMP_12";
		
		case 12:
			return "BJ_JUMP_13";
		
		default:
	}
	return "";
}

int func_182(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (Global_1C0005.f_1 && !Global_1C0005.f_2)
	{
		func_191(iParam0, iParam1, fParam2, iParam3);
		Global_1C0005.f_2 = 1;
	}
	if (func_183(&uLocal_73))
	{
		Global_1C017C = 1;
		return 1;
	}
	return 0;
}

int func_183(var uParam0)
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_13.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_24 = 32;
	if (func_161(uParam0->f_2C))
	{
		Var3 = { Global_1C0005.f_169 };
	}
	else
	{
		Var3 = { func_58(unk_0xD803B885F5E47A62()) };
	}
	switch (Global_1C0005)
	{
		case 0:
			if (func_190(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &Var3))
			{
				func_149(&Var1, &(uParam0->f_2C));
				Global_1C0005.f_8E = uParam0->f_2C;
				Global_1C0005.f_8E.f_1 = unk_0x3E935963A5A0820F(uParam0->f_2C, 0);
				iVar4 = 0;
				while (iVar4 < Global_1C0005.f_8E.f_1)
				{
					if (!func_189(uParam0->f_2C, iVar4))
					{
						if (func_188(uParam0->f_2C, 4, iVar4))
						{
							unk_0x5D96D8530B3D0904(&(Global_1C0005.f_8E.f_2), iVar4);
						}
						else
						{
							unk_0x0674E58A79778E99(&(Global_1C0005.f_8E.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xBC584396476EE48A(0, &Var0);
						if (Var0.f_61 != Global_1C0005.f_8E.f_1)
						{
						}
						if (!func_113(Var0))
						{
							Global_1C0005.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1C0005.f_8E.f_1)
							{
								if (!func_189(uParam0->f_2C, iVar4))
								{
									if (func_188(uParam0->f_2C, 4, iVar4))
									{
										Global_1C0005.f_49.f_24[iVar4] = unk_0x14B893B11D05C490(0, iVar4);
										if (Global_1C0005.f_49.f_24[iVar4] == 4294967295)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_24[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1C0005.f_49.f_3[iVar4] = unk_0x1969161BAC0006D6(0, iVar4);
										if (Global_1C0005.f_49.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1C0005.f_4 = 1;
					}
					unk_0xC4492EA0CF4852F9();
				}
				else
				{
					Global_1C0005.f_4 = 1;
				}
				Global_1C0005 = 1;
				func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 1:
			Global_1C0005.f_1 = 1;
			if (Global_1C0005.f_2)
			{
				func_187();
				if (Global_1C0005.f_4)
				{
					if (func_186(uParam0->f_2C))
					{
						Global_1C0005 = 3;
					}
					else
					{
						Global_1C0005 = 2;
					}
				}
				else
				{
					Global_1C0005 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x56218E3881C1B187(&(Global_1C0005.f_49), &(Global_1C0005.f_8E), &(Global_1C0005.f_D3));
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1C0005.f_D3 = { Global_1C0005.f_8E };
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x8CD06866876216F2() && func_185())
			{
				if (func_184())
				{
					Global_1C0005 = 99;
				}
				else
				{
					Global_1C0005 = 999;
					return 1;
				}
			}
			else
			{
				Global_1C0005 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_186(uParam0->f_2C))
			{
				Global_1C0005.f_118 = { Global_1C0005.f_8E };
			}
			else
			{
				Var2 = Global_1C0005.f_8E;
				Var2.f_1 = Global_1C0005.f_8E.f_1;
				Var2.f_2 = Global_1C0005.f_8E.f_2;
				unk_0x56218E3881C1B187(&Var2, &(Global_1C0005.f_8E), &(Global_1C0005.f_118));
			}
			Global_1C0005 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_150(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, &Var3, 1, 1, Global_1C0005.f_118.f_24[0], Global_1C0005.f_118.f_3[0]))
			{
				func_149(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xBC584396476EE48A(0, &Var0);
						if (unk_0x7F8A39872A07D2CE(&(Var0.f_D), ""))
						{
							Global_EC5D7.f_1 = 4294967295;
						}
						else
						{
							Global_EC5D7.f_1 = Var0.f_60;
						}
					}
					else
					{
						Global_EC5D7.f_1 = 4294967295;
					}
					unk_0xC4492EA0CF4852F9();
				}
				else
				{
					Global_EC5D7.f_1 = 4294967295;
				}
				Global_1C0005 = 999;
				func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_184()
{
	return unk_0xEAE0D21A50E6C7F4(Global_EA450.f_8, 1);
}

var func_185()
{
	return Global_258538.f_3;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_187()
{
	Global_1C0005.f_49 = Global_1C0005.f_8E;
	Global_1C0005.f_49.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_49.f_2 = Global_1C0005.f_8E.f_2;
	Global_1C0005.f_D3 = Global_1C0005.f_8E;
	Global_1C0005.f_D3.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_D3.f_2 = Global_1C0005.f_8E.f_2;
}

int func_188(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0xE847F6F326D1C162(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_189(int iParam0, int iParam1)
{
	if (unk_0xD3D4B12287A02195(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_190(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
				if (unk_0x9555470AA3470707(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, 4294967295))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_191(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	StringCopy(&(Var1[0 /*8*/]), "Location", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_05", 24);
			break;
		
		case 5:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_06", 24);
			break;
		
		case 6:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_07", 24);
			break;
		
		case 7:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_08", 24);
			break;
		
		case 8:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_09", 24);
			break;
		
		case 9:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_10", 24);
			break;
		
		case 10:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_11", 24);
			break;
		
		case 11:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_12", 24);
			break;
		
		case 12:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_13", 24);
			break;
	}
	if (func_193(274, &Var0, &Var1, 1, 4294967295, 1, 0))
	{
		func_192(274, 131, iParam3, 0f, 0);
		if (iParam1 == 100)
		{
			func_192(274, 98, 1, 0f, 0);
		}
		else
		{
			func_192(274, 98, 0, 0f, 0);
		}
		func_192(274, 109, 1, 0f, 0);
		func_192(274, 8, iParam3, 0f, 0);
		func_192(274, 93, 0, fParam2, 0);
	}
}

void func_192(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x6106B2DBBCB1AA39(iParam1, iParam2, fParam3);
	}
	if (!Global_1C0005.f_3)
	{
		Global_1C0005.f_8E = iParam0;
		Global_1C0005.f_8E.f_1 = unk_0x3E935963A5A0820F(Global_1C0005.f_8E, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1C0005.f_8E.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_188(iParam0, 4, iVar1))
				{
					unk_0x5D96D8530B3D0904(&(Global_1C0005.f_8E.f_2), iVar1);
				}
				else
				{
					unk_0x0674E58A79778E99(&(Global_1C0005.f_8E.f_2), iVar1);
				}
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1C0005.f_8E.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1C0005.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0xD3D4B12287A02195(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1C0005.f_8E.f_24[iVar0] = iParam2;
	Global_1C0005.f_8E.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1C0005.f_8E.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x0674E58A79778E99(&(Global_1C0005.f_8E.f_2), iVar0);
	}
}

int func_193(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x58424C49F8924842())
	{
	}
	if ((!unk_0x28B41A2A2556BCF3() && (unk_0x8BB6DE13A9F3105E() || !unk_0x9AE561F9BC3F06D8())) && unk_0x393EAEC306A49C71())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == 4294967295)
		{
			if (unk_0x080E9D045AEE5605())
			{
				Var2 = { func_58(unk_0xD803B885F5E47A62()) };
				if (unk_0xF2EC2A39FF9E838D(&Var2))
				{
					if (unk_0xD9DA83C40D038174(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x8CD06866876216F2() && Global_258538.f_3)
			{
				unk_0x14388B84A94BC0BD(&Var0, &(Global_195CCB.f_A));
			}
			else
			{
				unk_0x31FF86F0FD3CE715(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x28B41A2A2556BCF3())
	{
	}
	if (!unk_0x8BB6DE13A9F3105E())
	{
	}
	if (unk_0x9AE561F9BC3F06D8())
	{
	}
	if (!unk_0x393EAEC306A49C71())
	{
	}
	return 0;
}

void func_194(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&vVar0, "BJUMP_01", 24);
			break;
		
		case 1:
			StringCopy(&vVar0, "BJUMP_02", 24);
			break;
		
		case 2:
			StringCopy(&vVar0, "BJUMP_03", 24);
			break;
		
		case 3:
			StringCopy(&vVar0, "BJUMP_04", 24);
			break;
		
		case 4:
			StringCopy(&vVar0, "BJUMP_05", 24);
			break;
		
		case 5:
			StringCopy(&vVar0, "BJUMP_06", 24);
			break;
		
		case 6:
			StringCopy(&vVar0, "BJUMP_07", 24);
			break;
		
		case 7:
			StringCopy(&vVar0, "BJUMP_08", 24);
			break;
		
		case 8:
			StringCopy(&vVar0, "BJUMP_09", 24);
			break;
		
		case 9:
			StringCopy(&vVar0, "BJUMP_10", 24);
			break;
		
		case 10:
			StringCopy(&vVar0, "BJUMP_11", 24);
			break;
		
		case 11:
			StringCopy(&vVar0, "BJUMP_12", 24);
			break;
		
		case 12:
			StringCopy(&vVar0, "BJUMP_13", 24);
			break;
	}
	func_195(&uLocal_73, 85, &vVar0, func_181(iParam0), iParam0, 4294967295, 0, 0);
}

void func_195(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1C0180.f_AD1 = 0;
	Global_1C0180.f_AD2 = 0;
	Global_1C0180.f_AD0 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_204())
				{
					uParam0->f_2C = 826;
				}
				else
				{
					uParam0->f_2C = 815;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_204())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C0180.f_ADC.f_1A = 4294967295;
				}
				Global_1C0180.f_ADC = 1;
				if (iParam5 <= 0 || func_204())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 3;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 3;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 3;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 3;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_204())
				{
					uParam0->f_2C = 827;
				}
				else
				{
					uParam0->f_2C = 824;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_204())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C0180.f_ADC.f_1A = 4294967295;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1C0180.f_ADC = 1;
				if (iParam5 <= 0 || func_204())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 5;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 6;
					Global_1C0180.f_A94 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 3;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 5;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A94 = 3;
					Global_1C0180.f_A95 = 6;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 3;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_204())
				{
					uParam0->f_2C = 828;
				}
				else
				{
					uParam0->f_2C = 825;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 2;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x4D8EB33D0EE1D0CB(unk_0xD803B885F5E47A62(), &Var3);
					MemCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1C0180.f_ADC.f_1B = 1;
				}
				if (iParam5 > 0 && !func_204())
				{
					uParam0->f_2C.f_3 = 3;
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C0180.f_ADC.f_1A = 4294967295;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_204())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 3;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 3;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A94 = 3;
					Global_1C0180.f_A95 = 4;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 3;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_204())
				{
					uParam0->f_2C = 928;
				}
				else
				{
					uParam0->f_2C = 849;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_204())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C0180.f_ADC.f_1A = 4294967295;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1C0180.f_ADC = 1;
				if (iParam5 <= 0 || func_204())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 0;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 0;
					Global_1C0180.f_A94 = 1;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A94 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_204())
				{
					uParam0->f_2C = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_2C = 975;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_204())
				{
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C0180.f_ADC.f_1A = 4294967295;
				}
				Global_1C0180.f_ADC = 1;
				if (iParam5 <= 0 || func_204())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 3;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 3;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 3;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 3;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_2C = 762;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (iParam4 == 3)
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 4;
				Global_1C0180.f_A96[2] = 6;
				Global_1C0180.f_A96[3] = 3;
				Global_1C0180.f_A96[4] = 1;
				Global_1C0180.f_A96[5] = 2;
				Global_1C0180.f_A94 = 6;
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[5]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 4;
				Global_1C0180.f_ADC.f_1D[1] = 5;
				Global_1C0180.f_ADC.f_1D[2] = 5;
				Global_1C0180.f_ADC.f_1D[3] = 4;
				Global_1C0180.f_ADC.f_1D[4] = 5;
				Global_1C0180.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_2C = 822;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (iParam4 == 4)
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 4;
				Global_1C0180.f_A96[2] = 6;
				Global_1C0180.f_A96[3] = 3;
				Global_1C0180.f_A96[4] = 1;
				Global_1C0180.f_A96[5] = 2;
				Global_1C0180.f_A94 = 6;
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[5]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 4;
				Global_1C0180.f_ADC.f_1D[1] = 5;
				Global_1C0180.f_ADC.f_1D[2] = 5;
				Global_1C0180.f_ADC.f_1D[3] = 4;
				Global_1C0180.f_ADC.f_1D[4] = 5;
				Global_1C0180.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_2C = 823;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 4;
				Global_1C0180.f_A96[2] = 6;
				Global_1C0180.f_A96[3] = 3;
				Global_1C0180.f_A96[4] = 1;
				Global_1C0180.f_A96[5] = 2;
				Global_1C0180.f_A94 = 6;
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[5]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 4;
				Global_1C0180.f_ADC.f_1D[1] = 5;
				Global_1C0180.f_ADC.f_1D[2] = 5;
				Global_1C0180.f_ADC.f_1D[3] = 4;
				Global_1C0180.f_ADC.f_1D[4] = 5;
				Global_1C0180.f_ADC.f_1D[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 3;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 7;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 94:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 3;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 7;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 92:
			uParam0->f_2C = 811;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), "CMSW", 64);
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 0;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 5;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 4;
			Global_1C0180.f_A96[4] = 6;
			Global_1C0180.f_A94 = 5;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
			Global_1C0180.f_ADC.f_1C = 6;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 6;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			Global_1C0180.f_ADC.f_1D[4] = 5;
			break;
		
		case 15:
			uParam0->f_2C = 749;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_ARM", 32);
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 2;
			Global_1C0180.f_A96[1] = 5;
			Global_1C0180.f_A96[2] = 0;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 4;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 14:
			uParam0->f_2C = 190;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == 4294967295)
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_DARTS", 32);
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 7;
			Global_1C0180.f_A96[2] = 5;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 4;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 12:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			if (unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1C0180.f_ADC.f_9), iParam4 + 1, 64);
			}
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 9;
			Global_1C0180.f_A96[2] = 7;
			Global_1C0180.f_A96[3] = 5;
			Global_1C0180.f_A96[4] = 2;
			Global_1C0180.f_A94 = 5;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			Global_1C0180.f_ADC.f_1D[4] = 5;
			break;
		
		case 87:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 9;
			Global_1C0180.f_A96[2] = 7;
			Global_1C0180.f_A96[3] = 5;
			Global_1C0180.f_A96[4] = 2;
			Global_1C0180.f_A94 = 5;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			Global_1C0180.f_ADC.f_1D[4] = 5;
			break;
		
		case 13:
			uParam0->f_2C = 912;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_ACC", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 2;
			Global_1C0180.f_A96[2] = 1;
			Global_1C0180.f_A96[3] = 3;
			Global_1C0180.f_A94 = 4;
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 4;
			Global_1C0180.f_ADC.f_1D[0] = 4;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_2C = 203;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1C0180.f_ADC.f_9), {func_203(iParam1)}, 16);
			Global_1C0180.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 7;
			Global_1C0180.f_A94 = 2;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			Global_1C0180.f_ADC.f_1C = 4;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_2C = 202;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			Global_1C0180.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 0;
			Global_1C0180.f_A96[2] = 0;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 1;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			Global_1C0180.f_ADC.f_1C = 3;
			Global_1C0180.f_ADC.f_1D[0] = 2;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 0;
			Global_1C0180.f_ADC.f_1D[3] = 0;
			break;
		
		case 80:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C0180.f_A96[0] = 3;
			Global_1C0180.f_A94 = 1;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			Global_1C0180.f_ADC.f_1C = 3;
			Global_1C0180.f_ADC.f_1D[0] = 1;
			break;
		
		case 3:
			uParam0->f_2C = 791;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 3;
			Global_1C0180.f_A94 = 4;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_2C = 1200;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 1;
				Global_1C0180.f_A96[2] = 4;
				Global_1C0180.f_A96[3] = 5;
				Global_1C0180.f_A96[4] = 6;
				Global_1C0180.f_A94 = 3;
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
				Global_1C0180.f_ADC.f_1C = 6;
				Global_1C0180.f_ADC.f_1D[0] = 5;
				Global_1C0180.f_ADC.f_1D[1] = 11;
				Global_1C0180.f_ADC.f_1D[2] = 4;
				Global_1C0180.f_ADC.f_1D[3] = 5;
				Global_1C0180.f_ADC.f_1D[4] = 5;
			}
			else if (Global_440000.f_E3 == 1)
			{
				uParam0->f_2C = 777;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					if (Global_440000.f_2 == 5)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_440000.f_2 == 5)
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 1;
				Global_1C0180.f_A96[2] = 2;
				Global_1C0180.f_A96[3] = 0;
				Global_1C0180.f_A94 = 3;
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 2;
				Global_1C0180.f_ADC.f_1D[1] = 5;
				Global_1C0180.f_ADC.f_1D[2] = 5;
				Global_1C0180.f_ADC.f_1D[3] = 5;
			}
			else
			{
				uParam0->f_2C = 780;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					if (Global_440000.f_2 == 5)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_440000.f_2 == 5)
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_202(Global_440000.f_38DB3) || func_199(Global_440000.f_38DB3))
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 0;
					Global_1C0180.f_A96[1] = 2;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A94 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 5;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else if (func_198(Global_440000.f_38DB3))
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 0;
					Global_1C0180.f_A96[1] = 2;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A94 = 2;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 5;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 0;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 2;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A94 = 3;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 5;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_2C = 795;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD0), 1);
			Global_1C0180.f_AC2[1] = 4294967295;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 11;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 85:
			uParam0->f_2C = 274;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_ADC.f_19 = 0;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 3;
			Global_1C0180.f_A94 = 2;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			Global_1C0180.f_ADC.f_1C = 3;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_2C = 965;
							break;
						
						case 9:
							uParam0->f_2C = 966;
							break;
						
						case 4:
							uParam0->f_2C = 967;
							break;
						
						case 8:
							uParam0->f_2C = 968;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 1;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 4;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 2;
					Global_1C0180.f_A94 = 4;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_2C = 969;
							break;
						
						case 2:
							uParam0->f_2C = 970;
							break;
						
						case 3:
							uParam0->f_2C = 973;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 1;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 4;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 2;
					Global_1C0180.f_A94 = 4;
					unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
					Global_1C0180.f_ADC.f_1D[0] = 4;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
					break;
				
				case 7:
					uParam0->f_2C = 971;
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 1;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 4;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 2;
					Global_1C0180.f_A94 = 4;
					unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
					Global_1C0180.f_ADC.f_1D[0] = 4;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_2C = 972;
							break;
						
						case 5:
							uParam0->f_2C = 974;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 1;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0] = 0;
					Global_1C0180.f_A96[1] = 3;
					Global_1C0180.f_A96[2] = 2;
					Global_1C0180.f_A96[3] = 1;
					Global_1C0180.f_A94 = 4;
					unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
					Global_1C0180.f_ADC.f_1D[0] = 12;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_2C = 192;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C0180.f_A96[0] = 2;
			Global_1C0180.f_A96[1] = 5;
			Global_1C0180.f_A96[2] = 4;
			Global_1C0180.f_A96[3] = 3;
			Global_1C0180.f_A94 = 4;
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1D[0] = 17;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 82:
			uParam0->f_2C = 850;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_ADC.f_19 = 0;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 4;
			Global_1C0180.f_A96[2] = 3;
			Global_1C0180.f_A96[3] = 2;
			Global_1C0180.f_A94 = 4;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1D[0] = 10;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 84:
			uParam0->f_2C = 820;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_ADC.f_19 = 0;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 5;
			Global_1C0180.f_A96[4] = 4;
			Global_1C0180.f_A96[5] = 3;
			Global_1C0180.f_A94 = 6;
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[5]);
			Global_1C0180.f_ADC.f_1D[0] = 4;
			Global_1C0180.f_ADC.f_1D[1] = 9;
			Global_1C0180.f_ADC.f_1D[2] = 4;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			Global_1C0180.f_ADC.f_1D[4] = 5;
			Global_1C0180.f_ADC.f_1D[5] = 5;
			break;
		
		case 86:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_ADC.f_19 = 0;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C0180.f_A96[0] = 2;
			Global_1C0180.f_A94 = 1;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			Global_1C0180.f_ADC.f_1C = 3;
			Global_1C0180.f_ADC.f_1D[0] = 1;
			break;
		
		case 91:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C0180.f_ADC = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
				Global_1C0180.f_A96[0] = 3;
				Global_1C0180.f_A96[1] = 4;
				Global_1C0180.f_A96[2] = 1;
				Global_1C0180.f_A96[3] = 0;
				Global_1C0180.f_A95 = 6;
				Global_1C0180.f_A94 = 2;
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				Global_1C0180.f_ADC.f_1C = 4;
				Global_1C0180.f_ADC.f_1D[0] = 1;
				Global_1C0180.f_ADC.f_1D[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
				Global_1C0180.f_A96[0] = 3;
				Global_1C0180.f_A96[1] = 2;
				Global_1C0180.f_A96[2] = 4;
				Global_1C0180.f_A96[3] = 1;
				Global_1C0180.f_A95 = 4;
				Global_1C0180.f_A94 = 3;
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 1;
				Global_1C0180.f_ADC.f_1D[1] = 1;
				Global_1C0180.f_ADC.f_1D[2] = 3;
			}
			Global_1C0180.f_ADB = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_2C = 1201;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 3;
			MemCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), {func_197(iParam4)}, 8);
			Global_1C0180.f_A94 = 4;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1C0180.f_ADC.f_1D[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1C0180.f_ADC.f_1D[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_A94 = 4;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 889:
			uParam0->f_2C = 1202;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 3;
			Global_1C0180.f_A96[3] = 4;
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_A94 = 4;
			Global_1C0180.f_ADC.f_1C = 5;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 4;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 21;
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1C0180.f_A94)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
		{
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD2), iVar2);
		}
		iVar2++;
	}
	Global_1C0180.f_B0A = func_196(Var0, uParam0->f_2C, iParam1, iParam4, iParam5, bParam6);
}

int func_196(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_161(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

struct<6> func_197(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_198(int iParam0)
{
	return iParam0 == 74;
}

var func_199(int iParam0)
{
	return (func_201(iParam0) || func_200(iParam0));
}

bool func_200(int iParam0)
{
	return iParam0 == 44;
}

bool func_201(int iParam0)
{
	return iParam0 == 45;
}

bool func_202(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_203(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_204()
{
	if (((((((((((Global_440000.f_127B9 == 1 || Global_440000.f_127B9 == 3) || Global_440000.f_127B9 == 5) || Global_440000.f_127B9 == 7) || Global_440000.f_127B9 == 19) || Global_440000.f_127B9 == 8) || Global_440000.f_127B9 == 9) || Global_440000.f_127B9 == 11) || Global_440000.f_127B9 == 13) || Global_440000.f_127B9 == 21) || Global_440000.f_127B9 == 23) || Global_440000.f_127B9 == 25)
	{
		return 1;
	}
	return 0;
}

bool func_205()
{
	return unk_0x58424C49F8924842();
}

void func_206(int iParam0, bool bParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (*iParam0 == 0)
	{
		*iParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	iParam0->f_1 = 0;
	iParam0->f_3[0] = iParam2;
	iParam0->f_3[1] = iParam4;
	iParam0->f_3[2] = iParam6;
	iParam0->f_3[3] = iParam8;
	iParam0->f_3[4] = 361;
	iParam0->f_3[5] = 361;
	iParam0->f_3[6] = 361;
	iParam0->f_3[7] = 361;
	iParam0->f_C[0] = func_207(iParam2 != 361, unk_0xF59058FCB716F903(2, iParam2, true), "");
	iParam0->f_C[1] = func_207(iParam4 != 361, unk_0xF59058FCB716F903(2, iParam4, true), "");
	iParam0->f_C[2] = func_207(iParam6 != 361, unk_0xF59058FCB716F903(2, iParam6, true), "");
	iParam0->f_C[3] = func_207(iParam8 != 361, unk_0xF59058FCB716F903(2, iParam8, true), "");
	iParam0->f_C[4] = 0;
	iParam0->f_C[5] = 0;
	iParam0->f_C[6] = 0;
	iParam0->f_C[7] = 0;
	iParam0->f_15[0] = sParam3;
	iParam0->f_15[1] = sParam5;
	iParam0->f_15[2] = iParam7;
	iParam0->f_15[3] = iParam9;
	if (bParam1)
	{
		iParam0->f_2 = 1;
	}
	else
	{
		iParam0->f_2 = 0;
	}
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		func_21(&(iParam0->f_1), 1);
	}
}

char* func_207(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_208()
{
	func_209(unk_0x16F2683693E537C9(), "GENERIC_CURSE_MED", 24);
}

void func_209(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_210(iParam2), 1);
}

int func_210(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_211()
{
	if (func_46(0))
	{
		return 0;
	}
	if (Global_181DF.f_8)
	{
		if (Global_181DF.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_181DF.f_A > 1)
	{
		return 0;
	}
	Global_181DF.f_A++;
	return 1;
}

void func_212(int iParam0, int iParam1)
{
	Global_181DF.f_7 = iParam0;
	Global_181DF.f_8 = iParam1;
}

void func_213(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(iParam0->f_25B), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(iParam0->f_25B), iParam1);
	}
}

int func_214(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4)
{
	int iVar0;
	
	if (iParam1 > 1 && *uParam0 == (iParam1 - 1))
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = 0;
	}
	*uParam3 = 0;
	*uParam3 = (*uParam3 + SYSTEM::CEIL(((fParam4 * 50f) + (fParam4 * IntToFloat(iVar0)))));
	*uParam3 = (*uParam3 + SYSTEM::CEIL(((fParam4 * 1.5f) * SYSTEM::TO_FLOAT(*uParam2))));
	func_215(func_422(), 1, *uParam3, 0, 0);
	return 1;
}

void func_215(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_250(iParam0) == 3)
	{
		return;
	}
	if (func_250(iParam0) == 4)
	{
		return;
	}
	func_216(func_250(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6FB46C25CCB7E6D5(iVar1, &iVar0, 4294967295);
		iVar0 = (iVar0 + iParam2);
		unk_0xCDC520E5E48E63D9(iVar1, iVar0, 1);
	}
}

int func_216(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_249();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_357(99, 1);
					func_248(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_248(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_248(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_232(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_227(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_248(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_248(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_248(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_227(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_248(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_248(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_248(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_248(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_248(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_248(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_248(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_248(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_248(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x7CF4675EC2B8ED0B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_248(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_248(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_248(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_248(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_248(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_248(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_227(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_248(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_248(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_248(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_248(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_248(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_248(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_226(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_357(95, iParam3);
					break;
				
				case 1:
					func_357(97, iParam3);
					break;
				
				case 2:
					func_357(96, iParam3);
					break;
			}
			func_357(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_219(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_219(iVar1);
	}
	iVar5 = (Global_E53E[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_E53E[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_E53E[iVar2] = 2147483647;
				}
				else
				{
					Global_E53E[iVar2] = (Global_E53E[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_248(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_248(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_248(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_E53E[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_E53E[iVar2];
			Global_E53E[iVar2] = (Global_E53E[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/]++;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1++;
		if (Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_218(iParam0);
	if (Global_A1D7 == 15)
	{
		func_217(0);
	}
	return 1;
}

void func_217(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_E546[iVar0 /*3*/][0] = Global_1B416.f_504F[iVar0];
		Global_E546.f_1F[iVar0 /*3*/][0] = Global_1B416.f_504F.f_B[iVar0];
		Global_E546.f_3E[iVar0 /*3*/][0] = Global_1B416.f_504F.f_16[iVar0];
		Global_E546.f_5D[iVar0 /*3*/][0] = Global_1B416.f_504F.f_21[iVar0];
		Global_E546.f_7C[iVar0 /*3*/][0] = Global_1B416.f_504F.f_2C[iVar0];
		Global_E546.f_9B[iVar0 /*3*/][0] = Global_1B416.f_504F.f_37[iVar0];
		Global_E546.f_BA[iVar0 /*3*/][0] = Global_1B416.f_504F.f_42[iVar0];
		Global_E546.f_D9[iVar0 /*3*/][0] = Global_1B416.f_504F.f_4D[iVar0];
		Global_E546.f_F8[iVar0 /*3*/][0] = Global_1B416.f_504F.f_58[iVar0];
		if (!bParam0)
		{
			Global_E546[iVar0 /*3*/][1] = Global_1B416.f_504F[iVar0];
			Global_E546.f_1F[iVar0 /*3*/][1] = Global_1B416.f_504F.f_B[iVar0];
			Global_E546.f_3E[iVar0 /*3*/][1] = Global_1B416.f_504F.f_16[iVar0];
			Global_E546.f_5D[iVar0 /*3*/][1] = Global_1B416.f_504F.f_21[iVar0];
			Global_E546.f_7C[iVar0 /*3*/][1] = Global_1B416.f_504F.f_2C[iVar0];
			Global_E546.f_9B[iVar0 /*3*/][1] = Global_1B416.f_504F.f_37[iVar0];
			Global_E546.f_BA[iVar0 /*3*/][1] = Global_1B416.f_504F.f_42[iVar0];
			Global_E546.f_D9[iVar0 /*3*/][1] = Global_1B416.f_504F.f_4D[iVar0];
			Global_E546.f_F8[iVar0 /*3*/][1] = Global_1B416.f_504F.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_E53E[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xCDC520E5E48E63D9(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xCDC520E5E48E63D9(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xCDC520E5E48E63D9(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_219(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_225(129, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_225(135, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_225(136, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_225(137, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_222(8269, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_222(8270, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_222(8271, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_222(8272, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_222(8273, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_222(8274, 0, 4294967295, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0))
		{
			bVar0 = true;
			unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_221() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_221() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_220(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_221()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_222(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_223(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_223(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_224();
		if (iVar1 > 4294967295)
		{
			Global_26E1B2 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_26E1B2 = 1;
		}
	}
	return iVar0;
}

int func_224()
{
	return Global_1407E9;
}

int func_225(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_224();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_226(int iParam0)
{
	func_357(93, iParam0);
	func_357(29, iParam0);
	func_357(30, iParam0);
}

bool func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_229(129, 4294967295, 4294967295);
	}
	if (iParam0 == 9)
	{
		return func_229(135, 4294967295, 4294967295);
	}
	if (iParam0 == 10)
	{
		return func_229(136, 4294967295, 4294967295);
	}
	if (iParam0 == 11)
	{
		return func_229(137, 4294967295, 4294967295);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_228(8269, 4294967295, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_228(8270, 4294967295, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_228(8271, 4294967295, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_228(8272, 4294967295, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_228(8273, 4294967295, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_228(8274, 4294967295, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_221() /*10930*/].f_181E.f_A, iParam0);
}

int func_228(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_223(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_229(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_224();
	}
	iVar1 = func_231(iParam0, iParam1);
	uVar2 = func_230(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_231(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_224();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_232(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp0_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp1_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp2_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6FB46C25CCB7E6D5(joaat("num_cash_spent"), &iVar2, 4294967295);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xCDC520E5E48E63D9(joaat("num_cash_spent"), iVar1, 1);
		func_247(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_233(27, 1);
	return 1;
}

int func_233(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_234(iParam0, iParam1);
}

int func_234(int iParam0, int iParam1)
{
	if (func_246(14) && !func_245(iParam0))
	{
		return 0;
	}
	if (unk_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_7929 != 0 && !Global_12B4E)
	{
		return 0;
	}
	if (func_244(&Global_4127F1))
	{
		if (func_242(&Global_4127F1, iParam0))
		{
			return 0;
		}
		if (func_235(&Global_4127F1, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (unk_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_235(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_246(14) && !func_245(iParam1))
	{
		return 0;
	}
	if (func_242(uParam0, iParam1))
	{
		return 0;
	}
	if (func_241(uParam0) < 0f)
	{
		func_240(uParam0, 0);
	}
	func_238(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_236(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_236(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_246(14) && !func_245(iParam1))
	{
		return 0;
	}
	if (func_242(uParam0, iParam1))
	{
		return 0;
	}
	if (func_241(uParam0) < 0f)
	{
		func_240(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_237(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_237(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_238(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_239(uParam0, iVar0);
		iVar0++;
	}
	func_240(uParam0, (Global_4127F0 - 0.5f));
}

void func_239(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_240(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_241(var uParam0)
{
	return uParam0->f_50;
}

bool func_242(var uParam0, int iParam1)
{
	return func_243(uParam0, iParam1) != 4294967295;
}

int func_243(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool func_244(var uParam0)
{
	return uParam0->f_4F == 1;
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_246(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0;
}

void func_248(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_249()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &iVar0, 4294967295);
		if (!Global_E53E[0] == iVar0)
		{
			Global_E53E[0] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &iVar0, 4294967295);
		if (!Global_E53E[1] == iVar0)
		{
			Global_E53E[1] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &iVar0, 4294967295);
		if (!Global_E53E[2] == iVar0)
		{
			Global_E53E[2] = iVar0;
		}
	}
}

int func_250(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

void func_251(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_225((891 + iParam0), 1, 4294967295, 1);
	}
	bVar0 = true;
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 11 || Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_1B416.f_27CD[iParam0 /*12*/].f_5 = 1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = iParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_252();
	}
}

void func_252()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_1B30E = 0;
	Global_1B30F = 0;
	Global_1B310 = 0;
	Global_1B311 = 0;
	Global_1B312 = 0;
	Global_1B313 = 0;
	Global_1B314 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_1B416.f_27CD.f_F0D;
	Global_1B416.f_27CD.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_1B416.f_27CD[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_1B416.f_27CD[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_1B30E++;
					fVar1 = (fVar1 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_1B30F++;
					fVar2 = (fVar2 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_1B310++;
					fVar3 = (fVar3 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_1B311++;
					fVar4 = (fVar4 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_1B312++;
					fVar5 = (fVar5 + (Global_1B416.f_27CD[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_1B313++;
					fVar6 = (fVar6 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_1B314++;
					fVar7 = (fVar7 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_1B2FD > 0)
	{
		if (Global_1B30E == Global_1B2FD)
		{
			fVar1 = 55f;
		}
	}
	if (Global_1B2FE > 0)
	{
		if (Global_1B30F == Global_1B2FE)
		{
			fVar2 = 10f;
		}
	}
	if (Global_1B2FF > 0)
	{
		if (Global_1B310 == Global_1B2FF)
		{
			fVar3 = 0f;
		}
	}
	if (Global_1B300 > 0)
	{
		if (Global_1B311 == Global_1B300)
		{
			fVar4 = 10f;
		}
	}
	if (Global_1B301 > 0)
	{
		if (((Global_1B312 == Global_1B301 || (Global_1B301 * 10 / Global_1B312) < 41) || Global_1B312 > Global_1B304) || Global_1B312 == Global_1B304)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F10, 14))
			{
				if (Global_1B312 == Global_1B301)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_1B301, 0);
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_1B302 > 0)
	{
		if (Global_1B313 == Global_1B302)
		{
			fVar6 = 15f;
		}
	}
	if (Global_1B303 > 0)
	{
		if (Global_1B314 == Global_1B303)
		{
			fVar7 = 5f;
		}
	}
	Global_1B416.f_27CD.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_1B312 > Global_1B304 || Global_1B312 == Global_1B304)
	{
		iVar9 = Global_1B304;
	}
	else
	{
		iVar9 = Global_1B312;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_1B30E, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_1B2FD, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_1B30F, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_1B2FE, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_1B310, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_1B2FF, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_1B311, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_1B300, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_1B304, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_1B314 + Global_1B313), 1);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_1B303 + Global_1B302), 1);
	Global_1B315 = (Global_1B30E * 100 / Global_1B2FD);
	Global_1B317 = ((Global_1B310 + Global_1B30F) * 100 / (Global_1B2FF + Global_1B2FE));
	Global_1B316 = ((Global_1B311 + iVar9) * 100 / (Global_1B300 + Global_1B304));
	Global_1B318 = ((Global_1B313 + Global_1B314) * 100 / (Global_1B302 + Global_1B303));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_1B416.f_27CD.f_F0D, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_1B315, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_1B316, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_1B317, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D))
	{
		func_247(13, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_253() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0;
				}
				if (!Global_F048)
				{
					func_211();
				}
			}
		}
	}
}

int func_253()
{
	return Global_7830;
}

void func_254(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return;
	}
	if (Global_1B416.f_2378.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_1B416.f_2378.f_63.f_3A[iParam0] = iParam1;
}

int func_255(int iParam0)
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_256(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 20);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 20);
	}
	if (Global_79A7 == 1)
	{
		Global_79A8 = 1;
	}
	Global_79A7 = 1;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 20);
}

bool func_257(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(iParam0->f_25B, iParam1);
}

int func_258()
{
	return unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_259(vector3 vParam0, int iParam1, int iParam2, int iParam3, var uParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar18;
	
	iVar0 = unk_0x16F2683693E537C9();
	iVar1 = 0;
	bVar2 = unk_0xEB6A8945D1AC98A1(iVar0);
	if (bVar2)
	{
		*iParam3 = 2;
		return;
	}
	iVar3 = unk_0x75B806D0A76CB67D(iVar0);
	iVar4 = unk_0x50D59C88203E680A(iVar0);
	bVar5 = unk_0xE934758D273C899A(iVar0);
	bVar6 = unk_0x869EFD0BC0868856(iVar0);
	bVar7 = unk_0xC844350D5D58C99A(iParam1);
	bVar8 = (bVar7 && unk_0x64E716CF8C283BF5(iVar0, iParam1));
	bVar9 = ((bVar7 && !unk_0xEB6A8945D1AC98A1(iParam2)) && unk_0x1B3D109B39CC2C89(iVar0, iParam2));
	bVar10 = (bVar7 && unk_0x565509D116400807(iParam1, &iVar1));
	bVar11 = ((bVar10 && !unk_0x437347B10A200C4B(iVar1, 0)) && unk_0x64E716CF8C283BF5(iVar0, iVar1));
	bVar12 = (!bVar7 && !func_425(vParam0));
	if (bVar12)
	{
		vVar13 = { unk_0x68F4C0EC296D3901(iVar0, true) };
		vVar14 = { vVar13 - vParam0 };
		fVar15 = SYSTEM::SQRT(((vVar14.x * vVar14.x) + (vVar14.y * vVar14.y)));
		*fParam5 = fVar15;
		if ((vVar14.z < 5f && vVar14.z > -2f) && fVar15 < 15f)
		{
			*uParam4 = func_262(SYSTEM::CEIL(((100f * (15f - fVar15)) / 15f)) + 4, 0, 100);
			*iParam3 = 1;
		}
		else
		{
			*iParam3 = 3;
		}
	}
	if (bVar7)
	{
		if (func_260(iParam1, iParam2))
		{
			*fParam5 = 0f;
			*uParam4 = 100;
			*iParam3 = 1;
		}
		else
		{
			*uParam4 = 0;
			*iParam3 = 3;
		}
	}
	if (bVar10)
	{
		unk_0x565509D116400807(iParam1, &iVar16);
		vVar17 = { unk_0x68F4C0EC296D3901(iVar0, true) };
		vVar18 = { unk_0x68F4C0EC296D3901(iVar16, true) };
	}
}

int func_260(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	
	if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xC844350D5D58C99A(iParam0)) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		if (func_361(unk_0x134B62B726CEC8E6(iParam0)))
		{
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar1 = unk_0x5466F584D98DBA09(iParam0, iVar4);
				if (unk_0xC844350D5D58C99A(iVar1))
				{
					vVar2 = { unk_0x68F4C0EC296D3901(iParam0, true) };
					if (unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), iVar1))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
		if (unk_0xC844350D5D58C99A(iParam0))
		{
			unk_0x565509D116400807(iParam0, &iVar0);
			if ((unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), iParam0) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0)) || ((unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0)) && unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam1)))
			{
				if (vVar2.z < vVar3.z)
				{
					return 1;
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), iVar0))
				{
					return 1;
				}
				else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iVar0))
				{
					vVar5 = { unk_0x5293C88BD2F4DE13(iVar0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) };
					vVar5.x = func_261((unk_0x755FF954DAE327E1(vVar5.x) - 1.305f), 0f);
					if (vVar5.y >= 0f)
					{
						vVar5.y = func_261((vVar5.y - 5.98f), 0f);
					}
					else
					{
						vVar5.y = func_261((-vVar5.y - 6.21f), 0f);
					}
					if (vVar5.y == 0f && vVar5.x == 0f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_261(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_262(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_263(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	float fVar0;
	int iVar1;
	
	if (!func_456(&iParam1))
	{
		return;
	}
	fVar0 = func_455(&iParam1);
	if (fVar0 > 1.4f)
	{
		return;
	}
	iVar1 = (170 - SYSTEM::CEIL(((170f * fVar0) / 1.4f)));
	unk_0x922D0EFFF8F2403B(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, false);
	unk_0x922D0EFFF8F2403B(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, false);
	unk_0x922D0EFFF8F2403B(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, false);
}

void func_264(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_362(uParam1);
	if (func_459(func_460(iParam2)))
	{
		if (!func_257(iParam0, 0))
		{
			if (iParam3 > 1)
			{
				func_334("BJ_MG_MTOBJ", 7500, 1);
			}
			else if (iVar0 != 0)
			{
				if (func_361(iVar0))
				{
					func_334("BJ_MG_TRAIN", 7500, 1);
				}
				else
				{
					func_334("BJ_MG_BOAT", 7500, 1);
				}
			}
			else
			{
				func_334("BJ_MG_STOBJ", 7500, 1);
			}
			func_213(iParam0, 0, 1);
		}
	}
	if (func_331("BJ_FALLHLP") && Global_56C3.f_87)
	{
		unk_0xA37A90C62806D848(1);
		func_213(iParam0, 1, 0);
	}
	if (!func_257(iParam0, 1) && !Global_56C3.f_87)
	{
		unk_0x1E3A202C24F57DA6(0);
		unk_0xA37A90C62806D848(1);
		func_332("BJ_FALLHLP", 4294967295);
		func_213(iParam0, 1, 1);
	}
	else if (!func_257(iParam0, 2))
	{
		if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 1 || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
		{
			unk_0xA37A90C62806D848(1);
			if (unk_0x91E3F625EF57450D(0))
			{
				func_332("BJ_PARAHLP_KM", 10000);
			}
			else
			{
				func_332("BJ_PARAHLP", 10000);
			}
			func_213(iParam0, 2, 1);
		}
	}
	else if (!func_257(iParam0, 3))
	{
		if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 4294967295 || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 3)
		{
			unk_0xA37A90C62806D848(1);
			func_213(iParam0, 3, 1);
		}
	}
}

void func_265(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	var uVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x0FF5573D0492BF97(unk_0x16F2683693E537C9())))
		{
			vVar0 = { unk_0x698705F356FA8F72(unk_0x0FF5573D0492BF97(unk_0x16F2683693E537C9()), 0) };
		}
		else
		{
			vVar0 = { unk_0x698705F356FA8F72(unk_0x16F2683693E537C9(), 1) };
		}
		fVar7 = vVar0.y;
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		vVar1.z = 0f;
	}
	if (unk_0xC844350D5D58C99A(*iParam0) && unk_0xDF1306B443CD3D15(*iParam0, 0))
	{
		vVar2 = { unk_0x68F4C0EC296D3901(*iParam0, true) };
		vVar2.z = 0f;
		vVar6 = { unk_0x56E9E0FD5ACCD35D(*iParam0) };
	}
	if (unk_0xDF1306B443CD3D15(*iParam0, 0))
	{
		unk_0x61890296D3AA030F(*iParam0, &vVar3, &uVar5, &uVar5, &uVar5);
		vVar3.z = 0f;
	}
	vVar4 = { vVar1 - vVar2 };
	vVar4.z = 0f;
	fVar9 = unk_0x755FF954DAE327E1(func_269(vVar4, vVar3));
	if (func_268(*iParam0))
	{
		fVar8 = func_49((fVar7 - (fVar9 / fVar7)), 2f, 3f);
	}
	else
	{
		fVar8 = func_49((fVar7 + (fVar9 / fVar7)), 3f, 10f);
	}
	fVar10 = func_49(func_266(vVar6.y, fVar8, 0.5f), vVar6.y, fVar7);
	vVar6.y = func_266(vVar6.y, fVar8, 0.5f);
	if (((unk_0xC844350D5D58C99A(*iParam0) && unk_0xDF1306B443CD3D15(*iParam0, 0)) && vVar6.y > 2f) && vVar6.y < unk_0xD890711CFD5AF100(*iParam0))
	{
		unk_0xE76AF7E1683414C6(unk_0xA30B8362589C124A(*iParam0, 4294967295, 0), fVar10);
	}
}

float func_266(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - SYSTEM::COS(func_267((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_267(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_268(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		unk_0x61890296D3AA030F(iParam0, &vVar4, &uVar2, &uVar2, &vVar1);
	}
	vVar3 = { vVar0 - vVar1 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_269(vVar3, vVar4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

float func_269(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

float func_270(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, bParam2);
}

Vector3 func_271(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0xE82754C349C7B581(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_272(iParam0))
	{
		unk_0xA47B46945FF6DE74(iParam0, vParam1, 1, false, 0, 1);
	}
	return vParam1;
}

bool func_272(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0);
}

void func_273(int iParam0, var uParam1)
{
	var uVar0[6];
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	if (!func_456(iParam0))
	{
		func_480(iParam0);
	}
	if (func_455(iParam0) < 1f)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		return;
	}
	iVar4 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, 4294967295);
	iVar5 = 0;
	while (iVar5 < 6)
	{
		if ((unk_0xC844350D5D58C99A((*uParam1)[iVar5]) && !unk_0x437347B10A200C4B((*uParam1)[iVar5], 0)) && !unk_0xEB6A8945D1AC98A1((*uParam1)[iVar5]))
		{
			if (func_275((*uParam1)[iVar5], &uVar0) == 4294967295)
			{
				func_274(uParam1[iVar5]);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) - unk_0x68F4C0EC296D3901((*uParam1)[iVar5], true) };
				fVar3 = ((vVar2.x * vVar2.x) + (vVar2.y * vVar2.y));
				if (vVar2.z * vVar2.z) < (3f * fVar3)
				{
					func_274(uParam1[iVar5]);
				}
			}
		}
		iVar5++;
	}
	if (iVar4 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if ((((unk_0xC844350D5D58C99A(uVar0[iVar5]) && !unk_0x437347B10A200C4B(uVar0[iVar5], 0)) && !unk_0xEB6A8945D1AC98A1(uVar0[iVar5])) && unk_0x232B70EDA3C8983B(uVar0[iVar5])) && !unk_0x405E212DDE472467(uVar0[iVar5], 1))
			{
				if (func_275(uVar0[iVar5], uParam1) == 4294967295)
				{
					vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) - unk_0x68F4C0EC296D3901(uVar0[iVar5], true) };
					fVar3 = ((vVar2.x * vVar2.x) + (vVar2.y * vVar2.y));
					if (vVar2.z * vVar2.z) > (3f * fVar3)
					{
						bVar7 = false;
						iVar6 = 0;
						while (iVar6 < *uParam1)
						{
							if (!unk_0xC844350D5D58C99A((*uParam1)[iVar6]) || unk_0xEB6A8945D1AC98A1((*uParam1)[iVar6]))
							{
								(*uParam1)[iVar6] = uVar0[iVar5];
								unk_0xDD353D0E9C789D0E(&iVar1);
								unk_0xC6EB89C59F2AF6B8(0, "oddjobs@basejump@", "ped_a_intro", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
								unk_0xC6EB89C59F2AF6B8(0, "oddjobs@basejump@", "ped_a_loop", 8f, -8f, 4294967295, 1, 0, 0, 0, 0);
								unk_0x75ABDC5F81978924(iVar1);
								unk_0x78ADC381772E3D54(uVar0[iVar5], iVar1);
								unk_0xF82EA857DA10E0CD(&iVar1);
								iVar6 = *uParam1;
								bVar7 = true;
							}
							iVar6++;
						}
						if (!bVar7)
						{
							return;
						}
					}
				}
			}
			iVar5++;
		}
	}
}

void func_274(var uParam0)
{
	unk_0xA3BF0AA5A2608191(*uParam0);
	unk_0xC6EB89C59F2AF6B8(*uParam0, "oddjobs@basejump@", "ped_a_exit", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
	*uParam0 = 0;
}

int func_275(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (unk_0xC844350D5D58C99A((*uParam1)[iVar0]))
			{
				if (iParam0 == (*uParam1)[iVar0])
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return 4294967295;
}

void func_276(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, int iParam35, var uParam36)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	unk_0x4EBF4289AABAE861(*uParam36);
	func_370();
	func_369();
	func_490();
	func_44(&(iParam2->f_1A));
	*iParam19 = 0;
	*iParam21 = 0;
	*uParam25 = { 0f, 0f, 0f };
	*iParam22 = 4294967295;
	*uParam29 = 0;
	*bParam30 = 0;
	func_321(iParam2);
	if (func_456(iParam24))
	{
		func_452(iParam24);
	}
	if (func_456(iParam23))
	{
		func_452(iParam23);
	}
	if (unk_0xC844350D5D58C99A(*iParam7))
	{
		if (func_361(func_362(uParam0)))
		{
			unk_0x86AA47F87DFBA4D0(iParam7);
		}
		else
		{
			if (!unk_0x437347B10A200C4B(*iParam7, 0))
			{
				iVar1 = unk_0xA30B8362589C124A(*iParam7, 4294967295, 0);
				if (unk_0xC844350D5D58C99A(iVar1))
				{
					unk_0xEBA53F35D0085654(&iVar1);
				}
			}
			unk_0xA954465BA6FDEFE2(iParam7);
		}
	}
	iVar2 = 0;
	while (iVar2 < *iParam5)
	{
		if (unk_0xC844350D5D58C99A((*iParam5)[iVar2]) && !unk_0x437347B10A200C4B((*iParam5)[iVar2], 0))
		{
			unk_0xA3BF0AA5A2608191((*iParam5)[iVar2]);
			(*iParam5)[iVar2] = 0;
		}
		iVar2++;
	}
	if (unk_0xC844350D5D58C99A(*iParam8))
	{
		unk_0xA954465BA6FDEFE2(iParam8);
	}
	if (unk_0xC844350D5D58C99A(*iParam9))
	{
		if (!func_320(*iParam9) && unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(*iParam9, 4294967295, 0)))
		{
			iVar3 = unk_0xA30B8362589C124A(*iParam9, 4294967295, 0);
			unk_0xEBA53F35D0085654(&iVar3);
		}
		unk_0xA954465BA6FDEFE2(iParam9);
	}
	if (!unk_0x437347B10A200C4B(*iParam4, 0))
	{
		unk_0x6DAD7906B73F064D(iParam4);
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			unk_0x975C58E0FC4955A9(unk_0x16F2683693E537C9(), 1);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iVar0, true) + Vector(0f, 0f, 2f), 1, false, 0, 1);
			if (unk_0xC844350D5D58C99A(*iParam6) && iVar0 == *iParam6)
			{
				unk_0x7EA00EB725DAA91D(*iParam6);
				func_280(*iParam6, func_319(iParam20), func_318(iParam20), 24, 0);
				unk_0x37806EBF326ECEE9(iVar0, 0f, 0f, 0f);
				unk_0xA47B46945FF6DE74(iVar0, func_319(iParam20), 1, false, 0, 1);
				unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
				unk_0xD8F6A53F4799FAFE(iVar0, func_318(iParam20));
			}
			else
			{
				if (!unk_0xAF6690C489CC6203(iVar0))
				{
					unk_0x73270B3C9CC833FD(iVar0, true, 0);
				}
				unk_0xA954465BA6FDEFE2(&iVar0);
			}
		}
	}
	*iParam15 = 0;
	*iParam17 = 0;
	*iParam18 = 1;
	*uParam26 = 0f;
	*uParam27 = 0f;
	*uParam28 = 0f;
	*bParam31 = 0;
	*bParam32 = 0;
	*bParam33 = 0;
	*bParam34 = 0;
	*iParam35 = 0;
	if (*iParam16 > 4294967295)
	{
		unk_0xE223EB8FE6F8CC15(*iParam11);
		unk_0xE223EB8FE6F8CC15(*iParam12);
		*iParam16 = 4294967295;
	}
	if (unk_0xE4EDC4B0E92C078B(iParam13))
	{
		unk_0x142CC44DB769B57E(&iParam13);
	}
	if (unk_0xE4EDC4B0E92C078B(iParam14))
	{
		unk_0x142CC44DB769B57E(&iParam14);
	}
	iVar4 = 0;
	while (iVar4 < *iParam10)
	{
		if (unk_0xC844350D5D58C99A((*iParam10)[iVar4]) && !unk_0x437347B10A200C4B((*iParam10)[iVar4], 0))
		{
			unk_0xF8CF67C6E39C23A9((*iParam10)[iVar4], 1f);
			unk_0xE8832A9E16A57A1F((*iParam10)[iVar4], false, 1);
		}
		(*iParam10)[iVar4] = 0;
		iVar4++;
	}
	func_279(iParam2);
	*iParam3 = 0;
	func_278();
	func_277();
	unk_0x53491B90E4FD0E56(800);
}

void func_277()
{
	Global_78C0 = 1;
}

void func_278()
{
	int iVar0;
	
	Local_66.f_42 = 4294967295;
	Local_66.f_43 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_66.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_66.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_66.f_9[iVar0 /*7*/].f_5 = 0;
		Local_66.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_66.f_5 = 0;
	Local_66.f_5.f_1 = -1f;
	Local_66.f_5.f_2 = 0;
	Local_66 = 0;
	Local_66.f_1 = 0;
}

void func_279(int iParam0)
{
	iParam0->f_25B = 0;
}

void func_280(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[25]) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[25], 0))
			{
				if (Global_126B1.f_1E4[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x56E1CD81AE700E98(iParam0) || unk_0x134B62B726CEC8E6(iParam0) == joaat("bus")) || unk_0x134B62B726CEC8E6(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_317(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_312(iParam0, &Var0);
		if (func_311(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x68F4C0EC296D3901(iParam0, true) };
			fParam2 = unk_0xD9522BA9E27E1349(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != joaat("vehicle_gen_controller"))
			{
				Global_12A8D = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
			}
		}
		func_304(iParam3, &Var0, vParam1, fParam2, func_310(iParam0));
		func_281(iParam3, iParam0, 0);
	}
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (!func_301(&(Global_126B1.f_22B[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0 /*21*/].f_9, 12) && !unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0 /*21*/].f_9, 10))
	{
		if (Global_126B1.f_22B[0 /*21*/].f_4 != unk_0x134B62B726CEC8E6(iParam1))
		{
			return;
		}
	}
	if (Global_12A3C != 4294967295 && Global_12A3C != iParam0)
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (unk_0xDF1306B443CD3D15(iParam1, 0))
		{
			if (!unk_0xAF6690C489CC6203(iParam1))
			{
				unk_0x73270B3C9CC833FD(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_1B416.f_7FE8.f_12C1 = func_514();
			}
			if (iParam1 != Global_126B1.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_300(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0)) && iParam1 != iVar0)
					{
						func_282(iVar0, 145);
					}
				}
				Global_12A3B = iParam1;
				Global_12A3C = iParam0;
				Global_12A3D = iParam2;
			}
		}
	}
}

void func_282(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_283(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, 4294967295, 0);
		if (!unk_0xC844350D5D58C99A(iVar0))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, 4294967295);
		}
		if (unk_0xC844350D5D58C99A(iVar0) && !unk_0xEB6A8945D1AC98A1(iVar0))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_1B416.f_936.f_21B.f_10E1;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x134B62B726CEC8E6(iParam0) == Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!unk_0xEA6BC48857E0AC4C(&(Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0;
						Global_1B416.f_7FE8.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_1B416.f_7FE8.f_15D6 = iParam1;
	Global_12A3A = iParam0;
	Global_1B416.f_7FE8.f_15D4 = 1;
	func_312(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

int func_283(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0)) || func_298(iParam0, 0, 0)) || func_298(iParam0, 1, 0)) || func_298(iParam0, 2, 0)) || func_310(iParam0) != 145) || func_297(iParam0)) || func_296(iParam0)) || func_295(iParam0)) || func_294(iParam0)) || !func_284(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_296(iParam0))
		{
		}
		if (func_296(iParam0))
		{
		}
		if (func_298(iParam0, 0, 0))
		{
		}
		if (func_298(iParam0, 1, 0))
		{
		}
		if (func_298(iParam0, 2, 0))
		{
		}
		if (func_310(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_284(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_285(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xA7082C42B8809BF2(iParam0) || unk_0xC41A9202669A24C4(iParam0)) || unk_0xAFB8495D36825275(iParam0)) || unk_0xA7D7011F9888A365(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_285(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x8CD06866876216F2()) || (iParam0 == joaat("buffalo3") && !unk_0x8CD06866876216F2())) || (iParam0 == joaat("gauntlet2") && !unk_0x8CD06866876216F2())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x8CD06866876216F2()))
	{
		if (!func_293())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_292() && !func_291()) && !func_290()) && !func_289()) && !func_293())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_290())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_288(iParam0))
		{
			return 0;
		}
	}
	if (!func_286(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_286(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_287())
	{
		return 1;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_287()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_288(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_26596A)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_40001.f_19C7 && !Global_40001.f_327A) && iVar1 < Global_40001.f_327B)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_40001.f_378E && iVar1 < Global_40001.f_379A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_40001.f_378A && iVar1 < Global_40001.f_3796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_40001.f_378B && iVar1 < Global_40001.f_3797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_40001.f_378C && iVar1 < Global_40001.f_3798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_40001.f_378D && iVar1 < Global_40001.f_3799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_40001.f_378F && iVar1 < Global_40001.f_379B)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_40001.f_3790 && iVar1 < Global_40001.f_3793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_40001.f_3791 && iVar1 < Global_40001.f_3794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_40001.f_3792 && iVar1 < Global_40001.f_3795)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_40001.f_41D5 && iVar1 < Global_40001.f_41B2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_40001.f_41D0 && iVar1 < Global_40001.f_41AD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_40001.f_41D4 && iVar1 < Global_40001.f_41B1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_40001.f_41D3 && iVar1 < Global_40001.f_41B0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_40001.f_41CD && iVar1 < Global_40001.f_41AA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_40001.f_41CE && iVar1 < Global_40001.f_41AB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_40001.f_41D1 && iVar1 < Global_40001.f_41AE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_40001.f_41D2 && iVar1 < Global_40001.f_41AF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_40001.f_41CF && iVar1 < Global_40001.f_41AC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_40001.f_41D7 && iVar1 < Global_40001.f_41B4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_40001.f_41D8 && iVar1 < Global_40001.f_41B5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_40001.f_41CC && iVar1 < Global_40001.f_41A9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_40001.f_41CB && iVar1 < Global_40001.f_41A8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_40001.f_41CA && iVar1 < Global_40001.f_41A7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_40001.f_41D6 && iVar1 < Global_40001.f_41B3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_40001.f_41D9 && iVar1 < Global_40001.f_41B6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_40001.f_41DA && iVar1 < Global_40001.f_41B7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_40001.f_41DB && iVar1 < Global_40001.f_41B8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_40001.f_41DC && iVar1 < Global_40001.f_41B9)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_40001.f_426F && iVar1 < Global_40001.f_4285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_40001.f_4270 && iVar1 < Global_40001.f_4286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_40001.f_4271 && iVar1 < Global_40001.f_4287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_40001.f_4272 && iVar1 < Global_40001.f_4288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_40001.f_4273 && iVar1 < Global_40001.f_4289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_40001.f_4274 && iVar1 < Global_40001.f_428A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_40001.f_4276 && iVar1 < Global_40001.f_428B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_40001.f_4277 && iVar1 < Global_40001.f_428C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_40001.f_4278 && iVar1 < Global_40001.f_428D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_40001.f_4279 && iVar1 < Global_40001.f_428E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_40001.f_427A && iVar1 < Global_40001.f_428F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_40001.f_427B && iVar1 < Global_40001.f_4290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_40001.f_427C && iVar1 < Global_40001.f_4291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_40001.f_4282 && iVar1 < Global_40001.f_4298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_40001.f_427F && iVar1 < Global_40001.f_4294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_40001.f_4280 && iVar1 < Global_40001.f_4295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_40001.f_4281 && iVar1 < Global_40001.f_4296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_40001.f_4275 && iVar1 < Global_40001.f_4297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_40001.f_4283 && iVar1 < Global_40001.f_4299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_40001.f_427D && iVar1 < Global_40001.f_4292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_40001.f_427E && iVar1 < Global_40001.f_4293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_40001.f_4284 && iVar1 < Global_40001.f_429A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_40001.f_48E3 && iVar1 < Global_40001.f_4944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_40001.f_48E4 && iVar1 < Global_40001.f_4945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_40001.f_48E5 && iVar1 < Global_40001.f_4946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_40001.f_48E6 && iVar1 < Global_40001.f_4947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_40001.f_48E7 && iVar1 < Global_40001.f_4948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_40001.f_48E8 && iVar1 < Global_40001.f_4949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_40001.f_48E9 && iVar1 < Global_40001.f_494A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_40001.f_48EA && iVar1 < Global_40001.f_494B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_40001.f_48EB && iVar1 < Global_40001.f_494C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_40001.f_48EC && iVar1 < Global_40001.f_494D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_40001.f_48ED && iVar1 < Global_40001.f_494E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_40001.f_48EE && iVar1 < Global_40001.f_494F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_40001.f_48EF && iVar1 < Global_40001.f_4950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_40001.f_48F0 && iVar1 < Global_40001.f_4951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_40001.f_48F1 && iVar1 < Global_40001.f_4952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_40001.f_48F2 && iVar1 < Global_40001.f_4953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_40001.f_48F3 && iVar1 < Global_40001.f_4954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_40001.f_48F4 && iVar1 < Global_40001.f_4955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_40001.f_48F5 && iVar1 < Global_40001.f_4956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_40001.f_48F6 && iVar1 < Global_40001.f_4957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_40001.f_48F7 && iVar1 < Global_40001.f_4958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_40001.f_48F8 && iVar1 < Global_40001.f_4959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_40001.f_48F9 && iVar1 < Global_40001.f_495A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_40001.f_48FA && iVar1 < Global_40001.f_495B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_40001.f_48FB && iVar1 < Global_40001.f_495C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_40001.f_4D1C && iVar1 < Global_40001.f_4D18)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2889029532)
	{
		if (!Global_40001.f_4D1D && iVar1 < Global_40001.f_4D19)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_40001.f_4D1E && iVar1 < Global_40001.f_4D1A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3312836369)
	{
		if (!Global_40001.f_4D1F && iVar1 < Global_40001.f_4D1B)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_40001.f_508B && iVar1 < Global_40001.f_5093)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_40001.f_508C && iVar1 < Global_40001.f_5094)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_40001.f_508D && iVar1 < Global_40001.f_5095)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_40001.f_508E && iVar1 < Global_40001.f_5096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_40001.f_508F && iVar1 < Global_40001.f_5097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_40001.f_5090 && iVar1 < Global_40001.f_5098)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2531412055)
	{
		if (!Global_40001.f_5394 && iVar1 < Global_40001.f_53A8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3545667823)
	{
		if (!Global_40001.f_53A0 && iVar1 < Global_40001.f_53B4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3319621991)
	{
		if (!Global_40001.f_5397 && iVar1 < Global_40001.f_53AB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2594093022)
	{
		if (!Global_40001.f_53A1 && iVar1 < Global_40001.f_53B5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3902291871)
	{
		if (!Global_40001.f_5395 && iVar1 < Global_40001.f_53A9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_40001.f_53A5 && iVar1 < Global_40001.f_53B9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2908775872)
	{
		if (!Global_40001.f_53A3 && iVar1 < Global_40001.f_53B7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_40001.f_53A4 && iVar1 < Global_40001.f_53B8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_40001.f_539F && iVar1 < Global_40001.f_53B3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4262088844)
	{
		if (!Global_40001.f_53A6 && iVar1 < Global_40001.f_53BA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4252008158)
	{
		if (!Global_40001.f_53A2 && iVar1 < Global_40001.f_53B6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2310691317)
	{
		if (!Global_40001.f_539E && iVar1 < Global_40001.f_53B2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3287439187)
	{
		if (!Global_40001.f_5396 && iVar1 < Global_40001.f_53AA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2771347558)
	{
		if (!Global_40001.f_5398 && iVar1 < Global_40001.f_53AC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_40001.f_5399 && iVar1 < Global_40001.f_53AD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3296789504)
	{
		if (!Global_40001.f_539A && iVar1 < Global_40001.f_53AE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3052358707)
	{
		if (!Global_40001.f_539B && iVar1 < Global_40001.f_53AF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_40001.f_539C && iVar1 < Global_40001.f_53B0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_40001.f_539D && iVar1 < Global_40001.f_53B1)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_40001.f_5755 && iVar1 < Global_40001.f_5771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_40001.f_5756 && iVar1 < Global_40001.f_5772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2601952180)
	{
		if (!Global_40001.f_5757 && iVar1 < Global_40001.f_5773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3602674979)
	{
		if (!Global_40001.f_5758 && iVar1 < Global_40001.f_5774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2859440138)
	{
		if (!Global_40001.f_5759 && iVar1 < Global_40001.f_5775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_40001.f_575A && iVar1 < Global_40001.f_5776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_40001.f_575B && iVar1 < Global_40001.f_5777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4081974053)
	{
		if (!Global_40001.f_575C && iVar1 < Global_40001.f_5778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_40001.f_575D && iVar1 < Global_40001.f_5779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_40001.f_575E && iVar1 < Global_40001.f_577A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2445973230)
	{
		if (!Global_40001.f_575F && iVar1 < Global_40001.f_577B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_5760 && iVar1 < Global_40001.f_577C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_40001.f_5761 && iVar1 < Global_40001.f_577D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_40001.f_5762 && iVar1 < Global_40001.f_577E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_40001.f_5763 && iVar1 < Global_40001.f_577F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3981782132)
	{
		if (!Global_40001.f_5764 && iVar1 < Global_40001.f_5780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2215179066)
	{
		if (!Global_40001.f_5765 && iVar1 < Global_40001.f_5781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_40001.f_5766 && iVar1 < Global_40001.f_5782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3884762073)
	{
		if (!Global_40001.f_5767 && iVar1 < Global_40001.f_5783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_40001.f_5768 && iVar1 < Global_40001.f_5784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2765724541)
	{
		if (!Global_40001.f_5769 && iVar1 < Global_40001.f_5785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_40001.f_576A && iVar1 < Global_40001.f_5786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2762269779)
	{
		if (!Global_40001.f_576B && iVar1 < Global_40001.f_5787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_40001.f_576C && iVar1 < Global_40001.f_5788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_40001.f_576D && iVar1 < Global_40001.f_5789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_40001.f_576E && iVar1 < Global_40001.f_578A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3903371924)
	{
		if (!Global_40001.f_576F && iVar1 < Global_40001.f_578B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4173521127)
	{
		if (!Global_40001.f_5770 && iVar1 < Global_40001.f_578C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_40001.f_5C15 && iVar1 < Global_40001.f_5C25)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_40001.f_5C16 && iVar1 < Global_40001.f_5C26)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3027423925)
	{
		if (!Global_40001.f_5C1A && iVar1 < Global_40001.f_5C2A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_40001.f_5C1D && iVar1 < Global_40001.f_5C2D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_40001.f_5C22 && iVar1 < Global_40001.f_5C32)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3035832600)
	{
		if (!Global_40001.f_5C1C && iVar1 < Global_40001.f_5C2C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_40001.f_5C14 && iVar1 < Global_40001.f_5C24)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_40001.f_5C1B && iVar1 < Global_40001.f_5C2B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3918533058)
	{
		if (!Global_40001.f_5C21 && iVar1 < Global_40001.f_5C31)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3308022675)
	{
		if (!Global_40001.f_5C20 && iVar1 < Global_40001.f_5C30)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3160260734)
	{
		if (!Global_40001.f_5C17 && iVar1 < Global_40001.f_5C27)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2174267100)
	{
		if (!Global_40001.f_5C19 && iVar1 < Global_40001.f_5C29)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4080061290)
	{
		if (!Global_40001.f_5C23 && iVar1 < Global_40001.f_5C33)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3306466016)
	{
		if (!Global_40001.f_5C1F && iVar1 < Global_40001.f_5C2F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_40001.f_5C18 && iVar1 < Global_40001.f_5C28)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3568198617)
	{
		if (!Global_40001.f_5C1E && iVar1 < Global_40001.f_5C2E)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2306538597)
	{
		if (!Global_40001.f_5C6F && iVar1 < Global_40001.f_5C62)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_40001.f_5C70 && iVar1 < Global_40001.f_5C63)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_40001.f_5C75 && iVar1 < Global_40001.f_5C68)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_40001.f_5C74 && iVar1 < Global_40001.f_5C67)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_40001.f_5C72 && iVar1 < Global_40001.f_5C65)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_40001.f_5C78 && iVar1 < Global_40001.f_5C6B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3656405053)
	{
		if (!Global_40001.f_5C7A && iVar1 < Global_40001.f_5C6D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_40001.f_5C7B && iVar1 < Global_40001.f_5C6E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_40001.f_5C79 && iVar1 < Global_40001.f_5C6C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3874056184)
	{
		if (!Global_40001.f_5C71 && iVar1 < Global_40001.f_5C64)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_40001.f_5C73 && iVar1 < Global_40001.f_5C66)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4240635011)
	{
		if (!Global_40001.f_5C77 && iVar1 < Global_40001.f_5C6A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3987008919)
	{
		if (!Global_40001.f_5C76 && iVar1 < Global_40001.f_5C69)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == 3493417227)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == 2403970600)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == 3147997943)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == 3715219435)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == 3539435063)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == 3188846534)
	{
	}
	else if (iParam0 == 2816263004)
	{
	}
	else if (iParam0 == 2198276962)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_40001.f_657A && iVar1 < Global_40001.f_657C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3126015148)
	{
		if (!Global_40001.f_619F && iVar1 < Global_40001.f_6198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2728360112)
	{
		if (!Global_40001.f_61A0 && iVar1 < Global_40001.f_6199)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3963499524)
	{
		if (!Global_40001.f_61A1 && iVar1 < Global_40001.f_619A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_40001.f_61A2 && iVar1 < Global_40001.f_619B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4245851645)
	{
		if (!Global_40001.f_657B && iVar1 < Global_40001.f_657D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_40001.f_61A3 && iVar1 < Global_40001.f_619C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3787471536)
	{
		if (!Global_40001.f_61A4 && iVar1 < Global_40001.f_619D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4008920556)
	{
		if (!Global_40001.f_61A5 && iVar1 < Global_40001.f_619E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_40001.f_61AA && iVar1 < Global_40001.f_61BF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_40001.f_61AB && iVar1 < Global_40001.f_61C0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3353694737)
	{
		if (!Global_40001.f_61AC && iVar1 < Global_40001.f_61C1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2465530446)
	{
		if (!Global_40001.f_61AD && iVar1 < Global_40001.f_61C2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3612858749)
	{
		if (!Global_40001.f_61AE && iVar1 < Global_40001.f_61C3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_40001.f_61AF && iVar1 < Global_40001.f_61C4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_40001.f_61B0 && iVar1 < Global_40001.f_61C5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_40001.f_61B1 && iVar1 < Global_40001.f_61C6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3412338231)
	{
		if (!Global_40001.f_61B2 && iVar1 < Global_40001.f_61C7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3932816511)
	{
		if (!Global_40001.f_61B3 && iVar1 < Global_40001.f_61C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_40001.f_61B4 && iVar1 < Global_40001.f_61C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_40001.f_61B5 && iVar1 < Global_40001.f_61CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2490551588)
	{
		if (!Global_40001.f_61B6 && iVar1 < Global_40001.f_61CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_40001.f_61B7 && iVar1 < Global_40001.f_61CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2945871676)
	{
		if (!Global_40001.f_61B8 && iVar1 < Global_40001.f_61CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4086055493)
	{
		if (!Global_40001.f_61B9 && iVar1 < Global_40001.f_61CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3970348707)
	{
		if (!Global_40001.f_61BA && iVar1 < Global_40001.f_61CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3630826055)
	{
		if (!Global_40001.f_61BB && iVar1 < Global_40001.f_61D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_40001.f_61BC && iVar1 < Global_40001.f_61D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2674840994)
	{
		if (!Global_40001.f_61BD && iVar1 < Global_40001.f_61D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3847255899)
	{
		if (!Global_40001.f_61BE && iVar1 < Global_40001.f_61D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_40001.f_6CAD && iVar1 < Global_40001.f_6CC2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_40001.f_6CAE && iVar1 < Global_40001.f_6CC3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2538945576)
	{
		if (!Global_40001.f_6CAF && iVar1 < Global_40001.f_6CC4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_40001.f_6CB0 && iVar1 < Global_40001.f_6CC5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_40001.f_6CB1 && iVar1 < Global_40001.f_6CC6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_40001.f_6CB2 && iVar1 < Global_40001.f_6CC7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_40001.f_6CB3 && iVar1 < Global_40001.f_6CC8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_40001.f_6CB4 && iVar1 < Global_40001.f_6CC9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_40001.f_6CB5 && iVar1 < Global_40001.f_6CCA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3460613305)
	{
		if (!Global_40001.f_6CB6 && iVar1 < Global_40001.f_6CCB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_40001.f_6CB7 && iVar1 < Global_40001.f_6CCC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_40001.f_6CB8 && iVar1 < Global_40001.f_6CCD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_40001.f_6CB9 && iVar1 < Global_40001.f_6CCE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_40001.f_6CBA && iVar1 < Global_40001.f_6CCF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_40001.f_6CBB && iVar1 < Global_40001.f_6CD0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_40001.f_6CBC && iVar1 < Global_40001.f_6CD1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_40001.f_6CBD && iVar1 < Global_40001.f_6CD2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_40001.f_6CBE && iVar1 < Global_40001.f_6CD3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3040635986)
	{
		if (!Global_40001.f_6CBF && iVar1 < Global_40001.f_6CD4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_40001.f_6CC0 && iVar1 < Global_40001.f_6CD5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_40001.f_6CC1 && iVar1 < Global_40001.f_6CD6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_40001.f_6CD8 && iVar1 < Global_40001.f_6CD9) && !Global_40001.f_6CAB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2334210311)
	{
		if ((!Global_40001.f_6CDB && iVar1 < Global_40001.f_6CDC) && !Global_40001.f_6CAC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3162245632)
	{
		if (!Global_40001.f_6CE0 && iVar1 < Global_40001.f_6CE3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_40001.f_6CE1 && iVar1 < Global_40001.f_6CE4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_40001.f_6CE2 && iVar1 < Global_40001.f_6CE5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2172320429)
	{
		if (!Global_40001.f_70CA && iVar1 < Global_40001.f_6F7B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2196012677)
	{
		if (!Global_40001.f_6F6D && iVar1 < Global_40001.f_6F82)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_40001.f_6F6E && iVar1 < Global_40001.f_6F74)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_40001.f_70C8 && iVar1 < Global_40001.f_6F7C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_40001.f_70C9 && iVar1 < Global_40001.f_6F7D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3381377750)
	{
		if (!Global_40001.f_6F67 && iVar1 < Global_40001.f_6F7A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3663644634)
	{
		if (!Global_40001.f_6F68 && iVar1 < Global_40001.f_6F83)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3456868130)
	{
		if (!Global_40001.f_6F69 && iVar1 < Global_40001.f_6F79)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2484160806)
	{
		if (!Global_40001.f_6F6A && iVar1 < Global_40001.f_6F77)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2936769864)
	{
		if (!Global_40001.f_70C4 && iVar1 < Global_40001.f_6F7E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_40001.f_70C5 && iVar1 < Global_40001.f_6F7F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_40001.f_70C6 && iVar1 < Global_40001.f_6F80)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2566281822)
	{
		if (!Global_40001.f_70C7 && iVar1 < Global_40001.f_6F81)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_40001.f_6F6B && iVar1 < Global_40001.f_6F76)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_40001.f_6F6C && iVar1 < Global_40001.f_6F78)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_289()
{
	return 0;
}

int func_290()
{
	return 1;
}

int func_291()
{
	return 1;
}

int func_292()
{
	if (unk_0xC146D5FBD23C6954(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_293()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295);
				unk_0x5D96D8530B3D0904(&iVar0, 2);
				unk_0x5D96D8530B3D0904(&iVar0, 4);
				unk_0x5D96D8530B3D0904(&iVar0, 6);
				unk_0x5D96D8530B3D0904(&Global_19, 2);
				unk_0x5D96D8530B3D0904(&Global_19, 4);
				unk_0x5D96D8530B3D0904(&Global_19, 6);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(866);
					unk_0x5D96D8530B3D0904(&iVar0, 0);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_24BC8 == 2)
	{
		return 1;
	}
	else if (Global_24BC8 == 3)
	{
		return 0;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_294(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_285(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_295(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(Global_17769[iVar0]))
		{
			if (Global_17769[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_296(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]) && unk_0xDF1306B443CD3D15(Global_1774B[iVar0], 0))
			{
				if (Global_1774B[iVar0] == iParam0 && unk_0x134B62B726CEC8E6(Global_1774B[iVar0]) == unk_0x134B62B726CEC8E6(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_297(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[24]))
	{
		if (iParam0 == Global_126B1.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_126B1.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_298(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_299(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iVar2], 0))
		{
			if (unk_0x5B6BEDD9A86023B7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_299(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_300(int iParam0)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_126B1.f_8B[iParam0];
}

int func_301(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 145;
	uParam0->f_D = 4294967295;
	uParam0->f_E = 0;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_302(0, 1);
			uParam0->f_C = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_302(0, 1);
			uParam0->f_C = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_302(1, 1);
			uParam0->f_C = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_302(1, 2);
			uParam0->f_C = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_302(1, 1);
			uParam0->f_C = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_302(1, 2);
			uParam0->f_C = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_302(2, 1);
			uParam0->f_C = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_302(2, 1);
			uParam0->f_C = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_302(2, 1);
			uParam0->f_C = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_E = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0;
			uParam0->f_D = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_E = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 1;
			uParam0->f_D = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_E = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 2;
			uParam0->f_D = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_E = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0;
			uParam0->f_D = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_E = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 1;
			uParam0->f_D = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_E = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 2;
			uParam0->f_D = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_E = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0;
			uParam0->f_D = 360;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_E = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 1;
			uParam0->f_D = 360;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_E = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 2;
			uParam0->f_D = 360;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_E = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 0;
			uParam0->f_D = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_E = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 1;
			uParam0->f_D = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_E = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 2;
			uParam0->f_D = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_E = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_E = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_E = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_E = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_E = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_A = 126;
			uParam0->f_B = 126;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_A = 157;
			uParam0->f_B = 157;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_D = 308;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_D = 404;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_293())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_293())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_D = 308;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_1B416.f_7FE8.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_311(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_1B416.f_7FE8.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_1B416.f_7FE8.f_78E[uParam0->f_E];
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_311(Global_1B416.f_936.f_21B.f_E04[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_311(Global_1B416.f_936.f_21B.f_E04[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_302(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_39(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_303(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_303(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_58 = 1;
	uParam1->f_54 = 255;
	uParam1->f_55 = 255;
	uParam1->f_56 = 255;
	uParam1->f_61 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_1B416.f_2378.f_63.f_3A[128] && !Global_1B416.f_2378.f_63.f_3A[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_B[0] = 1;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_1B416.f_2378.f_63.f_3A[119])
					{
						uParam1->f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_1B416.f_2378.f_63.f_3A[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_A = 1;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0] = 1;
					uParam1->f_B[1] = 1;
					uParam1->f_B[2] = 1;
					uParam1->f_B[3] = 1;
					uParam1->f_B[4] = 1;
					uParam1->f_B[5] = 1;
					uParam1->f_B[6] = 1;
					uParam1->f_B[7] = 1;
					uParam1->f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_304(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_301(&(Global_126B1.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0 /*21*/].f_9, 10))
		{
			func_309(iParam0);
			func_308(uParam1, &(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0 /*21*/].f_E /*78*/]));
			if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0 /*21*/].f_9, 11))
			{
				Global_1B416.f_7FE8.f_748[Global_126B1.f_22B[0 /*21*/].f_E /*3*/] = { vParam2 };
				Global_1B416.f_7FE8.f_78E[Global_126B1.f_22B[0 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_1B416.f_7FE8.f_748[Global_126B1.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_1B416.f_7FE8.f_78E[Global_126B1.f_22B[0 /*21*/].f_E] = -1f;
			}
			Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0 /*21*/].f_E] = iParam4 + 1;
			func_305(iParam0, 1);
		}
	}
}

void func_305(int iParam0, bool bParam1)
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_307(iParam0, 0))
		{
			func_306(iParam0, 1, 0);
			func_306(iParam0, 2, 0);
			func_306(iParam0, 3, 0);
			func_306(iParam0, 4, 0);
			func_306(iParam0, 0, 1);
			Global_126B1[iParam0] = 1;
		}
	}
	else
	{
		func_306(iParam0, 0, 0);
	}
}

void func_306(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_7FE8[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_7FE8[iParam0]), iParam1);
	}
}

bool func_307(int iParam0, int iParam1)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_308(var uParam0, var uParam1)
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

void func_309(int iParam0)
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_301(&(Global_126B1.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], true, 1);
			unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
			Global_126B1.f_8B[iParam0] = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0 /*21*/].f_9, 13))
		{
			func_305(iParam0, 0);
		}
	}
}

int func_310(int iParam0)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 145;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (Global_1774B[iVar0] == iParam0)
			{
				return Global_17755[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_311(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_312(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_316(uParam1);
		uParam1->f_42 = unk_0x134B62B726CEC8E6(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7888A5D2621AAF2D(iParam0), 16);
		*uParam1 = unk_0x4EB64970EC291A00(iParam0);
		unk_0x9412F17E127D9759(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD00EA977553939A7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x4D842A28A29F18F6(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = unk_0x214BEAD64D777E8F(iParam0);
		uParam1->f_43 = unk_0xF22DC2D0CA24A151(iParam0);
		uParam1->f_45 = unk_0x8EF9B42D5496EC5A(iParam0);
		uParam1->f_46 = unk_0x9C7B8DC16535B879(iParam0);
		unk_0xCCBAB59EE36FFC71(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xE04A80C505823410(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (unk_0x812A93B166D97C60(iParam0, 2))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 28);
		}
		if (unk_0x812A93B166D97C60(iParam0, 3))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 29);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 30);
		}
		if (unk_0x812A93B166D97C60(iParam0, 1))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 31);
		}
		if (uParam1->f_41 == 4294967295 && !func_315(uParam1->f_42))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x587993B327460A82(iParam0, 0))
		{
			uParam1->f_44 = unk_0x74A7D92E3874B5C7(iParam0);
		}
		if (unk_0xC41A9202669A24C4(uParam1->f_42))
		{
			if (unk_0x20D5F312838C1136(iParam0))
			{
				switch (unk_0x38E830634323E0D5(iParam0))
				{
					case 3:
					case 0:
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 23);
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 22);
						break;
					
					case 4:
					case 1:
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 23);
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 22);
						break;
					
					case 5:
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 23);
						break;
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 23);
			}
		}
		if (!unk_0x616632A7E7824A9A(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 9);
		}
		if (unk_0xF566283DA9533594(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 10);
		}
		if (unk_0xC97B0E5C744424FD(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 13);
			unk_0x3139754D4D5C3AC3(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0xE23BB5249C074C85(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 12);
		}
		func_314(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_313(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x92C2290AA46758D3(iParam0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 11);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_4D), 11);
		}
		if (unk_0x30F813723591D02E(iParam0, "IgnoredByQuickSave") && unk_0xB2C7CF65CF9B897C(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 27);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_4D), 27);
		}
	}
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_314(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				switch (unk_0x3C076D736FE6B7A6(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x0ECB5CA5140957AD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case 3296789504:
			return 1;
		
		default:
	}
	return 0;
}

void func_316(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_4D = 0;
	uParam0->f_41 = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	uParam0->f_40 = 0;
	uParam0->f_4A = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3B[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

void func_317(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_309(iParam0);
	func_305(iParam0, 0);
}

float func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 192.1528f;
		
		case 1:
			return 144.2205f;
		
		case 2:
			return 82.0341f;
		
		case 3:
			return 134.9389f;
		
		case 4:
			return 241.8704f;
		
		case 5:
			return 342.318f;
		
		case 6:
			return 174.9318f;
		
		case 7:
			return 186.4915f;
		
		case 8:
			return 93.0806f;
		
		case 9:
			return 213.7284f;
		
		case 10:
			return 55.5964f;
		
		case 11:
			return 61.2421f;
		
		case 12:
			return 304.1476f;
		
		default:
	}
	return 0f;
	return 0f;
}

Vector3 func_319(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -835.2823f, -1303.246f, 4.0004f;
		
		case 1:
			return 1236.613f, 143.0208f, 80.8622f;
		
		case 2:
			return 2463.523f, 1495.492f, 34.8794f;
		
		case 3:
			return -262.0742f, 6590.702f, 0.9787f;
		
		case 4:
			return -45.396f, -784.1727f, 43.2721f;
		
		case 5:
			return -182.8192f, -890.5899f, 28.3452f;
		
		case 6:
			return -1236.648f, 4557.094f, 185.7374f;
		
		case 7:
			return -731.5519f, 4497.153f, 75.5991f;
		
		case 8:
			return -790.7881f, 293.895f, 84.7917f;
		
		case 9:
			return -1426.048f, 4408.049f, 46.1198f;
		
		case 10:
			return 2491.808f, 5001.821f, 44.1871f;
		
		case 11:
			return 1067.101f, -198.2404f, 68.6323f;
		
		case 12:
			return -762.3691f, 4301.332f, 145.2817f;
		
		default:
	}
	return 0f, 0f, 0f;
	return 0f, 0f, 0f;
}

int func_320(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_321(int iParam0)
{
	if (*iParam0 != 0)
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_C[0] = 0;
	iParam0->f_C[1] = 0;
	iParam0->f_C[2] = 0;
	iParam0->f_C[3] = 0;
	iParam0->f_C[4] = 0;
	iParam0->f_C[5] = 0;
	iParam0->f_C[6] = 0;
	iParam0->f_C[7] = 0;
	iParam0->f_3[0] = 361;
	iParam0->f_3[1] = 361;
	iParam0->f_3[2] = 361;
	iParam0->f_3[3] = 361;
	iParam0->f_3[4] = 361;
	iParam0->f_3[5] = 361;
	iParam0->f_3[6] = 361;
	iParam0->f_3[7] = 361;
	iParam0->f_15[0] = 0;
	iParam0->f_15[1] = 0;
	iParam0->f_15[2] = 0;
	iParam0->f_15[3] = 0;
}

int func_322(var uParam0, int iParam1, int iParam2)
{
	if ((unk_0x1C0640BA9A7327B3() - uParam0->f_5) > iParam2)
	{
		uParam0->f_4 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_5 = unk_0x1C0640BA9A7327B3();
	if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) > iParam2)
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_2, iParam1) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_3, iParam1))
		{
			uParam0->f_4 = unk_0x1C0640BA9A7327B3();
			return 1;
		}
	}
	return 0;
}

int func_323(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	
	switch (uParam0->f_3)
	{
		case 0:
			if (func_455(iParam1) >= 0f)
			{
				vParam4.z = func_49(vParam4.z, -8.909f, 8.909f);
				uParam5->f_2 = (uParam5->f_2 + vParam4.z);
				vVar0 = { func_457(vParam3, vParam4.z) };
				unk_0x86F44313DFA8F00C(func_427(uParam0, 0), vParam2 + vVar0, *uParam5, *uParam6, 300, 1, 1, 2);
				unk_0xF1E4C781086FABC1(func_427(uParam0, 1), func_427(uParam0, 0), SYSTEM::FLOOR((1000f * (1.1f - 0f))), 2, 1);
				uParam0->f_3 = 1;
			}
			break;
		
		case 1:
			if (func_455(iParam1) >= 0f)
			{
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
				unk_0xB3A1B75CB59FEB56(false, true, SYSTEM::FLOOR((1000f * (1.1f - 0f))), 0, 0, 0);
				uParam0->f_3 = 2;
			}
			break;
		
		case 2:
			if (func_455(iParam1) >= 1.1f)
			{
				uParam0->f_3 = 3;
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_324(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = func_427(uParam1, 0);
	iVar2 = func_427(uParam1, 1);
	unk_0xDC3CC6D1845B0567(iVar2, func_325());
	vVar3 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 2f, -0.3f, -7.7824f) };
	unk_0x608A456FDD8A83D8(iVar2, vVar3);
	vVar0 = { unk_0x17D61C69BA58F815(iVar1, 2) };
	vVar0.x = 0f;
	unk_0x5F3CBA6EB9341C90(iVar2, vVar0, 2);
	unk_0x5818C8D5303DCCF8(iVar2, unk_0x86CC98177DFF41EC(iVar1));
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	uParam1->f_3 = 0;
	func_365(iParam2);
}

float func_325()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return 0.5f;
	}
	return 0.84f;
}

int func_326(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, vector3 vParam6, vector3 vParam7)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = func_427(uParam1, 0);
	vVar1 = { func_329(uParam2) };
	if (unk_0x89DF0B812BA6383B())
	{
		vVar1.y = (vVar1.y * -1f);
	}
	if (!unk_0x91E3F625EF57450D(2))
	{
		uParam5->f_2 = (uParam5->f_2 - ((vVar1.x * unk_0x6117725E0134737F()) * 100f));
		*uParam5 = (*uParam5 + ((vVar1.y * unk_0x6117725E0134737F()) * 100f));
		if (unk_0x755FF954DAE327E1(uParam5->f_2) > 0.001f)
		{
			uParam5->f_2 = (uParam5->f_2 - ((uParam5->f_2 * unk_0x6117725E0134737F()) * 4f));
		}
		else
		{
			uParam5->f_2 = 0f;
		}
		if (unk_0x755FF954DAE327E1(*uParam5) > 0.001f)
		{
			*uParam5 = (*uParam5 - ((*uParam5 * unk_0x6117725E0134737F()) * 5f));
		}
		else
		{
			*uParam5 = 0f;
		}
	}
	else
	{
		uParam5->f_2 = (-vVar1.x * 130f);
		*uParam5 = (vVar1.y * 130f);
	}
	uParam4->f_2 = (uParam4->f_2 + (uParam5->f_2 * unk_0x6117725E0134737F()));
	if (uParam4->f_2 > (0.5f * 43.7465f))
	{
		uParam4->f_2 = (0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	else if (uParam4->f_2 < (-0.5f * 43.7465f))
	{
		uParam4->f_2 = (-0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	*uParam4 = (*uParam4 + (*uParam5 * unk_0x6117725E0134737F()));
	if (*uParam4 > (0.5f * 21.6f))
	{
		*uParam4 = (0.5f * 21.6f);
		*uParam5 = 0f;
	}
	else if (*uParam4 < (-0.5f * 21.6f))
	{
		*uParam4 = (-0.5f * 21.6f);
		*uParam5 = 0f;
	}
	vVar2 = { func_457(vParam7, uParam4->f_2) };
	unk_0x608A456FDD8A83D8(iVar0, vParam6 + vVar2);
	unk_0x5F3CBA6EB9341C90(iVar0, (-33f + *uParam4), 0f, ((-88.515f + func_458(uParam0)) + uParam4->f_2), 2);
	unk_0xDC3CC6D1845B0567(iVar0, func_325());
	if (!unk_0x0F1CCD77290EE12F() || !func_456(iParam3))
	{
		func_365(iParam3);
	}
	else
	{
		if (!unk_0xFEBC1E4EC9E001F0())
		{
			func_328("BJ_VLOOKHLP");
		}
		if (func_456(iParam3) && func_455(iParam3) > 0.5f)
		{
			if (func_327(uParam2, 1))
			{
				func_452(iParam3);
				unk_0xE03C71FA3398174A(iVar0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_327(var uParam0, int iParam1)
{
	return (unk_0xEAE0D21A50E6C7F4(uParam0->f_2, iParam1) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_3, iParam1));
}

void func_328(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, 4294967295);
}

Vector3 func_329(var uParam0)
{
	return *uParam0, uParam0->f_1, 0f;
}

void func_330(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = (0.006f * SYSTEM::SIN((((0.25f * 0.5f) * SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3())) + 1.5f)));
	fVar1 = (0.006f * SYSTEM::SIN((((0.25f * 0.4f) * SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3())) + 3f)));
	fVar2 = (0.006f * SYSTEM::SIN(((0.25f * 1f) * SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()))));
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		unk_0xA47B46945FF6DE74(iParam0, vParam1 + Vector(fVar2, fVar1, fVar0), 1, false, 0, 1);
	}
}

bool func_331(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_332(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_333(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x562F77A7F33D2E46("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT"))
		{
			unk_0x8910D3D58E0132B8("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
			func_213(uParam0, 20, 0);
		}
	}
	else if (unk_0x562F77A7F33D2E46("BASEJUMPS_PREP_FOR_JUMP_MOTO"))
	{
		unk_0x8910D3D58E0132B8("BASEJUMPS_PREP_FOR_JUMP_MOTO");
		func_213(uParam0, 20, 0);
	}
}

void func_334(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

struct<4> func_335(int iParam0)
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 3:
		case 12:
		case 6:
			StringCopy(&Var0, "BJ_OBJ_JCL", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "BJ_OBJ_JDB", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "BJ_OBJ_JCR", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "BJ_OBJ_JB", 16);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_336(int iParam0, float fParam1)
{
	if (!func_456(iParam0))
	{
		func_42(iParam0, fParam1);
	}
}

void func_337(int iParam0, int iParam1)
{
	if (func_456(iParam0))
	{
		if (func_339(iParam0, (7.5f * IntToFloat(*iParam1))))
		{
			*iParam1++;
			func_209(unk_0x16F2683693E537C9(), "BASEJUMP_ABOUT_TO_JUMP", 24);
		}
	}
	else if (!func_338())
	{
		func_336(iParam0, 0f);
	}
}

int func_338()
{
	if (Global_5145 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_339(int iParam0, float fParam1)
{
	if (func_340(iParam0, fParam1))
	{
		func_452(iParam0);
		return 1;
	}
	return 0;
}

int func_340(int iParam0, float fParam1)
{
	if (func_456(iParam0))
	{
		if (func_455(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_341(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), uParam0, 1);
		if ((((*uParam0 != 0 && *uParam0 != joaat("weapon_unarmed")) && *uParam0 != joaat("weapon_electric_fence")) && *uParam0 != joaat("gadget_parachute")) && *uParam0 != joaat("object"))
		{
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 4294967295, false, true);
		}
		unk_0x38C3A68D7861DCFD(0, 37, 1);
		unk_0x38C3A68D7861DCFD(0, 66, 1);
		unk_0x38C3A68D7861DCFD(0, 67, 1);
		unk_0x38C3A68D7861DCFD(0, 68, 1);
		unk_0x38C3A68D7861DCFD(0, 99, 1);
		unk_0x38C3A68D7861DCFD(0, 100, 1);
		unk_0x3584F71E5CA29322(19);
	}
}

int func_342(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17, var uParam18, bool bParam19, bool bParam20, float fParam21)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	vVar4 = { func_363(uParam0, *iParam6) };
	bVar15 = *iParam6 == (iParam9 - 1);
	(*iParam3)[0] = (*iParam3)[0];
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x61890296D3AA030F(unk_0x16F2683693E537C9(), &vVar0, &uVar1, &uVar2, &vVar3);
	}
	if (bVar15)
	{
		if (unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			vVar9 = { unk_0x68E4ADDDDCD7BDDE(iParam1, func_364(uParam0)) };
			fVar14 = (vVar9.z - vVar4.z);
			if (bParam20)
			{
				if (unk_0xE4EDC4B0E92C078B(*iParam11))
				{
					unk_0x2F9282246F89FFD1(*iParam11, vVar9);
				}
				else
				{
					*iParam11 = unk_0x6CC513A908911CF0(vVar9);
					unk_0x61755AC17D8F538E(*iParam11, 5);
					unk_0x516E63E474722206(*iParam11, 1.2f);
					unk_0xDC5B2F9D0CCE3A10(*iParam11, "BJ_BLIP_TGT");
				}
			}
			vVar10 = { func_363(uParam0, 0) };
			vVar9.z = (vVar10.z + fVar14);
			vVar4 = { vVar9 };
		}
		else if (func_362(uParam0) != 0)
		{
			vVar9 = { func_363(uParam0, 0) };
			vVar4 = { vVar9 };
		}
		else
		{
			vVar9 = { vVar4 };
		}
		vVar6 = { vVar3 - vVar4 };
		if (func_362(uParam0) == 0)
		{
			unk_0x922D0EFFF8F2403B(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, func_351(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, false);
			unk_0x922D0EFFF8F2403B(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, func_351(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, false);
			unk_0x922D0EFFF8F2403B(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_351(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, false);
		}
		if (*iParam7 != 4294967295)
		{
			unk_0xE223EB8FE6F8CC15(*iParam4);
			*iParam7 = 4294967295;
		}
	}
	else
	{
		unk_0xA402F6C87C08815C(134, &iVar17, &iVar18, &iVar19, &uVar20);
		vVar6 = { vVar3 - vVar4 };
		vVar5 = { func_363(uParam0, *iParam6 + 1) };
		unk_0x922D0EFFF8F2403B(6, vVar4, func_469(vVar6), 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_351(vVar4, 25, 200), 0, 0, 2, 0, 0, 0, false);
		if (*iParam7 != *iParam6)
		{
			if (*iParam7 >= 0)
			{
				unk_0xE223EB8FE6F8CC15(*iParam4);
				*iParam4 = 0;
				if (*iParam7 < (iParam9 - 2))
				{
					unk_0xE223EB8FE6F8CC15(*iParam5);
					*iParam4 = 0;
				}
			}
			*iParam4 = unk_0x1B26E47E3E30075B(17, vVar4, vVar5, 9f, iVar17, iVar18, iVar19, func_351(vVar9, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))), 0);
			if (*iParam6 < (iParam9 - 2))
			{
				*iParam5 = unk_0x1B26E47E3E30075B(17, vVar5, func_363(uParam0, *iParam6 + 2), (9f * 0.5f), iVar17, iVar18, iVar19, func_351(vVar9, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))), 0);
			}
			*iParam7 = *iParam6;
		}
		if (*iParam6 + 1 == (iParam9 - 1))
		{
			unk_0x922D0EFFF8F2403B(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 4f), (0.5f * 4f), (0.5f * 4f), 240, 200, 80, func_351(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, false);
			unk_0x922D0EFFF8F2403B(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 9f), (0.5f * 9f), (0.5f * 9f), 240, 200, 80, func_351(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, false);
			unk_0x922D0EFFF8F2403B(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_351(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, false);
		}
		else
		{
			unk_0x922D0EFFF8F2403B(6, vVar5, func_469(vVar3 - vVar5), 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_351(vVar5, 25, 200), 0, 0, 2, 0, 0, 0, false);
		}
		if (*iParam4 != 0)
		{
			unk_0xF0B0A50DF3EA0E70(*iParam4, iVar17, iVar18, iVar19, func_351(vVar4, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))));
		}
		if (*iParam5 != 0)
		{
			unk_0xF0B0A50DF3EA0E70(*iParam5, iVar17, iVar18, iVar19, func_351(vVar5, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))));
		}
	}
	if (!bParam19)
	{
		return 0;
	}
	if ((unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0 || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 1) || (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2 && !unk_0x06F8112AA79C53D9(0, 80)))
	{
		if (!unk_0x362FD95670BFA2A6(vVar4, &uVar21, &uVar22))
		{
			if (iLocal_511)
			{
				func_349(vVar4, uParam15, uParam16, uParam17);
				if (func_456(&iLocal_513))
				{
					func_452(&iLocal_513);
				}
			}
			else if (func_456(&iLocal_513))
			{
				if (func_347(&iLocal_513) > 0.5f)
				{
					func_452(&iLocal_513);
					iLocal_511 = 1;
				}
			}
			else
			{
				func_480(&iLocal_513);
			}
		}
		else if (iLocal_511)
		{
			func_349(vVar4, uParam15, uParam16, uParam17);
			if (func_456(&iLocal_513))
			{
				if (func_347(&iLocal_513) > 0.5f)
				{
					func_452(&iLocal_513);
					iLocal_511 = 0;
				}
			}
			else
			{
				func_480(&iLocal_513);
			}
		}
		else if (func_456(&iLocal_513))
		{
			func_452(&iLocal_513);
		}
	}
	else
	{
		iLocal_511 = 0;
	}
	if (func_346(iParam14, uParam18, &iParam1))
	{
		if (unk_0xE4EDC4B0E92C078B(*iParam11))
		{
			unk_0x142CC44DB769B57E(iParam11);
		}
		if (unk_0xE4EDC4B0E92C078B(*iParam12))
		{
			unk_0x142CC44DB769B57E(iParam12);
		}
		if (!bVar15)
		{
			return 2;
		}
		fVar12 = SYSTEM::SQRT(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)));
		if (((vVar6.z < 5f && vVar6.z > -2f) && fVar12 < 15f) || func_260(iParam1, iParam2))
		{
			*uParam10 = func_262(SYSTEM::CEIL(((100f * (15f - fVar12)) / 15f)) + 4, 0, 100);
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (func_345())
	{
		if (unk_0x341D37321932F141(unk_0xD803B885F5E47A62()))
		{
			unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0);
		}
	}
	else if (!bVar15)
	{
		fVar11 = SYSTEM::VMAG2(vVar6);
		if (fVar11 < (22f * 22f))
		{
			if (fVar11 < (10f * 10f))
			{
				bVar16 = true;
			}
			else if (func_269(vVar0, -vVar6 / FtoV(SYSTEM::SQRT(fVar11))) < 0.08f)
			{
				bVar16 = true;
			}
			if (bVar16)
			{
				*uParam8++;
				func_344(iParam13, 1);
				func_215(func_422(), 1, SYSTEM::FLOOR((30f * fParam21)), 0, 0);
				iLocal_512 = 0;
			}
			if (!bVar16 && !iLocal_512)
			{
				iLocal_512 = 1;
			}
		}
		else if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0 || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 4294967295)
		{
			if (vVar6.z < -22f)
			{
				func_344(iParam13, 0);
				bVar16 = true;
			}
		}
		else
		{
			vVar8 = { unk_0x08D89CE2E20AE305(unk_0x16F2683693E537C9()) };
			vVar8.z = 0f;
			vVar8 = { func_469(vVar8) };
			vVar7 = { -vVar6.x, -vVar6.y, 0f };
			vVar7 = { func_469(vVar7) };
			fVar13 = ((vVar3.z - 32f) + (32f * func_343(vVar8, vVar7)));
			fVar12 = SYSTEM::SQRT(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)));
			if ((vVar3.z - fVar13) < fVar12)
			{
				fVar13 = (fVar13 - (0.05f * ((fVar13 - vVar3.z) + fVar12)));
				if (fVar13 < (vVar4.z - 22f))
				{
					func_344(iParam13, 0);
					bVar16 = true;
				}
			}
		}
		if (iLocal_512)
		{
			if (SYSTEM::VMAG2(vVar6) >= (22f * 22f))
			{
				*uParam8++;
				func_344(iParam13, 1);
				func_215(func_422(), 1, SYSTEM::FLOOR((30f * fParam21)), 0, 0);
				bVar16 = true;
				iLocal_512 = 0;
			}
		}
		if (bVar16)
		{
			*iParam6++;
			if (unk_0xE4EDC4B0E92C078B(*iParam11))
			{
				unk_0x142CC44DB769B57E(iParam11);
			}
			if (unk_0xE4EDC4B0E92C078B(*iParam12))
			{
				*iParam11 = *iParam12;
				*iParam12 = 0;
				unk_0x516E63E474722206(*iParam11, 1.2f);
				if (*iParam6 >= (iParam9 - 1))
				{
					unk_0xDC5B2F9D0CCE3A10(*iParam11, "BJ_BLIP_TGT");
				}
				else
				{
					unk_0xDC5B2F9D0CCE3A10(*iParam11, "BJ_BLIP_CHK");
				}
			}
			if (*iParam6 < (iParam9 - 1))
			{
				if (!unk_0xE4EDC4B0E92C078B(*iParam12))
				{
					*iParam12 = unk_0x6CC513A908911CF0(func_363(uParam0, *iParam6 + 1));
					unk_0x61755AC17D8F538E(*iParam12, 5);
					unk_0x516E63E474722206(*iParam12, 0.7f);
					if (*iParam6 + 1 >= (iParam9 - 1))
					{
						unk_0xDC5B2F9D0CCE3A10(*iParam12, "BJ_BLIP_TGT");
					}
					else
					{
						unk_0xDC5B2F9D0CCE3A10(*iParam12, "BJ_BLIP_CHK");
					}
				}
			}
			else
			{
				*iParam12 = 0;
			}
			unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), func_363(uParam0, *iParam6), 4294967295, 0, 2);
		}
	}
	return 0;
}

float func_343(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return ((Param0 * Param2) + (Param0.f_1 * Param2.f_1));
}

void func_344(var uParam0, bool bParam1)
{
	*uParam0 = unk_0xD68EA767274B7444();
	if (bParam1)
	{
		unk_0x4D7F4CC43D4D0DE3(*uParam0, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", true);
	}
	else
	{
		func_334("BJ_MISSED", 7500, 1);
		unk_0x4D7F4CC43D4D0DE3(*uParam0, "CHECKPOINT_MISSED", "HUD_MINI_GAME_SOUNDSET", true);
	}
}

int func_345()
{
	if (((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) && (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 3 || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 4294967295)) && unk_0xEE9925602B29903C(unk_0x16F2683693E537C9()) > 50f) && !unk_0x42CF608FD1475F11(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

bool func_346(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 1;
	}
	iVar0 = unk_0x16F2683693E537C9();
	if (!*uParam1)
	{
		iVar1 = unk_0x50D59C88203E680A(iVar0);
		if (iVar1 != 4294967295 && !unk_0xE934758D273C899A(iVar0))
		{
			*uParam1 = 1;
			*uParam0 = iVar1;
		}
	}
	return (((unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()) || (unk_0x75B806D0A76CB67D(iVar0) == 3 && !unk_0xE934758D273C899A(iVar0))) || (unk_0x75B806D0A76CB67D(iVar0) == 4294967295 && !unk_0xE934758D273C899A(iVar0))) || (((unk_0xC844350D5D58C99A(*iParam2) && !unk_0xEB6A8945D1AC98A1(iVar0)) && !unk_0x437347B10A200C4B(*iParam2, 0)) && unk_0x64E716CF8C283BF5(iVar0, *iParam2)));
}

float func_347(int iParam0)
{
	if (func_456(iParam0))
	{
		if (func_348(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_43(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

bool func_348(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 2);
}

void func_349(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x362FD95670BFA2A6(vParam0, &uVar0, &uVar1))
	{
	}
	fVar4 = 0f;
	fVar5 = 0.05f;
	fVar6 = 0.05f;
	func_350(vParam0, &fVar2, &fVar3);
	if (fVar2 != 0f && fVar3 != 0f)
	{
		if (fVar2 >= 0.7999f)
		{
			fVar4 = 90f;
		}
		else if (fVar2 <= 0.2f)
		{
			fVar4 = -90f;
		}
		else if (fVar3 <= 0.2f)
		{
			fVar4 = 0f;
		}
		else if (fVar3 >= 0.7999f)
		{
			fVar4 = 180f;
		}
		unk_0x8A462DAA7D1D9008(&iVar8, &iVar9);
		fVar7 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iVar9));
		if (fVar4 == 0f || fVar4 == 180f)
		{
			fVar5 = ((0.05f * 16f) / 9f);
			fVar6 = (0.05f / fVar7);
		}
		else
		{
			fVar5 = 0.05f;
			fVar6 = (0.05f * ((16f / 9f) / fVar7));
		}
		if ((fVar4 != *uParam3 || (*uParam1 == 0f && *uParam2 == 0f)) || (unk_0x755FF954DAE327E1((fVar2 - *uParam1)) < 0.04f && unk_0x755FF954DAE327E1((fVar3 - *uParam2)) < 0.04f))
		{
			unk_0x539E86AE011A8B38("basejumping", "Arrow_Pointer", fVar2, fVar3, fVar6, fVar5, fVar4, 240, 200, 80, 170, 0);
		}
		*uParam3 = fVar4;
	}
	*uParam1 = fVar2;
	*uParam2 = fVar3;
}

void func_350(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	if (!func_311(vParam0, 0f, 0f, 0f, 0))
	{
		unk_0xE464FC538618BC3D(vParam0, &fVar0, &fVar1);
	}
	if (fVar0 >= 0.5f)
	{
		vVar2.x = (fVar0 - 0.5f);
	}
	else
	{
		vVar2.x = (0.5f - fVar0);
	}
	if (fVar1 >= 0.5f)
	{
		vVar2.y = (fVar1 - 0.5f);
	}
	else
	{
		vVar2.y = (0.5f - fVar1);
	}
	vVar2.z = 0f;
	func_469(vVar2);
	vVar2.x = (vVar2.x * 0.75f);
	vVar2.y = (vVar2.y * 0.75f);
	if (fVar0 >= 0.5f)
	{
		fVar0 = (0.5f + vVar2.x);
	}
	else
	{
		fVar0 = (0.5f - vVar2.x);
	}
	if (fVar1 >= 0.5f)
	{
		fVar1 = (0.5f + vVar2.y);
	}
	else
	{
		fVar1 = (0.5f - vVar2.y);
	}
	*uParam1 = fVar0;
	*uParam2 = fVar1;
}

int func_351(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		fVar2 = unk_0x0EB28750412C3A5A(vParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), true);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - SYSTEM::CEIL((IntToFloat((iParam2 - iParam1)) * fVar3)));
		}
	}
	if (iVar1 < iParam1)
	{
		iVar1 = iParam1;
	}
	return iVar1;
}

void func_352(int iParam0)
{
	if (func_456(iParam0) && func_455(iParam0) > 7.5f)
	{
		func_452(iParam0);
	}
}

int func_353(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
	{
		*uParam2 = 1;
		return 1;
	}
	vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1);
		if (unk_0xE934758D273C899A(iVar0))
		{
			return 0;
		}
		else if (!unk_0xE82754C349C7B581(unk_0x68F4C0EC296D3901(iVar0, true), &fVar3, 0, 0))
		{
			return 0;
		}
		else if (vVar1.z >= (fVar3 + 1.5f))
		{
			return 0;
		}
	}
	if (unk_0xE934758D273C899A(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	else if (!unk_0xE82754C349C7B581(vVar1, &fVar3, 0, 0))
	{
		return 0;
	}
	else if (vVar1.z >= (fVar3 + 1.5f))
	{
		return 0;
	}
	vVar2 = { func_363(uParam0, 0) };
	if (vVar1.z < (vVar2.z + 5f))
	{
		*uParam2 = 1;
		return 1;
	}
	if (iParam1 == 5)
	{
		if (vVar1.z < 288f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 4)
	{
		if (vVar1.z < 305f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 8)
	{
		if (vVar1.z < 227f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 6 || iParam1 == 12)
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), func_467(iParam1)) > 3600f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	return 0;
}

int func_354()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		return 1;
	}
	return 0;
}

var func_355(var uParam0)
{
	return uParam0->f_54;
}

void func_356(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0))
	{
		return;
	}
	vVar2 = { unk_0x68F4C0EC296D3901(*iParam0, true) };
	fVar4 = unk_0xD890711CFD5AF100(*iParam0);
	iVar1 = unk_0xA30B8362589C124A(*iParam0, 4294967295, 0);
	unk_0x1E9649458B15960F(*iParam0, false);
	unk_0xDD353D0E9C789D0E(&iVar0);
	if (!bParam1)
	{
		unk_0x132B85BCE016BCA0(0, *iParam0, unk_0x68F4C0EC296D3901(*iParam0, true), 4, 0f, 786469, 2f, 0f, 1);
	}
	unk_0x132B85BCE016BCA0(0, *iParam0, vVar2 + Vector(5f, 5f, 5f) * unk_0x08D89CE2E20AE305(*iParam0) + Vector(20f, 0f, 0f), 4, (0.3f * fVar4), 786469, 5f, 10f, 1);
	vVar3 = { Vector(1000f, 1000f, 1000f) * unk_0x08D89CE2E20AE305(*iParam0) };
	vVar3.z = 200f;
	unk_0x132B85BCE016BCA0(0, *iParam0, vVar2 + vVar3, 4, fVar4, 262144, 15f, 10f, 1);
	unk_0x75ABDC5F81978924(iVar0);
	unk_0xA3BF0AA5A2608191(iVar1);
	unk_0x78ADC381772E3D54(iVar1, iVar0);
	unk_0xF82EA857DA10E0CD(&iVar0);
}

void func_357(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/])
	{
		unk_0x6FB46C25CCB7E6D5(Global_DFA6[iParam0 /*7*/].f_1, &iVar0, 4294967295);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_DFA6[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_358(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	}
	unk_0x2D23BE319D971F4C(1);
	func_412(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(true);
		unk_0x8BCB70EB440DED83(true);
	}
	func_552(23, 0);
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("ruffian"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("blazer"):
		case joaat("blazer2"):
		case joaat("cruiser"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("pcj"):
		case joaat("policeb"):
			return 1;
		
		default:
	}
	return 0;
}

int func_360(var uParam0)
{
	return *uParam0;
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case joaat("freight"):
		case 868868440:
			return 1;
		
		default:
	}
	return 0;
}

int func_362(var uParam0)
{
	return uParam0->f_1;
}

Vector3 func_363(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return 0f, 0f, 0f;
	}
	return uParam0->f_C[iParam1 /*3*/];
}

Vector3 func_364(var uParam0)
{
	return uParam0->f_6;
}

void func_365(int iParam0)
{
	func_42(iParam0, 0f);
}

int func_366(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_367(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_368(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_369()
{
	int iVar0;
	
	unk_0x035C78C5D5EB800E();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1C0DF1.f_51[iVar0] = 0;
		iVar0++;
	}
}

void func_370()
{
	struct<68> Var0;
	
	Global_1C0005 = 0;
	Global_1C0005.f_1 = 0;
	Global_1C0005.f_2 = 0;
	Global_1C0005.f_3 = 0;
	Global_1C0005.f_4 = 0;
	func_371(&(Global_1C0005.f_49));
	func_371(&(Global_1C0005.f_8E));
	func_371(&(Global_1C0005.f_D3));
	func_371(&(Global_1C0005.f_118));
	StringCopy(&(Global_1C0005.f_15D), "", 24);
	StringCopy(&(Global_1C0005.f_163), "", 24);
	func_131(&(Global_1C0005.f_169));
	Global_1C0005.f_176 = 4294967295;
	Global_1C017C = 0;
	Global_1C017D = 0;
	Var0.f_2.f_1 = 4;
	Global_1C0005.f_5 = { Var0 };
}

void func_371(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

bool func_372(var uParam0)
{
	return uParam0->f_53;
}

int func_373(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, var uParam11, var uParam12)
{
	if (unk_0xFA06B985B30FB0FC(func_427(uParam3, 1)))
	{
		func_365(iParam5);
	}
	if (!*uParam10)
	{
		if (func_456(iParam7) && func_455(iParam7) >= func_394(uParam0))
		{
			func_356(iParam2, 0);
			func_452(iParam7);
			*uParam10 = 1;
		}
	}
	else if (unk_0xDF1306B443CD3D15(*iParam2, 0))
	{
		unk_0xFBFE633A7F731A67(*iParam2, 0.7f);
	}
	if (func_456(iParam5) && func_455(iParam5) > 0.2f)
	{
		func_452(iParam5);
		func_452(iParam6);
		return 1;
	}
	if (!func_456(iParam6))
	{
		func_480(iParam6);
	}
	else if ((uParam12 && unk_0x0F1CCD77290EE12F()) || (func_455(iParam6) > 0.5f && func_327(uParam4, 2)))
	{
		*uParam11 = 1;
		func_452(iParam5);
		func_452(iParam6);
		return 1;
	}
	unk_0x3584F71E5CA29322(2);
	if (func_456(iParam8))
	{
		if (func_460(iParam1) != 0)
		{
			func_452(iParam8);
		}
		else if (func_455(iParam8) > func_420(iParam1, iParam9))
		{
			switch (iParam9)
			{
				case 0:
					unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "amb@world_human_hiker_standing@male@idle_a", "idle_a", 8f, -1.4f, 4294967295, 48, 0, 0, 0, 0);
					break;
				
				case 1:
					unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "amb@world_human_muscle_flex@arms_at_side@base", "base", 8f, -1.4f, 4294967295, 48, 0.681f, 0, 0, 0);
					break;
				
				case 2:
					unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "playidles_cold", "blow_hands", 8f, -1.4f, 4294967295, 48, 0.537f, 0, 0, 0);
					break;
			}
			func_452(iParam8);
		}
	}
	if (unk_0x0F1CCD77290EE12F())
	{
		func_374();
	}
	else
	{
		func_365(iParam6);
	}
	return 0;
}

void func_374()
{
	struct<6> Var0;
	int iVar1;
	
	iVar1 = Global_1B416.f_4A12;
	func_375(Var0, 0, 0, 0, 0, iVar1);
}

void func_375(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (Global_12C4C != 6)
	{
		if (Global_12C4E == 4294967295)
		{
			if (func_389(1, Param0))
			{
				if (Global_12C4F == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_12C4E = unk_0x1C0640BA9A7327B3();
					vLocal_22 = { unk_0x96792D8393A779D7(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + unk_0x6117725E0134737F());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_389(0, Param0))
			{
				Global_12C4E = (unk_0x1C0640BA9A7327B3() - 9000);
			}
			unk_0x3584F71E5CA29322(7);
			unk_0x3584F71E5CA29322(6);
			unk_0x3584F71E5CA29322(8);
			unk_0x3584F71E5CA29322(9);
			iVar1 = (unk_0x1C0640BA9A7327B3() - Global_12C4E);
			if (iVar1 < 9000 && !unk_0x757EF87A33649210())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_12C4C)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				unk_0xD02CE72B4B66DC29(82, 66);
				unk_0x7BBAC160090910C3(1);
				unk_0xEEF67251E263A87F(2);
				iVar11 = func_422();
				if (Global_12C4F == 1 && Global_12C4D == 62)
				{
					iVar11 = Global_1B416.f_936.f_21B.f_10E2;
				}
				switch (iVar11)
				{
					case 0:
						unk_0xA402F6C87C08815C(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 1:
						unk_0xA402F6C87C08815C(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 2:
						unk_0xA402F6C87C08815C(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				unk_0x7178F32F6742C936(iVar7, iVar8, iVar9, iVar2);
				unk_0xC8CFC125861F0537();
				Var4 = { func_378(Global_12C4D, Global_12C4F, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				unk_0x75BBE9A62B73769F(fVar5, fVar6, 0f, 0.01f);
				unk_0xD3539A877EC25E86(0.67f, 0.67f);
				if (!unk_0x0D71AFA59EF5104F() && !unk_0x0DF32524CC9DB3EB())
				{
					fLocal_24 = 0.14f;
				}
				else
				{
					fLocal_24 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_377(&Var4) > fLocal_24)
					{
						if (unk_0x2F1FB0453B36C270(15))
						{
							unk_0x744B56EE9DE7B57F(15, vLocal_22.x, (vLocal_22.y + fLocal_23));
							Global_12C51 = 1;
						}
					}
				}
				unk_0x070005E852D4C0E9(&Var4);
				unk_0xE0026608C37C7C41(fVar5, fVar6, 0);
				unk_0xD59EF13BB60323B9();
				if (Global_12C50 == 1)
				{
					func_376();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_376();
				fLocal_21 = 0f;
			}
		}
	}
}

void func_376()
{
	if (Global_12C4C != 6)
	{
	}
	if (Global_12C51)
	{
		unk_0xA5E3ADAAA4CD5D6C(15);
		Global_12C51 = 0;
		Global_574E.f_20E1 = 0;
	}
	Global_12C4C = 6;
	Global_12C4E = 4294967295;
	Global_12C4D = 4294967295;
}

float func_377(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

struct<2> func_378(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_388(iParam0) };
			break;
		
		case 7:
			Var0 = { func_386(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_385(iParam2) };
					break;
				
				case 8:
					Var0 = { func_384(iParam2) };
					break;
				
				case 7:
					Var0 = { func_383(iParam2) };
					break;
				
				case 10:
					Var0 = { func_382(iParam2) };
					break;
				
				case 5:
					Var0 = { func_381(iParam2) };
					break;
				
				case 4:
					Var0 = { func_380(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_379(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_380(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_381(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_382(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_383(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_384(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_385(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_386(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_387(iParam0) };
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_387(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<2> func_388(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_15DBC[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_1B416.f_2378.f_63.f_CD[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_389(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_391(0) || Global_12C5B) || Global_12C50 == 1) || !unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	switch (Global_12C4C)
	{
		case 0:
			if (unk_0x7F8A39872A07D2CE(&uParam1, "NONE") || unk_0xEA6BC48857E0AC4C(&uParam1))
			{
				Global_12C4C = 3;
			}
			else
			{
				Global_12C4C = 1;
			}
			break;
		
		case 1:
			if (unk_0x62A1F4500E8F07E0())
			{
				Global_12C4C = 2;
			}
			break;
		
		case 2:
			if (unk_0x22A8E52414415B76())
			{
				Global_12C4C = 4;
				return 1;
			}
			else if (!unk_0x39B7A3CCD2467CAB())
			{
				Global_12C4C = 3;
			}
			break;
		
		case 3:
			if (unk_0x22A8E52414415B76())
			{
			}
			else
			{
				Global_12C4C = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x22A8E52414415B76())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_12C4C = 5;
			}
			break;
		
		case 5:
			if ((unk_0x22A8E52414415B76() || func_32(0)) || func_390(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_390(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 4);
	}
	return Global_56C3.f_4;
}

int func_391(int iParam0)
{
	if (Global_A1D7 == 15)
	{
		return 0;
	}
	if (func_392(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_392(int iParam0)
{
	return func_393(iParam0, Global_A1D7);
}

int func_393(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

float func_394(var uParam0)
{
	return uParam0->f_50;
}

int func_395(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_409(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_514C = 0;
	Global_514E = 0;
	Global_5153 = 0;
	Global_5524 = 0;
	Global_5526 = 0;
	Global_552A = 0;
	Global_280001 = 0;
	return func_396(sParam2, iParam3, 0);
}

int func_396(char* sParam0, int iParam1, bool bParam2)
{
	Global_5146 = 0;
	if (Global_5145 == 0 || Global_5147 == 2)
	{
		if (Global_5145 != 0)
		{
			if (iParam1 > Global_5147)
			{
				if (Global_514C == 0)
				{
					unk_0x5CEB4DB888A62073(false);
					Global_4C1E.f_1 = 3;
					Global_5145 = 0;
					Global_5146 = 1;
					Global_517A = 0;
					Global_5141 = 0;
					Global_5142 = 0;
					Global_5150 = 0;
					Global_514F = 0;
					Global_4C1D = 0;
				}
				else
				{
					func_408();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_407(8, 4294967295))
		{
			return 0;
		}
		Global_5191 = { Global_518B };
		func_406();
		Global_4E7E = { Global_4F23 };
		Global_514B = Global_514C;
		Global_5152 = Global_5153;
		Global_280002 = Global_280001;
		Global_5154 = { Global_5164 };
		Global_514D = Global_514E;
		Global_5523 = Global_5524;
		Global_552B = { Global_5531 };
		Global_5525 = Global_5526;
		Global_5527 = Global_5528;
		Global_5529 = Global_552A;
		Global_4FC8.f_172 = Global_5522;
		Global_4FC8.f_170 = Global_5520;
		Global_4FC8.f_171 = Global_5521;
		Global_5141 = Global_5142;
		if (Global_514B)
		{
			unk_0x0674E58A79778E99(&Global_1CBC, 20);
			unk_0x0674E58A79778E99(&Global_1CBD, 17);
			unk_0x0674E58A79778E99(&Global_1CBE, 0);
			if (bParam2)
			{
				func_405();
				if (Global_1FE1[Global_4C1E /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_4C1E.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_4BFC == 1)
			{
				return 0;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_404())
				{
					return 0;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_12B4E)
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_4C1E.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 9))
				{
					return 0;
				}
			}
			func_403();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0;
		func_402();
		func_397();
		return 1;
	}
	if (Global_5145 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_5147 || iParam1 == Global_5147)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_408();
	}
	return 0;
}

void func_397()
{
	if (!func_398())
	{
		return;
	}
	if (Global_514B)
	{
		MemCopy(&(Global_19FCC4.f_1), {Global_4FC8}, 4);
		Global_19FCC4 = Global_1A0F;
		Global_19FCC4.f_6 = Global_514F;
	}
}

int func_398()
{
	if (!Global_40001.f_6DB6)
	{
		return 0;
	}
	if (!Global_12B4E)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_401())
	{
		return 0;
	}
	if (func_399(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	return 1;
}

bool func_399(int iParam0)
{
	return func_400(iParam0, 20);
}

bool func_400(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_401()
{
	return 4294967295;
}

void func_402()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_4CD9[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(false);
	Global_5145 = 1;
}

void func_403()
{
	Global_517A = Global_5179;
	Global_5174 = Global_5175;
	Global_51A3 = { Global_5197 };
	Global_51A9 = { Global_519D };
	Global_517C = Global_517B;
	Global_51C1 = { Global_51AF };
	Global_51C7 = { Global_51B5 };
	Global_51CD = { Global_51BB };
	Global_51D3 = { Global_51D9 };
	Global_1A0F = Global_1A10;
	Global_1A11 = Global_1A12;
	Global_5150 = Global_5151;
	Global_5152 = Global_5153;
	Global_5154 = { Global_5164 };
	Global_5149 = Global_514A;
	Global_553D = 0;
	Global_5176 = 0;
	Global_5177 = 0;
	unk_0x0674E58A79778E99(&Global_1CBD, 16);
}

int func_404()
{
	int iVar0;
	int iVar1;
	
	if (Global_12B4E)
	{
		iVar0 = 0;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_405()
{
	if (func_246(14))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0 /*29*/])
			{
				Global_4C1E = 0;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[1 /*29*/])
			{
				Global_4C1E = 1;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[2 /*29*/])
			{
				Global_4C1E = 2;
			}
			else
			{
				Global_4C1E = 0;
			}
		}
	}
	else
	{
		Global_4C1E = func_422();
		if (Global_4C1E == 145)
		{
			Global_4C1E = 3;
		}
		if (Global_12B4E)
		{
			Global_4C1E = 3;
		}
		if (Global_4C1E > 3)
		{
			Global_4C1E = 3;
		}
	}
}

void func_406()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_4E7E[iVar0 /*10*/] = 0;
		StringCopy(&(Global_4E7E[iVar0 /*10*/].f_1), "", 24);
		Global_4E7E[iVar0 /*10*/].f_7 = 0;
		Global_4E7E[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_4E7E.f_A1 = 4294967197;
	Global_4E7E.f_A2 = { 0f, 0f, 0f };
}

bool func_407(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				return Global_150392.f_CB[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_418, iParam0);
}

void func_408()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_4C1E.f_1 == 9) || Global_4C1D == 1)
	{
		unk_0x5CEB4DB888A62073(false);
		Global_5145 = 6;
		Global_4C1E.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(true);
		Global_5145 = 6;
		return;
	}
}

void func_409(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = uParam5;
	if (iParam3 == 0)
	{
		Global_5520 = 1;
		Global_551E = 0;
	}
	else
	{
		Global_5520 = 0;
		Global_551E = 1;
	}
	if (iParam4 == 0)
	{
		Global_5521 = 1;
		Global_551F = 0;
	}
	else
	{
		Global_5521 = 0;
		Global_551F = 1;
	}
}

var func_410(var uParam0)
{
	return uParam0->f_4;
}

void func_411(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = func_427(uParam0, 0);
	if (unk_0xC844350D5D58C99A(iParam5) && !unk_0x437347B10A200C4B(iParam5, 0))
	{
		*uParam2 = { 10.2986f, 0f, 8.909f };
		*uParam4 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_458(uParam1))), SYSTEM::SIN((-97.4239f + func_458(uParam1)))) };
		*uParam3 = { unk_0x68E4ADDDDCD7BDDE(iParam5, 1.12046f, -0.317773f, 1.3385f) };
		vVar1 = { func_457(*uParam4, uParam2->f_2) };
		vVar3 = { *uParam3 + vVar1 };
		*uParam6 = { (-33f + *uParam2), 0f, (-88.515f + func_458(uParam1)) };
		*uParam7 = 26f;
		vVar2 = { *uParam6 };
		vVar2.z = (vVar2.z + uParam2->f_2);
		unk_0x608A456FDD8A83D8(iVar0, vVar3);
		unk_0x5F3CBA6EB9341C90(iVar0, vVar2, 2);
		unk_0x5818C8D5303DCCF8(iVar0, *uParam7);
		unk_0xDC3CC6D1845B0567(iVar0, func_325());
	}
	unk_0xE3BB8E05FCEB3FBE(iVar0, true);
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
}

void func_412(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_419(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_28())
			{
				Global_4C1E.f_1 = 3;
			}
			Global_5145 = 5;
		}
		func_418(1, iParam3, iParam2, 0);
		Global_F04E = 1;
		Global_12064 = 1;
		Global_12B4C = 1;
	}
	else
	{
		func_419(0);
		unk_0x17D339215F817B98();
		Global_F04E = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_418(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_416(unk_0xD803B885F5E47A62())) && !func_414(unk_0xD803B885F5E47A62(), 0)) && !func_413()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_416(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_12B4C = 0;
	}
}

bool func_413()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 14);
}

bool func_414(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_415(4294967295, 0) == 8;
	}
	else
	{
		bVar0 = Global_184507[iParam0 /*876*/].f_D3 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_415(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_224();
	}
	if (Global_140859[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407E3[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_416(int iParam0)
{
	if (func_414(iParam0, 0))
	{
		return 1;
	}
	if (func_417())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 2))
	{
		return 1;
	}
	return 0;
}

bool func_417()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 3);
}

int func_418(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_419(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 13);
	}
}

float func_420(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6f;
				
				case 1:
					return 7.3f;
				
				case 2:
					return 6.8f;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 4.2f;
				
				case 1:
					return 5.5f;
				
				case 2:
					return 5f;
				
				default:
			}
			break;
		
		case 5:
			return 0f;
		
		case 6:
			return 0f;
		
		case 12:
			return 0f;
	}
	return 0f;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 3000;
		
		case 6:
			return 1500;
		
		case 12:
			return 2000;
		
		default:
	}
	return 0;
}

int func_422()
{
	func_423();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_423()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_37(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_36(unk_0x16F2683693E537C9());
			if (func_39(iVar0) && (!func_246(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_39(Global_1B416.f_936.f_21B.f_10E1))
				{
					Global_1B416.f_936.f_21B.f_10E2 = Global_1B416.f_936.f_21B.f_10E1;
				}
				Global_1B416.f_936.f_21B.f_10E3 = iVar0;
				Global_1B416.f_936.f_21B.f_10E1 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_1B416.f_936.f_21B.f_10E1 != 145)
			{
				Global_1B416.f_936.f_21B.f_10E3 = Global_1B416.f_936.f_21B.f_10E1;
			}
			return;
		}
	}
	Global_1B416.f_936.f_21B.f_10E1 = 145;
}

float func_424(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_425(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_426(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -120.0078f, -976.4348f, 295.2008f;
		
		case 6:
			return -1242.709f, 4539.658f, 185.6828f;
		
		case 12:
			return -768.0306f, 4330.409f, 147.6768f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_427(var uParam0, int iParam1)
{
	if (iParam1 >= 2)
	{
		return 0;
	}
	return (*uParam0)[iParam1];
}

void func_428(int iParam0, int iParam1, int iParam2)
{
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, iParam0);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 15f);
	}
	unk_0x2D23BE319D971F4C(iParam1);
	func_27(0);
	func_412(1, 1, iParam2, 0, 0, 0);
	unk_0xBFE31971E49FA500(false);
	unk_0x8BCB70EB440DED83(false);
	func_552(23, 1);
}

void func_429(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		return;
	}
	if (func_425(func_451(uParam0)))
	{
	}
	else
	{
		unk_0xE342F209E49C5314(func_451(uParam0), func_450(uParam0), false, 1);
	}
	iVar3 = 0;
	while (iVar3 < 12)
	{
		if (!func_425(func_363(uParam0, iVar3)))
		{
			*uParam2 = iVar3 + 1;
		}
		else
		{
			iVar3 = 999999;
		}
		iVar3++;
	}
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
	unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), false);
	unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 1, false, false);
	unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
	if (iParam13 == 4)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x437347B10A200C4B(iVar1, 0))
			{
				unk_0xA954465BA6FDEFE2(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iVar1, true) };
				if (((((vVar2.z > 320f && vVar2.z < 340f) && vVar2.x > -103f) && vVar2.x < -45f) && vVar2.y > -850f) && vVar2.y < -787f)
				{
					unk_0xA47B46945FF6DE74(iVar1, -89.794f, -742.6727f, 43.7472f, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(iVar1, -109.33f);
					unk_0x05CA0E7946B27A19(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 3)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x437347B10A200C4B(iVar1, 0))
			{
				unk_0xA954465BA6FDEFE2(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iVar1, true) };
				if (((((vVar2.z > 689.4f && vVar2.z < 701.8875f) && vVar2.x > 404.6f) && vVar2.x < 413.4f) && vVar2.y > 5700.6f) && vVar2.y < 5711.9f)
				{
					unk_0xA47B46945FF6DE74(iVar1, -215.2838f, 6543.57f, 10.0967f, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(iVar1, 145.5732f);
					unk_0x05CA0E7946B27A19(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 5)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x437347B10A200C4B(iVar1, 0))
			{
				unk_0xA954465BA6FDEFE2(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iVar1, true) };
				if (((((vVar2.z > 294.5f && vVar2.z < 298.9f) && vVar2.x > -121.3f) && vVar2.x < -116.5f) && vVar2.y > -978.1f) && vVar2.y < -973.2f)
				{
					unk_0xA47B46945FF6DE74(iVar1, -118.1021f, -947.3954f, 27.3296f, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(iVar1, 341.9614f);
					unk_0x05CA0E7946B27A19(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 6)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x437347B10A200C4B(iVar1, 0))
			{
				unk_0xA954465BA6FDEFE2(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iVar1, true) };
				if (((((vVar2.z > 182.7f && vVar2.z < 202.7f) && vVar2.x > -1252.7f) && vVar2.x < -1227.9f) && vVar2.y > 4525.8f) && vVar2.y < 4549.3f)
				{
					unk_0xA47B46945FF6DE74(iVar1, -1237.022f, 4559.404f, 185.9418f, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(iVar1, 172.2123f);
					unk_0x05CA0E7946B27A19(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 8)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x437347B10A200C4B(iVar1, 0))
			{
				unk_0xA954465BA6FDEFE2(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iVar1, true) };
				if (((((vVar2.z > 230f && vVar2.z < 244.5f) && vVar2.x > -809.6f) && vVar2.x < -747.7f) && vVar2.y > 310.6f) && vVar2.y < 346.6f)
				{
					unk_0xA47B46945FF6DE74(iVar1, -1351.805f, 133.95f, 55.2558f, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(iVar1, 0.8373f);
					unk_0x05CA0E7946B27A19(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 12)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x437347B10A200C4B(iVar1, 0))
			{
				unk_0xA954465BA6FDEFE2(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iVar1, true) };
				if (((((vVar2.z > 143.6f && vVar2.z < 154.5f) && vVar2.x > -777f) && vVar2.x < -758.9f) && vVar2.y > 4328.3f) && vVar2.y < 4344f)
				{
					unk_0xA47B46945FF6DE74(iVar1, -765.8775f, 4294.807f, 145.6581f, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(iVar1, 349.2306f);
					unk_0x05CA0E7946B27A19(iVar1, 1);
				}
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
		unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), false);
		unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 1, false, false);
	}
	iVar0 = func_460(iParam13);
	if (iVar0 != 0)
	{
		if (!unk_0x437347B10A200C4B(*iParam3, 0) || unk_0xC844350D5D58C99A(*iParam3))
		{
			unk_0x51B954DAB1BCAF73(*iParam3);
			unk_0xA47B46945FF6DE74(*iParam3, func_467(iParam13), 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(*iParam3, func_458(uParam0));
		}
		else
		{
			*iParam3 = unk_0x122AAB0B1D6F55AD(iVar0, func_467(iParam13), func_458(uParam0), true, true, false);
		}
		if (func_459(iVar0))
		{
			if (!unk_0xC844350D5D58C99A(*iParam8) || unk_0x437347B10A200C4B(*iParam8, 0))
			{
				*iParam8 = unk_0x852A19533F896693(*iParam3, 26, iParam10, 4294967295, 1, true);
				unk_0xCC095276B3DD380E(*iParam8, 0);
				func_449(*iParam8, iParam13);
				unk_0xE121AE1BBF90E186(*iParam8, true);
			}
			unk_0x297734EBF6EB6285("SKY_DIVING_SHAKE", 0.15f);
			func_447(uParam1, *iParam8, func_448(iParam13));
			func_444(uParam1, unk_0x16F2683693E537C9(), func_446());
			unk_0xFBFE633A7F731A67(*iParam3, 0.7f);
			unk_0x1E9649458B15960F(*iParam3, true);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam3, 0))
				{
					unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 1, true);
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), *iParam3, 2);
				}
				else if (func_443(unk_0x16F2683693E537C9(), *iParam3) == 1)
				{
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), *iParam3, 2);
				}
			}
			if (!unk_0x437347B10A200C4B(*iParam3, 0))
			{
				*iParam14 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
				unk_0x6BE2EAE992FD7C26(*iParam14, *iParam3, unk_0xF653B9B22DA806A9(*iParam3, "Chassis"));
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), *iParam14, "oddjobs@basejump@", "Heli_door_loop", 4f, -4f, 65, 0, 1148846080, 0);
				unk_0xC90224D9E95E5E3A(*iParam14, true);
			}
			func_480(iParam12);
		}
		else if (func_359(iVar0))
		{
			func_444(uParam1, unk_0x16F2683693E537C9(), func_446());
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
			unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), *iParam3, 4294967295);
			unk_0x83F619A03CDDE284(unk_0x16F2683693E537C9(), 0, 4096, 4294967295);
			func_480(iParam12);
		}
	}
	else
	{
		func_444(uParam1, unk_0x16F2683693E537C9(), func_446());
		if (func_372(uParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || unk_0x7ED67A9BE53DAC95(unk_0x16F2683693E537C9())))
			{
				unk_0x975C58E0FC4955A9(unk_0x16F2683693E537C9(), 1);
			}
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), func_467(iParam13), 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), func_458(uParam0));
			unk_0x93D47DFD0AE94949(unk_0x16F2683693E537C9(), 4294967295);
			if (unk_0xC844350D5D58C99A(*iParam3))
			{
				iVar4 = 4294967295;
				while (iVar4 <= (unk_0xD6DF381716822EFE(*iParam3) - 1))
				{
					if (!unk_0xBBA8A868118C90ED(*iParam3, iVar4, 0))
					{
						iVar5 = unk_0xA30B8362589C124A(*iParam3, iVar4, 0);
						unk_0xEBA53F35D0085654(&iVar5);
					}
					iVar4++;
				}
				unk_0xA954465BA6FDEFE2(iParam3);
			}
		}
	}
	unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 177, true);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 36, true);
	if (func_525(uParam0) != 0)
	{
		func_439(uParam0, iParam5, iParam13);
	}
	if (func_438(uParam0) != 0)
	{
		func_435(uParam0, iParam7);
	}
	iVar0 = func_362(uParam0);
	if (func_361(iVar0))
	{
		unk_0x52D3C9744D7CF20D();
		unk_0xF48790410026514E(0);
	}
	else if (iVar0 != 0)
	{
		unk_0x536F1BE96C726C4B(func_363(uParam0, 0), 100f, 1, 0, 0, false);
		if (unk_0xC844350D5D58C99A(*iParam4) && unk_0x437347B10A200C4B(*iParam4, 0))
		{
			unk_0xA954465BA6FDEFE2(iParam4);
		}
		if (!unk_0xC844350D5D58C99A(*iParam4))
		{
			*iParam4 = unk_0x122AAB0B1D6F55AD(iVar0, func_363(uParam0, 0), func_434(uParam0), true, true, false);
			if (func_433(func_362(uParam0)))
			{
				unk_0xC6A6B4DDD6DC073A(*iParam4, 11);
			}
			else if (func_432(func_362(uParam0)))
			{
				unk_0xD3421E391490133B(*iParam4, 1, true);
				unk_0xC6A6B4DDD6DC073A(*iParam4, 6);
				unk_0x0882E3DC0C991680(*iParam4, 2);
				unk_0x29AA598B93E45D37(200f);
				unk_0x25BD67336EA4AECE(*iParam4, 1000);
			}
			unk_0xE8832A9E16A57A1F(*iParam4, true, 1);
		}
		else if (!unk_0x437347B10A200C4B(*iParam4, 0))
		{
			unk_0x51B954DAB1BCAF73(*iParam4);
			unk_0xA47B46945FF6DE74(*iParam4, func_363(uParam0, 0), 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(*iParam4, func_434(uParam0));
		}
		if (func_433(func_362(uParam0)))
		{
			if (unk_0xC844350D5D58C99A(*iParam6) && unk_0x437347B10A200C4B(*iParam6, 0))
			{
				unk_0xA954465BA6FDEFE2(iParam6);
			}
			if (!unk_0xC844350D5D58C99A(*iParam6))
			{
				*iParam6 = unk_0x122AAB0B1D6F55AD(joaat("trflat"), unk_0x68E4ADDDDCD7BDDE(*iParam4, 0f, -10f, 0f), func_434(uParam0), true, true, false);
				unk_0xE8832A9E16A57A1F(*iParam6, true, 1);
				unk_0x25BD67336EA4AECE(*iParam6, 2000);
			}
			else if (!unk_0x437347B10A200C4B(*iParam6, 0))
			{
				unk_0x51B954DAB1BCAF73(*iParam6);
			}
			if (!unk_0x6CFEA4CFD9C496C8(*iParam4))
			{
				unk_0xC74DAD25331A5425(*iParam4, *iParam6, 1065353216);
			}
		}
		if (unk_0xC844350D5D58C99A(*iParam9) && unk_0x437347B10A200C4B(*iParam9, 0))
		{
			unk_0xEBA53F35D0085654(iParam9);
		}
		if (!unk_0xC844350D5D58C99A(*iParam9))
		{
			*iParam9 = unk_0x852A19533F896693(*iParam4, 26, iParam11, 4294967295, 1, true);
			unk_0x73270B3C9CC833FD(*iParam9, true, 0);
			unk_0x11AD11297DC58CC7(*iParam9, true);
			func_431(*iParam9, iParam13);
			if (iParam13 == 0)
			{
				func_430(uParam1, 2, *iParam9, "EX3MERC1", 0, 1);
			}
		}
		else
		{
			unk_0xD458AC1C1D29C3B4(*iParam9, unk_0xC08489BCA49ECCA8(*iParam9), 0);
			unk_0x759A5E1D0F0A31A1(*iParam9);
			unk_0xA3BF0AA5A2608191(*iParam9);
			if (!unk_0xC42A92762C58E1B9(*iParam9, *iParam4, 0) || unk_0xA30B8362589C124A(*iParam4, 4294967295, 0) != *iParam9)
			{
				if (unk_0x405E212DDE472467(*iParam9, 1))
				{
					unk_0x975C58E0FC4955A9(*iParam9, 1);
				}
				unk_0xF821F915BC24D246(*iParam9, *iParam4, 4294967295);
			}
		}
		unk_0xE8832A9E16A57A1F(*iParam9, true, 1);
	}
	if (func_422() == 0)
	{
		unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 9, 5, 0, 0);
	}
	else if (func_422() == 1)
	{
		unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 8, 1, 0, 0);
	}
	else if (func_422() == 2)
	{
		unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 8, 3, 0, 0);
	}
}

void func_430(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_12B4E)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 1);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 1);
			}
		}
	}
}

void func_431(int iParam0, int iParam1)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			unk_0x64F9F278AB9DCA2C(iParam0, 0, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 3, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 4, 0, 2, 0);
			unk_0x3BFC3B9ADD2EE7B7(iParam0, 0);
			unk_0x9A28E8CB86CD4694(iParam0, 1, 1, 0, false);
			break;
		
		case 5:
			unk_0x64F9F278AB9DCA2C(iParam0, 0, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 2, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 3, 1, 2, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 4, 1, 1, 0);
			unk_0x3BFC3B9ADD2EE7B7(iParam0, 0);
			unk_0x3BFC3B9ADD2EE7B7(iParam0, 1);
			break;
		
		case 7:
			unk_0x64F9F278AB9DCA2C(iParam0, 0, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 3, 0, 2, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 4, 0, 2, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 8, 0, 1, 0);
			unk_0x9A28E8CB86CD4694(iParam0, 0, 0, 2, false);
			break;
	}
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("dinghy"):
		case joaat("jetmax"):
		case joaat("marquis"):
		case joaat("squalo"):
		case joaat("suntrap"):
		case joaat("tropic"):
		case joaat("predator"):
			return 1;
		
		default:
	}
	return 0;
}

int func_433(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hauler"):
		case joaat("biff"):
		case joaat("packer"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("phantom"):
		case joaat("pounder"):
			return 1;
		
		default:
	}
	return 0;
}

var func_434(var uParam0)
{
	return uParam0->f_4D;
}

void func_435(var uParam0, int iParam1)
{
	if (!unk_0xC844350D5D58C99A(*iParam1))
	{
		*iParam1 = unk_0x122AAB0B1D6F55AD(func_438(uParam0), func_437(uParam0), func_436(uParam0), true, true, false);
	}
	else if (unk_0x437347B10A200C4B(*iParam1, 0))
	{
		unk_0xA954465BA6FDEFE2(iParam1);
		*iParam1 = unk_0x122AAB0B1D6F55AD(func_438(uParam0), func_437(uParam0), func_436(uParam0), true, true, false);
	}
	else
	{
		unk_0x51B954DAB1BCAF73(*iParam1);
	}
}

var func_436(var uParam0)
{
	return uParam0->f_4F;
}

Vector3 func_437(var uParam0)
{
	return uParam0->f_9;
}

int func_438(var uParam0)
{
	return uParam0->f_3;
}

void func_439(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC844350D5D58C99A(*uParam1))
	{
		if (!func_320(*uParam1) && unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(*uParam1, 4294967295, 0)))
		{
			iVar1 = unk_0xA30B8362589C124A(*uParam1, 4294967295, 0);
		}
		iVar2 = *uParam1;
	}
	iVar0 = func_442(iParam2);
	if (iVar0 != 0)
	{
		if (!unk_0xC844350D5D58C99A(iVar2))
		{
			iVar2 = unk_0x122AAB0B1D6F55AD(func_525(uParam0), func_441(uParam0), func_440(uParam0), true, true, false);
		}
		else
		{
			unk_0xA47B46945FF6DE74(iVar2, func_441(uParam0), 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(iVar2, func_440(uParam0));
		}
		unk_0x1E9649458B15960F(iVar2, true);
		if (!unk_0xC844350D5D58C99A(iVar1))
		{
			iVar1 = unk_0x852A19533F896693(iVar2, 26, iVar0, 4294967295, 1, true);
		}
		unk_0xCC095276B3DD380E(iVar1, 0);
		func_449(iVar1, iParam2);
	}
	else
	{
		if (!unk_0xC844350D5D58C99A(iVar2))
		{
			iVar2 = unk_0x122AAB0B1D6F55AD(func_525(uParam0), func_441(uParam0), func_440(uParam0), true, true, false);
		}
		else
		{
			unk_0xA47B46945FF6DE74(iVar2, func_441(uParam0), 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(iVar2, func_440(uParam0));
		}
		unk_0x1E9649458B15960F(iVar2, true);
		if (!unk_0xC844350D5D58C99A(iVar1))
		{
			iVar1 = unk_0x852A19533F896693(iVar2, 26, joaat("s_m_y_pilot_01"), 4294967295, 1, true);
		}
		unk_0xCC095276B3DD380E(iVar1, 0);
		unk_0x9A28E8CB86CD4694(iVar1, 0, 2, 0, false);
		unk_0x9A28E8CB86CD4694(iVar1, 1, 0, 0, false);
	}
	unk_0x56FDC9ADE35F7DB0(iVar2, true, true, 0);
	unk_0xFBFE633A7F731A67(iVar2, 0.7f);
	unk_0xA3BF0AA5A2608191(iVar1);
	unk_0x93D47DFD0AE94949(iVar1, 4294967295);
	*uParam1 = iVar2;
}

var func_440(var uParam0)
{
	return uParam0->f_4E;
}

Vector3 func_441(var uParam0)
{
	return uParam0->f_46;
}

int func_442(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("s_m_y_pilot_01");
		
		case 1:
			return joaat("s_m_y_pilot_01");
		
		case 2:
			return joaat("s_m_y_pilot_01");
		
		case 3:
			return joaat("s_m_y_pilot_01");
		
		case 7:
			return joaat("a_m_y_hippy_01");
		
		case 9:
			return joaat("s_m_y_pilot_01");
		
		case 10:
			return joaat("s_m_y_pilot_01");
		
		case 11:
			return joaat("a_m_m_genfat_02");
		
		default:
	}
	return 0;
}

int func_443(int iParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, 4294967295, 0) == iParam0)
			{
				return 4294967295;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xA30B8362589C124A(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0xA30B8362589C124A(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return 4294967294;
}

void func_444(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = func_445();
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		func_430(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_430(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

int func_445()
{
	if (func_422() == 1)
	{
		return 2;
	}
	if (func_422() == 2)
	{
		return 3;
	}
	return 1;
}

char* func_446()
{
	int iVar0;
	
	iVar0 = func_36(unk_0x16F2683693E537C9());
	switch (iVar0)
	{
		case 0:
			return "MICHAEL";
		
		case 2:
			return "TREVOR";
		
		case 1:
			return "FRANKLIN";
		
		default:
	}
	return "";
}

void func_447(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		func_430(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_430(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

char* func_448(int iParam0)
{
	return "EXT1HELIPILOT";
}

void func_449(int iParam0, int iParam1)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 7:
			unk_0x64F9F278AB9DCA2C(iParam0, 0, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 2, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 3, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 8, 1, 0, 0);
			unk_0x9A28E8CB86CD4694(iParam0, 1, 0, 0, false);
			break;
		
		case 11:
			unk_0x64F9F278AB9DCA2C(iParam0, 0, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 2, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 3, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(iParam0, 4, 0, 2, 0);
			unk_0x9A28E8CB86CD4694(iParam0, 0, 1, 2, false);
			unk_0x9A28E8CB86CD4694(iParam0, 1, 1, 0, false);
			break;
	}
}

Vector3 func_450(var uParam0)
{
	return uParam0->f_43;
}

Vector3 func_451(var uParam0)
{
	return uParam0->f_40;
}

void func_452(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_453(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	if (!func_459(func_460(iParam3)))
	{
		unk_0xA0D09682534C2176(func_467(iParam3));
	}
	if (func_456(iParam1))
	{
		if (func_455(iParam1) >= 5f)
		{
			return 1;
		}
	}
	else
	{
		func_336(iParam1, 0f);
	}
	if (unk_0x757EF87A33649210())
	{
		if (!unk_0x68367101660E33F0())
		{
			return 0;
		}
	}
	if (func_459(func_460(iParam3)))
	{
		if (!unk_0xB4AE0788C1587752("veh@helicopter@rps@base"))
		{
			return 0;
		}
	}
	if (func_420(iParam3, 0) > 0f)
	{
		switch (iParam4)
		{
			case 0:
				StringCopy(&cVar0, "amb@world_human_hiker_standing@male@idle_a", 64);
				break;
			
			case 1:
				StringCopy(&cVar0, "amb@world_human_muscle_flex@arms_at_side@base", 64);
				break;
			
			case 2:
				StringCopy(&cVar0, "playidles_cold", 64);
				break;
		}
		if (!unk_0xB4AE0788C1587752(&cVar0))
		{
			return 0;
		}
	}
	if (func_454(uParam0))
	{
		if (unk_0x83D8570832F172A7(*uParam2))
		{
			if (unk_0x67C1D9E5B91B2E37(2))
			{
				if (unk_0x27117E2CDD4D67C3("basejumping"))
				{
					if (((unk_0xB4AE0788C1587752("oddjobs@basejump@") && unk_0xB4AE0788C1587752("skydive@freefall")) && unk_0xB4AE0788C1587752("skydive@parachute@chute")) && unk_0xB4AE0788C1587752("skydive@parachute@"))
					{
						if (unk_0x3FC59DD18F049D6E(0))
						{
							if (!bParam5 || unk_0x757EF87A33649210())
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_454(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
			{
				if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

float func_455(int iParam0)
{
	if (func_456(iParam0))
	{
		if (func_348(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_43(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

bool func_456(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

Vector3 func_457(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

float func_458(var uParam0)
{
	return uParam0->f_4C;
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case joaat("annihilator"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("polmav"):
		case joaat("skylift"):
			return 1;
		
		default:
	}
	return 0;
}

int func_460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 9:
		case 10:
		case 11:
			return joaat("maverick");
			break;
		
		case 4:
			return joaat("bati");
			break;
	}
	return 0;
}

void func_461(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	func_26(1);
	unk_0xC0FB48F966BB7D11(0);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x8B66ED74C2DC2E98(unk_0x16F2683693E537C9(), 2f);
	}
	switch (iParam1)
	{
		case 0:
			unk_0x7D6CA5F52B3748BF(-901.2005f, 4422.489f, 19.3471f, -906.842f, 4424.97f, 300.017f, 0, 1, 1, 1);
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			break;
		
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			func_466(1, 1);
			break;
		
		case 9:
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	if (unk_0x757EF87A33649210())
	{
		unk_0x536F1BE96C726C4B(func_467(iParam1), 5000f, 1, 0, 0, false);
	}
	unk_0xD7992BEF7A9D109E("BJUMP", 2);
	iVar0 = func_460(iParam1);
	if (iVar0 != 0)
	{
		if (func_459(iVar0))
		{
			unk_0x3F423BF5B8125A50("veh@helicopter@rps@base");
			*uParam3 = func_442(iParam1);
			func_464(uParam2, *uParam3);
		}
		func_464(uParam2, iVar0);
	}
	if (func_525(uParam0) != 0)
	{
		func_464(uParam2, func_525(uParam0));
		if (func_442(iParam1) != 0)
		{
			func_464(uParam2, func_442(iParam1));
		}
		else
		{
			func_464(uParam2, joaat("s_m_y_pilot_01"));
		}
	}
	iVar1 = func_362(uParam0);
	if (iVar1 != 0)
	{
		*uParam4 = func_463(iParam1);
		func_464(uParam2, *uParam4);
		func_464(uParam2, iVar1);
		func_464(uParam2, joaat("trflat"));
	}
	if (func_361(iVar1))
	{
		func_464(uParam2, joaat("freight"));
		func_464(uParam2, joaat("freightcar"));
		func_464(uParam2, joaat("freightgrain"));
		func_464(uParam2, joaat("freightcont1"));
		func_464(uParam2, joaat("freightcont2"));
		func_464(uParam2, joaat("tankercar"));
		func_464(uParam2, 868868440);
	}
	if (func_438(uParam0) != 0)
	{
		func_464(uParam2, func_438(uParam0));
	}
	*uParam5 = func_163();
	func_462(uParam2);
	unk_0x3F423BF5B8125A50("oddjobs@basejump@");
	unk_0x3F423BF5B8125A50("skydive@freefall");
	unk_0x3F423BF5B8125A50("skydive@parachute@chute");
	unk_0x3F423BF5B8125A50("skydive@parachute@");
	unk_0x0D3BE1DE0262A012("basejumping", false);
	if (func_420(iParam1, 0) > 0f)
	{
		*uParam6 = unk_0x09AC81E49EA267F7(0, 2);
		switch (*uParam6)
		{
			case 0:
				unk_0x3F423BF5B8125A50("amb@world_human_hiker_standing@male@idle_a");
				break;
			
			case 1:
				unk_0x3F423BF5B8125A50("amb@world_human_muscle_flex@arms_at_side@base");
				break;
			}
	}
	if (func_460(iParam1) == 0)
	{
		unk_0xA0D09682534C2176(func_467(iParam1));
	}
}

void func_462(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x523BCC9DC80CD82F((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("a_m_y_beach_01");
		
		case 5:
			return joaat("s_m_m_trucker_01");
		
		case 7:
			return joaat("a_m_y_beach_01");
		
		default:
	}
	return 0;
}

int func_464(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_465(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_465(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_466(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&Global_78CE, iParam0);
	StringCopy(&(Global_78CF[iParam0 /*6*/]), unk_0xBB0808A181D4745C(), 24);
	Global_7906[iParam0] = iParam1;
}

Vector3 func_467(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1152.053f, -1857.884f, 204.0663f;
		
		case 1:
			return 885.114f, -437.352f, 529.867f;
		
		case 2:
			return 2034.912f, 1971.051f, 582.7461f;
		
		case 3:
			return 409.7498f, 5703.525f, 695.17f;
		
		case 4:
			return -74.9632f, -827.4467f, 324.9521f;
		
		case 5:
			return -117.6998f, -975.571f, 295f;
		
		case 6:
			return -1243.784f, 4534.163f, 184.8471f;
		
		case 7:
			return -359.1f, 4119.5f, 304.1f;
		
		case 8:
			return -807.073f, 330.8846f, 232.6766f;
		
		case 9:
			return -1286.99f, 3668.922f, 1072.466f;
		
		case 10:
			return 1018.441f, 3956.706f, 1354f;
		
		case 11:
			return 1627.196f, -421.7584f, 1321.484f;
		
		case 12:
			return -766.5999f, 4334.805f, 147.1205f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_468(int iParam0)
{
	if (unk_0x757EF87A33649210())
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), func_467(iParam0), 15f, 15f, 15f, false, true, 0))
		{
			return 1;
		}
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), func_467(iParam0), 0, false, 0, 1);
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), func_467(iParam0), 15f, 15f, 15f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_469(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

Vector3 func_470(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_471(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	vVar0 = { func_479(uParam1) };
	vVar1 = { func_478(uParam1) };
	fVar2 = func_477(uParam1);
	if (!unk_0x9F4FE516EAACCFC5(func_427(uParam0, 0)))
	{
		func_476(uParam0, 0, unk_0xAE06CCC36C49929C(26379945, vVar0, vVar1, 65f, 0, 2), 1);
	}
	else
	{
		unk_0x608A456FDD8A83D8(func_427(uParam0, 0), vVar0);
		unk_0x5F3CBA6EB9341C90(func_427(uParam0, 0), vVar1, 2);
	}
	unk_0x5818C8D5303DCCF8(func_427(uParam0, 0), fVar2);
	unk_0xE3BB8E05FCEB3FBE(func_427(uParam0, 0), true);
	if (bParam3)
	{
		vVar3 = { vVar0 };
		vVar3.z = (vVar3.z + 8f);
		unk_0x86F44313DFA8F00C(func_427(uParam0, 0), vVar3, vVar1, fVar2, func_475(iParam2), 1, 1, 2);
	}
	vVar0 = { func_474(uParam1) };
	vVar1 = { func_473(uParam1) };
	fVar2 = func_472(uParam1);
	if (!unk_0x9F4FE516EAACCFC5(func_427(uParam0, 1)))
	{
		func_476(uParam0, 1, unk_0xAE06CCC36C49929C(26379945, vVar0, vVar1, 65f, 0, 2), 1);
	}
	else
	{
		unk_0x608A456FDD8A83D8(func_427(uParam0, 1), vVar0);
		unk_0x5F3CBA6EB9341C90(func_427(uParam0, 1), vVar1, 2);
	}
	unk_0x5818C8D5303DCCF8(func_427(uParam0, 1), fVar2);
	if (!unk_0x757EF87A33649210())
	{
		unk_0xF1E4C781086FABC1(func_427(uParam0, 1), func_427(uParam0, 0), func_475(iParam2), 1, 1);
	}
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	unk_0x297734EBF6EB6285("HAND_SHAKE", 0.2f);
	unk_0xBFE31971E49FA500(false);
	unk_0x8BCB70EB440DED83(false);
}

float func_472(var uParam0)
{
	return uParam0->f_52;
}

Vector3 func_473(var uParam0)
{
	return uParam0->f_3A;
}

Vector3 func_474(var uParam0)
{
	return uParam0->f_37;
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 12:
			return 6000;
			break;
	}
	return 10000;
}

void func_476(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 >= 2)
	{
		return;
	}
	if (iParam3 && !unk_0x9F4FE516EAACCFC5(iParam2))
	{
		return;
	}
	(*uParam0)[iParam1] = iParam2;
}

var func_477(var uParam0)
{
	return uParam0->f_51;
}

Vector3 func_478(var uParam0)
{
	return uParam0->f_34;
}

Vector3 func_479(var uParam0)
{
	return uParam0->f_31;
}

void func_480(int iParam0)
{
	if (!func_456(iParam0))
	{
		func_365(iParam0);
	}
}

void func_481(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_301(&(Global_126B1.f_22B[0 /*21*/]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_126B1.f_22B[0 /*21*/], bParam2) <= fParam1)
			{
				func_482(iVar0);
			}
		}
		iVar0++;
	}
}

void func_482(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_301(&(Global_126B1.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xDF1306B443CD3D15(Global_126B1.f_8B[iParam0], 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_126B1.f_8B[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], true, 1);
				unk_0xA954465BA6FDEFE2(&(Global_126B1.f_8B[iParam0]));
			}
		}
		Global_126B1[iParam0] = 1;
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_307(iParam0, 0)) && Global_12A3E.f_42 == 0) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0 /*21*/].f_E] != 0) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0 /*21*/].f_E] > 3) && (!func_483(0, Global_126B1.f_22B[0 /*21*/].f_C) || !func_483(1, Global_126B1.f_22B[0 /*21*/].f_C)))
			{
				func_308(&(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0 /*21*/].f_E /*78*/]), &Global_12A3E);
				Global_12A8C = Global_1B416.f_7FE8.f_15D7;
			}
			func_305(iParam0, 0);
		}
	}
}

int func_483(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_484(&(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_285(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0);
}

int func_484(var uParam0)
{
	return *uParam0;
}

void func_485(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1AEC6 && iParam1)
	{
		if (func_331(sParam0) && !unk_0x79BBCD5833294FD5())
		{
			unk_0xA37A90C62806D848(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_1B416.f_4FB5[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_1B416.f_4FB5.f_91 - 2))
			{
				func_488(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_487((Global_1B416.f_4FB5.f_91 - 1));
			Global_1B416.f_4FB5.f_91 = (Global_1B416.f_4FB5.f_91 - 1);
			func_486();
			return;
		}
		iVar0++;
	}
}

void func_486()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0])
			{
				Global_1B416.f_4FB5.f_92[0] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 1))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[1])
			{
				Global_1B416.f_4FB5.f_92[1] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 2))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[2])
			{
				Global_1B416.f_4FB5.f_92[2] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_487(int iParam0)
{
	StringCopy(&(Global_1B416.f_4FB5[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_1B416.f_4FB5[iParam0 /*16*/].f_4), "", 16);
	Global_1B416.f_4FB5[iParam0 /*16*/].f_8 = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_9 = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_B = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_A = 4294967295;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_C = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_D = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_E = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_F = 0;
}

void func_488(int iParam0, int iParam1)
{
	Global_1B416.f_4FB5[iParam0 /*16*/] = { Global_1B416.f_4FB5[iParam1 /*16*/] };
	Global_1B416.f_4FB5[iParam0 /*16*/].f_4 = { Global_1B416.f_4FB5[iParam1 /*16*/].f_4 };
	Global_1B416.f_4FB5[iParam0 /*16*/].f_8 = Global_1B416.f_4FB5[iParam1 /*16*/].f_8;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_A = Global_1B416.f_4FB5[iParam1 /*16*/].f_A;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_9 = Global_1B416.f_4FB5[iParam1 /*16*/].f_9;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_B = Global_1B416.f_4FB5[iParam1 /*16*/].f_B;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_C = Global_1B416.f_4FB5[iParam1 /*16*/].f_C;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_D = Global_1B416.f_4FB5[iParam1 /*16*/].f_D;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_E = Global_1B416.f_4FB5[iParam1 /*16*/].f_E;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_F = Global_1B416.f_4FB5[iParam1 /*16*/].f_F;
}

void func_489(bool bParam0)
{
	if (bParam0)
	{
		unk_0x67E5ECB8FD7F5018(0);
		unk_0x65C5EBCA17A891FC(1);
		unk_0x2C84016B4A95F6BA(0);
		func_17(1);
		Global_16F32 = 1;
	}
	else
	{
		unk_0x67E5ECB8FD7F5018(1);
		unk_0x65C5EBCA17A891FC(0);
		unk_0x2C84016B4A95F6BA(1);
		func_17(0);
		Global_16F32 = 0;
	}
}

void func_490()
{
	func_491(&uLocal_73, 0);
}

void func_491(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_495(uParam0);
		func_494(uParam0);
		func_119(&Global_1C126B);
	}
	if (Global_1C0180.f_A94 != 0 || Global_1C0180.f_C70)
	{
		func_492();
	}
	if (unk_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
	{
		unk_0x8910D3D58E0132B8("LEADERBOARD_SCENE");
	}
	if (unk_0x58424C49F8924842())
	{
		func_90(&(Global_1C171C.f_31));
	}
	Global_26B66F.f_F7F = 0;
}

void func_492()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1C0180[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1C0180.f_A90[iVar0] = 0;
		iVar0++;
	}
	Global_1C0180.f_A94 = 0;
	Global_1C0180.f_A95 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1C0180.f_A96[iVar0] = 0;
		StringCopy(&(Global_1C0180.f_A9D[iVar0 /*6*/]), "", 24);
		Global_1C0180.f_AC2[iVar0] = 0;
		Global_1C0180.f_AC9[iVar0] = 0;
		iVar0++;
	}
	Global_1C0180.f_AD0 = 0;
	Global_1C0180.f_AD1 = 0;
	Global_1C0180.f_AD2 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C0180.f_AD3[iVar0] = 0;
		Global_1C0180.f_AD7[iVar0] = 0;
		iVar0++;
	}
	Global_1C0180.f_ADB = 0;
	func_493(&(Global_1C0180.f_ADC));
	func_90(&(Global_1C0180.f_B07));
	Global_1C0180.f_B09 = 4294967295;
	Global_1C0180.f_B0A = 0;
	func_90(&(Global_1C0180.f_B0B));
	Global_1C0180.f_B0D = 0;
	func_90(&(Global_1C0180.f_B0E));
	Global_1C0180.f_B10 = 0;
	Global_1C0180.f_ADC.f_1C = 0;
	Global_1C0180.f_ADC.f_1B = 0;
	Global_1C0180.f_C70 = 0;
}

void func_493(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_19 = 1;
	uParam0->f_1A = 0;
	uParam0->f_1B = 0;
	uParam0->f_1C = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1D[iVar0] = 0;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_494(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_F6 = 0;
	uParam0->f_F6.f_1 = 4294967295;
	uParam0->f_F6.f_2 = 0;
	func_90(&(uParam0->f_F6.f_3));
	uParam0->f_F6.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_F6.f_6[iVar0 /*15*/] = 4294967295;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_F6.f_BB[iVar0] = 0;
		iVar0++;
	}
}

void func_495(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_2A = 0;
	uParam0->f_2B = 0;
	uParam0->f_2C = 0;
	uParam0->f_2C.f_1 = 0;
	uParam0->f_2C.f_2 = 0;
	uParam0->f_2C.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_71[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_496()
{
	Global_56C3.f_5 = 1;
}

void func_497(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 < 11)
	{
		if (!func_257(uParam0, 19))
		{
			if ((iParam1 == 4 && !bParam3) && (unk_0x0F1CCD77290EE12F() || unk_0x7BCE0E6DD4A1F749()))
			{
				if (func_499(func_500(iParam2, 19), "", &(uParam0->f_25B), 19))
				{
				}
			}
		}
		if (!func_257(uParam0, 20))
		{
			if (iParam1 > 4)
			{
				if (func_499(func_500(iParam2, 20), func_500(iParam2, 19), &(uParam0->f_25B), 20))
				{
				}
			}
		}
		else if (!func_257(uParam0, 21))
		{
			if (iParam1 == 9)
			{
				if (func_499(func_500(iParam2, 21), func_500(iParam2, 20), &(uParam0->f_25B), 21))
				{
				}
			}
			else if (iParam1 == 8)
			{
				if (func_499(func_500(iParam2, 21), func_500(iParam2, 20), &(uParam0->f_25B), 21))
				{
				}
			}
		}
		else if (!func_257(uParam0, 22))
		{
			if (iParam1 == 9)
			{
				iVar0 = unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9());
				if (iVar0 == 1 || iVar0 == 2)
				{
					if (func_499(func_500(iParam2, 22), func_500(iParam2, 21), &(uParam0->f_25B), 22))
					{
					}
				}
			}
		}
		else if (iParam1 == 10 && !func_257(uParam0, 23))
		{
			func_498(func_500(iParam2, 22), &(uParam0->f_25B), 23);
		}
		else if (!func_257(uParam0, 23) && !unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0xE5305602B634A39A();
		}
	}
}

void func_498(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam1, iParam2))
	{
		unk_0x8910D3D58E0132B8(sParam0);
		unk_0x5D96D8530B3D0904(iParam1, iParam2);
	}
}

int func_499(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		if (unk_0x562F77A7F33D2E46(sParam1))
		{
			unk_0x8910D3D58E0132B8(sParam1);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(*iParam2, iParam3))
	{
		if (unk_0x8BC9595FD2792B5D(sParam0))
		{
			unk_0x5D96D8530B3D0904(iParam2, iParam3);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_500(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam1)
	{
		case 19:
			return "BASEJUMPS_OVERVIEW_CUTSCENE";
		
		case 20:
			if (func_459(func_460(iParam0)))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_HELI";
			}
			else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && func_359(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0))))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_MOTO";
			}
			else
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_ON_FOOT";
			}
			return sVar0;
		
		case 21:
			return "BASEJUMPS_SKYDIVE";
		
		case 22:
			return "BASEJUMPS_OPEN_PARACHUTE";
		
		default:
	}
	return "";
}

void func_501(var uParam0, int iParam1)
{
	if (iParam1 < 11)
	{
		if (!func_257(uParam0, 15))
		{
			if (iParam1 >= 4 && (unk_0x0F1CCD77290EE12F() || unk_0x7BCE0E6DD4A1F749()))
			{
				if (func_503(func_504(11), &(uParam0->f_25B), 11))
				{
					func_502(func_504(15), &(uParam0->f_25B), 15);
				}
			}
		}
		else if (!func_257(uParam0, 16))
		{
			if (iParam1 == 9)
			{
				if (func_503(func_504(12), &(uParam0->f_25B), 12))
				{
					func_502(func_504(16), &(uParam0->f_25B), 16);
				}
			}
			else if (iParam1 == 8)
			{
				if (func_503(func_504(12), &(uParam0->f_25B), 12))
				{
					func_502(func_504(16), &(uParam0->f_25B), 16);
				}
			}
		}
		else if (iParam1 == 10 && !func_257(uParam0, 17))
		{
			if (func_503(func_504(13), &(uParam0->f_25B), 13))
			{
				func_502(func_504(17), &(uParam0->f_25B), 17);
			}
		}
	}
}

int func_502(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam1, iParam2))
	{
		if (unk_0x13896FDECC859926(sParam0))
		{
			if (unk_0xC92DB9682A650680(sParam0))
			{
				unk_0x5D96D8530B3D0904(iParam1, iParam2);
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_503(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam1, iParam2))
	{
		if (unk_0x13896FDECC859926(sParam0))
		{
			unk_0x5D96D8530B3D0904(iParam1, iParam2);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_504(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 11:
			return "OJBJ_START";
		
		case 16:
		case 12:
			return "OJBJ_JUMPED";
		
		case 17:
		case 13:
			return "OJBJ_LANDED";
		
		case 18:
		case 14:
			return "OJBJ_STOP";
		
		default:
	}
	return "";
}

void func_505(var uParam0)
{
	struct<2> Var0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	unk_0xA2E3EDD0E119882F(0);
	unk_0xA2E3EDD0E119882F(2);
	func_512(&uVar1, &uVar2, &iVar3, &iVar4, unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()), unk_0x91E3F625EF57450D(2));
	Var0 = (SYSTEM::TO_FLOAT(iVar3) / 128f);
	Var0.f_1 = (SYSTEM::TO_FLOAT(iVar4) / -128f);
	func_509(uParam0, Var0, Var0.f_1);
	func_508(uParam0);
	if (unk_0x06F8112AA79C53D9(2, 224))
	{
		func_507(uParam0, 0, 1);
	}
	if (unk_0x06F8112AA79C53D9(0, 22) || unk_0x7FEE810EE9E768EB(0, 22))
	{
		func_507(uParam0, 1, 1);
	}
	if (func_506())
	{
		func_507(uParam0, 2, 1);
	}
	if (unk_0x7FEE810EE9E768EB(2, 22))
	{
		func_507(uParam0, 3, 1);
	}
	if (unk_0x06F8112AA79C53D9(2, 216))
	{
		func_507(uParam0, 4, 1);
	}
	if (unk_0x06F8112AA79C53D9(2, 215) || unk_0x7FEE810EE9E768EB(2, 200))
	{
		func_507(uParam0, 5, 1);
	}
	if (unk_0x06F8112AA79C53D9(2, 201))
	{
		func_507(uParam0, 6, 1);
	}
	if (unk_0x06F8112AA79C53D9(2, 202))
	{
		func_507(uParam0, 7, 1);
	}
	if (unk_0x06F8112AA79C53D9(2, 211))
	{
		func_507(uParam0, 8, 1);
	}
}

int func_506()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (unk_0x06F8112AA79C53D9(0, 18) || unk_0x06F8112AA79C53D9(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_507(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_2), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_2), iParam1);
	}
}

void func_508(var uParam0)
{
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = 0;
}

void func_509(var uParam0, var uParam1, var uParam2)
{
	func_511(uParam0, uParam1);
	func_510(uParam0, uParam2);
}

void func_510(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_511(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_512(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (bParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = unk_0x4F3973434662D795(0, 218);
			fVar1 = unk_0x4F3973434662D795(0, 219);
			fVar2 = unk_0x4F3973434662D795(0, 220);
			fVar3 = unk_0x4F3973434662D795(0, 221);
		}
		else
		{
			fVar0 = unk_0x4B7163B4D6E4A3C2(0, 218);
			fVar1 = unk_0x4B7163B4D6E4A3C2(0, 219);
			fVar2 = unk_0x4B7163B4D6E4A3C2(0, 220);
			fVar3 = unk_0x4B7163B4D6E4A3C2(0, 221);
		}
	}
	else if (bParam4)
	{
		fVar0 = unk_0x659FAE9DBE6F38F5(0, 218);
		fVar1 = unk_0x659FAE9DBE6F38F5(0, 219);
		fVar2 = unk_0x659FAE9DBE6F38F5(0, 220);
		fVar3 = unk_0x659FAE9DBE6F38F5(0, 221);
	}
	else
	{
		fVar0 = unk_0x8A6BC5D9CAEACD0F(0, 218);
		fVar1 = unk_0x8A6BC5D9CAEACD0F(0, 219);
		fVar2 = unk_0x8A6BC5D9CAEACD0F(0, 220);
		fVar3 = unk_0x8A6BC5D9CAEACD0F(0, 221);
	}
	*uParam0 = SYSTEM::ROUND((128f * fVar0));
	*uParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

void func_513()
{
	unk_0x38C3A68D7861DCFD(0, 81, 1);
	unk_0x38C3A68D7861DCFD(0, 82, 1);
	unk_0x38C3A68D7861DCFD(0, 85, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
	unk_0x38C3A68D7861DCFD(0, 12, 1);
	unk_0x38C3A68D7861DCFD(0, 13, 1);
	unk_0x38C3A68D7861DCFD(0, 14, 1);
	unk_0x38C3A68D7861DCFD(0, 15, 1);
	unk_0x38C3A68D7861DCFD(0, 16, 1);
	unk_0x38C3A68D7861DCFD(0, 17, 1);
	unk_0x38C3A68D7861DCFD(0, 25, 1);
	unk_0x38C3A68D7861DCFD(0, 24, 1);
	unk_0x38C3A68D7861DCFD(0, 50, 1);
	unk_0x38C3A68D7861DCFD(0, 53, 1);
	unk_0x38C3A68D7861DCFD(0, 54, 1);
	unk_0x3584F71E5CA29322(19);
	unk_0x3584F71E5CA29322(2);
	unk_0x3584F71E5CA29322(14);
	unk_0x3584F71E5CA29322(16);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
}

var func_514()
{
	var uVar0;
	
	func_524(&uVar0, unk_0x4460E481B9E33ADA());
	func_523(&uVar0, unk_0x8D199E381D262EEF());
	func_522(&uVar0, unk_0xD8A54335F18763BA());
	func_517(&uVar0, unk_0x972A296334C9D57B());
	func_516(&uVar0, unk_0x118229AD063C3C1D());
	func_515(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_515(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 = (*uParam0 || 2147483648);
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - (*uParam0 && 2147483648));
	}
}

void func_516(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_517(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_521(*uParam0);
	iVar1 = func_519(*uParam0);
	if (iParam1 < 1 || iParam1 > func_518(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_518(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_519(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_520(unk_0xEAE0D21A50E6C7F4(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_520(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_521(var uParam0)
{
	return uParam0 & 15;
}

void func_522(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_523(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_524(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_525(var uParam0)
{
	return uParam0->f_2;
}

void func_526(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_36(unk_0x16F2683693E537C9());
	switch (iParam1)
	{
		case 0:
			func_551(uParam0, 125);
			func_550(uParam0, joaat("squalo"));
			func_549(uParam0, 41.0737f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -1039.712f, -1731.145f, 1f);
			func_540(uParam0, 317.8872f);
			func_539(uParam0, 0f, -2f, 0f);
			func_538(uParam0, "BJ_01P");
			func_536(uParam0, func_537(0));
			func_535(uParam0, func_470(0));
			func_534(uParam0, 53.4142f);
			func_533(uParam0, -1151.402f, -1864.369f, 214.9385f);
			func_532(uParam0, -55.1298f, -0.0328f, -19.7985f);
			func_531(uParam0, 39.6124f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 1:
			func_551(uParam0, 126);
			func_550(uParam0, 0);
			func_549(uParam0, 10.5f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, 978.232f, -397.611f, 416.607f);
			func_541(uParam0, 1, 873.389f, -183.851f, 302.972f);
			func_541(uParam0, 2, 1082.347f, -86.822f, 174.287f);
			func_541(uParam0, 3, 1151.098f, 124.6955f, 81.4805f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_02P");
			func_536(uParam0, func_537(1));
			func_535(uParam0, func_470(1));
			func_534(uParam0, 52.5984f);
			func_533(uParam0, 886.5799f, -442.7917f, 535.8002f);
			func_532(uParam0, -41.778f, 0.0092f, -13.8287f);
			func_531(uParam0, 41.3305f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 2:
			func_551(uParam0, 127);
			func_550(uParam0, 0);
			func_549(uParam0, 289.2623f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, 2028.516f, 1759.102f, 424.7939f);
			func_541(uParam0, 1, 2230.78f, 1600.25f, 318.384f);
			func_541(uParam0, 2, 2410.55f, 1739.71f, 253.494f);
			func_541(uParam0, 3, 2273.787f, 1885.168f, 152.702f);
			func_541(uParam0, 4, 2111.912f, 1887.456f, 92.5308f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_03P");
			func_536(uParam0, func_537(2));
			func_535(uParam0, func_470(2));
			func_534(uParam0, 31.9702f);
			func_533(uParam0, 2038.807f, 1971.563f, 591.7618f);
			func_532(uParam0, -79.6953f, 0.0213f, 159.6313f);
			func_531(uParam0, 50.8804f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 3:
			func_551(uParam0, 128);
			func_550(uParam0, 0);
			func_549(uParam0, 60.1427f);
			func_548(uParam0, joaat("frogger"));
			func_547(uParam0, 402.6013f, 5736.451f, 696.3928f);
			func_546(uParam0, 119.8889f);
			func_545(uParam0, 5f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, 320.69f, 5808.49f, 550.56f);
			func_541(uParam0, 1, 220.59f, 5943.149f, 415.514f);
			func_541(uParam0, 2, 30.63f, 6117.63f, 227.9f);
			func_541(uParam0, 3, -80.95f, 6440.43f, 100.48f);
			func_541(uParam0, 4, -273.773f, 6633.584f, 6.533f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_04M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_04F");
			}
			else
			{
				func_538(uParam0, "BJ_04T");
			}
			func_536(uParam0, func_537(3));
			func_535(uParam0, func_470(3));
			func_534(uParam0, 44.3626f);
			func_533(uParam0, 409.9299f, 5701.477f, 696.7185f);
			func_532(uParam0, -5.0705f, 0f, 20.8267f);
			func_531(uParam0, 43.8549f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 4:
			func_551(uParam0, 129);
			func_550(uParam0, 0);
			func_549(uParam0, 1.8891f);
			func_548(uParam0, joaat("skylift"));
			func_547(uParam0, -75.3f, -823.9f, 329.2f);
			func_546(uParam0, 150f);
			func_545(uParam0, 4f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -77.2067f, -444.208f, 37f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_05M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_05F");
			}
			else
			{
				func_538(uParam0, "BJ_05T");
			}
			func_536(uParam0, func_537(4));
			func_535(uParam0, func_470(4));
			func_534(uParam0, 26.7726f);
			func_533(uParam0, -111.8981f, -862.3896f, 334.5773f);
			func_532(uParam0, -5.4775f, 0.0397f, -29.0222f);
			func_531(uParam0, 30.0131f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 5:
			func_551(uParam0, 130);
			func_550(uParam0, joaat("hauler"));
			func_549(uParam0, 358.9586f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -96.9738f, -662.5833f, 34.7843f);
			func_540(uParam0, -18.6f);
			func_539(uParam0, 0f, -6f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_06M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_06F");
			}
			else
			{
				func_538(uParam0, "BJ_06T");
			}
			func_536(uParam0, func_537(5));
			func_535(uParam0, func_470(5));
			func_534(uParam0, 55.7667f);
			func_533(uParam0, -117.2447f, -977.6218f, 297.0984f);
			func_532(uParam0, -7.6574f, 0f, 0.8528f);
			func_531(uParam0, 60f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 6:
			func_551(uParam0, 131);
			func_550(uParam0, 0);
			func_549(uParam0, 164.6178f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, joaat("blazer"));
			func_543(uParam0, -1310.948f, 4330.126f, 7.2444f);
			func_542(uParam0, 87.84f);
			func_541(uParam0, 0, -1246.49f, 4482.091f, 100.349f);
			func_541(uParam0, 1, -1309.67f, 4400.428f, 50.542f);
			func_541(uParam0, 2, -1304.67f, 4348.428f, 5.75f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_07M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_07F");
			}
			else
			{
				func_538(uParam0, "BJ_07T");
			}
			func_536(uParam0, func_537(6));
			func_535(uParam0, func_470(6));
			func_534(uParam0, 47.1789f);
			func_533(uParam0, -1242.731f, 4536.298f, 186.6862f);
			func_532(uParam0, -13.6409f, 0f, 172.0553f);
			func_531(uParam0, 47.1789f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 7:
			func_551(uParam0, 132);
			func_550(uParam0, joaat("freight"));
			func_549(uParam0, 112.6f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -487.5452f, 4252.192f, 87.712f);
			func_540(uParam0, 10.8894f);
			func_539(uParam0, 0f, -20f, 4f);
			func_538(uParam0, "BJ_08P");
			func_536(uParam0, func_537(7));
			func_535(uParam0, func_470(7));
			func_534(uParam0, 24.3623f);
			func_533(uParam0, -337.5233f, 4110.16f, 315.6679f);
			func_532(uParam0, -29.1422f, 0.0324f, 47.5813f);
			func_531(uParam0, 37.0424f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 8:
			func_551(uParam0, 133);
			func_550(uParam0, 0);
			func_549(uParam0, 104.207f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -1154.443f, 204.1726f, 64.4915f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_09M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_09F");
			}
			else
			{
				func_538(uParam0, "BJ_09T");
			}
			func_536(uParam0, func_537(8));
			func_535(uParam0, func_470(8));
			func_534(uParam0, 50f);
			func_533(uParam0, -805.2963f, 332.5761f, 234.6604f);
			func_532(uParam0, -19.7458f, 0f, 116.6405f);
			func_531(uParam0, 55.2882f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 9:
			func_551(uParam0, 134);
			func_550(uParam0, 0);
			func_549(uParam0, 329.4791f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, joaat("blazer"));
			func_543(uParam0, -818.3042f, 4405.675f, 20.1095f);
			func_542(uParam0, -89.36f);
			func_541(uParam0, 0, -1200f, 3616f, 964f);
			func_541(uParam0, 1, -1240f, 3307f, 854f);
			func_541(uParam0, 2, -1552f, 3456f, 655f);
			func_541(uParam0, 3, -1616f, 3808f, 505f);
			func_541(uParam0, 4, -1157.684f, 4128.348f, 288.607f);
			func_541(uParam0, 5, -1063.995f, 4246.137f, 163.291f);
			func_541(uParam0, 6, -938.541f, 4360.14f, 82.372f);
			func_541(uParam0, 7, -828.1418f, 4413.562f, 20.062f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_10P");
			func_536(uParam0, func_537(9));
			func_535(uParam0, func_470(9));
			func_534(uParam0, 31.7648f);
			func_533(uParam0, -1286.976f, 3660.137f, 1082.208f);
			func_532(uParam0, -47.0453f, 0.0328f, -13.4198f);
			func_531(uParam0, 39.6786f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 10:
			func_551(uParam0, 135);
			func_550(uParam0, 0);
			func_549(uParam0, 0f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, 1239.342f, 4008.389f, 1135.372f);
			func_541(uParam0, 1, 1374.479f, 4156.592f, 1019.694f);
			func_541(uParam0, 2, 1391.31f, 4362.621f, 909.212f);
			func_541(uParam0, 3, 1240.832f, 4598.044f, 758.002f);
			func_541(uParam0, 4, 1382.169f, 4377.629f, 600.013f);
			func_541(uParam0, 5, 1624.116f, 4207.519f, 471.225f);
			func_541(uParam0, 6, 1910.345f, 4175.518f, 362.862f);
			func_541(uParam0, 7, 2236.975f, 4282.967f, 218.116f);
			func_541(uParam0, 8, 2330.282f, 4534.43f, 90f);
			func_541(uParam0, 9, 2473.344f, 4715.347f, 33.524f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_11P");
			func_536(uParam0, func_537(10));
			func_535(uParam0, func_470(10));
			func_534(uParam0, 27.2187f);
			func_533(uParam0, 1012.673f, 3960.436f, 1367.701f);
			func_532(uParam0, -54.7868f, 0f, -90.128f);
			func_531(uParam0, 35.5634f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 11:
			func_551(uParam0, 136);
			func_550(uParam0, 0);
			func_549(uParam0, 24.92f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, joaat("sanchez"));
			func_543(uParam0, 1280.933f, -50.6157f, 61.8195f);
			func_542(uParam0, 130.39f);
			func_541(uParam0, 0, 1829.46f, -260.665f, 1141.852f);
			func_541(uParam0, 1, 1816.46f, -10.665f, 1033.084f);
			func_541(uParam0, 2, 1688.46f, 218.335f, 924.307f);
			func_541(uParam0, 3, 1503.46f, 382.335f, 815.529f);
			func_541(uParam0, 4, 1554.46f, 598.335f, 706.751f);
			func_541(uParam0, 5, 1813.46f, 724.335f, 597.973f);
			func_541(uParam0, 6, 1975.46f, 519.335f, 486.196f);
			func_541(uParam0, 7, 1946.46f, 125.335f, 364.417f);
			func_541(uParam0, 8, 1663.46f, -15.665f, 241.64f);
			func_541(uParam0, 9, 1396.64f, -62.665f, 118f);
			func_541(uParam0, 10, 1278.5f, -41.05f, 61.7f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_12P");
			func_536(uParam0, func_537(11));
			func_535(uParam0, func_470(11));
			func_534(uParam0, 18.9374f);
			func_533(uParam0, 1628.156f, -431.2605f, 1332.761f);
			func_532(uParam0, -54.5827f, 0f, -2.0463f);
			func_531(uParam0, 56.4495f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 12:
			func_551(uParam0, 137);
			func_550(uParam0, 0);
			func_549(uParam0, 359.2885f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, joaat("sanchez"));
			func_543(uParam0, -885.2659f, 4433.592f, 20.381f);
			func_542(uParam0, 104.35f);
			func_541(uParam0, 0, -771.9196f, 4400.453f, 60.5786f);
			func_541(uParam0, 1, -892.6581f, 4427.487f, 19.8561f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_13M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_13F");
			}
			else
			{
				func_538(uParam0, "BJ_13T");
			}
			func_536(uParam0, func_537(12));
			func_535(uParam0, func_470(12));
			func_534(uParam0, 48.3921f);
			func_533(uParam0, -765.6544f, 4332.836f, 149.0282f);
			func_532(uParam0, -18.0357f, 0f, 6.0212f);
			func_531(uParam0, 48.3921f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
	}
}

void func_527(var uParam0, vector3 vParam1)
{
	uParam0->f_43 = { vParam1 };
}

void func_528(var uParam0, vector3 vParam1)
{
	uParam0->f_40 = { vParam1 };
}

void func_529(var uParam0, int iParam1)
{
	uParam0->f_54 = iParam1;
}

void func_530(var uParam0, int iParam1)
{
	uParam0->f_53 = iParam1;
}

void func_531(var uParam0, float fParam1)
{
	uParam0->f_52 = fParam1;
}

void func_532(var uParam0, vector3 vParam1)
{
	uParam0->f_3A = { vParam1 };
}

void func_533(var uParam0, vector3 vParam1)
{
	uParam0->f_37 = { vParam1 };
}

void func_534(var uParam0, float fParam1)
{
	uParam0->f_51 = fParam1;
}

void func_535(var uParam0, vector3 vParam1)
{
	uParam0->f_34 = { vParam1 };
}

void func_536(var uParam0, vector3 vParam1)
{
	uParam0->f_31 = { vParam1 };
}

Vector3 func_537(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_538(var uParam0, char* sParam1)
{
	uParam0->f_4 = sParam1;
}

void func_539(var uParam0, vector3 vParam1)
{
	uParam0->f_6 = { vParam1 };
}

void func_540(var uParam0, float fParam1)
{
	uParam0->f_4D = fParam1;
}

void func_541(var uParam0, int iParam1, vector3 vParam2)
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return;
	}
	uParam0->f_C[iParam1 /*3*/] = { vParam2 };
}

void func_542(var uParam0, float fParam1)
{
	uParam0->f_4F = fParam1;
}

void func_543(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_544(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_545(var uParam0, float fParam1)
{
	uParam0->f_50 = fParam1;
}

void func_546(var uParam0, float fParam1)
{
	uParam0->f_4E = fParam1;
}

void func_547(var uParam0, vector3 vParam1)
{
	uParam0->f_46 = { vParam1 };
}

void func_548(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_549(var uParam0, float fParam1)
{
	uParam0->f_4C = fParam1;
}

void func_550(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_551(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_552(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_7927, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7927, iParam0);
	}
}

void func_553(int iParam0)
{
	func_376();
	Global_12C4D = iParam0;
	Global_12C4C = 0;
	Global_12C4F = 3;
}

void func_554(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, var uParam7, int iParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, int iParam15, var uParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_370();
	func_369();
	func_490();
	func_560(uParam1);
	func_552(23, 0);
	func_559(*uParam1);
	unk_0x4EBF4289AABAE861(*uParam16);
	unk_0x38DC636F3D2D2FA8("OJBJ_START");
	unk_0x38DC636F3D2D2FA8("OJBJ_JUMPED");
	unk_0x38DC636F3D2D2FA8("OJBJ_LANDED");
	unk_0xC92DB9682A650680("OJBJ_STOP");
	unk_0x8910D3D58E0132B8("BASEJUMPS_OPEN_PARACHUTE");
	unk_0x8910D3D58E0132B8("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
	unk_0x8910D3D58E0132B8("BASEJUMPS_PREP_FOR_JUMP_MOTO");
	unk_0x8910D3D58E0132B8("BASEJUMPS_SKYDIVE");
	unk_0x8910D3D58E0132B8("BASEJUMPS_OPEN_PARACHUTE");
	unk_0xE5305602B634A39A();
	uParam11 = uParam11;
	Global_16F31 = 0;
	Global_16F32 = 0;
	Global_16F33 = 0;
	func_20(0, 1);
	func_18(0, 1);
	func_17(0);
	unk_0x2C84016B4A95F6BA(1);
	unk_0x65C5EBCA17A891FC(0);
	unk_0x4DB69487E1A9EE2A(0);
	while (unk_0xD0BB2359EC70FC37())
	{
		SYSTEM::WAIT(0);
	}
	if (unk_0xF45FDB21A0F137CB())
	{
		unk_0xC1B8EFD8630D086B(1);
	}
	if (unk_0xE4EDC4B0E92C078B(iParam13))
	{
		unk_0x142CC44DB769B57E(&iParam13);
	}
	if (unk_0xE4EDC4B0E92C078B(iParam14))
	{
		unk_0x142CC44DB769B57E(&iParam14);
	}
	func_376();
	func_26(0);
	unk_0xDF9891243C73DEA5(unk_0xD803B885F5E47A62(), false);
	func_558(1, 1);
	if (func_425(func_451(uParam0)))
	{
	}
	else
	{
		unk_0x2B25B48028758FE8();
	}
	unk_0xB547E3FFEB27073E();
	func_556(uParam7);
	func_277();
	unk_0xF5637CC664BEAAD0(0f, 0, 21);
	unk_0x7B0C620E7A619AA1(0);
	func_212(0, 0);
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	if (iParam15 == 5)
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 146, false);
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 177, false);
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 36, false);
		unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0);
		unk_0x545E1397F38D9D5A(unk_0x16F2683693E537C9(), 0);
		if (!bParam17)
		{
			unk_0x650567883F5E3136(unk_0x16F2683693E537C9(), joaat("gadget_parachute"));
		}
		unk_0x8B66ED74C2DC2E98(unk_0x16F2683693E537C9(), 1f);
		unk_0xCC095276B3DD380E(unk_0x16F2683693E537C9(), 1);
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (unk_0xC844350D5D58C99A((*uParam10)[iVar1]) && !unk_0x437347B10A200C4B((*uParam10)[iVar1], 0))
		{
			unk_0xA3BF0AA5A2608191((*uParam10)[iVar1]);
			(*uParam10)[iVar1] = 0;
		}
		iVar1++;
	}
	if ((unk_0xC844350D5D58C99A(*iParam6) && *iParam6 != unk_0x728870EB733D12A1()) && !unk_0x437347B10A200C4B(*iParam6, 0))
	{
		unk_0x7EA00EB725DAA91D(*iParam6);
		func_280(*iParam6, func_319(iParam15), func_318(iParam15), 24, 0);
	}
	if (!unk_0xEB6A8945D1AC98A1(*iParam8))
	{
		if (!unk_0x0A059E0DB9253280(*iParam8))
		{
			unk_0xEBA53F35D0085654(iParam8);
		}
		else
		{
			unk_0x6DAD7906B73F064D(iParam8);
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(*uParam9))
	{
		unk_0xA3BF0AA5A2608191(*uParam9);
		unk_0x11AD11297DC58CC7(*uParam9, true);
	}
	if (unk_0xC844350D5D58C99A(*iParam2))
	{
		if (func_459(func_460(iParam15)))
		{
			if ((!unk_0x437347B10A200C4B(*iParam2, 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam2, 0))
			{
				unk_0x975C58E0FC4955A9(unk_0x16F2683693E537C9(), 1);
			}
			if (!unk_0x0A059E0DB9253280(*iParam2))
			{
				unk_0xA954465BA6FDEFE2(iParam2);
			}
			else
			{
				unk_0x046C362CF15F1935(iParam2);
			}
		}
		else
		{
			unk_0x046C362CF15F1935(iParam2);
		}
	}
	if (unk_0xC844350D5D58C99A(*uParam3))
	{
		if (func_361(func_362(uParam0)))
		{
			unk_0xDB7D85A79FCB0695(uParam3, 0);
			unk_0xF48790410026514E(1);
		}
	}
	if (unk_0xC844350D5D58C99A(*iParam4) && !unk_0x437347B10A200C4B(*iParam4, 0))
	{
		iVar0 = unk_0xA30B8362589C124A(*iParam4, 4294967295, 0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			unk_0xEBA53F35D0085654(&iVar0);
		}
		unk_0xA954465BA6FDEFE2(iParam4);
	}
	iVar2 = 0;
	while (iVar2 < *uParam5)
	{
		if (unk_0xC844350D5D58C99A((*uParam5)[iVar2]) && !unk_0x437347B10A200C4B((*uParam5)[iVar2], 0))
		{
			unk_0xF8CF67C6E39C23A9((*uParam5)[iVar2], 1f);
			unk_0xE8832A9E16A57A1F((*uParam5)[iVar2], false, 1);
		}
		iVar2++;
	}
	*iParam12 = 1;
	unk_0xA37A90C62806D848(1);
	unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	unk_0xBFE31971E49FA500(true);
	unk_0x8BCB70EB440DED83(true);
	unk_0xC0FB48F966BB7D11(1);
	func_555();
	unk_0x31A33F7BCB08CB80(false);
	Global_1B416.f_4A12 = 4294967295;
	unk_0x10FAF14A60A0DBE1();
}

void func_555()
{
	Global_56C3.f_5 = 0;
}

void func_556(var uParam0)
{
	func_557(uParam0, 0);
	func_557(uParam0, 1);
	func_557(uParam0, 2);
}

void func_557(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_558(int iParam0, bool bParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_78CE, iParam0))
	{
		if (!bParam1)
		{
			unk_0x0674E58A79778E99(&Global_78CE, iParam0);
			StringCopy(&(Global_78CF[iParam0 /*6*/]), "NULL", 24);
			Global_7906[iParam0] = bParam1;
		}
	}
}

void func_559(var uParam0)
{
	unk_0xE17FDF9E3068281B(&uParam0);
}

void func_560(var uParam0)
{
	func_559(*uParam0);
}

