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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	vector3 vLocal_45[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_46[1] = {{ 0f, 0f, 0f } };
	int iLocal_47 = 0;
	int iLocal_48[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_49[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	struct<165> Local_51 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_62 = 0;
	char cLocal_63[16] = "";
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	char cLocal_66[16] = "";
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	vector3 vLocal_69[12] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	char cLocal_70[32] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 1132396544;
	var uLocal_78 = 1132396544;
	var uLocal_79 = 1132396544;
	var uLocal_80 = 0;
	var uLocal_81 = -1082130432;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
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
	var uLocal_121 = 0;
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
	var uLocal_141 = -1;
	var uLocal_142 = 1092616192;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	bool bLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = -1;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 1000;
	var uLocal_159 = 1000;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 1097859072;
	var uLocal_165 = 1500;
	var uLocal_166 = 45;
	var uLocal_167 = 1103626240;
	var uLocal_168 = 5;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	int iLocal_175 = 0;
	var uLocal_176 = 0;
	bool bLocal_177 = 0;
	float fLocal_178 = 0f;
	float fLocal_179 = 0f;
	float fLocal_180 = 0f;
	float fLocal_181 = 0f;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	vector3 vLocal_187 = { 0f, 0f, 0f };
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	bool bLocal_190 = 0;
	int iLocal_191 = 0;
	bool bLocal_192 = 0;
	int iLocal_193 = 0;
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
	int iLocal_205 = 0;
	var uLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	bool bLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	bool bLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	bool bLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	int iLocal_224 = 0;
	struct<6> Local_225 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_226 = NULL;
	var uLocal_227 = 16;
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
	var uLocal_254 = 0;
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
	var uLocal_325 = 0;
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
	int iLocal_392 = 0;
	struct<23> Local_393[53];
	struct<28> Local_394[17];
	int iLocal_395 = 0;
	struct<165> Local_396 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_397 = 0;
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
	int iLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	int iLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	vector3 vLocal_415 = { 0f, 0f, 0f };
	float fLocal_416 = 0f;
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
	struct<18> Local_438[2];
	int iLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	float fLocal_446 = 0f;
	int iLocal_447 = 0;
	bool bLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	var uLocal_453 = 0;
	int iLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	char* sLocal_464 = NULL;
	char* sLocal_465 = NULL;
	char* sLocal_466[3] = { NULL, NULL, NULL };
	char* sLocal_467 = NULL;
	vector3 vLocal_468[1] = {{ 0f, 0f, 0f } };
	vector3 vLocal_469 = { 0f, 0f, 0f };
	vector3 vLocal_470 = { 0f, 0f, 0f };
	vector3 vLocal_471 = { 0f, 0f, 0f };
	var uLocal_472 = 9;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 7;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 15;
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
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
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
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 1;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	bool bLocal_769 = 0;
	bool bLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	bool bLocal_773 = 0;
	bool bLocal_774 = 0;
	int iLocal_775 = 0;
	bool bLocal_776 = 0;
	bool bLocal_777 = 0;
	var uLocal_778 = 0;
	bool bLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	bool bLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	var uLocal_789 = 0;
	bool bLocal_790 = 0;
	bool bLocal_791 = 0;
	bool bLocal_792 = 0;
	bool bLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	bool bLocal_798 = 0;
	bool bLocal_799 = 0;
	bool bLocal_800 = 0;
	int iLocal_801 = 0;
	bool bLocal_802 = 0;
	var uLocal_803 = 0;
	bool bLocal_804 = 0;
	bool bLocal_805 = 0;
	int iLocal_806 = 0;
	bool bLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	bool bLocal_813 = 0;
	var uLocal_814[2] = { 0, 0 };
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819[1] = { 0 };
	var uLocal_820[2] = { 0, 0 };
	int iLocal_821 = 0;
	struct<2> Local_822 = { 0, 0 } ;
	int iLocal_823 = 0;
	struct<20> Local_824[1];
	struct<7> Local_825 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	vector3 vLocal_862 = { 0f, 0f, 0f };
	vector3 vLocal_863 = { 0f, 0f, 0f };
	float fLocal_864 = 0f;
	float fLocal_865 = 0f;
	char cLocal_866[64] = "";
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	int iLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	int iLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	int iLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	int iLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	int iLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	int iLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	int iLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	char* sLocal_905 = NULL;
	int iLocal_906 = 0;
	var uLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 8;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	int iLocal_927 = 0;
	bool bLocal_928 = 0;
	struct<9> Local_929 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
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
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_50 = { 500f, 500f, 500f };
	fLocal_178 = 0f;
	fLocal_179 = 0f;
	fLocal_180 = 0f;
	fLocal_181 = 0.8f;
	fLocal_182 = 1.5f;
	fLocal_183 = 0.5f;
	vLocal_187 = { 401.55f, -1631.309f, 29.3f };
	iLocal_188 = 1;
	iLocal_189 = 1;
	iLocal_392 = joaat("towtruck");
	vLocal_415 = { -6.80809f, -1465.873f, 29.45427f };
	fLocal_416 = 275.5635f;
	iLocal_442 = 4294967295;
	iLocal_443 = 4294967295;
	iLocal_444 = 4294967295;
	iLocal_445 = 4294967295;
	fLocal_446 = 0f;
	sLocal_464 = "";
	sLocal_465 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	iLocal_765 = 1;
	iLocal_766 = 1;
	iLocal_767 = 1;
	iLocal_775 = 1;
	iLocal_810 = 1;
	iLocal_839 = 4294967295;
	vLocal_862 = { -229.8159f, -1172f, 21.8557f };
	iLocal_906 = 1;
	unk_0x7798376279BB5369(1);
	if (unk_0x2EBF608FFE6CA406(67))
	{
		if (!func_302())
		{
			func_300(&Global_1AED1, 3);
			func_271(unk_0xBB0808A181D4745C());
		}
		func_267();
	}
	if (unk_0xC844350D5D58C99A(ScriptParam_929) && unk_0xC844350D5D58C99A(ScriptParam_929.f_1))
	{
		if (!unk_0x437347B10A200C4B(ScriptParam_929, 0) && !unk_0x437347B10A200C4B(ScriptParam_929.f_1, 0))
		{
			unk_0x73270B3C9CC833FD(ScriptParam_929, true, 1);
			unk_0x73270B3C9CC833FD(ScriptParam_929.f_1, true, 1);
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, false);
	}
	func_266(&Local_393);
	func_265(&Local_394);
	func_264();
	iVar0 = 0;
	func_263(&iLocal_882);
	switch (ScriptParam_929.f_2)
	{
		case 1:
			if (ScriptParam_929.f_4)
			{
				iLocal_170 = ScriptParam_929.f_3;
				if (iVar0 > 0)
				{
					iLocal_450 = iVar0;
				}
				else
				{
					iLocal_450 = func_262(100000f, iLocal_170, Global_1B416.f_4E00.f_9);
				}
			}
			else
			{
				if (Global_1B416.f_4E00.f_3 == 0)
				{
					bLocal_793 = true;
				}
				if (!func_261())
				{
					func_258();
				}
				else
				{
					iLocal_450 = Global_1B416.f_4E00.f_9;
					iLocal_170 = Global_1B416.f_4E00.f_2;
				}
				ScriptParam_929.f_3 = iLocal_170;
			}
			iLocal_821 = 0;
			break;
	}
	if (!bLocal_793)
	{
		func_257(&Local_396, 3, 0, "TOWDISPATCH", 0, 1);
	}
	if (iLocal_170 == 0)
	{
		iLocal_796 = 1;
		if ((Global_1B416.f_4E00.f_6 % 2) == 0)
		{
			bLocal_799 = true;
		}
	}
	else if (iLocal_170 == 2)
	{
		bLocal_800 = true;
		iLocal_796 = 1;
	}
	if (iLocal_170 == 3 || iLocal_170 == 1)
	{
		iLocal_795 = 1;
		iLocal_796 = 1;
		iLocal_853 = 1;
	}
	else if (iLocal_170 == 4)
	{
		iLocal_796 = 1;
		iLocal_853 = Local_394[func_256() /*28*/].f_1B;
	}
	func_255();
	func_231(&ScriptParam_929);
	if (Global_1B416.f_4E00.f_3 >= 5)
	{
		bLocal_779 = true;
		bLocal_779 = bLocal_779;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iLocal_900 = ScriptParam_929.f_1;
			iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0))
			{
				if (unk_0x134B62B726CEC8E6(iVar1) == joaat("towtruck") || unk_0x134B62B726CEC8E6(iVar1) == joaat("towtruck2"))
				{
					iLocal_900 = iVar1;
				}
			}
		}
	}
	unk_0xF3039DE1FDB4F6FD(false);
	unk_0x51B096AAC60548C1(0.2f);
	if (unk_0xC844350D5D58C99A(iLocal_900))
	{
		if (!unk_0x437347B10A200C4B(iLocal_900, 0))
		{
			unk_0x73270B3C9CC833FD(iLocal_900, true, 1);
			unk_0x2F625BED8BF7F26A(iLocal_900);
			unk_0x4D647C1236C18D14(iLocal_900, false);
			unk_0x44A200C9B6E1CEA6(iLocal_900, true);
		}
	}
	iLocal_903 = unk_0x7D6CA5F52B3748BF(Vector(27.5001f, -640.002f, 414.1398f) - Vector(50f, 50f, 50f), Vector(27.5001f, -640.002f, 414.1398f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	iLocal_904 = unk_0x7D6CA5F52B3748BF(Vector(21.8557f, -1172f, -229.8159f) - Vector(50f, 50f, 50f), Vector(21.8557f, -1172f, -229.8159f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	unk_0xE342F209E49C5314(vLocal_862 - Vector(15f, 15f, 15f), vLocal_862 + Vector(15f, 15f, 15f), false, 1);
	unk_0x21688103CC7F9B19(vLocal_862 - Vector(15f, 15f, 15f), vLocal_862 + Vector(15f, 15f, 15f), 0);
	func_230();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_226(&uLocal_490);
		func_225();
		unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
		if (bLocal_779 && !unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()))
		{
			if (unk_0x757EF87A33649210())
			{
				unk_0xD67D6A3F0D653D93(408.8376f, -1638.952f, 28.2928f, -3.24f, 0f, -62.6001f, 20f, 0);
				while (!unk_0x68367101660E33F0())
				{
					SYSTEM::WAIT(0);
				}
				unk_0x486B4ADE317F0689();
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
				unk_0x28F5E4DA506AC0CA(408.8376f, -1638.952f, 28.2928f, 8f, 0, 0, 0, 0, false, 0);
				unk_0x82E51BCA72537B6C(500);
			}
		}
		if (iLocal_906 < 15)
		{
			func_223(&iLocal_900, &iLocal_817, &Local_824, &vLocal_468, &cLocal_866, &iLocal_854, iLocal_849, bLocal_792, &iLocal_801, iLocal_783, bLocal_773, bLocal_209, iLocal_906, 1);
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			switch (iLocal_821)
			{
				case 0:
					if (iLocal_906 > 4 && iLocal_906 < 15)
					{
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_900, 0))
						{
						}
						if (iLocal_170 != 2 && iLocal_170 != 4)
						{
							if (!func_220(&uLocal_913, Local_824[0 /*20*/].f_6, iLocal_900, &uLocal_844, &uLocal_845, bLocal_779))
							{
								iLocal_875 = 15;
								func_267();
							}
						}
						if (bLocal_793 || uLocal_789)
						{
							func_219(&uLocal_914, iLocal_900, &uLocal_847, &uLocal_848, bLocal_779);
						}
					}
					if (bLocal_793)
					{
						if (iLocal_906 >= 7)
						{
							func_214(iLocal_900, Local_824[0 /*20*/].f_6, Local_825, &(Local_824[0 /*20*/].f_8), &vLocal_468, &cLocal_866, &vLocal_187, bLocal_793, &(Local_824[0 /*20*/]));
						}
					}
					bLocal_782 = false;
					if (((iLocal_170 == 0 || iLocal_170 == 2) && iLocal_906 > 4) && iLocal_906 < 17)
					{
						if (bLocal_799 && iLocal_810)
						{
							func_212();
							func_211(Local_824[0 /*20*/].f_6, Local_824[0 /*20*/]);
						}
						if (!bLocal_793)
						{
							func_200();
						}
					}
					else if ((iLocal_170 == 1 && iLocal_906 > 4) && iLocal_906 < 17)
					{
						if (func_196())
						{
							func_193();
						}
						if (iLocal_910 > 0)
						{
							func_189();
						}
					}
					else if (iLocal_170 == 3)
					{
						if ((iLocal_906 == 5 && iLocal_908 < 1) && !iLocal_764)
						{
							if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
							{
								if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), Local_824[0 /*20*/].f_6))
								{
									iLocal_764 = 1;
									unk_0xA3BF0AA5A2608191(Local_824[0 /*20*/]);
									unk_0xF96A174EE26D7588(Local_824[0 /*20*/], unk_0x16F2683693E537C9(), 0);
								}
							}
						}
					}
					if (iLocal_784 && !bLocal_190)
					{
						func_185(&(Local_394[func_256() /*28*/]), &(Local_394[func_256() /*28*/].f_A), Local_393[iLocal_450 /*23*/].f_1, &(Local_824[0 /*20*/]), &(Local_824[0 /*20*/].f_2), &uLocal_820, fLocal_864, sLocal_465, &sLocal_466, iLocal_853);
					}
					if (iLocal_170 == 4)
					{
						func_183(&uLocal_907, iLocal_901, iLocal_902, iLocal_900, &(Local_824[0 /*20*/].f_2), iLocal_853, sLocal_465, &sLocal_466, &iLocal_816, bLocal_779, &(Local_824[0 /*20*/].f_6));
					}
					if (!bLocal_779)
					{
						if (unk_0xC844350D5D58C99A(iLocal_816) && !unk_0x437347B10A200C4B(iLocal_816, 0))
						{
							if (func_175(iLocal_816, 0, &uLocal_162, &iLocal_169, 0, 1, 0, 1, 0))
							{
								bLocal_776 = true;
								unk_0xF3268524E9BE6D6E(iLocal_816, unk_0x16F2683693E537C9(), 1000f, 4294967295, 0, 0);
							}
							if (func_173())
							{
								bLocal_777 = true;
							}
						}
					}
					if (bLocal_190 && !bLocal_798)
					{
						if (func_175(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, &uLocal_162, &iLocal_169, 0, 1, 1, 1, 0))
						{
							func_172();
							if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
							{
								unk_0xA3BF0AA5A2608191(Local_824[0 /*20*/]);
								unk_0xFADC0A217229F6B5(Local_824[0 /*20*/], true);
								unk_0xF3268524E9BE6D6E(Local_824[0 /*20*/], unk_0x16F2683693E537C9(), 1000f, 4294967295, 0, 0);
								iLocal_875 = 18;
							}
							if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_1, 0))
							{
								unk_0xA3BF0AA5A2608191(Local_824[0 /*20*/].f_1);
								unk_0xFADC0A217229F6B5(Local_824[0 /*20*/].f_1, true);
								unk_0xF82EA857DA10E0CD(&iLocal_171);
								unk_0xDD353D0E9C789D0E(&iLocal_171);
								unk_0x75CDA8644CD3B5F5(0, 1, 256);
								unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 1000f, 4294967295, 0, 0);
								unk_0x75ABDC5F81978924(iLocal_171);
								if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_1, 0))
								{
									unk_0x78ADC381772E3D54(Local_824[0 /*20*/].f_1, iLocal_171);
								}
								unk_0xF82EA857DA10E0CD(&iLocal_171);
								iLocal_875 = 18;
							}
							if (!bLocal_793)
							{
								switch (iLocal_169)
								{
									case 16:
										if (iLocal_170 == 2)
										{
											iLocal_875 = 17;
											func_267();
										}
										else
										{
											iLocal_875 = 16;
											func_267();
										}
										break;
									
									case 2:
										func_171(&Local_396, "TOWAUD", "TOW_DISP_LAW", 9, 1, 0, 0);
										iLocal_875 = 3;
										func_267();
										break;
								}
							}
							else
							{
								iLocal_875 = 21;
								func_267();
							}
							if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
							{
								func_267();
							}
						}
						if (func_175(Local_824[0 /*20*/].f_1, Local_824[0 /*20*/].f_6, &uLocal_162, &iLocal_169, 0, 1, 0, 1, 0))
						{
							func_172();
							if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_1, 0))
							{
								unk_0xA3BF0AA5A2608191(Local_824[0 /*20*/].f_1);
								unk_0xFADC0A217229F6B5(Local_824[0 /*20*/].f_1, true);
								unk_0xF3268524E9BE6D6E(Local_824[0 /*20*/].f_1, unk_0x16F2683693E537C9(), 1000f, 4294967295, 0, 0);
								iLocal_875 = 18;
							}
						}
					}
					else if (bLocal_798)
					{
					}
					if (!bLocal_782 && func_170(0))
					{
						if ((!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iLocal_900, 0)) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_900, 0))
						{
							if (!iLocal_216)
							{
								if (unk_0xC844350D5D58C99A(Local_824[0 /*20*/].f_6))
								{
									if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
									{
										func_147(&uLocal_149, unk_0x68F4C0EC296D3901(Local_824[0 /*20*/].f_6, true), 0, 0, 1, 1, 1);
									}
								}
							}
							else
							{
								func_147(&uLocal_149, vLocal_469, 0, 0, 1, 1, 1);
							}
						}
					}
					if (!func_170(0))
					{
						func_146(&uLocal_149, 0, 0);
					}
					func_144(&iLocal_885, 7f, 1);
					func_143();
					func_142();
					if (((!bLocal_215 || iLocal_906 >= 15) || uLocal_778) || bLocal_773)
					{
						if (func_55())
						{
							func_49();
						}
					}
					if (iLocal_906 == 9)
					{
						if (iLocal_170 == 1 || iLocal_170 == 3)
						{
							func_13(Local_396, &Local_824, &iLocal_900);
						}
					}
					break;
			}
			if (func_1(ScriptParam_929))
			{
				func_267();
			}
		}
	}
}

int func_1(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (bLocal_804)
	{
		iLocal_875 = 13;
		return 1;
	}
	if (func_12())
	{
		iLocal_875 = 11;
		return 1;
	}
	if (unk_0xC844350D5D58C99A(Local_824[0 /*20*/].f_6))
	{
		if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
		{
			if (unk_0x7B5606C651AB51B5(Local_824[0 /*20*/].f_6, 0, 7000))
			{
				iLocal_875 = 15;
				return 1;
			}
		}
	}
	if (bLocal_215)
	{
		if ((unk_0x1C0640BA9A7327B3() - iLocal_854) > 50000)
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			}
			if (unk_0xC844350D5D58C99A(iLocal_900) && !unk_0x437347B10A200C4B(iLocal_900, 0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iLocal_900, true) };
			}
			if (SYSTEM::VDIST2(vVar0, vVar1) > 625f)
			{
				iLocal_875 = 0;
				return 1;
			}
		}
	}
	if (bLocal_776)
	{
		iLocal_875 = 22;
		return 1;
	}
	if (bLocal_777)
	{
		iLocal_875 = 23;
		return 1;
	}
	if (unk_0xC844350D5D58C99A(iLocal_900))
	{
		if (!unk_0xDF1306B443CD3D15(iLocal_900, 0))
		{
			iLocal_875 = 2;
			return 1;
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_900))
	{
		if (unk_0x437347B10A200C4B(iLocal_900, 0))
		{
			iLocal_875 = 2;
			return 1;
		}
	}
	switch (vParam0.z)
	{
		case 1:
			if (iLocal_906 > 4 && iLocal_906 < 17)
			{
				if (unk_0xC844350D5D58C99A(Local_824[0 /*20*/].f_6))
				{
					if (unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
					{
						iLocal_875 = 5;
						return 1;
					}
					else if (func_8())
					{
						return 1;
					}
				}
			}
			if (func_2())
			{
				return 1;
			}
			switch (iLocal_170)
			{
				case 3:
				case 1:
				case 0:
					if (bLocal_190)
					{
						if (!bLocal_798)
						{
							if (unk_0xC844350D5D58C99A(Local_824[0 /*20*/]))
							{
								if (unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
								{
									iLocal_875 = 8;
									return 1;
								}
							}
						}
						if (bLocal_799)
						{
							if (unk_0xC844350D5D58C99A(Local_824[0 /*20*/].f_1))
							{
								if (unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_1, 0))
								{
									iLocal_875 = 9;
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
	{
		iLocal_875 = 3;
		return 1;
	}
	if (!unk_0x4DA54CAC0D81A673(iLocal_900))
	{
		unk_0x2F625BED8BF7F26A(iLocal_900);
	}
	else if (unk_0x5B17F10380E80E5B(iLocal_900))
	{
		iLocal_875 = 4;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (!iLocal_785)
	{
		if (func_3(&iLocal_891, 180f))
		{
			iLocal_785 = 1;
			func_171(&Local_396, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (func_3(&iLocal_891, 300f))
	{
		if (iLocal_170 != 2)
		{
			iLocal_875 = 14;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0, float fParam1)
{
	if (func_7(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(int iParam0)
{
	if (func_7(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 2);
}

bool func_7(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

int func_8()
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (iLocal_170 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_906 < 9)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		sVar2 = "TOW_DISP_CAR";
	}
	else if (bVar0)
	{
		sVar2 = "TOW_DISP_GAR";
	}
	else
	{
		sVar2 = "TOW_DISP_IMP";
	}
	if (!func_11(vLocal_468[0 /*3*/]))
	{
		if (!iLocal_786)
		{
			if (func_9(vLocal_468[0 /*3*/], 0) > (fLocal_180 + 400f))
			{
				func_171(&Local_396, "TOWAUD", sVar2, 9, 0, 0, 0);
				iLocal_786 = 1;
			}
		}
		if (func_9(vLocal_468[0 /*3*/], 0) > (fLocal_180 + 450f))
		{
			iLocal_875 = 11;
			return 1;
		}
	}
	return 0;
}

float func_9(vector3 vParam0, bool bParam1)
{
	return func_10(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), vParam0, bParam1);
}

float func_10(int iParam0, vector3 vParam1, bool bParam2)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), vParam1, bParam2);
}

int func_11(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return Global_181EC.f_159 > 0;
}

void func_13(struct<165> Param0, int iParam1, int iParam2)
{
	if (!iLocal_211)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (iLocal_451 > 1)
			{
				if (func_48(iParam1, iParam2))
				{
					if (func_47())
					{
						Local_225 = { func_46() };
						func_44();
						iLocal_211 = 1;
						iLocal_451 = 3;
					}
					else
					{
						iLocal_211 = 1;
						iLocal_451 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_451)
	{
		case 0:
			if (!func_47())
			{
				SYSTEM::SETTIMERA(0);
				iLocal_451 = 1;
			}
			break;
		
		case 1:
			if ((SYSTEM::TIMERA() > 3000 && iLocal_216) && !func_43("TOWT_OBJ_04", 0, 0))
			{
				if (!func_47())
				{
					func_257(&Param0, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					if (unk_0x8A22C4C08282BF26(joaat("tonya3")) == 1 || unk_0x8A22C4C08282BF26(joaat("tonya4")) == 1)
					{
						if (iLocal_170 == 1)
						{
							func_171(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							sLocal_226 = "TOW_TRN_C1";
						}
						else if (iLocal_170 == 3)
						{
							func_171(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							sLocal_226 = "TOW_BRK_C";
						}
						bLocal_212 = true;
					}
					else if (iLocal_170 == 1)
					{
						if (Global_1B416.f_4E00.f_5 == 0 || Global_1B416.f_4E00.f_5 == 1)
						{
							func_257(&Param0, 5, (*iParam1)[0 /*20*/], "TOWTRAINF", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							sLocal_226 = "TOW_MECH";
						}
						else if (Global_1B416.f_4E00.f_5 == 2)
						{
							func_257(&Param0, 6, (*iParam1)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							sLocal_226 = "TOW_MECH2";
						}
						else
						{
							func_42(Param0, iParam1);
						}
						bLocal_212 = true;
					}
					else if (iLocal_170 == 3)
					{
						if (Global_1B416.f_4E00.f_7 == 0 || Global_1B416.f_4E00.f_7 == 1)
						{
							func_257(&Param0, 5, (*iParam1)[0 /*20*/], "TOWBREAKM", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							sLocal_226 = "TOW_BRK_CONV";
						}
						else if (Global_1B416.f_4E00.f_7 == 2)
						{
							func_257(&Param0, 6, (*iParam1)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							sLocal_226 = "TOW_BRK_CON2";
						}
						else
						{
							func_41(Param0, iParam1);
						}
						bLocal_212 = true;
					}
				}
				else if (func_39(sLocal_226))
				{
					iLocal_451 = 2;
				}
			}
			break;
		
		case 3:
			func_38(Param0, iParam1);
			if (iLocal_213)
			{
				iLocal_451 = 2;
			}
			break;
		
		case 2:
			if (func_37(iParam2))
			{
				if (bLocal_212)
				{
					if (iLocal_211)
					{
						if (!func_47())
						{
							if (func_14(&Local_396, "TOWAUD", sLocal_226, &Local_225, 8, 0, 0))
							{
								iLocal_211 = 0;
								iLocal_451 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			func_37(iParam2);
			break;
	}
}

bool func_14(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_36(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_514C = 0;
	Global_5153 = 0;
	Global_514E = 0;
	Global_5524 = 0;
	Global_5526 = 0;
	Global_552A = 1;
	StringCopy(&Global_5531, sParam3, 24);
	Global_280001 = 0;
	return func_15(sParam2, iParam4, 0);
}

int func_15(char* sParam0, int iParam1, bool bParam2)
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
					func_35();
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
		if (func_34(8, 4294967295))
		{
			return 0;
		}
		Global_5191 = { Global_518B };
		func_33();
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
				func_25();
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
				if (func_24())
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
			if (func_23())
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
			func_22();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0;
		func_21();
		func_16();
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
		func_35();
	}
	return 0;
}

void func_16()
{
	if (!func_17())
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

int func_17()
{
	if (!Global_40001.f_6DB6)
	{
		return 0;
	}
	if (!Global_12B4E)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_20())
	{
		return 0;
	}
	if (func_18(unk_0xD803B885F5E47A62()))
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

bool func_18(int iParam0)
{
	return func_19(iParam0, 20);
}

bool func_19(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_20()
{
	return 4294967295;
}

void func_21()
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

void func_22()
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

int func_23()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
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

void func_25()
{
	if (func_32(14))
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
		Global_4C1E = func_26();
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

int func_26()
{
	func_27();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_27()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_30(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_29(unk_0x16F2683693E537C9());
			if (func_28(iVar0) && (!func_32(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_28(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_32(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_33()
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

bool func_34(int iParam0, int iParam1)
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

void func_35()
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

void func_36(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = iParam5;
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

int func_37(var uParam0)
{
	switch (iLocal_452)
	{
		case 1:
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0 && !unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				iLocal_213 = 0;
				return 1;
			}
			break;
		
		case 2:
			break;
		
		case 4:
			break;
		
		case 6:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(*uParam0, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *uParam0, 0))
				{
					iLocal_213 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_38(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	switch (iLocal_452)
	{
		case 1:
			if (unk_0x8A22C4C08282BF26(joaat("towing")) == 0)
			{
				if (iLocal_170 == 1)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							unk_0x9B96FC9CDDC93764(unk_0xD803B885F5E47A62());
							iLocal_213 = 1;
						}
					}
				}
				else if (iLocal_170 == 3)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							unk_0x9B96FC9CDDC93764(unk_0xD803B885F5E47A62());
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_1B416.f_4E00.f_5 == 0 || Global_1B416.f_4E00.f_5 == 1)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_1B416.f_4E00.f_5 == 2)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_1B416.f_4E00.f_7 == 0 || Global_1B416.f_4E00.f_7 == 1)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_1B416.f_4E00.f_7 == 2)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x8A22C4C08282BF26(joaat("towing")) == 0)
			{
				if (iLocal_170 == 1)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (iLocal_170 == 3)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_1B416.f_4E00.f_5 == 0 || Global_1B416.f_4E00.f_5 == 1)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_1B416.f_4E00.f_5 == 2)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_1B416.f_4E00.f_7 == 0 || Global_1B416.f_4E00.f_7 == 1)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_1B416.f_4E00.f_7 == 2)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x8A22C4C08282BF26(joaat("towing")) == 0)
			{
				if (iLocal_170 == 1)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (iLocal_170 == 3)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_1B416.f_4E00.f_5 == 0 || Global_1B416.f_4E00.f_5 == 1)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_1B416.f_4E00.f_5 == 2)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_1B416.f_4E00.f_7 == 0 || Global_1B416.f_4E00.f_7 == 1)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_1B416.f_4E00.f_7 == 2)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (unk_0x8A22C4C08282BF26(joaat("towing")) == 0)
			{
				if (iLocal_170 == 1)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (iLocal_170 == 3)
				{
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_1B416.f_4E00.f_5 == 0 || Global_1B416.f_4E00.f_5 == 1)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_1B416.f_4E00.f_5 == 2)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_1B416.f_4E00.f_7 == 0 || Global_1B416.f_4E00.f_7 == 1)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_1B416.f_4E00.f_7 == 2)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_213)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			break;
	}
}

int func_39(char* sParam0)
{
	var uVar0;
	
	if (func_47())
	{
		MemCopy(&uVar0, {func_40()}, 4);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_40()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 4)
	{
		return Global_4FC8;
	}
	return Var0;
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	int iVar0;
	
	iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 4);
	if (iVar0 == 0)
	{
		func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_226 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_226 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_226 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_226 = "TOW_GEN_MCH4";
	}
}

void func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	func_257(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_226 = "TOW_GEN_MCH2";
}

bool func_43(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 1)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_44()
{
	Global_4CD7 = 0;
	func_45();
}

void func_45()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_5538 = 0;
		unk_0x5CEB4DB888A62073(true);
		Global_5145 = 6;
		return;
	}
}

struct<6> func_46()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 4)
	{
		iVar1 = unk_0x40EFDB96B3112BA7();
		iVar1 = (iVar1 + Global_5537);
		iVar2 = iVar1 + 1;
		if (iVar2 > 4294967295 && iVar1 > 4294967295)
		{
			if (unk_0xEF07223F00EBE9C9(&(Global_4CD9[iVar2 /*6*/])))
			{
				return Global_4CD9[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_4CD9[iVar3 /*6*/])))
					{
						return Global_4CD9[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_4CD9[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_47()
{
	if (Global_5145 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_48(var uParam0, var uParam1)
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0 || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		if (unk_0x82D09C8DBB516A49(unk_0xD803B885F5E47A62()))
		{
			unk_0x9B96FC9CDDC93764(unk_0xD803B885F5E47A62());
		}
		iLocal_452 = 1;
		return 1;
	}
	if ((unk_0xC844350D5D58C99A((uParam0[0 /*20*/])->f_6) && !unk_0x437347B10A200C4B((uParam0[0 /*20*/])->f_6, 0)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (!bLocal_177)
		{
			if ((unk_0xB87D13D0C064E9D1((uParam0[0 /*20*/])->f_6, unk_0x16F2683693E537C9(), 1) || unk_0xD24FAF25ADC00F44((uParam0[0 /*20*/])->f_6)) || unk_0x688A90832774AB83((uParam0[0 /*20*/])->f_6))
			{
				iLocal_452 = 2;
				return 1;
			}
		}
	}
	if ((unk_0xC844350D5D58C99A((*uParam0)[0 /*20*/]) && !unk_0x437347B10A200C4B((*uParam0)[0 /*20*/], 0)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0xB87D13D0C064E9D1(unk_0x16F2683693E537C9(), (*uParam0)[0 /*20*/], 1))
		{
			iLocal_452 = 4;
			return 1;
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(*uParam1, 0))
	{
		if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *uParam1, 0))
		{
			iLocal_452 = 6;
			return 1;
		}
	}
	return 0;
}

void func_49()
{
	func_53(&Global_1AED1, 3);
	func_300(&(Global_1B416.f_4E00.f_1), 8192);
	func_50();
	func_193();
}

void func_50()
{
	func_51();
}

int func_51()
{
	if (func_52(0))
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

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

void func_53(var uParam0, int iParam1)
{
	func_54(uParam0, iParam1);
}

void func_54(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_55()
{
	var uVar0;
	int iVar1;
	char* sVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	switch (iLocal_906)
	{
		case 1:
			func_141(14);
			if (iLocal_170 == 3)
			{
				if (func_139(&vLocal_863, &fLocal_864, &uLocal_856, &uLocal_859))
				{
					iLocal_906 = 2;
				}
			}
			else
			{
				iLocal_906 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xD17F06053799A7CA())
			{
				switch (iLocal_170)
				{
					case 3:
						func_257(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_396, "TOWAUD", "TOW_ACC_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					
					case 2:
						func_257(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_396, "TOWAUD", "TOW_ABN_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					
					case 0:
						func_257(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (bLocal_799)
						{
							if (func_171(&Local_396, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
							{
								iLocal_906 = 4;
							}
						}
						else if (func_171(&Local_396, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					
					case 1:
						func_257(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_396, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					
					case 4:
						func_257(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_396, "TOWAUD", "TOW_ACD_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					}
			}
			break;
		
		case 4:
			switch (iLocal_170)
			{
				case 3:
					if (func_132("TOWT_OBJ_01", "TOWT_HELP_01", &uVar0, 1, 0))
					{
						if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
						{
							unk_0x71EDC33E5A423750(Local_824[0 /*20*/].f_6, 10);
						}
						func_130();
						func_263(&iLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				case 2:
					if (func_132("TOWT_OBJ_AB", "TOWT_HELP_AB", &uVar0, 0, 0))
					{
						vLocal_470 = { (vLocal_468[0 /*3*/] + 15f), (vLocal_468[0 /*3*/].f_1 + 15f), (vLocal_468[0 /*3*/].f_2 + 15f) };
						vLocal_471 = { (vLocal_468[0 /*3*/] - 15f), (vLocal_468[0 /*3*/].f_1 - 15f), (vLocal_468[0 /*3*/].f_2 - 15f) };
						unk_0xE342F209E49C5314(vLocal_470, vLocal_471, false, 1);
						iLocal_797 = 1;
						unk_0x5A751CC648EB6940(Local_824[0 /*20*/].f_6, true);
						func_263(&iLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				case 0:
					if (func_132("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						func_263(&iLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				case 1:
					if (func_132("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						unk_0x5A751CC648EB6940(Local_824[0 /*20*/].f_6, true);
						func_130();
						unk_0xF48790410026514E(0);
						func_129(0, 0);
						func_129(1, 0);
						func_129(2, 0);
						func_129(3, 0);
						func_129(4, 0);
						func_129(5, 0);
						func_129(6, 0);
						func_129(7, 0);
						func_129(8, 0);
						func_129(9, 0);
						func_129(10, 0);
						func_129(11, 0);
						iLocal_794 = 1;
						func_263(&iLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				case 4:
					if (func_132("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						unk_0x5A751CC648EB6940(Local_824[0 /*20*/].f_6, true);
						func_130();
						func_263(&iLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				default:
					break;
			}
			if (!unk_0xE4EDC4B0E92C078B(Local_824[0 /*20*/].f_8))
			{
				if (unk_0xC844350D5D58C99A(Local_824[0 /*20*/].f_6))
				{
					Local_824[0 /*20*/].f_8 = unk_0x5C3B41825F6AC5A0(Local_824[0 /*20*/].f_6);
					unk_0x61755AC17D8F538E(Local_824[0 /*20*/].f_8, 3);
					unk_0x661342B9651D16E2(Local_824[0 /*20*/].f_8, true);
				}
			}
			break;
		
		case 5:
			func_124();
			if (func_116(&iLocal_908, 0, "TOW_BREAK1"))
			{
				iLocal_906 = 7;
			}
			break;
		
		case 6:
			if (!func_47())
			{
				func_115(sLocal_905, 7500, 1);
				StringCopy(&cLocal_866, sLocal_905, 64);
				if (iLocal_170 == 3)
				{
					iLocal_906 = 5;
				}
				else
				{
					iLocal_906 = 7;
				}
			}
			break;
		
		case 7:
			switch (iLocal_170)
			{
				case 3:
				case 1:
				case 4:
					sVar2 = "TOWT_OBJ_04";
					break;
				
				case 2:
				case 0:
					if (func_11(vLocal_469))
					{
						vLocal_469 = { vLocal_46[0 /*3*/] };
					}
					func_114(8, &Local_825);
					sVar2 = "TOWT_OBJ_06";
					break;
			}
			if (iLocal_170 == 1 && !unk_0xC42A92762C58E1B9(Local_824[0 /*20*/], iLocal_900, 0))
			{
				bLocal_791 = true;
			}
			func_113();
			if (func_106(sVar2, vLocal_469))
			{
				if (iLocal_170 == 1 && !unk_0xC42A92762C58E1B9(Local_824[0 /*20*/], iLocal_900, 0))
				{
					bLocal_791 = false;
					iLocal_787 = 1;
					if (unk_0xC844350D5D58C99A(Local_824[0 /*20*/]))
					{
						Local_824[0 /*20*/].f_9 = unk_0x5C3B41825F6AC5A0(Local_824[0 /*20*/]);
						unk_0x61755AC17D8F538E(Local_824[0 /*20*/].f_9, 3);
						unk_0x516E63E474722206(Local_824[0 /*20*/].f_9, 0.7f);
					}
					iLocal_906 = 5;
				}
				else
				{
					iLocal_906 = 9;
				}
			}
			if (func_104(&uVar3, &uVar4, &uVar5))
			{
				bLocal_769 = true;
				iLocal_906 = 9;
			}
			break;
		
		case 9:
			if (iLocal_170 == 3)
			{
				sVar2 = "TOWT_OBJ_03a";
			}
			else
			{
				sVar2 = "TOWT_OBJ_03Ga";
			}
			if (func_103(sVar2))
			{
				func_146(&uLocal_149, 0, 0);
				unk_0x9A8BCD43DBDDCDCA(Local_824[0 /*20*/].f_6, false, 0);
				if (iLocal_840 == 0)
				{
					iLocal_775 = 0;
					iLocal_906 = 15;
				}
				else
				{
					func_115("TOWT_OBJ_05", 7500, 1);
					StringCopy(&cLocal_866, "TOWT_OBJ_05", 64);
					iLocal_906 = 7;
				}
			}
			break;
		
		case 15:
			func_102();
			if (bLocal_773)
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_817))
				{
					unk_0x142CC44DB769B57E(&iLocal_817);
				}
			}
			unk_0xA37A90C62806D848(1);
			fLocal_179 = (fLocal_179 + 500f);
			if (iLocal_218 != 0 && !bLocal_769)
			{
				if (bLocal_779)
				{
					if ((unk_0x1C0640BA9A7327B3() - iLocal_218) < 12000)
					{
						fLocal_179 = (fLocal_179 + 50f);
					}
				}
			}
			if (!bLocal_779)
			{
				fLocal_179 = 0f;
			}
			fLocal_865 = func_4(&iLocal_882);
			fLocal_865 = (fLocal_865 * 1000f);
			iVar1 = SYSTEM::ROUND(fLocal_865);
			unk_0x11E0F00830F70E15(iVar1, 14, 0);
			if (iLocal_170 != 2)
			{
			}
			if (bLocal_779)
			{
				fLocal_179 = (fLocal_179 - fLocal_178);
			}
			iLocal_220 = SYSTEM::ROUND(fLocal_179);
			func_101(&iLocal_454, "TOW_UI07", 500, SYSTEM::ROUND(fLocal_178), SYSTEM::ROUND(fLocal_179), "TOW_UI08", 4000, 1);
			if (iLocal_220 > 0)
			{
				func_62(0, iLocal_220);
			}
			func_61(1);
			iLocal_906 = 16;
			break;
		
		case 16:
			if (unk_0x8FA469D9C5F1A01F())
			{
				unk_0xA37A90C62806D848(1);
			}
			if (!func_56(&iLocal_454, 0))
			{
				unk_0x2F23E8033F1ADDD9("TOW_TUT_04A");
				unk_0x2F23E8033F1ADDD9("TOWT_OBJ_03Ga");
				iLocal_906 = 17;
			}
			break;
		
		case 17:
			return 1;
			break;
	}
	vLocal_46[0 /*3*/] = { vLocal_46[0 /*3*/] };
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	if (!func_7(&(iParam0->f_2)))
	{
		func_59(&(iParam0->f_2));
	}
	unk_0x3584F71E5CA29322(14);
	unk_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 255, 0);
	if (iParam1 || iParam0->f_8)
	{
		if (unk_0xBFC0798A6E3417F9(2, 201) || iParam0->f_8)
		{
			if (!func_7(&(iParam0->f_5)))
			{
				func_59(&(iParam0->f_5));
				func_58(iParam0, 1051260355);
			}
		}
		if (func_7(&(iParam0->f_5)))
		{
			if (func_4(&(iParam0->f_5)) > 0.33f)
			{
				func_57(&(iParam0->f_5));
				return 0;
			}
		}
	}
	if (iParam0->f_1 == 4294967295)
	{
		return 1;
	}
	if (func_4(&(iParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(iParam0->f_1)
	{
		if (!func_7(&(iParam0->f_5)))
		{
			func_59(&(iParam0->f_5));
			func_58(iParam0, 1051260355);
		}
		else if (func_4(&(iParam0->f_5)) > 0.33f)
		{
			func_57(&(iParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_57(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_58(var uParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, "SHARD_ANIM_OUT");
	unk_0x3CAEA85DA607305E(uParam0->f_9);
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_59(int iParam0)
{
	func_60(iParam0, 0f);
}

void func_60(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_5(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_61(bool bParam0)
{
	char* sVar0;
	
	unk_0x9CBC55A05A07FC47(0);
	switch (func_26())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0x3D0B5872F36FB05C(sVar0);
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	func_64(Global_1B416.f_6143[iParam0 /*4*/], func_100(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_1B416.f_6143.f_45 = (Global_1B416.f_6143.f_45 + iParam1);
			break;
		
		case 2:
			Global_1B416.f_6143.f_46 = (Global_1B416.f_6143.f_46 + iParam1);
			break;
		
		case 0:
			Global_1B416.f_6143.f_47 = (Global_1B416.f_6143.f_47 + iParam1);
			break;
	}
	unk_0x6FB46C25CCB7E6D5(func_63(iParam0, 1), &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(func_63(iParam0, 1), iVar0, 1);
}

int func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_towi");
					break;
				
				case 1:
					return joaat("prop_earned_towi");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_taxi");
					break;
				
				case 1:
					return joaat("prop_earned_taxi");
					break;
				
				case 2:
					return joaat("prop_missions_taxi");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_traf");
					break;
				
				case 1:
					return joaat("prop_earned_traf");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_soco");
					break;
				
				case 1:
					return joaat("prop_earned_soco");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cmsh");
					break;
				
				case 1:
					return joaat("prop_earned_cmsh");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinv");
					break;
				
				case 1:
					return joaat("prop_earned_cinv");
					break;
				
				case 2:
					return joaat("prop_missions_cinv");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cind");
					break;
				
				case 1:
					return joaat("prop_earned_cind");
					break;
				
				case 2:
					return joaat("prop_missions_cind");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinm");
					break;
				
				case 1:
					return joaat("prop_earned_cinm");
					break;
				
				case 2:
					return joaat("prop_missions_cinm");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_golf");
					break;
				
				case 1:
					return joaat("prop_earned_golf");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cscr");
					break;
				
				case 1:
					return joaat("prop_earned_cscr");
					break;
				
				case 2:
					return joaat("prop_missions_cscr");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_weed");
					break;
				
				case 1:
					return joaat("prop_earned_weed");
					break;
				
				case 2:
					return joaat("prop_missions_weed");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barte");
					break;
				
				case 1:
					return joaat("prop_earned_barte");
					break;
				
				case 2:
					return joaat("prop_missions_barte");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barpi");
					break;
				
				case 1:
					return joaat("prop_earned_barpi");
					break;
				
				case 2:
					return joaat("prop_missions_barpi");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barhe");
					break;
				
				case 1:
					return joaat("prop_earned_barhe");
					break;
				
				case 2:
					return joaat("prop_missions_barhe");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barho");
					break;
				
				case 1:
					return joaat("prop_earned_barho");
					break;
				
				case 2:
					return joaat("prop_missions_barho");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_strip");
					break;
				
				case 1:
					return joaat("prop_earned_strip");
					break;
			}
			break;
	}
	return joaat("prop_bought_towi");
}

void func_64(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_99(iParam0) == 3)
	{
		return;
	}
	if (func_99(iParam0) == 4)
	{
		return;
	}
	func_65(func_99(iParam0), 1, iParam1, iParam2, 0);
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

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_98();
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
					func_97(99, 1);
					func_96(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_96(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_96(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_81(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_76(5))
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
							func_96(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_96(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_96(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_76(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_96(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_96(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_96(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_96(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_96(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_96(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_96(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_96(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_96(joaat("sp2_money_spent_property"), iParam3);
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
									func_96(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_96(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_96(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_96(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_96(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_96(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_76(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_96(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_96(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_96(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_96(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_96(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_96(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_75(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_97(95, iParam3);
					break;
				
				case 1:
					func_97(97, iParam3);
					break;
				
				case 2:
					func_97(96, iParam3);
					break;
			}
			func_97(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_68(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_68(iVar1);
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
					func_96(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_96(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_96(joaat("sp2_total_cash_earned"), iParam3);
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
	func_67(iParam0);
	if (Global_A1D7 == 15)
	{
		func_66(0);
	}
	return 1;
}

void func_66(bool bParam0)
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

void func_67(int iParam0)
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

void func_68(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_74(129, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_74(135, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_74(136, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_74(137, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_71(8269, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_71(8270, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_71(8271, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_71(8272, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_71(8273, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_71(8274, 0, 4294967295, 1, 0);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_70() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_70() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_69(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_69(int iParam0)
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

int func_70()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_73();
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

int func_73()
{
	return Global_1407E9;
}

int func_74(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_73();
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

void func_75(int iParam0)
{
	func_97(93, iParam0);
	func_97(29, iParam0);
	func_97(30, iParam0);
}

bool func_76(int iParam0)
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
		return func_78(129, 4294967295, 4294967295);
	}
	if (iParam0 == 9)
	{
		return func_78(135, 4294967295, 4294967295);
	}
	if (iParam0 == 10)
	{
		return func_78(136, 4294967295, 4294967295);
	}
	if (iParam0 == 11)
	{
		return func_78(137, 4294967295, 4294967295);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_77(8269, 4294967295, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_77(8270, 4294967295, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_77(8271, 4294967295, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_77(8272, 4294967295, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_77(8273, 4294967295, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_77(8274, 4294967295, 0);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_70() /*10930*/].f_181E.f_A, iParam0);
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_72(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_73();
	}
	iVar1 = func_80(iParam0, iParam1);
	uVar2 = func_79(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_79(int iParam0)
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

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_73();
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

int func_81(bool bParam0)
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
		func_95(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_82(27, 1);
	return 1;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1)
{
	if (func_32(14) && !func_94(iParam0))
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
	if (func_93(&Global_4127F1))
	{
		if (func_91(&Global_4127F1, iParam0))
		{
			return 0;
		}
		if (func_84(&Global_4127F1, iParam0))
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

int func_84(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	func_87(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_85(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_87(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_88(uParam0, iVar0);
		iVar0++;
	}
	func_89(uParam0, (Global_4127F0 - 0.5f));
}

void func_88(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_89(var uParam0, float fParam1)
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

float func_90(var uParam0)
{
	return uParam0->f_50;
}

bool func_91(var uParam0, int iParam1)
{
	return func_92(uParam0, iParam1) != 4294967295;
}

int func_92(var uParam0, int iParam1)
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

bool func_93(var uParam0)
{
	return uParam0->f_4F == 1;
}

int func_94(int iParam0)
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

int func_95(int iParam0, int iParam1)
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

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_97(int iParam0, int iParam1)
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

void func_98()
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

int func_99(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 101;
			break;
		
		case 3:
			return 102;
			break;
		
		case 4:
			return 103;
			break;
		
		case 5:
			return 104;
			break;
		
		case 6:
			return 105;
			break;
		
		case 7:
			return 106;
			break;
		
		case 8:
			return 107;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 109;
			break;
		
		case 11:
			return 110;
			break;
		
		case 12:
			return 111;
			break;
		
		case 13:
			return 112;
			break;
		
		case 14:
			return 113;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

void func_101(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	unk_0x7E60C62A7CE58FC8(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0x3A820E495A7BA3E5(iParam7);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39(sParam5);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	func_59(&(iParam0->f_2));
	iParam0->f_1 = iParam6;
	iParam0->f_9 = 1;
}

void func_102()
{
	Global_1B416.f_4E00.f_3++;
	Global_1B416.f_4E00.f_2 = iLocal_170;
	switch (iLocal_170)
	{
		case 2:
			Global_1B416.f_4E00.f_4++;
			break;
		
		case 3:
			Global_1B416.f_4E00.f_7++;
			break;
		
		case 0:
			Global_1B416.f_4E00.f_6++;
			break;
		
		case 1:
			Global_1B416.f_4E00.f_5++;
			break;
		
		case 4:
			Global_1B416.f_4E00.f_8++;
			break;
	}
}

int func_103(char* sParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	if (iLocal_839 == 4294967295)
	{
	}
	if (Local_824[iLocal_839 /*20*/].f_F)
	{
		if ((func_4(&(Local_824[iLocal_839 /*20*/].f_B)) - Local_824[iLocal_839 /*20*/].f_E) > 120f)
		{
			unk_0x0DC87D17DC2658DC(Local_824[iLocal_839 /*20*/].f_6, 1, 0);
		}
	}
	if (func_104(&uVar0, &uVar1, &uVar2))
	{
		if (!unk_0x437347B10A200C4B(Local_824[iLocal_839 /*20*/], 0) && unk_0xC42A92762C58E1B9(Local_824[iLocal_839 /*20*/], iLocal_900, 0))
		{
			unk_0xE0C0351D5B931E37(iLocal_900, 6f, 2, 0);
			iLocal_214 = 1;
			if (unk_0xC844350D5D58C99A(Local_824[iLocal_839 /*20*/]) && !unk_0x437347B10A200C4B(Local_824[iLocal_839 /*20*/], 0))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_171);
				unk_0xBC43ED9FE28DB191(0);
				unk_0x75CDA8644CD3B5F5(0, 0, 0);
				unk_0xDE7F7A4DA93201CF(0, Local_824[0 /*20*/].f_6, 20000, 2f, 0f, 1f, 0);
				iVar3 = (unk_0x09AC81E49EA267F7(0, 65535) % 3);
				if (iVar3 == 0)
				{
					unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				else if (iVar3 == 1)
				{
					unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_SMOKING", 0, 1);
				}
				else if (iVar3 == 2)
				{
					unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
				}
				else
				{
					unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				unk_0x75ABDC5F81978924(iLocal_171);
				unk_0x78ADC381772E3D54(Local_824[iLocal_839 /*20*/], iLocal_171);
				unk_0xF82EA857DA10E0CD(&iLocal_171);
				unk_0xFADC0A217229F6B5(Local_824[iLocal_839 /*20*/], true);
			}
			if ((Global_1B416.f_4E00.f_3 == 0 || Global_1B416.f_4E00.f_3 == 1) || Global_1B416.f_4E00.f_3 == 4)
			{
				if (unk_0xC844350D5D58C99A(iLocal_816) && !unk_0x437347B10A200C4B(iLocal_816, 0))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_171);
					unk_0x75CDA8644CD3B5F5(0, 0, 0);
					unk_0x01E4BB5190DF7317(0, 227.082f, 0);
					unk_0x75ABDC5F81978924(iLocal_171);
					if (!unk_0x437347B10A200C4B(iLocal_816, 0))
					{
						unk_0x78ADC381772E3D54(iLocal_816, iLocal_171);
						unk_0xFADC0A217229F6B5(iLocal_816, true);
					}
					unk_0xF82EA857DA10E0CD(&iLocal_171);
				}
			}
			if (func_47())
			{
				func_172();
			}
			if ((Global_1B416.f_4E00.f_3 == 0 || Global_1B416.f_4E00.f_3 == 1) || Global_1B416.f_4E00.f_3 == 4)
			{
				if (Global_1B416.f_4E00.f_3 == 0)
				{
					func_171(&Local_396, "TOWAUD", "TOW_TUT_ENDA", 9, 0, 0, 0);
				}
				else if (Global_1B416.f_4E00.f_3 == 1)
				{
					func_171(&Local_396, "TOWAUD", "TOW_TUT_ENDB", 9, 0, 0, 0);
				}
				else if (Global_1B416.f_4E00.f_3 == 4)
				{
					func_171(&Local_396, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_1B416.f_4E00.f_7 == 0 || Global_1B416.f_4E00.f_7 == 1)
				{
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWBREAKM", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_BRK_THNK", 9, 0, 0, 0);
				}
				else if (Global_1B416.f_4E00.f_7 == 2)
				{
					func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_BRK_THAN", 9, 0, 0, 0);
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_1B416.f_4E00.f_5 == 0 || Global_1B416.f_4E00.f_5 == 1)
				{
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_THANK", 9, 0, 0, 0);
				}
				else if (Global_1B416.f_4E00.f_5 == 2)
				{
					func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_THANK2", 9, 0, 0, 0);
				}
			}
		}
		if (!bLocal_793)
		{
		}
		iLocal_216 = 0;
		unk_0x142CC44DB769B57E(&(Local_824[iLocal_839 /*20*/].f_8));
		func_59(&iLocal_879);
		iLocal_840 = (iLocal_840 - 1);
		return 1;
	}
	if (!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[iLocal_839 /*20*/].f_6, 0))
	{
		if (!unk_0x6D18156F72BE0773(iLocal_900, Local_824[iLocal_839 /*20*/].f_6))
		{
			iLocal_216 = 0;
			func_146(&uLocal_149, 0, 0);
			unk_0x661342B9651D16E2(Local_824[iLocal_839 /*20*/].f_8, false);
			unk_0x142CC44DB769B57E(&(Local_824[iLocal_839 /*20*/].f_8));
			if (unk_0xC844350D5D58C99A(Local_824[iLocal_839 /*20*/].f_6) && !unk_0x437347B10A200C4B(Local_824[iLocal_839 /*20*/].f_6, 0))
			{
				if (!unk_0xE4EDC4B0E92C078B(Local_824[iLocal_839 /*20*/].f_8))
				{
					Local_824[iLocal_839 /*20*/].f_8 = unk_0x5C3B41825F6AC5A0(Local_824[iLocal_839 /*20*/].f_6);
					unk_0x61755AC17D8F538E(Local_824[iLocal_839 /*20*/].f_8, 3);
				}
			}
			if (iLocal_170 == 1)
			{
				if (Global_1B416.f_4E00.f_5 == 0 || Global_1B416.f_4E00.f_5 == 1)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_812)
					{
						if (func_171(&Local_396, "TOWAUD", "TOW_UNHOOK", 9, 1, 0, 0))
						{
							iLocal_812 = 1;
						}
					}
				}
				else if (Global_1B416.f_4E00.f_5 == 2)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_812)
					{
						if (func_171(&Local_396, "TOWAUD", "TOW_UNHOOK2", 9, 1, 0, 0))
						{
							iLocal_812 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_1B416.f_4E00.f_7 == 0 || Global_1B416.f_4E00.f_7 == 1)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_812)
					{
						if (func_171(&Local_396, "TOWAUD", "TOW_BRK_UNHK", 9, 1, 0, 0))
						{
							iLocal_812 = 1;
						}
					}
				}
				else if (Global_1B416.f_4E00.f_7 == 2)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_812)
					{
						if (func_171(&Local_396, "TOWAUD", "TOW_BRK_HOOK", 9, 1, 0, 0))
						{
							iLocal_812 = 1;
						}
					}
				}
			}
			func_59(&iLocal_879);
			if (!bLocal_791)
			{
				if (func_47())
				{
					unk_0x5CEB4DB888A62073(true);
					unk_0x790015DC92C918E2();
					func_115(sParam0, 7500, 1);
				}
				if (!func_47())
				{
					if (iLocal_765)
					{
						unk_0x790015DC92C918E2();
						func_115(sParam0, 7500, 1);
						iLocal_765 = 0;
					}
					else
					{
						unk_0x790015DC92C918E2();
						func_115(sParam0, 7500, 1);
					}
					StringCopy(&cLocal_866, sParam0, 64);
				}
			}
			iLocal_906 = 7;
		}
	}
	return 0;
}

int func_104(var uParam0, var uParam1, var uParam2)
{
	if (iLocal_839 != 4294967295)
	{
		if (!func_11(Local_825.f_E))
		{
			vLocal_469 = { Local_825.f_E };
			*uParam0 = { Local_825.f_7 };
			*uParam1 = { Local_825.f_A };
			*uParam2 = Local_825.f_D;
		}
		else
		{
			*uParam0 = { Local_825 };
			*uParam1 = { Local_825.f_3 };
			*uParam2 = Local_825.f_6;
		}
		if (!bLocal_793)
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_469, 30f, 30f, 2f, true, true, 0))
				{
					if (iLocal_170 == 0 || iLocal_170 == 4)
					{
						if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
						{
							unk_0x71EDC33E5A423750(Local_824[0 /*20*/].f_6, 1);
							bLocal_773 = true;
						}
					}
				}
			}
		}
		if (unk_0xC844350D5D58C99A(Local_824[iLocal_839 /*20*/].f_6))
		{
			if (unk_0x3D1053F9EB43B7AD(Local_824[iLocal_839 /*20*/].f_6, *uParam0, *uParam1, *uParam2, 0, false, 0))
			{
				if (iLocal_775)
				{
					func_105("TOWT_HELP_UH", 4294967295);
				}
				if (!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[iLocal_839 /*20*/].f_6, 0))
				{
					if (!unk_0x6D18156F72BE0773(iLocal_900, Local_824[iLocal_839 /*20*/].f_6) || (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_824[iLocal_839 /*20*/].f_6, 0) && !unk_0x6D18156F72BE0773(iLocal_900, Local_824[iLocal_839 /*20*/].f_6)))
					{
						if (func_47())
						{
							func_172();
						}
						func_146(&uLocal_149, 0, 0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_105(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_106(char* sParam0, vector3 vParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (!bLocal_779 && !bLocal_790)
	{
		if (unk_0xC844350D5D58C99A(iLocal_900) && !unk_0x437347B10A200C4B(iLocal_900, 0))
		{
			iVar2 = unk_0xC102CE429C03E382(iLocal_900);
			if (unk_0xC844350D5D58C99A(iVar2) && !unk_0x437347B10A200C4B(iVar2, 0))
			{
				if (unk_0xE2F1E99DD161A861(iVar2))
				{
					if (unk_0x96A5FE5834B81CE7(iVar2) != Local_824[0 /*20*/].f_6)
					{
						if (!iLocal_806)
						{
							func_257(&uLocal_227, 3, iLocal_816, "TONYA", 0, 1);
							if (func_171(&uLocal_227, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
							{
								iLocal_806 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_806 = 0;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (unk_0xC844350D5D58C99A(Local_824[iVar1 /*20*/].f_6))
		{
			if (!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[iVar1 /*20*/].f_6, 0))
			{
				if (unk_0x6D18156F72BE0773(iLocal_900, Local_824[iVar1 /*20*/].f_6) && func_112())
				{
					unk_0xAA280AF45BCCCF21(iLocal_900, true);
					func_109();
					func_146(&uLocal_149, 0, 0);
					iLocal_216 = 1;
					if (iLocal_795 && !unk_0xC42A92762C58E1B9(Local_824[iVar1 /*20*/], iLocal_900, 0))
					{
						bVar0 = false;
						if (iLocal_911 < 4)
						{
							SYSTEM::SETTIMERB(0);
							iLocal_911 = 5;
						}
					}
					if (bVar0)
					{
						func_108(&iLocal_885);
						unk_0x661342B9651D16E2(Local_824[iVar1 /*20*/].f_8, false);
						iLocal_801 = 0;
						func_107(Local_824[iVar1 /*20*/].f_8);
						Local_824[iVar1 /*20*/].f_E = func_4(&(Local_824[iVar1 /*20*/].f_B));
						if (iLocal_821 == 0)
						{
							Local_824[iVar1 /*20*/].f_8 = unk_0x6CC513A908911CF0(vParam1);
							fLocal_180 = func_9(vParam1, 0);
							vLocal_468[0 /*3*/] = { vParam1 };
						}
						if (iLocal_170 == 4)
						{
							unk_0x152BCACCF710B36E(Local_824[0 /*20*/].f_6, 0, 0);
						}
						func_59(&iLocal_891);
						unk_0x61755AC17D8F538E(Local_824[iVar1 /*20*/].f_8, 5);
						unk_0x661342B9651D16E2(Local_824[iVar1 /*20*/].f_8, true);
						if (iLocal_170 == 0 && bLocal_799)
						{
						}
						else if (iLocal_766)
						{
							func_115(sParam0, 7500, 1);
							iLocal_766 = 0;
						}
						StringCopy(&cLocal_866, sParam0, 64);
						unk_0x28F5E4DA506AC0CA(vLocal_468[0 /*3*/], 6f, 0, 0, 0, 0, false, 0);
						iLocal_839 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_107(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		unk_0x142CC44DB769B57E(&iParam0);
	}
}

void func_108(int iParam0)
{
	func_57(iParam0);
	StringCopy(&cLocal_70, "", 32);
}

void func_109()
{
	func_110("TOW_TUT_03");
	func_110("TOW_TUT_02");
	func_110("TOW_TUT_01");
	unk_0x2F23E8033F1ADDD9("TOWT_OBJ_03");
	unk_0x2F23E8033F1ADDD9("TOWT_OBJ_03a");
	unk_0x2F23E8033F1ADDD9("TOWT_OBJ_03G");
	unk_0x2F23E8033F1ADDD9("TOWT_OBJ_03Ga");
	unk_0x2F23E8033F1ADDD9("TOWT_OBJS_03");
}

void func_110(char* sParam0)
{
	if (func_111(sParam0))
	{
		unk_0xA37A90C62806D848(1);
	}
}

bool func_111(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_112()
{
	if (bLocal_793)
	{
		if (bLocal_448 && !func_47())
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_113()
{
	int iVar0;
	
	if (((!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0)) && unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6)) || (Global_1B416.f_4E00.f_3 == 0 || Global_1B416.f_4E00.f_3 > 2))
	{
		return;
	}
	switch (iLocal_852)
	{
		case 0:
			if (!func_7(&iLocal_897))
			{
				func_263(&iLocal_897);
				iLocal_852 = 1;
			}
			break;
		
		case 1:
			if (func_7(&iLocal_897))
			{
				if (func_4(&iLocal_897) > 10f)
				{
					if (!unk_0x8FA469D9C5F1A01F() && !func_47())
					{
						iVar0 = (unk_0x09AC81E49EA267F7(0, 65535) % 2);
						if (iVar0 == 0)
						{
							func_105("TOW_TUT_04C", 4294967295);
						}
						else if (iVar0 == 1)
						{
							func_105("TOW_TUT_02", 4294967295);
						}
						else
						{
							func_105("TOW_TUT_04C", 4294967295);
						}
						func_59(&iLocal_897);
						iLocal_852 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_7(&iLocal_897))
			{
				if (func_4(&iLocal_897) > 15f)
				{
					if (!unk_0x8FA469D9C5F1A01F() && !func_47())
					{
						func_105("TOW_TUT_03", 4294967295);
						func_59(&iLocal_897);
						iLocal_852 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_7(&iLocal_897))
			{
				if (func_4(&iLocal_897) > 15f)
				{
					if (!unk_0x8FA469D9C5F1A01F() && !func_47())
					{
						func_105("TOW_TUT_01", 4294967295);
						iLocal_852 = 4;
					}
				}
			}
			break;
		
		case 4:
			break;
	}
}

void func_114(int iParam0, var uParam1)
{
	if (func_11(vLocal_45[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.8514f, -1181.072f, 21.06031f };
			uParam1->f_3 = { -230.4658f, -1163.16f, 28.99641f };
			uParam1->f_6 = 22.25f;
			uParam1->f_11 = { vLocal_45[0 /*3*/] };
			break;
		
		case 1:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_11 = { vLocal_45[1 /*3*/] };
			break;
		
		case 2:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_11 = { vLocal_45[2 /*3*/] };
			break;
		
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_11 = { vLocal_45[3 /*3*/] };
			break;
		
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_11 = { vLocal_45[4 /*3*/] };
			break;
		
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_11 = { vLocal_45[5 /*3*/] };
			break;
		
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_11 = { vLocal_45[6 /*3*/] };
			break;
		
		case 7:
			*uParam1 = { 256.5623f, 2600.458f, 43.3306f };
			uParam1->f_3 = { 268.6701f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_11 = { vLocal_45[7 /*3*/] };
			break;
		
		case 8:
			*uParam1 = { 398.7471f, -1650.806f, 27.29324f };
			uParam1->f_3 = { 434.1311f, -1610.011f, 33.34294f };
			uParam1->f_6 = 40.5f;
			uParam1->f_E = { 400.2854f, -1632.597f, 28.29278f };
			uParam1->f_11 = { vLocal_46[0 /*3*/] };
			uParam1->f_7 = { 396.8347f, -1639.045f, 27.29278f };
			uParam1->f_A = { 408.0073f, -1625.608f, 33.29277f };
			uParam1->f_D = 10f;
			break;
	}
}

void func_115(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

int func_116(int iParam0, int iParam1, char* sParam2)
{
	sParam2 = sParam2;
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_792)
			{
				if ((func_123(Local_824[iParam1 /*20*/].f_6, iLocal_900, &iLocal_449, 10, 150f, 4f, 1) || iLocal_787) || iLocal_216)
				{
					if (!bLocal_770)
					{
						iLocal_449 = 0;
						func_122(&iLocal_444);
						if (unk_0xD1960163A3042274(Local_824[iParam1 /*20*/], 3419293077) != 1)
						{
							unk_0xF96A174EE26D7588(Local_824[iParam1 /*20*/], unk_0x16F2683693E537C9(), 4294967295);
						}
						bLocal_770 = true;
					}
					if (bLocal_770)
					{
						if (unk_0x5A91F08DF773C39D(iLocal_900, unk_0x68F4C0EC296D3901(Local_824[iParam1 /*20*/], true), 25f, 25f, 25f, false, true, 0))
						{
							if (unk_0xB4ECF989E2C1DAC8(Local_824[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								unk_0xFB131B855F2FD560(Local_824[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!func_121())
							{
								if (iLocal_170 == 1)
								{
									if (Global_1B416.f_4E00.f_5 == 0 || Global_1B416.f_4E00.f_5 == 1)
									{
										func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
										func_257(&Local_396, 5, Local_824[iParam1 /*20*/], "TOWTRAINF", 0, 1);
										func_171(&Local_396, "TOWAUD", "TOW_GREET", 9, 1, 0, 0);
									}
									else if (Global_1B416.f_4E00.f_5 == 2)
									{
										func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
										func_257(&Local_396, 6, Local_824[iParam1 /*20*/], "TOWILLEGALMAN2", 0, 1);
										func_171(&Local_396, "TOWAUD", "TOW_GREET2", 9, 1, 0, 0);
									}
									unk_0x5B1D360B9C6F0A09(Local_824[iParam1 /*20*/], iLocal_900, 20000, 0, 2f, 1048577, 0);
								}
								else if (iLocal_170 == 3)
								{
									if (Global_1B416.f_4E00.f_7 == 0 || Global_1B416.f_4E00.f_7 == 1)
									{
										func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
										func_257(&Local_396, 5, Local_824[iParam1 /*20*/], "TOWBREAKM", 0, 1);
										func_171(&Local_396, "TOWAUD", "TOW_BRK_GRT", 9, 1, 0, 0);
									}
									else if (Global_1B416.f_4E00.f_7 == 2)
									{
										func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
										func_257(&Local_396, 6, Local_824[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
										func_171(&Local_396, "TOWAUD", "TOW_BRK_GRT2", 9, 1, 0, 0);
									}
									unk_0x5B1D360B9C6F0A09(Local_824[iParam1 /*20*/], iLocal_900, 20000, 0, 2f, 1048577, 0);
								}
								if (iLocal_787)
								{
									unk_0x142CC44DB769B57E(&(Local_824[iParam1 /*20*/].f_8));
									if (unk_0xC844350D5D58C99A(Local_824[iParam1 /*20*/]))
									{
										Local_824[iParam1 /*20*/].f_8 = unk_0x5C3B41825F6AC5A0(Local_824[iParam1 /*20*/]);
										unk_0x61755AC17D8F538E(Local_824[iParam1 /*20*/].f_8, 3);
										unk_0x516E63E474722206(Local_824[iParam1 /*20*/].f_8, 0.7f);
									}
								}
								SYSTEM::SETTIMERA(0);
								*iParam0 = 1;
							}
						}
						else if (unk_0x5A91F08DF773C39D(iLocal_900, unk_0x68F4C0EC296D3901(Local_824[iParam1 /*20*/], true), 50f, 50f, 50f, false, true, 0))
						{
							if (!iLocal_811)
							{
								if (Global_1B416.f_4E00.f_7 == 0 || Global_1B416.f_4E00.f_7 == 1)
								{
									func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
									func_257(&Local_396, 5, Local_824[iParam1 /*20*/], "TOWBREAKM", 0, 1);
									if (func_171(&Local_396, "TOWAUD", "TOW_CALLING", 9, 1, 0, 0))
									{
										iLocal_811 = 1;
									}
								}
								else if (Global_1B416.f_4E00.f_7 == 2)
								{
									func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
									func_257(&Local_396, 6, Local_824[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
									if (func_171(&Local_396, "TOWAUD", "TOW_BRK_CALL", 9, 1, 0, 0))
									{
										iLocal_811 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			bLocal_774 = true;
			func_59(&iLocal_891);
			func_59(&iLocal_876);
			func_107(Local_824[iParam1 /*20*/].f_8);
			if (!unk_0xE4EDC4B0E92C078B(Local_824[0 /*20*/].f_9))
			{
				if (unk_0xC844350D5D58C99A(Local_824[iParam1 /*20*/]))
				{
					Local_824[0 /*20*/].f_9 = unk_0x5C3B41825F6AC5A0(Local_824[iParam1 /*20*/]);
					unk_0x61755AC17D8F538E(Local_824[0 /*20*/].f_9, 3);
					unk_0x516E63E474722206(Local_824[0 /*20*/].f_9, 0.7f);
				}
			}
			func_115("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			unk_0xF63400DBE3303D26("TOWBUDDIES", &iLocal_823);
			unk_0x0E2400AB9174FA81(1, iLocal_823, 1862763509);
			unk_0x6DF7BF67E86AAE86(Local_824[iParam1 /*20*/], iLocal_823);
			func_120(iParam1);
			*iParam0 = 3;
			break;
		
		case 3:
			if (!unk_0xC42A92762C58E1B9(Local_824[iParam1 /*20*/], iLocal_900, 0))
			{
				if (func_117(&uLocal_915, Local_824[iParam1 /*20*/], 1125515264, 30000))
				{
					iLocal_875 = 11;
					func_267();
				}
			}
			if (unk_0xC42A92762C58E1B9(Local_824[iParam1 /*20*/], iLocal_900, 0))
			{
				if (!unk_0x437347B10A200C4B(iLocal_900, 0))
				{
					unk_0x71EDC33E5A423750(iLocal_900, 9);
					func_107(Local_824[0 /*20*/].f_9);
				}
			}
			if (unk_0xC42A92762C58E1B9(Local_824[iParam1 /*20*/], iLocal_900, 0) && !unk_0x25037C66EB32B076())
			{
				if (iLocal_170 == 1)
				{
					if (Global_1B416.f_4E00.f_5 == 0 || Global_1B416.f_4E00.f_5 == 1)
					{
						if (iLocal_787)
						{
							func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
					}
					else if (Global_1B416.f_4E00.f_5 == 2)
					{
						if (iLocal_787)
						{
							func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
				else if (iLocal_170 == 3)
				{
					if (Global_1B416.f_4E00.f_7 == 0 || Global_1B416.f_4E00.f_7 == 1)
					{
						if (iLocal_787)
						{
							func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWBREAKM", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWBREAKM", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
					}
					else if (Global_1B416.f_4E00.f_7 == 2)
					{
						if (iLocal_787)
						{
							func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_171(&Local_396, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0xC42A92762C58E1B9(Local_824[iParam1 /*20*/], iLocal_900, 0))
			{
				func_120(iParam1);
				if (!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
				{
					if (iLocal_787 && unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6))
					{
						return 1;
					}
				}
				if (!unk_0xE4EDC4B0E92C078B(Local_824[0 /*20*/].f_8))
				{
					if (unk_0xC844350D5D58C99A(Local_824[iParam1 /*20*/].f_6) && !unk_0x437347B10A200C4B(Local_824[iParam1 /*20*/].f_6, 0))
					{
						Local_824[0 /*20*/].f_8 = unk_0x5C3B41825F6AC5A0(Local_824[iParam1 /*20*/].f_6);
						unk_0x61755AC17D8F538E(Local_824[iParam1 /*20*/].f_8, 3);
					}
				}
				if (!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
				{
					if (!unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6))
					{
						func_115("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_866, "TOWT_OBJ_03", 64);
					}
				}
				func_59(&iLocal_876);
				*iParam0 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_117(var uParam0, int iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	iParam2 = iParam2;
	iParam3 = iParam3;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = unk_0x1C0640BA9A7327B3();
			uParam0->f_2 = func_118(iParam1, 1);
			*uParam0 = 1;
			break;
		
		case 1:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			}
			if (!unk_0x437347B10A200C4B(iParam1, 0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iParam1, true) };
			}
			if (SYSTEM::VDIST2(vVar0, vVar1) > 22500f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_118(int iParam0, bool bParam1)
{
	return func_119(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

float func_119(int iParam0, int iParam1, bool bParam2)
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

void func_120(int iParam0)
{
	int iVar0;
	
	bLocal_792 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0xE4EDC4B0E92C078B(Local_824[iVar0 /*20*/].f_8))
			{
				unk_0x142CC44DB769B57E(&(Local_824[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_121()
{
	float fVar0;
	
	if (!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
	{
		if (unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6))
		{
			fVar0 = unk_0x9C66D99E63E8E24C(iLocal_900);
			if (fVar0 > 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_122(int iParam0)
{
	if (*iParam0 != 4294967295)
	{
		unk_0x55D0A2DB35045A35(*iParam0);
		unk_0x43A06902454A1172(*iParam0);
		*iParam0 = 4294967295;
	}
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xEC560E589DF8370E(iParam0))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam0);
		}
	}
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0) && unk_0xEB6A8945D1AC98A1(iVar0))
		{
			return 0;
		}
	}
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (bParam6)
			{
			}
			if (!unk_0x03068588A1FCED1A(iParam0) && func_118(iParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || func_118(iParam0, 1) < 8f) && unk_0x9C66D99E63E8E24C(iParam1) < fParam5) && !unk_0x03068588A1FCED1A(iParam0))
			{
				*iParam2 = 0;
				return 1;
			}
		}
	}
	if (bParam6)
	{
	}
	return 0;
}

void func_124()
{
	int iVar0;
	
	if (!bLocal_774)
	{
		iVar0 = SYSTEM::ROUND(((300f - func_128(&iLocal_891)) * 1000f));
		if (iLocal_170 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				func_125(iVar0, "TOW_TIME", 0, 0, 4294967295, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
			}
			else
			{
				func_125(iVar0, "TOW_TIME", 0, 0, 4294967295, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
			}
		}
	}
}

void func_125(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_127(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_150976.f_1 = 1;
		func_126(7, iVar0);
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

void func_126(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_127(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

float func_128(int iParam0)
{
	if (func_7(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_129(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_1AEC4, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1AEC4, iParam0);
	}
	Global_1AEC3 = 1;
}

void func_130()
{
	int iVar0;
	
	iVar0 = func_131(&vLocal_45, vLocal_468[0 /*3*/], 400f);
	if (iVar0 != 4294967295)
	{
		vLocal_469 = { vLocal_45[iVar0 /*3*/] };
		func_114(iVar0, &Local_825);
	}
	else
	{
		vLocal_469 = { vLocal_45[0 /*3*/] };
	}
}

int func_131(var uParam0, vector3 vParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_11(*(uParam0[iVar0 /*3*/])))
		{
			fVar3 = SYSTEM::VDIST2(*(uParam0[iVar0 /*3*/]), vParam1);
			if (fVar3 < fVar2 && fVar3 > fParam2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == 4294967295)
	{
	}
	return iVar1;
}

int func_132(char* sParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	fLocal_180 = func_9(vLocal_863, 0);
	vLocal_468[0 /*3*/] = { vLocal_863 };
	sLocal_905 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_138(vLocal_863, fLocal_864, uParam2, 0))
		{
			func_137(Local_824[0 /*20*/].f_6, &uLocal_844, &uLocal_846);
			unk_0xF5FF7A70C82F0CCC(Local_824[0 /*20*/].f_6, 1);
			unk_0xA22F71BBC8173C39(Local_824[0 /*20*/].f_6, false);
			unk_0xE8832A9E16A57A1F(Local_824[0 /*20*/].f_6, true, 1);
			unk_0x44A200C9B6E1CEA6(Local_824[0 /*20*/].f_6, true);
			return 1;
		}
	}
	else if (func_133(bParam4, 0))
	{
		func_137(Local_824[0 /*20*/].f_6, &uLocal_844, &uLocal_846);
		unk_0xF5FF7A70C82F0CCC(Local_824[0 /*20*/].f_6, 1);
		unk_0xA22F71BBC8173C39(Local_824[0 /*20*/].f_6, false);
		unk_0xE8832A9E16A57A1F(Local_824[0 /*20*/].f_6, true, 1);
		unk_0x44A200C9B6E1CEA6(Local_824[0 /*20*/].f_6, true);
		return 1;
	}
	return 0;
}

int func_133(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_135(Local_393[iLocal_450 /*23*/].f_1, Local_393[iLocal_450 /*23*/].f_4, &iVar0, 0, iParam1))
	{
		return 0;
	}
	fLocal_180 = func_9(Local_393[iLocal_450 /*23*/].f_1, 0);
	vLocal_468[0 /*3*/] = { Local_393[iLocal_450 /*23*/].f_1 };
	if (Local_393[iLocal_450 /*23*/] == 2)
	{
		unk_0x26E12C087E2B91F8(Local_824[0 /*20*/].f_6, 0f, 1.2f, 0f, 1600f, 1600f, 1);
		unk_0x26E12C087E2B91F8(Local_824[0 /*20*/].f_6, 0f, 0.75f, 0.05f, 1600f, 1600f, 1);
		unk_0x26E12C087E2B91F8(Local_824[0 /*20*/].f_6, -0.7f, 0f, 0f, 1600f, 1600f, 1);
		unk_0x26E12C087E2B91F8(Local_824[0 /*20*/].f_6, 0.7f, 0f, 0f, 1600f, 1600f, 1);
	}
	else if (Local_393[iLocal_450 /*23*/] == 4)
	{
		fLocal_864 = -1f;
		iLocal_784 = 1;
		iLocal_901 = unk_0x122AAB0B1D6F55AD(joaat("ambulance"), Local_394[func_256() /*28*/].f_17, Local_394[func_256() /*28*/].f_1A, true, true, false);
		if (!unk_0x437347B10A200C4B(iLocal_901, 0))
		{
			unk_0xAA280AF45BCCCF21(iLocal_901, true);
			unk_0x56FDC9ADE35F7DB0(iLocal_901, true, true, 0);
			iLocal_902 = unk_0x852A19533F896693(iLocal_901, 4, joaat("s_m_m_paramedic_01"), 4294967295, 1, true);
		}
		if (!func_11(Local_394[func_256() /*28*/].f_11))
		{
			iLocal_395 = func_134(Local_394[func_256() /*28*/].f_11, Local_394[func_256() /*28*/].f_14);
		}
		switch (Local_393[iLocal_450 /*23*/].f_15)
		{
			case 1:
				unk_0x26E12C087E2B91F8(Local_824[0 /*20*/].f_6, -0.5223f, 2.455f, 0.0784f, 200f, 250f, 1);
				unk_0x26E12C087E2B91F8(Local_824[0 /*20*/].f_6, -1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 0:
				unk_0x26E12C087E2B91F8(Local_824[0 /*20*/].f_6, 0.6012f, 2.4222f, 0.0245f, 200f, 250f, 1);
				unk_0x26E12C087E2B91F8(Local_824[0 /*20*/].f_6, 1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 2:
				unk_0x26E12C087E2B91F8(Local_824[0 /*20*/].f_6, 0.1414f, 1.8401f, 0.0342f, 200f, 350f, 1);
				break;
		}
		unk_0x611DFA9294B339CA(Local_824[0 /*20*/].f_6, 0, 0, false);
	}
	if (bParam0)
	{
		bLocal_190 = true;
		if (Global_1B416.f_4E00.f_5 == 0 || Global_1B416.f_4E00.f_5 == 1)
		{
			Local_824[0 /*20*/] = unk_0x852A19533F896693(Local_824[0 /*20*/].f_6, 26, joaat("a_f_m_bevhills_01"), 4294967295, 1, true);
		}
		else if (Global_1B416.f_4E00.f_5 == 2)
		{
			Local_824[0 /*20*/] = unk_0x852A19533F896693(Local_824[0 /*20*/].f_6, 26, joaat("a_m_y_genstreet_02"), 4294967295, 1, true);
		}
		else
		{
			Local_824[0 /*20*/] = unk_0x852A19533F896693(Local_824[0 /*20*/].f_6, 26, uLocal_820[0], 4294967295, 1, true);
		}
	}
	return 1;
}

int func_134(vector3 vParam0, vector3 vParam1)
{
	unk_0x10F3BFFADF2CE3DA(vParam0, vParam1);
	unk_0x51EA29724CE5BF82(vParam0, vParam1, 1);
	return unk_0x7D6CA5F52B3748BF(vParam0, vParam1, 0, 1, 1, 1);
}

int func_135(vector3 vParam0, float fParam1, int iParam2, bool bParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	*iParam2 = func_136(&Local_824);
	if (*iParam2 == 4294967295)
	{
		return 0;
	}
	if (iLocal_841 >= 2)
	{
		iLocal_841 = 0;
	}
	Local_824[*iParam2 /*20*/].f_6 = unk_0x122AAB0B1D6F55AD(iLocal_819[iLocal_841], vParam0, fParam1, true, true, false);
	unk_0xE8832A9E16A57A1F(Local_824[*iParam2 /*20*/].f_6, true, 1);
	iLocal_841++;
	fLocal_180 = func_9(vParam0, 0);
	if (iLocal_170 == 1)
	{
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else
	{
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!func_11(Local_393[iLocal_450 /*23*/].f_A))
	{
		Local_824[*iParam2 /*20*/].f_11 = unk_0xA4B9EE930B45BDFA(Local_393[iLocal_450 /*23*/].f_A, fVar0, 0f, 0);
	}
	else
	{
		Local_824[*iParam2 /*20*/].f_11 = unk_0xA4B9EE930B45BDFA(vParam0, fVar0, 0f, 0);
	}
	Local_824[*iParam2 /*20*/].f_12 = unk_0xA4B9EE930B45BDFA(vParam0, fVar1, 2.5f, 0);
	Local_824[*iParam2 /*20*/].f_13 = unk_0xA4B9EE930B45BDFA(vParam0, fVar2, 4f, 0);
	if (bParam3)
	{
		if (Local_824[*iParam2 /*20*/].f_F)
		{
			unk_0xBBBF14C3EA856B1A(Local_824[*iParam2 /*20*/].f_6, 1);
			unk_0x5DAB50E08C3C504A(Local_824[*iParam2 /*20*/].f_6, 1f);
			unk_0x31BC65E81AF6F8E4(Local_824[*iParam2 /*20*/].f_6, 1);
		}
		else
		{
			unk_0xBBBF14C3EA856B1A(Local_824[*iParam2 /*20*/].f_6, 1);
			unk_0x5DAB50E08C3C504A(Local_824[*iParam2 /*20*/].f_6, 1f);
			unk_0x31BC65E81AF6F8E4(Local_824[*iParam2 /*20*/].f_6, 1);
		}
	}
	if (!bLocal_792 && uParam4)
	{
		if (unk_0xC844350D5D58C99A(Local_824[*iParam2 /*20*/].f_6))
		{
			Local_824[*iParam2 /*20*/].f_8 = unk_0x5C3B41825F6AC5A0(Local_824[*iParam2 /*20*/].f_6);
			unk_0x61755AC17D8F538E(Local_824[*iParam2 /*20*/].f_8, 3);
		}
	}
	iLocal_840++;
	func_263(&(Local_824[*iParam2 /*20*/].f_B));
	return 1;
}

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((iParam0[iVar0 /*20*/])->f_6 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_137(int iParam0, var uParam1, var uParam2)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		*uParam1 = unk_0x7F6DC62EA9922664(iParam0);
		*uParam2 = *uParam1;
	}
}

int func_138(vector3 vParam0, float fParam1, var uParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!func_135(vParam0, fParam1, uParam2, 1, iParam3))
	{
		return 0;
	}
	if (*uParam2 == 4294967295)
	{
	}
	unk_0x611DFA9294B339CA(Local_824[*uParam2 /*20*/].f_6, 4, 0, false);
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(Local_824[*uParam2 /*20*/].f_6), &vVar1, &vVar2);
	vVar3 = { vVar2 - vVar1 };
	vVar3 = { vVar3 / Vector(2f, 2f, 2f) };
	iLocal_784 = 1;
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(Local_824[*uParam2 /*20*/].f_6, 1.5f, 0f, 0f) };
	vVar4 = { unk_0x68F4C0EC296D3901(Local_824[*uParam2 /*20*/].f_6, true) };
	fVar5 = unk_0xD9522BA9E27E1349(Local_824[*uParam2 /*20*/].f_6);
	iLocal_850 = unk_0xA4B9EE930B45BDFA(unk_0x8A5E176FF719A014(vVar4, fVar5, -1.5f, -30f, 0f), 10f, 0f, 0);
	iLocal_851 = unk_0xA4B9EE930B45BDFA(unk_0x8A5E176FF719A014(vVar4, fVar5, -1.5f, 30f, 0f), 10f, 0f, 0);
	unk_0x28F5E4DA506AC0CA(vVar0, 30f, 0, 0, 0, 0, false, 0);
	Local_394[func_256() /*28*/][0 /*3*/] = { vVar0.x, vVar0.y, (vVar0.z + 1f) };
	return 1;
}

int func_139(var uParam0, float fParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	fVar4 = 0f;
	fVar5 = 0f;
	iVar6 = (unk_0x09AC81E49EA267F7(0, 3999) / 1000);
	if (iVar6 == 0)
	{
		fVar4 = -unk_0x79833B02DBD2A244(450f, 700f);
		fVar5 = unk_0x79833B02DBD2A244(-100f, 100f);
	}
	else if (iVar6 == 1)
	{
		fVar4 = unk_0x79833B02DBD2A244(450f, 700f);
		fVar5 = unk_0x79833B02DBD2A244(100f, 100f);
	}
	else if (iVar6 == 2)
	{
		fVar5 = unk_0x79833B02DBD2A244(450f, 700f);
		fVar4 = unk_0x79833B02DBD2A244(-100f, 100f);
	}
	else
	{
		fVar5 = -unk_0x79833B02DBD2A244(450f, 700f);
		fVar4 = unk_0x79833B02DBD2A244(-100f, 100f);
	}
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), fVar4, fVar5, 0f) };
	if (!unk_0xD67BAD44C1B3CADE(vVar0, 10f, 1, 1, 1, &vVar3, &uVar2))
	{
		return 0;
	}
	unk_0x4A13F7D4B1E239A0(vVar3, 2, uParam2, fParam1, &uVar1, 1, 1077936128, 0);
	*uParam0 = { vVar3 };
	if (unk_0x8A22C4C08282BF26(joaat("tonya4")) == 1)
	{
		*uParam0 = { -476.1537f, 132.6556f, 62.9586f };
		*fParam1 = 87.951f;
	}
	if (func_140(*uParam0, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

bool func_140(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_141(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		unk_0x3CFFF3C8EACD8DC1(8, &uVar0, 1, 1);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x8DECFDD6715449E4(8, &cVar1);
	}
}

void func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0xE4EDC4B0E92C078B(vLocal_69[iVar0 /*3*/].f_1))
		{
			if (unk_0x437347B10A200C4B(vLocal_69[iVar0 /*3*/], 0))
			{
				unk_0x142CC44DB769B57E(&(vLocal_69[iVar0 /*3*/].f_1));
			}
			else if (vLocal_69[iVar0 /*3*/].f_2 && func_118(vLocal_69[iVar0 /*3*/], 1) > 200f)
			{
				unk_0x142CC44DB769B57E(&(vLocal_69[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_143()
{
	if (!unk_0x7F8A39872A07D2CE(&cLocal_63, ""))
	{
		if (!func_47())
		{
			func_171(&Local_51, &cLocal_63, &cLocal_66, 9, 0, 0, 0);
			StringCopy(&cLocal_63, "", 16);
		}
	}
}

void func_144(int iParam0, float fParam1, bool bParam2)
{
	if (func_145(iParam0, fParam1))
	{
		if (bParam2)
		{
			func_105(&cLocal_70, 4294967295);
		}
		else
		{
			func_115(&cLocal_70, 7500, 1);
		}
	}
}

int func_145(int iParam0, float fParam1)
{
	if (func_3(iParam0, fParam1))
	{
		func_57(iParam0);
		return 1;
	}
	return 0;
}

void func_146(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 26))
		{
			return;
		}
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(iParam2);
		unk_0x9A1335ECD7BD117F("FocusIn");
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_B)
		{
			unk_0x82A772610883F395("FocusOut", 0, 0);
			unk_0x4D7F4CC43D4D0DE3(4294967295, "FocusOut", "HintCamSounds", true);
			uParam0->f_B = 0;
		}
	}
	unk_0xF3039DE1FDB4F6FD(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = 4294967295;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_111(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_111(sVar0))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

void func_147(var uParam0, vector3 vParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam2;
	if (unk_0x2EBF5002C6B6A06C(iVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_111(iVar0))
	{
		func_169();
	}
	if (!unk_0x8C74DE122769E1BF())
	{
		if (func_164(uParam0, bParam4, bParam6, 0))
		{
			func_163(uParam0, vParam1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_152(iVar0))
			{
				if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && iParam5)
					{
						if (!func_111(iVar0))
						{
							func_105(iVar0, 4294967295);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_151(1);
							}
						}
					}
				}
			}
		}
		else if (func_152(iVar0))
		{
			if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
			{
				if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && iParam5)
				{
					if (!func_111(iVar0))
					{
						func_105(iVar0, 4294967295);
						uParam0->f_3 = iVar0;
						if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
						{
							func_151(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x2EBF5002C6B6A06C(iVar0))
		{
			if (func_111(iVar0) && unk_0xFEBC1E4EC9E001F0())
			{
				unk_0xA37A90C62806D848(1);
			}
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(3) == 3 || unk_0xA4FD7964FEE91ED8(3) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
			{
				func_146(uParam0, iVar0, 1);
			}
		}
		if (!func_164(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_150(uParam0))
			{
				func_148(uParam0);
			}
		}
	}
}

void func_148(var uParam0)
{
	if (func_149(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0xF3039DE1FDB4F6FD(true);
		unk_0x29D5132FBDCF2B1E(0);
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		unk_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_B)
		{
			unk_0x82A772610883F395("FocusOut", 0, 0);
			unk_0x4D7F4CC43D4D0DE3(4294967295, "FocusOut", "HintCamSounds", true);
			uParam0->f_B = 0;
		}
	}
	uParam0->f_2 = 4294967295;
	*uParam0 = 1;
}

int func_149(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xE2F1E99DD161A861(iParam0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xEC560E589DF8370E(iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_150(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_A / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1C0640BA9A7327B3()
		{
			return 1;
		}
	}
	return 0;
}

int func_151(bool bParam0)
{
	switch (Global_A1D7)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_1B416.f_273C.f_64++;
			}
			return Global_1B416.f_273C.f_64;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_1B416.f_273C.f_65++;
			}
			return Global_1B416.f_273C.f_65;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_1B416.f_273C.f_66++;
			}
			return Global_1B416.f_273C.f_66;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_152(char* sParam0)
{
	if (!func_153(1, 1, 0))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_111(sParam0)) || func_111("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(1);
		}
		return 0;
	}
	switch (Global_A1D7)
	{
		case 0:
		case 3:
			if (func_151(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_151(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_151(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_153(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0;
	}
	if (func_162(0))
	{
		return 0;
	}
	if (func_161())
	{
		return 0;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return 0;
	}
	if (Global_12061)
	{
		return 0;
	}
	if (unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_E545)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(3) == 3 || unk_0xA4FD7964FEE91ED8(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
			{
				return 0;
			}
			if (unk_0xC4E6FF7CA2A185EA())
			{
				return 0;
			}
		}
	}
	if ((func_160() || func_159(Global_440000.f_38DB3)) || func_158())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar1 = func_157(unk_0x16F2683693E537C9(), 0);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 562680400 && iVar1 != 4294967295)) || (unk_0x134B62B726CEC8E6(iVar0) == 1181327175 && iVar1 != 4294967295)) || (((unk_0x134B62B726CEC8E6(iVar0) == 2601952180 && iVar1 == 0) && func_156(iVar0, 10)) && unk_0x0ECB5CA5140957AD(iVar0, 10) != 4294967295))
			{
				return 0;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0;
	}
	if (func_154(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_154(int iParam0)
{
	if (iParam0 != func_20())
	{
		if (func_155(iParam0, 1, 1))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_155(iParam0, 1, 0))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295;
		}
	}
	return 0;
}

int func_155(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2537E2.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x461CAC843A21E4B6(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = 4294967295;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_158()
{
	return Global_2564C8.f_11;
}

bool func_159(int iParam0)
{
	return iParam0 == 51;
}

var func_160()
{
	return Global_2564C8.f_10;
}

bool func_161()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_162(int iParam0)
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

void func_163(var uParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xF3039DE1FDB4F6FD(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_A;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0x98EF6C2D1F172740(vParam1, 4294967295, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), vParam1, 4294967295, iVar2, iVar3);
	unk_0x82A772610883F395("FocusIn", 0, 0);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(4294967295, "FocusIn", "HintCamSounds", true);
	uParam0->f_B = 1;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_164(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					if (func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_150(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
					{
						if (!func_168(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					if (!func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_167(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
					{
						if (func_166(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_150(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_153(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_169();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_165(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			if (unk_0x9A01369A10646AFE(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_166(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x9A01369A10646AFE(0, 80))
			{
				unk_0xF3039DE1FDB4F6FD(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_167(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			if (unk_0x7FEE810EE9E768EB(0, 80) && unk_0x1C0640BA9A7327B3() > Global_74)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_168(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x7FEE810EE9E768EB(0, 80) && unk_0x1C0640BA9A7327B3() > Global_74)
			{
				unk_0xF3039DE1FDB4F6FD(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_169()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 4);
}

int func_170(bool bParam0)
{
	if (bLocal_215 || iLocal_214)
	{
		return 0;
	}
	if (bParam0)
	{
		if (iLocal_216)
		{
			return 0;
		}
	}
	return 1;
}

bool func_171(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_36(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_15(sParam2, iParam3, 0);
}

void func_172()
{
	Global_4CD7 = 0;
	func_35();
}

int func_173()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (unk_0xC844350D5D58C99A(iLocal_816) && !unk_0x437347B10A200C4B(iLocal_816, 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iLocal_816, true) };
	}
	if (SYSTEM::VDIST2(vVar0, vVar1) > 2500f)
	{
		if (!bLocal_802)
		{
			func_174("TOW_TUT_RETONYA", 7500, 1);
			bLocal_802 = true;
			if (!unk_0xE4EDC4B0E92C078B(iLocal_175))
			{
				if (!unk_0x437347B10A200C4B(iLocal_816, 0))
				{
					iLocal_175 = unk_0x5C3B41825F6AC5A0(iLocal_816);
					unk_0x61755AC17D8F538E(iLocal_175, 3);
					unk_0x516E63E474722206(iLocal_175, 0.5f);
				}
			}
			if (unk_0xE4EDC4B0E92C078B(Local_824[0 /*20*/].f_8))
			{
				unk_0x142CC44DB769B57E(&(Local_824[0 /*20*/].f_8));
			}
		}
	}
	else if (bLocal_802)
	{
		bLocal_802 = false;
		if (unk_0xE4EDC4B0E92C078B(iLocal_175))
		{
			unk_0x142CC44DB769B57E(&iLocal_175);
		}
		if (!unk_0xE4EDC4B0E92C078B(Local_824[0 /*20*/].f_8))
		{
			Local_824[0 /*20*/].f_8 = unk_0x6CC513A908911CF0(vLocal_468[0 /*3*/]);
			if (iLocal_216)
			{
				unk_0x61755AC17D8F538E(Local_824[0 /*20*/].f_8, 5);
				unk_0x661342B9651D16E2(Local_824[0 /*20*/].f_8, true);
				unk_0x1BAA838E8491AF04(Local_824[0 /*20*/].f_8, 5);
			}
			else
			{
				unk_0x61755AC17D8F538E(Local_824[0 /*20*/].f_8, 3);
				unk_0x661342B9651D16E2(Local_824[0 /*20*/].f_8, true);
				unk_0x1BAA838E8491AF04(Local_824[0 /*20*/].f_8, 3);
			}
		}
	}
	if (SYSTEM::VDIST2(vVar0, vVar1) > 22500f)
	{
		if (bLocal_802)
		{
			return 1;
		}
	}
	return 0;
}

void func_174(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0);
}

int func_175(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (!func_182(*uParam2, 1))
		{
			if (func_181(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_182(*uParam2, 2))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_182(*uParam2, 4))
		{
			if (func_179(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_182(*uParam2, 8))
		{
			if (func_178(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_182(*uParam2, 128);
		if (bParam4)
		{
			if (func_176(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_182(*uParam2, 16))
		{
			if (func_176(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (iParam7 && unk_0xB87D13D0C064E9D1(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_176(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_145)
		{
			iLocal_146 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_145 = true;
		}
		iLocal_147 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_148 = (iLocal_146 - iLocal_147);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_148) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_145)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
			{
				if (IntToFloat(iLocal_148) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == unk_0x16F2683693E537C9())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
		{
			if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC021B60D52071374(iParam0))
		{
			return 1;
		}
	}
	if (func_177(unk_0x16F2683693E537C9(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_118(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0))
		{
			return 1;
		}
		if (!unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(iParam1, true)) < 2.5f)
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_178(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x03A10A5707B2BB1F(iParam0, 4))
	{
		if (unk_0x168558745A6AC21E(iParam0) && !unk_0x52AE17073D025311(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_179(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	if (unk_0xD3DCEC81D13AAFB1(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xD15F544473A95FE8(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x03A10A5707B2BB1F(iParam0, 2))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x405E212DDE472467(unk_0x940C1429253D3B1B(iParam1), 0))
			{
				iVar1 = unk_0x6937EA2286828455(unk_0x940C1429253D3B1B(iParam1), 0);
			}
			if (unk_0xFB275CE013F3A38C(iParam0) || func_180(iVar1))
			{
				if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0xA30B8362589C124A(iParam0, 4294967295, 0) != 0)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_119(unk_0x16F2683693E537C9(), iParam0, 1) < 40f)
						{
							if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar1))
							{
								if ((unk_0xE2F1E99DD161A861(iVar1) && unk_0x96A5FE5834B81CE7(iVar1) == iParam0) || (unk_0xEC560E589DF8370E(iVar1) && unk_0x940C1429253D3B1B(iVar1) == unk_0xA30B8362589C124A(iParam0, 4294967295, 0)))
								{
									if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x06F8112AA79C53D9(0, 24)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0x06F8112AA79C53D9(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_181(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_118(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x1C0640BA9A7327B3();
						}
						else if ((unk_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_182(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, char* sParam6, char* sParam7, var uParam8, bool bParam9, var uParam10)
{
	int iVar0;
	
	(*uParam4)[0] = (*uParam4)[0];
	iParam5 = iParam5;
	iVar0 = iVar0;
	bParam9 = bParam9;
	iVar0 = 0;
	while (iVar0 < iParam5)
	{
		if (unk_0xC844350D5D58C99A((*uParam4)[iVar0]))
		{
			if (!unk_0x437347B10A200C4B((*uParam4)[iVar0], 0) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (func_175((*uParam4)[iVar0], 0, &uLocal_162, &iLocal_169, 0, 1, 0, 1, 1))
				{
					unk_0xF3268524E9BE6D6E((*uParam4)[iVar0], unk_0x16F2683693E537C9(), 1000f, 4294967295, 0, 0);
				}
			}
		}
		iVar0++;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_123(iParam1, iParam3, &iLocal_449, 20, 70f, 65f, 0))
			{
				iLocal_449 = 0;
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (unk_0xC844350D5D58C99A(iParam2))
			{
				if (!unk_0x437347B10A200C4B(iParam1, 0) && !unk_0x437347B10A200C4B(iParam2, 0))
				{
					unk_0xE072601B4380E9DF(iParam2, iParam1, 50f, 786469);
					unk_0xFADC0A217229F6B5(iParam2, true);
					unk_0x6DAD7906B73F064D(&iParam2);
					unk_0x046C362CF15F1935(&iParam1);
				}
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (iLocal_216)
			{
				func_59(&iLocal_397);
				*uParam0 = 3;
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (unk_0xC844350D5D58C99A((*uParam4)[iVar0]))
				{
					if (!unk_0x437347B10A200C4B((*uParam4)[iVar0], 0))
					{
						if (func_118((*uParam4)[iVar0], 1) < 55f)
						{
							iLocal_219 = iVar0;
							iLocal_219 = iLocal_219;
							func_59(&iLocal_397);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			if (!func_11(Local_394[func_256() /*28*/].f_11))
			{
				func_184(iLocal_395, Local_394[func_256() /*28*/].f_11, Local_394[func_256() /*28*/].f_14);
			}
			if (unk_0x8A22C4C08282BF26(joaat("tonya5")) == 1)
			{
				if (!iLocal_205)
				{
					func_257(&uLocal_227, 3, *uParam8, "TONYA", 0, 1);
					if (func_171(&uLocal_227, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_205 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (!unk_0x437347B10A200C4B((*uParam4)[iVar0], 0))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_171);
					unk_0xC6EB89C59F2AF6B8(0, sParam6, (*sParam7)[iVar0], 4f, -4f, unk_0x09AC81E49EA267F7(10000, 20000), 0, 0, 0, 0, 0);
					unk_0x01E4BB5190DF7317(0, 1193033728, 0);
					unk_0x75ABDC5F81978924(iLocal_171);
					unk_0x78ADC381772E3D54((*uParam4)[iVar0], iLocal_171);
					unk_0xF82EA857DA10E0CD(&iLocal_171);
				}
				iVar0++;
			}
			*uParam0 = 5;
			break;
		
		case 4:
			break;
		
		case 5:
			if (unk_0x8A22C4C08282BF26(joaat("tonya5")) == 1)
			{
				if (!iLocal_205)
				{
					func_257(&uLocal_227, 3, *uParam8, "TONYA", 0, 1);
					if (func_171(&uLocal_227, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_205 = 1;
					}
				}
				if (!iLocal_217)
				{
					if (!unk_0x437347B10A200C4B(iParam3, 0) && !unk_0x437347B10A200C4B(*uParam10, 0))
					{
						if (!unk_0x6D18156F72BE0773(iParam3, *uParam10))
						{
							if (!func_7(&iLocal_412))
							{
								func_263(&iLocal_412);
							}
							else if (func_4(&iLocal_412) > 20f)
							{
								if (func_171(&uLocal_227, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
								{
									iLocal_217 = 1;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_184(int iParam0, vector3 vParam1, vector3 vParam2)
{
	unk_0x2952D66A502EA873(iParam0, 0);
	unk_0xEFED0CD6E25037B9();
	unk_0x51EA29724CE5BF82(vParam1, vParam2, 0);
}

int func_185(var uParam0, var uParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, float fParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	vVar3 = { *(uParam0[0 /*3*/]) };
	vVar3.z = (vVar3.z + 1f);
	if (unk_0xE82754C349C7B581(vVar3, &uVar0, 0, 0) || func_9(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		func_187(uParam1);
		unk_0x745CE398A4B0A3C6(vParam2, 28f, 0);
		(uParam0[0 /*3*/])->f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < iParam9)
		{
			if (fParam6 == -1f)
			{
				fParam6 = func_186(*(uParam0[iVar2 /*3*/]), vParam2);
			}
			else
			{
				fParam6 = (fParam6 + 180f);
			}
			if (unk_0x8A22C4C08282BF26(joaat("tonya4")) == 1)
			{
				iVar1 = unk_0x36F2404464202779(4, joaat("a_m_m_tourist_01"), *(uParam0[iVar2 /*3*/]), fParam6, 1, true);
				unk_0x64F9F278AB9DCA2C(iVar1, 0, 0, 1, 0);
				unk_0x64F9F278AB9DCA2C(iVar1, 2, 0, 0, 0);
				unk_0x64F9F278AB9DCA2C(iVar1, 3, 0, 2, 0);
				unk_0x64F9F278AB9DCA2C(iVar1, 4, 1, 2, 0);
				unk_0x64F9F278AB9DCA2C(iVar1, 8, 0, 0, 0);
				unk_0x64F9F278AB9DCA2C(iVar1, 10, 1, 1, 0);
				unk_0x71199B01895C6202(joaat("a_m_m_tourist_01"));
			}
			else if (unk_0x8A22C4C08282BF26(joaat("tonya5")) == 1)
			{
				if (iVar2 == 0)
				{
					iVar1 = unk_0x36F2404464202779(4, joaat("a_m_y_genstreet_02"), *(uParam0[iVar2 /*3*/]), fParam6, 1, true);
					unk_0x71199B01895C6202(joaat("a_m_y_genstreet_02"));
				}
				else
				{
					iVar1 = unk_0x36F2404464202779(4, joaat("a_m_m_bevhills_02"), *(uParam0[iVar2 /*3*/]), fParam6, 1, true);
					unk_0x71199B01895C6202(joaat("a_m_m_bevhills_02"));
				}
			}
			else
			{
				iVar1 = unk_0x36F2404464202779(4, (*uParam5)[(iVar2 % 2)], *(uParam0[iVar2 /*3*/]), fParam6, 1, true);
			}
			unk_0xE8832A9E16A57A1F(iVar1, true, 1);
			fParam6 = -1f;
			if (iParam9 > 1)
			{
				(*uParam4)[iVar2] = iVar1;
			}
			else
			{
				*uParam3 = iVar1;
			}
			cParam7 = cParam7;
			(*sParam8)[iVar2] = (*sParam8)[iVar2];
			unk_0x11AD11297DC58CC7(iVar1, true);
			unk_0x4E885A246A9D983A(iVar1, 42, true);
			unk_0x79C43E2BAC7C696F(iVar1, "move_m@JOG@", 1048576000);
			unk_0x9DD8618CA5BF832D(iVar1, 109, true);
			if (iLocal_170 == 3)
			{
				unk_0xF82EA857DA10E0CD(&iVar4);
				unk_0xDD353D0E9C789D0E(&iVar4);
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, 4294967295, 49, 0, 0, 0, 0);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 4294967295);
				unk_0x75ABDC5F81978924(iVar4);
				if (!unk_0x437347B10A200C4B(iVar1, 0))
				{
					unk_0x78ADC381772E3D54(iVar1, iVar4);
				}
				unk_0xF82EA857DA10E0CD(&iVar4);
			}
			iVar2++;
		}
		bLocal_190 = true;
		return 1;
	}
	else if (func_9(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
}

float func_186(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_187(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_438[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_438[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_438[iVar0 /*18*/].f_8 = { func_188(unk_0x79833B02DBD2A244(0f, 1f), unk_0x79833B02DBD2A244(0f, 1f), 0f) };
		}
		else
		{
			Local_438[iVar0 /*18*/].f_8 = { func_188(0.5f, 1f, 0f) };
		}
		Local_438[iVar0 /*18*/].f_B = 2f;
		Local_438[iVar0 /*18*/].f_C = 1f;
		Local_438[iVar0 /*18*/].f_D = 1f;
		Local_438[iVar0 /*18*/].f_E = -1f;
		Local_438[iVar0 /*18*/].f_F = 0.1f;
		Local_438[iVar0 /*18*/].f_11 = 0;
		Local_438[iVar0 /*18*/].f_1 = 1110;
		Local_438[iVar0 /*18*/] = unk_0x1776B2F0999C29AC(Local_438[iVar0 /*18*/].f_1, Local_438[iVar0 /*18*/].f_2, Local_438[iVar0 /*18*/].f_5, Local_438[iVar0 /*18*/].f_8, Local_438[iVar0 /*18*/].f_B, Local_438[iVar0 /*18*/].f_C, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar0++;
	}
}

Vector3 func_188(vector3 vParam0)
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

int func_189()
{
	func_192();
	switch (iLocal_911)
	{
		case 0:
			func_257(&Local_396, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			func_257(&Local_396, 3, Local_824[0 /*20*/], sLocal_467, 0, 1);
			unk_0x11AD11297DC58CC7(Local_824[0 /*20*/], true);
			iLocal_843 = unk_0x09AC81E49EA267F7(35, 80);
			iLocal_911 = 1;
			break;
		
		case 1:
			unk_0xDD353D0E9C789D0E(&iLocal_171);
			unk_0xC6EB89C59F2AF6B8(0, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, 4294967295, 1, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(iLocal_171);
			unk_0x78ADC381772E3D54(Local_824[0 /*20*/], iLocal_171);
			unk_0xF82EA857DA10E0CD(&iLocal_171);
			if (func_9(Local_393[iLocal_450 /*23*/].f_1, 1) < 40f || Local_822.f_1 > 0)
			{
				if (iLocal_170 == 1)
				{
					if (Global_1B416.f_4E00.f_5 == 0 || Global_1B416.f_4E00.f_5 == 1)
					{
						func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
						func_171(&Local_396, "TOWAUD", "TOW_GETOUT", 8, 0, 0, 0);
						iLocal_911 = 2;
					}
					else if (Global_1B416.f_4E00.f_5 == 2)
					{
						func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
						func_171(&Local_396, "TOWAUD", "TOW_GETOUT2", 8, 0, 0, 0);
						iLocal_911 = 2;
					}
				}
			}
			else if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < IntToFloat(iLocal_843 + 10))
			{
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
				iLocal_911 = 2;
			}
			break;
		
		case 2:
			if (!func_11(Local_393[iLocal_450 /*23*/].f_D))
			{
				Local_393[iLocal_450 /*23*/].f_D.f_2 = 45f;
				Local_393[iLocal_450 /*23*/].f_10.f_2 = -45f;
				if (!unk_0x3D1053F9EB43B7AD(Local_824[0 /*20*/].f_6, Local_393[iLocal_450 /*23*/].f_D, Local_393[iLocal_450 /*23*/].f_10, Local_393[iLocal_450 /*23*/].f_13, 0, true, 0))
				{
					func_122(&iLocal_444);
					iLocal_781 = 1;
					iLocal_788 = 1;
					bLocal_177 = true;
					if (unk_0x405E212DDE472467(Local_824[0 /*20*/], 0))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_171);
						unk_0x75CDA8644CD3B5F5(0, 0, 0);
						unk_0xC6EB89C59F2AF6B8(0, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, 0, 0, 0, 0);
						unk_0x75ABDC5F81978924(iLocal_171);
						unk_0x78ADC381772E3D54(Local_824[0 /*20*/], iLocal_171);
						unk_0xF82EA857DA10E0CD(&iLocal_171);
						iLocal_911 = 4;
					}
				}
			}
			if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < IntToFloat(iLocal_843 + 15))
			{
				if (Global_1B416.f_4E00.f_5 == 0 || Global_1B416.f_4E00.f_5 == 1)
				{
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_GETOUT", 9, 0, 0, 0);
				}
				else if (Global_1B416.f_4E00.f_5 == 2)
				{
					func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_GETOUT2", 9, 0, 0, 0);
				}
				func_122(&iLocal_444);
				unk_0x0C8C0C840C2D1AD2(Local_824[0 /*20*/], Local_824[0 /*20*/].f_7, 4294967295, 2, 2);
				SYSTEM::SETTIMERB(0);
				iLocal_911 = 3;
			}
			break;
		
		case 3:
			if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < IntToFloat(iLocal_843))
			{
				if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
				{
					if (iLocal_842 == 1)
					{
						func_191(&Local_822);
					}
					iLocal_781 = 1;
					if (unk_0x405E212DDE472467(Local_824[0 /*20*/], 0))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_171);
						unk_0x75CDA8644CD3B5F5(0, 0, 0);
						unk_0xB87AD42E3FA06BDE(0, unk_0x8A5E176FF719A014(Local_393[iLocal_450 /*23*/].f_1, Local_393[iLocal_450 /*23*/].f_4, 0f, 15f, 0f), 3f, 0, 0, 786603, 3212836864);
						unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 4294967295);
						unk_0x75ABDC5F81978924(iLocal_171);
						unk_0xBAFED2F6486F771A(Local_824[0 /*20*/], 64, false);
						unk_0x78ADC381772E3D54(Local_824[0 /*20*/], iLocal_171);
						unk_0xF82EA857DA10E0CD(&iLocal_171);
						iLocal_911 = 4;
					}
				}
			}
			break;
		
		case 4:
			if ((iLocal_910 == 8 && iLocal_216) || func_190())
			{
				SYSTEM::SETTIMERB(3000);
				iLocal_911 = 5;
			}
			break;
		
		case 5:
			iLocal_787 = 1;
			if (SYSTEM::TIMERB() > 3000)
			{
				if (func_116(&iLocal_908, 0, "TOW_TRAIN1"))
				{
					iLocal_911 = 6;
				}
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

int func_190()
{
	if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
	{
		if (bLocal_177)
		{
			switch (iLocal_855)
			{
				case 0:
					if (unk_0x4F1B602325013CC2(Local_824[0 /*20*/]) == 1)
					{
						iLocal_855 = 1;
					}
					break;
				
				case 1:
					if (!unk_0xB4ECF989E2C1DAC8(Local_824[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_855 = 2;
					}
					break;
				
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_191(int iParam0)
{
	iParam0->f_1 = 0;
	unk_0x9A8DDC7C522F5BF5(*iParam0, 0);
	unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
}

void func_192()
{
	float fVar0;
	
	if (iLocal_781 || ((!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0)) && !unk_0xC42A92762C58E1B9(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0)))
	{
		if (iLocal_444 != 4294967295)
		{
			unk_0x55D0A2DB35045A35(iLocal_444);
			unk_0x43A06902454A1172(iLocal_444);
			iLocal_444 = 4294967295;
			return;
		}
	}
	if (!iLocal_772)
	{
		iLocal_444 = unk_0xD68EA767274B7444();
		iLocal_772 = 1;
	}
	if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
	{
		if (unk_0xB4ECF989E2C1DAC8(Local_824[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop", 3))
		{
			fVar0 = unk_0x8CA9406E01C7EE58(Local_824[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop");
			if (((fVar0 >= 0.19f && fVar0 <= 0.262f) || (fVar0 >= 0.4f && fVar0 <= 0.6f)) || (fVar0 >= 0.9f && fVar0 <= 1f))
			{
				if (fVar0 >= 0.19f && fVar0 <= 0.262f)
				{
				}
				if (fVar0 >= 0.4f && fVar0 <= 0.6f)
				{
				}
				if (fVar0 >= 0.9f && fVar0 <= 1f)
				{
				}
				if (!iLocal_771)
				{
					unk_0xCEAA091B490F8407(iLocal_444, "TOWING_ENGINE_TURNING_MASTER", Local_824[0 /*20*/].f_6, 0, false, 0);
					iLocal_771 = 1;
				}
			}
			else
			{
				unk_0x55D0A2DB35045A35(iLocal_444);
				iLocal_771 = 0;
			}
		}
	}
}

void func_193()
{
	int iVar0;
	
	func_195();
	unk_0xA37A90C62806D848(1);
	unk_0x11CCD0ACA866C6C5(2, true);
	if (unk_0x83D8570832F172A7(iLocal_454))
	{
		unk_0xE17FDF9E3068281B(&iLocal_454);
	}
	if (!unk_0x437347B10A200C4B(iLocal_900, 0))
	{
		unk_0x71EDC33E5A423750(iLocal_900, 1);
		unk_0xAA280AF45BCCCF21(iLocal_900, false);
	}
	unk_0x5A5CC21130AD387A(iLocal_850);
	unk_0x5A5CC21130AD387A(iLocal_851);
	unk_0x2952D66A502EA873(iLocal_903, 0);
	unk_0x2952D66A502EA873(iLocal_904, 0);
	unk_0xE342F209E49C5314(vLocal_862 - Vector(15f, 15f, 15f), vLocal_862 + Vector(15f, 15f, 15f), true, 1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		unk_0x5A5CC21130AD387A(Local_824[iVar0 /*20*/].f_11);
		unk_0x5A5CC21130AD387A(Local_824[iVar0 /*20*/].f_12);
		unk_0x5A5CC21130AD387A(Local_824[iVar0 /*20*/].f_13);
		iVar0++;
	}
	if (!func_11(Local_394[func_256() /*28*/].f_11))
	{
		func_184(iLocal_395, Local_394[func_256() /*28*/].f_11, Local_394[func_256() /*28*/].f_14);
	}
	unk_0x046C362CF15F1935(&(Local_824[0 /*20*/].f_6));
	if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
	{
		unk_0x6DAD7906B73F064D(&(Local_824[0 /*20*/]));
		if (unk_0xC844350D5D58C99A(Local_824[0 /*20*/]))
		{
			if (unk_0x16102BEDC7435774(Local_824[0 /*20*/]))
			{
				unk_0x0A94A109271BE75A(Local_824[0 /*20*/]);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_815))
	{
		if (!unk_0x437347B10A200C4B(iLocal_815, 0))
		{
			unk_0x6DAD7906B73F064D(&iLocal_815);
		}
	}
	if (!unk_0x437347B10A200C4B(iLocal_900, 0))
	{
		unk_0x73270B3C9CC833FD(iLocal_900, true, 1);
		unk_0x046C362CF15F1935(&iLocal_900);
	}
	if (iLocal_797)
	{
		unk_0xE342F209E49C5314(vLocal_470, vLocal_471, true, 1);
	}
	if (iLocal_794 && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_7, 0))
	{
		unk_0x0448723A523CE0E6(Local_824[0 /*20*/].f_7, true);
		unk_0xDB7D85A79FCB0695(&(Local_824[0 /*20*/].f_7), 0);
		unk_0xF48790410026514E(1);
		func_129(0, 1);
		func_129(1, 0);
		func_129(2, 0);
		func_129(3, 1);
		func_129(4, 0);
		func_129(5, 0);
		func_129(6, 0);
		func_129(7, 0);
		func_129(8, 0);
		func_129(9, 0);
		func_129(10, 0);
		func_129(11, 0);
	}
	func_122(&iLocal_442);
	func_122(&iLocal_443);
	func_194(&uLocal_918);
	func_122(&iLocal_444);
	func_146(&uLocal_149, 0, 0);
	if (unk_0x9F4FE516EAACCFC5(Local_822))
	{
		func_191(&Local_822);
	}
	unk_0x51B096AAC60548C1(1f);
	unk_0xAB8E2DDC7AF955E0(joaat("towtruck"), false);
	unk_0x10FAF14A60A0DBE1();
}

void func_194(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xF7E25143642732EA((*uParam0)[iVar0], 0);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_195()
{
	vector3 vVar0[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		unk_0x3CFFF3C8EACD8DC1(StackVal, 0, 0, 0);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x8DECFDD6715449E4(0, &cVar0);
	}
}

int func_196()
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0) && !unk_0x437347B10A200C4B(iLocal_900, 0))
	{
		if (unk_0xC42A92762C58E1B9(Local_824[0 /*20*/], iLocal_900, 0))
		{
			if (unk_0xE4EDC4B0E92C078B(Local_824[0 /*20*/].f_A))
			{
				unk_0x142CC44DB769B57E(&(Local_824[0 /*20*/].f_A));
				func_122(&iLocal_444);
			}
		}
		else if (!unk_0xC42A92762C58E1B9(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0))
		{
			func_122(&iLocal_444);
		}
	}
	switch (iLocal_910)
	{
		case 0:
			if (func_9(Local_393[iLocal_450 /*23*/].f_1, 1) < 100f)
			{
				Local_824[0 /*20*/].f_7 = unk_0x9F136BAA293FE131(6, Local_393[iLocal_450 /*23*/].f_6, Local_393[iLocal_450 /*23*/].f_5);
				if (unk_0xC844350D5D58C99A(Local_824[0 /*20*/].f_7))
				{
					Local_824[0 /*20*/].f_A = unk_0x5C3B41825F6AC5A0(Local_824[0 /*20*/].f_7);
				}
				iLocal_815 = unk_0x852A19533F896693(Local_824[0 /*20*/].f_7, 4, joaat("s_m_m_lsmetro_01"), 4294967295, 1, true);
				unk_0x11AD11297DC58CC7(iLocal_815, true);
				if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_7, 0))
				{
					unk_0x5D6C12CA95187FB3(Local_824[0 /*20*/].f_7, 0f);
				}
				func_115("TOW_OBJ_05", 7500, 1);
				SYSTEM::SETTIMERA(0);
				func_199("CROSSING_BELL", &iLocal_445, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_910 = 1;
			}
			break;
		
		case 1:
			if (func_9(Local_393[iLocal_450 /*23*/].f_1, 1) < 80f || SYSTEM::TIMERA() > 10000)
			{
				if (!unk_0x562F77A7F33D2E46("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0x8BC9595FD2792B5D("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_910 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_7, 0))
			{
				unk_0x5D6C12CA95187FB3(Local_824[0 /*20*/].f_7, 26f);
				unk_0x88FD99BDEAF715B4(Local_824[0 /*20*/].f_7, 22f);
			}
			iLocal_910 = 3;
			break;
		
		case 3:
			if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_7, 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
			{
				if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < 175f)
				{
					func_198(Local_824[0 /*20*/].f_7);
					func_199("TOWING_TRAIN_BRAKES_MASTER", &iLocal_443, 1, Local_824[0 /*20*/].f_7, 0, 0, 0, 0);
					func_197(&uLocal_918, Local_824[0 /*20*/].f_7);
					func_199("TOWING_TRAIN_HORN_MASTER", &iLocal_442, 1, Local_824[0 /*20*/].f_7, 0, 0, 0, 0);
					iLocal_910 = 4;
				}
			}
			else
			{
				iLocal_910 = 8;
			}
			break;
		
		case 4:
			if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_7, 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
			{
				func_198(Local_824[0 /*20*/].f_7);
				if (!unk_0x3D1053F9EB43B7AD(Local_824[0 /*20*/].f_6, Local_393[iLocal_450 /*23*/].f_D, Local_393[iLocal_450 /*23*/].f_10, Local_393[iLocal_450 /*23*/].f_13, 0, true, 0))
				{
					func_194(&uLocal_918);
				}
				vVar0 = { unk_0x68F4C0EC296D3901(Local_824[0 /*20*/].f_7, true) };
				if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < 3f)
				{
					iLocal_768 = 1;
				}
				if (unk_0x1B3D109B39CC2C89(Local_824[0 /*20*/].f_7, Local_824[0 /*20*/].f_6))
				{
					if (!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
					{
						if (unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6))
						{
							unk_0xA1D5A8611E9DC1DD(iLocal_900, Local_824[0 /*20*/].f_6);
						}
					}
					unk_0x0DC87D17DC2658DC(Local_824[0 /*20*/].f_6, 1, 0);
					iLocal_910 = 6;
				}
				else if (func_10(Local_824[0 /*20*/].f_6, vVar0, 1) < 10f && unk_0x3D1053F9EB43B7AD(Local_824[0 /*20*/].f_6, Local_393[iLocal_450 /*23*/].f_D, Local_393[iLocal_450 /*23*/].f_10, Local_393[iLocal_450 /*23*/].f_13, 0, true, 0))
				{
					iLocal_768 = 1;
					if (!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
					{
						if (unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6))
						{
							unk_0xA1D5A8611E9DC1DD(iLocal_900, Local_824[0 /*20*/].f_6);
						}
					}
					unk_0x0DC87D17DC2658DC(Local_824[0 /*20*/].f_6, 1, 0);
				}
				if (iLocal_768 && func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) > 4f)
				{
					iLocal_910 = 6;
				}
			}
			else
			{
				iLocal_910 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_216)
			{
				func_115("TOWT_OBJ_03G", 7500, 1);
				if (unk_0xE4EDC4B0E92C078B(Local_824[0 /*20*/].f_A))
				{
					unk_0x142CC44DB769B57E(&(Local_824[0 /*20*/].f_A));
				}
			}
			unk_0x142CC44DB769B57E(&(Local_824[0 /*20*/].f_A));
			func_122(&iLocal_442);
			func_122(&iLocal_443);
			func_194(&uLocal_918);
			func_122(&iLocal_444);
			func_122(&iLocal_445);
			iLocal_910 = 7;
			break;
		
		case 7:
			if (!func_47())
			{
				if (!iLocal_216)
				{
					func_115("TOWT_OBJ_03G", 7500, 1);
				}
				if (unk_0x562F77A7F33D2E46("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0x8910D3D58E0132B8("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_910 = 8;
			}
			break;
		
		case 8:
			break;
	}
	return 0;
}

void func_197(var uParam0, int iParam1)
{
	(*uParam0)[0] = unk_0xC1879030EB463216("scr_ojtt_train_sparks", iParam1, -0.771f, 6.515f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[1] = unk_0xC1879030EB463216("scr_ojtt_train_sparks", iParam1, 0.771f, 6.515f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[2] = unk_0xC1879030EB463216("scr_ojtt_train_sparks", iParam1, -0.771f, 3.781f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[3] = unk_0xC1879030EB463216("scr_ojtt_train_sparks", iParam1, 0.771f, 3.781f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[4] = unk_0xC1879030EB463216("scr_ojtt_train_sparks", iParam1, -0.771f, -3.743f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[5] = unk_0xC1879030EB463216("scr_ojtt_train_sparks", iParam1, 0.7711f, -3.743f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[6] = unk_0xC1879030EB463216("scr_ojtt_train_sparks", iParam1, -0.771f, -6.537f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[7] = unk_0xC1879030EB463216("scr_ojtt_train_sparks", iParam1, 0.771f, -6.537f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
}

int func_198(int iParam0)
{
	float fVar0;
	
	if (!func_7(&iLocal_439))
	{
		func_263(&iLocal_439);
	}
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		}
		else
		{
			return 0;
		}
	}
	if (func_3(&iLocal_439, 0.15f))
	{
		fLocal_446 = (fVar0 - 0.35f);
		if (fLocal_446 < 8f)
		{
			fLocal_446 = 8f;
		}
		func_59(&iLocal_439);
		unk_0x5D6C12CA95187FB3(iParam0, fLocal_446);
		unk_0x88FD99BDEAF715B4(iParam0, fLocal_446);
	}
	return 1;
}

void func_199(char* sParam0, int iParam1, bool bParam2, int iParam3, float fParam4, float fParam5, float fParam6, char* sParam7)
{
	func_122(iParam1);
	if (bParam2)
	{
		*iParam1 = unk_0xD68EA767274B7444();
	}
	else
	{
		*iParam1 = 4294967295;
	}
	if (iParam3 != 0)
	{
		unk_0xCEAA091B490F8407(*iParam1, sParam0, iParam3, sParam7, false, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		unk_0xEB819BD1E585E9CB(*iParam1, sParam0, fParam4, fParam5, fParam6, sParam7, false, 0, 0);
	}
	else
	{
		unk_0x4D7F4CC43D4D0DE3(*iParam1, sParam0, sParam7, true);
	}
}

int func_200()
{
	int iVar0;
	vector3 vVar1;
	
	func_210();
	switch (iLocal_909)
	{
		case 0:
			if (bLocal_799)
			{
				if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
				{
					Local_824[0 /*20*/] = unk_0x852A19533F896693(Local_824[0 /*20*/].f_6, 26, uLocal_820[0], 1, 1, true);
					unk_0x11AD11297DC58CC7(Local_824[0 /*20*/], true);
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					Local_824[0 /*20*/].f_1 = unk_0x852A19533F896693(Local_824[0 /*20*/].f_6, 26, iLocal_47, 2, 1, true);
					unk_0x11AD11297DC58CC7(Local_824[0 /*20*/].f_1, true);
					unk_0x4E885A246A9D983A(Local_824[0 /*20*/].f_1, 42, true);
					func_257(&Local_396, 6, Local_824[0 /*20*/].f_1, "TOWSEXPRISSYGUY", 0, 1);
					unk_0xC6EB89C59F2AF6B8(Local_824[0 /*20*/], "oddjobs@towing", "m_blow_job_loop", 1000f, -8f, 4294967295, 1, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(Local_824[0 /*20*/].f_1, "oddjobs@towing", "f_blow_job_loop", 1000f, -8f, 4294967295, 1, 0, 0, 0, 0);
					if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
					{
						unk_0x71EDC33E5A423750(Local_824[0 /*20*/].f_6, 10);
					}
					bLocal_190 = true;
					func_257(&Local_396, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
				}
			}
			else if (bLocal_800)
			{
				if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
				{
					Local_824[0 /*20*/] = unk_0x852A19533F896693(Local_824[0 /*20*/].f_6, 26, uLocal_820[0], 0, 1, true);
					unk_0x11AD11297DC58CC7(Local_824[0 /*20*/], true);
					unk_0x4E885A246A9D983A(Local_824[0 /*20*/], 42, true);
					func_257(&Local_396, 2, Local_824[0 /*20*/], sLocal_467, 0, 1);
					unk_0xC6EB89C59F2AF6B8(Local_824[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, 4294967295, 1, 0, 0, 0, 0);
					bLocal_190 = true;
				}
			}
			else if (func_209())
			{
				bLocal_798 = true;
			}
			else
			{
				bLocal_798 = false;
			}
			iLocal_909 = 1;
			break;
		
		case 1:
			if (bLocal_799)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(Local_824[0 /*20*/].f_6, true), 15f, 15f, 15f, false, true, 0))
					{
						if (!iLocal_927)
						{
							if (func_171(&Local_396, "TOWAUD", "TOW_SEX_SNDS", 9, 0, 0, 0))
							{
								iLocal_927 = 1;
							}
						}
					}
				}
			}
			if (!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
			{
				if (unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6) || func_208(iLocal_900, Local_824[0 /*20*/].f_6, !(bLocal_799 || bLocal_800)))
				{
					if (func_208(iLocal_900, Local_824[0 /*20*/].f_6, !(bLocal_799 || bLocal_800)))
					{
						bLocal_813 = true;
					}
					if (!bLocal_800)
					{
						func_207(&iLocal_894, 1f);
					}
					else
					{
						func_263(&iLocal_894);
					}
				}
			}
			if (func_7(&iLocal_894) && func_4(&iLocal_894) > 1f)
			{
				if (bLocal_799 && func_7(&iLocal_894))
				{
					if (func_47())
					{
						func_172();
					}
					iLocal_810 = 0;
					if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_171);
						unk_0x75CDA8644CD3B5F5(0, 750, 0);
						unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
						unk_0xC6EB89C59F2AF6B8(0, "oddjobs@towingpleadingidle_b", "idle_d", -8f, 0.25f, 4294967295, 1, 0, 0, 0, 0);
						unk_0x75ABDC5F81978924(iLocal_171);
						unk_0x78ADC381772E3D54(Local_824[0 /*20*/], iLocal_171);
						unk_0xF82EA857DA10E0CD(&iLocal_171);
						unk_0xDD353D0E9C789D0E(&iLocal_171);
						unk_0x75CDA8644CD3B5F5(0, 0, 0);
						unk_0xF96A174EE26D7588(0, Local_824[0 /*20*/], 0);
						unk_0xC6EB89C59F2AF6B8(0, "oddjobs@towingpleadingidle_a", "idle_c", 0.25f, 0.25f, 30000, 1, 0, 0, 0, 0);
						unk_0xF3268524E9BE6D6E(0, Local_824[0 /*20*/], 1000f, 4294967295, 0, 0);
						unk_0x01E4BB5190DF7317(0, 1193033728, 0);
						unk_0x75ABDC5F81978924(iLocal_171);
						if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_1, 0))
						{
							unk_0x78ADC381772E3D54(Local_824[0 /*20*/].f_1, iLocal_171);
						}
						unk_0xF82EA857DA10E0CD(&iLocal_171);
					}
					iLocal_909 = 2;
				}
				else if (bLocal_800)
				{
					if ((Global_1B416.f_4E00.f_4 % 2) == 0)
					{
						if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
						{
							unk_0xDD353D0E9C789D0E(&iLocal_171);
							unk_0x75CDA8644CD3B5F5(0, 0, 0);
							unk_0xE185F110925D87DB(0, iLocal_900, 20000, 9f, 1f, 1073741824, 0);
							unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
							unk_0xC6EB89C59F2AF6B8(0, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, 0, 0, 0, 0);
							unk_0x01E4BB5190DF7317(0, 1193033728, 0);
							unk_0x75ABDC5F81978924(iLocal_171);
							unk_0x78ADC381772E3D54(Local_824[0 /*20*/], iLocal_171);
							unk_0xF82EA857DA10E0CD(&iLocal_171);
						}
						func_257(&Local_396, 2, Local_824[0 /*20*/], "TOWABDBITCHM", 0, 1);
						func_171(&Local_396, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else
					{
						if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
						{
							func_206(Local_824[0 /*20*/]);
							unk_0xAFF39FB306F8E232(Local_824[0 /*20*/], 0, false);
							unk_0xAFF39FB306F8E232(Local_824[0 /*20*/], 1, false);
							unk_0xDD353D0E9C789D0E(&iLocal_171);
							unk_0x75CDA8644CD3B5F5(0, 0, 0);
							unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(iLocal_171);
							unk_0x78ADC381772E3D54(Local_824[0 /*20*/], iLocal_171);
							unk_0xF82EA857DA10E0CD(&iLocal_171);
							if (unk_0xC844350D5D58C99A(Local_824[0 /*20*/]))
							{
								iLocal_818 = unk_0x5C3B41825F6AC5A0(Local_824[0 /*20*/]);
								unk_0x61755AC17D8F538E(iLocal_818, 1);
								unk_0x516E63E474722206(iLocal_818, 0.7f);
								func_205(Local_824[0 /*20*/], iLocal_818, 1);
							}
							bLocal_798 = true;
						}
						func_171(&Local_396, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
					}
					iLocal_909 = 2;
				}
				else if (bLocal_798)
				{
					Local_824[0 /*20*/] = unk_0x36F2404464202779(4, uLocal_820[0], Local_393[iLocal_450 /*23*/].f_6, Local_393[iLocal_450 /*23*/].f_9, 1, true);
					unk_0x11AD11297DC58CC7(Local_824[0 /*20*/], true);
					unk_0x4E885A246A9D983A(Local_824[0 /*20*/], 42, true);
					bLocal_190 = true;
					sLocal_464 = "TOW_PED_ANGR";
					bLocal_190 = false;
					if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_171);
						unk_0xE185F110925D87DB(0, iLocal_900, 20000, 15f, 3f, 1073741824, 0);
						unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
						unk_0x75ABDC5F81978924(iLocal_171);
						unk_0x78ADC381772E3D54(Local_824[0 /*20*/], iLocal_171);
						unk_0xF82EA857DA10E0CD(&iLocal_171);
					}
					iLocal_909 = 3;
				}
				else
				{
					Local_824[0 /*20*/] = unk_0x36F2404464202779(4, uLocal_820[0], Local_393[iLocal_450 /*23*/].f_6, Local_393[iLocal_450 /*23*/].f_9, 1, true);
					unk_0x11AD11297DC58CC7(Local_824[0 /*20*/], true);
					unk_0x4E885A246A9D983A(Local_824[0 /*20*/], 42, true);
					unk_0xE8832A9E16A57A1F(Local_824[0 /*20*/], true, 1);
					bLocal_190 = true;
					sLocal_464 = "TOW_ILLEG1";
					if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_171);
						unk_0xDE7F7A4DA93201CF(0, unk_0x16F2683693E537C9(), 20000, 12f, 0f, 3f, 0);
						unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
						unk_0x75ABDC5F81978924(iLocal_171);
						unk_0x78ADC381772E3D54(Local_824[0 /*20*/], iLocal_171);
						unk_0xF82EA857DA10E0CD(&iLocal_171);
					}
					iLocal_909 = 3;
				}
			}
			break;
		
		case 2:
			if (bLocal_799)
			{
				if (!bLocal_807)
				{
					if (unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6) || bLocal_813)
					{
						if (!unk_0xD17F06053799A7CA())
						{
							if (!func_47())
							{
								if (func_171(&Local_396, "TOWAUD", "TOW_SEX_INIT", 9, 0, 0, 0))
								{
									bLocal_807 = true;
								}
							}
						}
					}
				}
			}
			if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
			{
				if (!unk_0x405E212DDE472467(Local_824[0 /*20*/], 0))
				{
					if (bLocal_800)
					{
						if (!func_47())
						{
							if (unk_0xD1960163A3042274(Local_824[0 /*20*/], 242628503) == 1)
							{
								if (unk_0x4F1B602325013CC2(Local_824[0 /*20*/]) == 2)
								{
									if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
									{
										vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
									}
									if (SYSTEM::VDIST2(vVar1, unk_0x68F4C0EC296D3901(Local_824[0 /*20*/], true)) < 400f)
									{
										if ((Global_1B416.f_4E00.f_4 % 2) == 0)
										{
											func_171(&Local_396, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
										}
										else
										{
											func_171(&Local_396, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
										}
									}
									iLocal_909 = 8;
								}
							}
						}
					}
					else if (!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
					{
						if (func_204() || (!unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6) && !bLocal_813))
						{
							func_172();
							iLocal_909 = 5;
						}
						else if (!unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6) && bLocal_813)
						{
							if (bLocal_807)
							{
								if (!func_47())
								{
									iLocal_909 = 5;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
			{
				if (func_119(Local_824[0 /*20*/], unk_0x16F2683693E537C9(), 1) < 12f)
				{
					unk_0xA3BF0AA5A2608191(Local_824[0 /*20*/]);
					if (bLocal_798)
					{
						unk_0x6C3AE6E278DB3D0E(Local_824[0 /*20*/], unk_0x16F2683693E537C9(), 0, 16);
					}
					else if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_171);
						unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
						unk_0xC6EB89C59F2AF6B8(0, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, 5000, 0, 0, 0, 0, 0);
						unk_0x75ABDC5F81978924(iLocal_171);
						unk_0x78ADC381772E3D54(Local_824[0 /*20*/], iLocal_171);
						unk_0xF82EA857DA10E0CD(&iLocal_171);
					}
					iLocal_783 = 1;
					if (bLocal_799)
					{
						iLocal_909 = 5;
					}
					else
					{
						iLocal_909 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xC844350D5D58C99A(Local_824[0 /*20*/]))
			{
				Local_824[0 /*20*/].f_9 = unk_0x5C3B41825F6AC5A0(Local_824[0 /*20*/]);
				if (bLocal_798)
				{
					unk_0x61755AC17D8F538E(Local_824[0 /*20*/].f_9, 1);
					unk_0x516E63E474722206(Local_824[0 /*20*/].f_9, 0.7f);
				}
				else
				{
					unk_0x61755AC17D8F538E(Local_824[0 /*20*/].f_9, 3);
					unk_0x516E63E474722206(Local_824[0 /*20*/].f_9, 0.7f);
				}
			}
			if (bLocal_798)
			{
				if (iLocal_170 == 0)
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
					func_203(Local_396, "TOWAUD", "TOW_PED_ANGR", 0);
				}
				else
				{
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_257(&Local_396, 2, Local_824[0 /*20*/], "TOWABDATTACKM", 0, 1);
					func_203(Local_396, "TOWAUD", "TOW_HOM_DRG", 0);
				}
			}
			else
			{
				func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
				func_257(&Local_396, 3, Local_824[0 /*20*/], sLocal_467, 0, 1);
				func_203(Local_396, "TOWAUD", sLocal_464, 0);
			}
			bLocal_791 = true;
			SYSTEM::SETTIMERA(0);
			if (bLocal_798)
			{
				func_59(&iLocal_888);
				iLocal_909 = 6;
			}
			else
			{
				iLocal_909 = 5;
			}
			break;
		
		case 5:
			if (!func_47())
			{
				if (bLocal_799)
				{
					SYSTEM::SETTIMERB(0);
				}
				func_59(&iLocal_888);
				if ((!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0)) && !unk_0x437347B10A200C4B(iLocal_900, 0))
				{
					if (unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6))
					{
						unk_0xA8CC11FF8D2962D4(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0f, 0f, 0f, 3f, 4294967295, 10f, 1);
					}
					else
					{
						if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
						{
							unk_0x71EDC33E5A423750(Local_824[0 /*20*/].f_6, 1);
						}
						unk_0xF82EA857DA10E0CD(&iVar0);
						unk_0xDD353D0E9C789D0E(&iVar0);
						unk_0x5B1D360B9C6F0A09(0, Local_824[0 /*20*/].f_6, 20000, 4294967295, 2f, 1, 0);
						unk_0xE072601B4380E9DF(0, Local_824[0 /*20*/].f_6, 5f, 786597);
						unk_0x75ABDC5F81978924(iVar0);
						if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
						{
							unk_0x78ADC381772E3D54(Local_824[0 /*20*/], iVar0);
						}
						unk_0xF82EA857DA10E0CD(&iVar0);
						bLocal_928 = true;
					}
				}
				iLocal_909 = 6;
			}
			break;
		
		case 6:
			func_201(0);
			if (!bLocal_805)
			{
				if (!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
				{
					if (!unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6))
					{
						if (bLocal_799)
						{
							if (SYSTEM::TIMERB() > 8000)
							{
								func_59(&iLocal_888);
								if (!bLocal_928)
								{
									unk_0x71EDC33E5A423750(Local_824[0 /*20*/].f_6, 1);
									unk_0x5B1D360B9C6F0A09(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 20000, 4294967295, 2f, 1, 0);
								}
								iLocal_909 = 7;
							}
						}
						else
						{
							func_59(&iLocal_888);
							unk_0x71EDC33E5A423750(Local_824[0 /*20*/].f_6, 1);
							unk_0x5B1D360B9C6F0A09(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 20000, 4294967295, 2f, 1, 0);
							iLocal_909 = 7;
						}
					}
					else if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
					{
						if (SYSTEM::TIMERB() > 7000)
						{
							if (!bLocal_798)
							{
								if (unk_0xC42A92762C58E1B9(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0))
								{
									if (!unk_0x437347B10A200C4B(iLocal_900, 0))
									{
										if (unk_0x9C66D99E63E8E24C(iLocal_900) < 2f)
										{
											if (unk_0xD1960163A3042274(Local_824[0 /*20*/], 4036695475) != 1)
											{
												unk_0xE072601B4380E9DF(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 2f, 786597);
											}
										}
										else
										{
											unk_0xF82EA857DA10E0CD(&iVar0);
											unk_0xDD353D0E9C789D0E(&iVar0);
											unk_0x75CDA8644CD3B5F5(0, 5000, 4096);
											unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 1000f, 4294967295, 0, 0);
											unk_0x75ABDC5F81978924(iVar0);
											if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
											{
												unk_0x78ADC381772E3D54(Local_824[0 /*20*/], iVar0);
											}
											unk_0xF82EA857DA10E0CD(&iVar0);
											iLocal_909 = 7;
										}
									}
								}
								else if (!unk_0x437347B10A200C4B(iLocal_900, 0))
								{
									if (unk_0x9C66D99E63E8E24C(iLocal_900) < 5f)
									{
										if (unk_0xD1960163A3042274(Local_824[0 /*20*/], 2500551826) != 1)
										{
											if (unk_0xBBA8A868118C90ED(Local_824[0 /*20*/].f_6, 4294967295, 0))
											{
												unk_0x5B1D360B9C6F0A09(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 4294967295, 4294967295, 2f, 1, 0);
											}
										}
									}
									else if (unk_0xD1960163A3042274(Local_824[0 /*20*/], 1056466932) != 1)
									{
										unk_0xA8CC11FF8D2962D4(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0f, 0f, 0f, 3f, 4294967295, 10f, 1);
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 7:
			func_201(1);
			if (unk_0x405E212DDE472467(Local_824[0 /*20*/], 0) && !unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6))
			{
				if (bLocal_798)
				{
					sLocal_464 = "TOW_PED_ANTH";
				}
				else if (bLocal_799)
				{
					sLocal_464 = "TOW_ILLEG_SE";
				}
				bLocal_804 = true;
				func_171(&Local_396, "TOWAUD", sLocal_464, 9, 0, 0, 0);
				bLocal_791 = false;
				unk_0xE072601B4380E9DF(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 5f, 786597);
				iLocal_909 = 8;
				return 1;
			}
			break;
		
		case 8:
			iLocal_783 = 0;
			bLocal_791 = false;
			if (unk_0xE4EDC4B0E92C078B(Local_824[0 /*20*/].f_9))
			{
				unk_0x142CC44DB769B57E(&(Local_824[0 /*20*/].f_9));
			}
			break;
	}
	return 0;
}

void func_201(bool bParam0)
{
	int iVar0;
	float fVar1;
	char* sVar2;
	
	iVar0 = 0;
	fVar1 = func_119(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!unk_0x437347B10A200C4B(iLocal_900, 0) && !unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
		{
			if (unk_0x6D18156F72BE0773(iLocal_900, Local_824[0 /*20*/].f_6) && !unk_0xC42A92762C58E1B9(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0))
			{
				iVar0 = 1;
			}
		}
	}
	if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
	{
		if (unk_0xB87D13D0C064E9D1(Local_824[0 /*20*/], unk_0x16F2683693E537C9(), 1) || unk_0xB87D13D0C064E9D1(unk_0x16F2683693E537C9(), Local_824[0 /*20*/], 1))
		{
			func_59(&iLocal_888);
			unk_0xE910A68AA670B4AA(Local_824[0 /*20*/]);
			unk_0xE910A68AA670B4AA(unk_0x16F2683693E537C9());
		}
	}
	if (unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
	{
		iLocal_909 = 8;
	}
	else if (((fVar1 > 35f || (func_4(&iLocal_888) > 30f && fVar1 > 5f)) || iVar0) || (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6)))
	{
		if (bLocal_798)
		{
			func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
			sVar2 = "TOW_PED_ANCU";
		}
		else if (bLocal_799)
		{
			func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
			sVar2 = "TOW_YELL";
		}
		else
		{
			func_257(&Local_396, 6, Local_824[0 /*20*/], "TOWABDHANDMAN1", 0, 1);
			sVar2 = "TOW_PED_ANC2";
		}
		uLocal_814[0] = Local_824[0 /*20*/];
		uLocal_814[1] = Local_824[0 /*20*/].f_1;
		bLocal_805 = true;
		func_202(Local_396, "TOWAUD", sVar2, &uLocal_814, 0);
		unk_0x142CC44DB769B57E(&(Local_824[0 /*20*/].f_9));
		if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/], 0))
		{
			unk_0xA3BF0AA5A2608191(Local_824[0 /*20*/]);
			unk_0xF3268524E9BE6D6E(Local_824[0 /*20*/], unk_0x16F2683693E537C9(), 1000f, 4294967295, 0, 0);
		}
		iLocal_909 = 8;
	}
}

int func_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	iVar2 = 75;
	if (bParam168)
	{
		iVar2 = 100;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_118((*uParam167)[iVar0], 1) > IntToFloat(iVar2))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		func_171(&uParam0, cParam165, sParam166, 9, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_203(struct<165> Param0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0x5CEB4DB888A62073(false);
	}
	StringCopy(&cLocal_63, sParam1, 16);
	StringCopy(&cLocal_66, sParam2, 16);
	Local_51 = { Param0 };
}

int func_204()
{
	switch (iLocal_912)
	{
		case 0:
			if (unk_0x4F1B602325013CC2(Local_824[0 /*20*/]) >= 1 && !unk_0xD17F06053799A7CA())
			{
				iLocal_912 = 1;
			}
			break;
		
		case 1:
			if (bLocal_807 && !iLocal_808)
			{
				if (!func_47())
				{
					if (!iLocal_809)
					{
						if (!bLocal_813)
						{
							func_115("TOWT_OBJ_06", 7500, 1);
							iLocal_809 = 1;
						}
					}
					if (iLocal_809 && !unk_0xD17F06053799A7CA())
					{
						if (unk_0xD1960163A3042274(Local_824[0 /*20*/], 3419293077) != 1)
						{
							unk_0xF96A174EE26D7588(Local_824[0 /*20*/], Local_824[0 /*20*/].f_1, 0);
						}
						iLocal_808 = 1;
						iLocal_912 = 2;
					}
				}
			}
			if (func_118(Local_824[0 /*20*/], 1) > 20f)
			{
				unk_0x5CEB4DB888A62073(true);
				return 1;
			}
			break;
		
		case 2:
			if (func_118(Local_824[0 /*20*/], 1) > 20f)
			{
				unk_0x5CEB4DB888A62073(true);
				return 1;
			}
			if (!func_47())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_205(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (vLocal_69[iVar0 /*3*/] == iParam0 && !unk_0xE4EDC4B0E92C078B(vLocal_69[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!unk_0xE4EDC4B0E92C078B(vLocal_69[iVar0 /*3*/].f_1))
		{
			vLocal_69[iVar0 /*3*/] = iParam0;
			vLocal_69[iVar0 /*3*/].f_1 = iParam1;
			vLocal_69[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_206(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			unk_0x083F03A847B640E9(iParam0, 1);
			unk_0xB35CCEC0D4946813(iParam0, 1);
			unk_0xAFF39FB306F8E232(iParam0, 23, false);
			unk_0x3CC33E4E9CE523F4(iParam0, 2);
			unk_0x262EF6C6306BEA6C(iParam0, joaat("weapon_microsmg"), 1000, true, true);
			unk_0x29CD9554726C7577(iParam0, 500);
		}
	}
}

void func_207(int iParam0, float fParam1)
{
	if (!func_7(iParam0))
	{
		func_60(iParam0, fParam1);
	}
}

int func_208(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = 0;
	if (unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && func_118(iParam1, 1) < 40f)
	{
		iVar0 = 1;
	}
	if (unk_0x1B3D109B39CC2C89(iParam0, iParam1))
	{
		iVar0 = 1;
	}
	if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 1))
	{
		iVar0 = 1;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam1, 0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_209()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_210()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!iLocal_780)
	{
		if (unk_0xC844350D5D58C99A(Local_824[0 /*20*/].f_6))
		{
			if (!unk_0x437347B10A200C4B(Local_824[0 /*20*/].f_6, 0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(Local_824[0 /*20*/].f_6, true) };
			}
		}
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		}
		if (bLocal_799)
		{
			if (SYSTEM::VDIST2(vVar0, vVar1) < 25f)
			{
				unk_0x5CEB4DB888A62073(true);
				if (!func_47())
				{
					unk_0x0C8C0C840C2D1AD2(Local_824[0 /*20*/], unk_0x16F2683693E537C9(), 5000, 0, 2);
					func_257(&Local_396, 5, Local_824[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					if (func_171(&Local_396, "TOWAUD", "TOW_HANDI_CL", 9, 0, 0, 0))
					{
						iLocal_780 = 1;
					}
				}
			}
		}
	}
}

int func_211(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (!unk_0x405E212DDE472467(iParam1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_7(&iLocal_184))
	{
		func_59(&iLocal_184);
	}
	if (func_118(iParam0, 0) < 15f)
	{
		fLocal_181 = 0.3f;
		fLocal_182 = 0.5f;
		fLocal_183 = 0.1f;
	}
	else if (func_118(iParam0, 0) < 40f)
	{
		fLocal_181 = 0.6f;
		fLocal_182 = 1f;
		fLocal_183 = 0.2f;
	}
	if (func_3(&iLocal_184, unk_0x79833B02DBD2A244(fLocal_181, fLocal_182)))
	{
		func_59(&iLocal_184);
		unk_0xDFC6BA855748EB10(iParam0, 1, 0f, 0f, fLocal_183, -0.0067f, -0.8283f, -0.2766f, 0, 1, 1, 1, 1, 1);
	}
	return 1;
}

void func_212()
{
	unk_0xC2127C0F64D6A3B9();
	func_213();
}

void func_213()
{
	Global_56C3.f_86 = 1;
}

int func_214(int iParam0, int iParam1, struct<7> Param2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16, var uParam17, char* sParam18, var uParam19, bool bParam20, var uParam21)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (iLocal_447 != 12)
	{
		func_218(Param2, iParam0, iParam1);
	}
	if (!bLocal_215)
	{
		if (iLocal_447 >= 6 && iLocal_447 <= 11)
		{
			if (bParam20)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 400.2854f, -1632.597f, 28.29278f, 5f, 5f, 2f, true, true, 0))
					{
					}
				}
			}
		}
		switch (iLocal_447)
		{
			case 0:
				if (func_123(iParam1, iParam0, &iLocal_449, 10, 90f, 100f, 0))
				{
					unk_0xA22F71BBC8173C39(iParam1, false);
					func_257(&Local_396, 3, *uParam21, "TONYA", 0, 1);
					func_257(&Local_396, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_171(&Local_396, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_447 = 1;
				}
				break;
			
			case 1:
				if (!func_47())
				{
					func_105("TOW_TUT_03", 4294967295);
					SYSTEM::SETTIMERA(0);
					iLocal_447 = 2;
				}
				break;
			
			case 2:
				if (iLocal_216)
				{
					unk_0xA37A90C62806D848(1);
					iLocal_447 = 4;
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (((SYSTEM::TIMERA() > 12000 || func_119(iParam0, iParam1, 1) < 15f) && func_119(iParam0, iParam1, 1) < 30f) && !func_47())
					{
						func_171(&Local_396, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_447 = 3;
					}
				}
				break;
			
			case 3:
				if (!iLocal_216)
				{
					if (!func_47() && !func_111("TOW_TUT_03"))
					{
						func_217("TOW_TUT_02");
						iLocal_447 = 4;
					}
				}
				else
				{
					iLocal_447 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERA() > 5000 || iLocal_216)
				{
					if ((SYSTEM::TIMERA() > 12000 || func_119(iParam0, iParam1, 1) < 7.5f) || (iLocal_216 && func_119(iParam0, iParam1, 1) < 30f))
					{
						iLocal_191 = 1;
						iLocal_191 = iLocal_191;
						func_217("TOW_TUT_01");
						iLocal_447 = 5;
					}
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 8000)
				{
					iLocal_447 = 6;
				}
				break;
			
			case 6:
				if ((!func_47() && !unk_0xD17F06053799A7CA()) && SYSTEM::TIMERA() > 12000)
				{
					if (!iLocal_208)
					{
						func_105("TOWT_HELP_CR", 4294967295);
						iLocal_208 = 1;
					}
				}
				if (unk_0x3D1053F9EB43B7AD(iParam0, Param2, Param2.f_3, Param2.f_6, 0, false, 0))
				{
					func_171(&Local_396, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (unk_0xE4EDC4B0E92C078B(*iParam16))
					{
						unk_0x661342B9651D16E2(*iParam16, false);
						unk_0x142CC44DB769B57E(iParam16);
					}
					StringCopy(sParam18, "TOW_TUT_04A", 64);
					*(uParam17[0 /*3*/]) = { Param2.f_E };
					fLocal_180 = func_9(Param2.f_E, 0);
					*iParam16 = unk_0x6CC513A908911CF0(Param2.f_E);
					SYSTEM::SETTIMERB(0);
					iLocal_447 = 7;
				}
				break;
			
			case 7:
				if (!func_47())
				{
					if (SYSTEM::TIMERB() > 6000)
					{
						SYSTEM::SETTIMERA(0);
						func_115("TOW_TUT_04A", 7500, 1);
						iLocal_447 = 9;
					}
				}
				break;
			
			case 9:
				if (func_11(Param2.f_E))
				{
					iLocal_447 = 10;
				}
				if (!func_47())
				{
					if (unk_0x3D1053F9EB43B7AD(iParam0, Param2, Param2.f_3, Param2.f_6, 0, true, 0))
					{
						iLocal_218 = unk_0x1C0640BA9A7327B3();
						if (bLocal_192)
						{
							unk_0x661342B9651D16E2(*iParam16, false);
							unk_0x142CC44DB769B57E(iParam16);
							*(uParam17[0 /*3*/]) = { Param2.f_E };
							fLocal_180 = func_9(Param2.f_E, 0);
							*iParam16 = unk_0x6CC513A908911CF0(Param2.f_E);
						}
						if (unk_0xE4EDC4B0E92C078B(*iParam16))
						{
							unk_0x61755AC17D8F538E(*iParam16, 5);
						}
						iLocal_447 = 10;
					}
				}
				break;
			
			case 10:
				if (!func_11(Param2.f_E))
				{
					vVar0 = { Param2.f_7 };
					vVar1 = { Param2.f_A };
					fVar2 = Param2.f_D;
				}
				else
				{
					vVar0 = { Param2 };
					vVar1 = { Param2.f_3 };
					fVar2 = Param2.f_6;
				}
				if (unk_0x3D1053F9EB43B7AD(iParam1, vVar0, vVar1, fVar2, 0, true, 0))
				{
					func_105("TOWT_HELP_UH", 4294967295);
					func_216();
					if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
					{
						if (unk_0x6D18156F72BE0773(iParam0, iParam1))
						{
							iLocal_447 = 11;
						}
					}
				}
				else
				{
					func_215();
				}
				break;
			
			case 11:
				if (!func_11(Param2.f_E))
				{
					vVar0 = { Param2.f_7 };
					vVar1 = { Param2.f_A };
					fVar2 = Param2.f_D;
				}
				else
				{
					vVar0 = { Param2 };
					vVar1 = { Param2.f_3 };
					fVar2 = Param2.f_6;
				}
				if (unk_0x3D1053F9EB43B7AD(iParam1, vVar0, vVar1, fVar2, 0, true, 0))
				{
					func_105("TOWT_HELP_UH", 4294967295);
					func_216();
				}
				if (((unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iParam1)) && !unk_0x437347B10A200C4B(iParam0, 0)) && !unk_0x437347B10A200C4B(iParam1, 0))
				{
					if (!unk_0x6D18156F72BE0773(iParam0, iParam1))
					{
						unk_0xA37A90C62806D848(1);
						unk_0x790015DC92C918E2();
						func_146(&uLocal_149, 0, 0);
						iLocal_447 = 12;
					}
				}
				break;
			
			case 12:
				break;
		}
		if (bParam20)
		{
			if (((unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iParam1)) && !unk_0x437347B10A200C4B(iParam0, 0)) && !unk_0x437347B10A200C4B(iParam1, 0))
			{
				if (unk_0x6D18156F72BE0773(iParam0, iParam1) && !bLocal_448)
				{
					if (func_47())
					{
						if (unk_0xFEBC1E4EC9E001F0())
						{
							unk_0xA37A90C62806D848(1);
						}
						func_172();
						iLocal_447 = 6;
					}
					else
					{
						func_107(*iParam16);
						SYSTEM::SETTIMERA(0);
						iLocal_447 = 6;
						func_171(&Local_396, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_448 = true;
					}
				}
			}
			if (!iLocal_210)
			{
				if (bLocal_448)
				{
					if (!func_47())
					{
						unk_0xA37A90C62806D848(1);
						func_115("TOWT_OBJ_06", 7500, 1);
						iLocal_210 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_215()
{
	switch (iLocal_224)
	{
		case 0:
			if (!func_7(&iLocal_409))
			{
				func_263(&iLocal_409);
			}
			else if (func_4(&iLocal_409) > 10f)
			{
				if (func_171(&uLocal_227, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_224 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_47())
			{
				if (func_171(&uLocal_227, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					func_59(&iLocal_409);
					iLocal_224 = 2;
				}
			}
			break;
		
		case 2:
			if (func_7(&iLocal_409))
			{
				if (func_4(&iLocal_409) > 15f)
				{
					if (!func_47())
					{
						if (func_171(&uLocal_227, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_224 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_216()
{
	if (!iLocal_207)
	{
		if (!unk_0xD17F06053799A7CA())
		{
			if (!func_47())
			{
				if (func_171(&uLocal_227, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_207 = 1;
				}
			}
		}
	}
}

void func_217(char* sParam0)
{
	SYSTEM::SETTIMERA(0);
	func_105(sParam0, 4294967295);
}

void func_218(struct<7> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam14) || !unk_0xC844350D5D58C99A(iParam15))
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iParam14, 0) || unk_0x437347B10A200C4B(iParam15, 0))
	{
		return;
	}
	if (!func_11(Param0.f_E))
	{
		vVar0 = { Param0.f_7 };
		vVar1 = { Param0.f_A };
		fVar2 = Param0.f_D;
	}
	else
	{
		vVar0 = { Param0 };
		vVar1 = { Param0.f_3 };
		fVar2 = Param0.f_6;
	}
	if (!iLocal_193)
	{
		if (unk_0x3D1053F9EB43B7AD(iParam15, vVar0, vVar1, fVar2, 0, true, 0))
		{
			if (!unk_0x437347B10A200C4B(iParam14, 0) && !unk_0x437347B10A200C4B(iParam15, 0))
			{
				if (!unk_0x6D18156F72BE0773(iParam14, iParam15))
				{
					unk_0xA37A90C62806D848(1);
					unk_0x790015DC92C918E2();
					iLocal_447 = 12;
					iLocal_193 = 1;
				}
			}
		}
	}
}

int func_219(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		iVar0 = (*uParam2 - unk_0x7F6DC62EA9922664(iParam1));
	}
	if (fLocal_178 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (!unk_0x437347B10A200C4B(iParam1, 0))
			{
				if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam1, 0)) || unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 1))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (unk_0xC844350D5D58C99A(iParam1))
				{
					*uParam2 = unk_0x7F6DC62EA9922664(iParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*uParam3 > 250)
			{
				if (bParam4)
				{
					if (func_171(&Local_396, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (func_171(&Local_396, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_178 = (fLocal_178 + 25f);
				}
			}
			break;
		
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (func_171(&Local_396, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (func_171(&Local_396, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_178 = (fLocal_178 + 25f);
				}
			}
			break;
		
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					func_171(&Local_396, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					func_171(&Local_396, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_178 = (fLocal_178 + 75f);
				}
			}
			break;
		
		case 3:
			break;
	}
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		*uParam2 = unk_0x7F6DC62EA9922664(iParam1);
	}
	return 0;
}

int func_220(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		iVar0 = (*uParam3 - unk_0x7F6DC62EA9922664(iParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (unk_0xC844350D5D58C99A(iParam1) && unk_0xC844350D5D58C99A(iParam2))
			{
				if (!unk_0x437347B10A200C4B(iParam1, 0) && !unk_0x437347B10A200C4B(iParam2, 0))
				{
					if ((unk_0x1B3D109B39CC2C89(iParam1, iParam2) || unk_0x6D18156F72BE0773(iParam2, iParam1)) || unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 1))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (unk_0xC844350D5D58C99A(iParam1))
					{
						*uParam3 = unk_0x7F6DC62EA9922664(iParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*uParam0)
		{
			case 0:
				if (*uParam4 > 250)
				{
					*uParam0 = 1;
					func_222("TOW_DMG_01", 25, 4294967295);
					func_221(func_26(), 1, 25);
					fLocal_178 = (fLocal_178 + 25f);
				}
				break;
			
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					func_222("TOW_DMG_01", 75, 4294967295);
					func_221(func_26(), 1, 75);
					fLocal_178 = (fLocal_178 + 75f);
				}
				break;
			
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					func_105("TOW_DMG_03", 4294967295);
				}
				break;
			
			case 3:
				if (*uParam4 > 900)
				{
					return 0;
				}
				break;
			}
	}
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		*uParam3 = unk_0x7F6DC62EA9922664(iParam1);
	}
	return 1;
}

int func_221(int iParam0, int iParam1, int iParam2)
{
	if (func_99(iParam0) == 3)
	{
		return 0;
	}
	if (func_99(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_99(iParam0), 0, iParam1, iParam2, 0);
}

void func_222(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam2);
}

void func_223(int iParam0, int iParam1, var uParam2, var uParam3, char* sParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	
	uParam10 = uParam10;
	if (bParam11)
	{
		if (unk_0xE4EDC4B0E92C078B(*iParam1))
		{
			unk_0x142CC44DB769B57E(iParam1);
		}
		*uParam5 = unk_0x1C0640BA9A7327B3();
		bLocal_215 = !func_224(iParam0);
		return;
	}
	else if (!unk_0xE4EDC4B0E92C078B(*iParam1) && bLocal_215)
	{
		*iParam1 = unk_0x5C3B41825F6AC5A0(*iParam0);
		unk_0x61755AC17D8F538E(*iParam1, 3);
		unk_0x661342B9651D16E2(*iParam1, true);
	}
	if (!bParam9)
	{
		if (!bLocal_215)
		{
			if (!func_224(iParam0))
			{
				unk_0xCB7A8856533F691C();
				*uParam5 = unk_0x1C0640BA9A7327B3();
				if (bParam13)
				{
					if (iLocal_188)
					{
						func_115("DTRSHRD_03", 7500, 1);
						iLocal_188 = 0;
					}
					if (!unk_0xE4EDC4B0E92C078B(*iParam1))
					{
						*iParam1 = unk_0x5C3B41825F6AC5A0(*iParam0);
						unk_0x61755AC17D8F538E(*iParam1, 3);
						unk_0x661342B9651D16E2(*iParam1, true);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (unk_0xE4EDC4B0E92C078B((uParam2[iVar0 /*20*/])->f_8))
					{
						unk_0x661342B9651D16E2((uParam2[iVar0 /*20*/])->f_8, false);
						unk_0x142CC44DB769B57E(&((uParam2[iVar0 /*20*/])->f_8));
						*uParam8 = 0;
					}
					iVar0++;
				}
				if (unk_0xE4EDC4B0E92C078B((uParam2[0 /*20*/])->f_9))
				{
					unk_0x142CC44DB769B57E(&((uParam2[0 /*20*/])->f_9));
				}
				bLocal_215 = true;
			}
		}
		else if (func_224(iParam0))
		{
			if (unk_0xE4EDC4B0E92C078B(*iParam1))
			{
				unk_0x142CC44DB769B57E(iParam1);
			}
			if (!unk_0xEB6A8945D1AC98A1((*uParam2)[0 /*20*/]))
			{
				if (!unk_0xC42A92762C58E1B9((*uParam2)[0 /*20*/], *iParam0, 0) && !unk_0xC42A92762C58E1B9((*uParam2)[0 /*20*/], (uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!unk_0xE4EDC4B0E92C078B((uParam2[0 /*20*/])->f_9))
					{
						(uParam2[0 /*20*/])->f_9 = unk_0x5C3B41825F6AC5A0((*uParam2)[iVar0 /*20*/]);
						unk_0x61755AC17D8F538E((uParam2[0 /*20*/])->f_9, 3);
						unk_0x516E63E474722206((uParam2[0 /*20*/])->f_9, 0.7f);
					}
				}
			}
			if (iLocal_189)
			{
				func_115(sParam4, 7500, 1);
				iLocal_189 = 0;
			}
			if (!func_11(*(uParam3[0 /*3*/])) && iParam12 == 9)
			{
				if (!unk_0xE4EDC4B0E92C078B((uParam2[0 /*20*/])->f_8))
				{
					(uParam2[0 /*20*/])->f_8 = unk_0x6CC513A908911CF0(*(uParam3[0 /*3*/]));
					unk_0x661342B9651D16E2((uParam2[0 /*20*/])->f_8, true);
				}
			}
			else if (bParam7)
			{
				if (!unk_0x437347B10A200C4B((uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!unk_0xE4EDC4B0E92C078B((uParam2[iParam6 /*20*/])->f_8))
					{
						(uParam2[iParam6 /*20*/])->f_8 = unk_0x5C3B41825F6AC5A0((uParam2[iParam6 /*20*/])->f_6);
						unk_0x61755AC17D8F538E((uParam2[iParam6 /*20*/])->f_8, 3);
						unk_0x661342B9651D16E2((uParam2[0 /*20*/])->f_8, true);
					}
				}
				else
				{
					if (iLocal_170 == 3)
					{
						Local_393[iLocal_450 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!unk_0xE4EDC4B0E92C078B((uParam2[0 /*20*/])->f_8))
					{
						(uParam2[0 /*20*/])->f_8 = unk_0x6CC513A908911CF0(Local_393[iLocal_450 /*23*/].f_1);
						unk_0x61755AC17D8F538E((uParam2[0 /*20*/])->f_8, 3);
						unk_0x661342B9651D16E2((uParam2[0 /*20*/])->f_8, true);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!unk_0x437347B10A200C4B((uParam2[iVar0 /*20*/])->f_6, 0))
					{
						if (!unk_0xE4EDC4B0E92C078B((uParam2[iVar0 /*20*/])->f_8))
						{
							(uParam2[iVar0 /*20*/])->f_8 = unk_0x5C3B41825F6AC5A0((uParam2[iVar0 /*20*/])->f_6);
							unk_0x61755AC17D8F538E((uParam2[iVar0 /*20*/])->f_8, 3);
							unk_0x661342B9651D16E2((uParam2[iVar0 /*20*/])->f_8, true);
						}
					}
					else
					{
						if (iLocal_170 == 3)
						{
							Local_393[iLocal_450 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!unk_0xE4EDC4B0E92C078B((uParam2[0 /*20*/])->f_8))
						{
							(uParam2[0 /*20*/])->f_8 = unk_0x6CC513A908911CF0(Local_393[iLocal_450 /*23*/].f_1);
							unk_0x61755AC17D8F538E((uParam2[0 /*20*/])->f_8, 3);
							unk_0x661342B9651D16E2((uParam2[0 /*20*/])->f_8, true);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_215 = false;
		}
	}
}

int func_224(var uParam0)
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) != *uParam0)
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_225()
{
	int iVar0;
	
	iVar0 = func_26();
	if (iVar0 != 1)
	{
		func_193();
	}
}

void func_226(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_10F)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_110 + uParam0->f_111) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 2)) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 29))
					{
						func_227(uParam0[iVar0 /*18*/]);
						uParam0->f_110 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_227(int iParam0)
{
	func_228(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_228(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 30))
	{
		switch (func_229(*iParam0))
		{
			case 0:
				unk_0x523BCC9DC80CD82F(iParam2);
				break;
			
			case 1:
				unk_0x3F423BF5B8125A50(sParam1);
				break;
			
			case 2:
				unk_0x4E09E67A27F104A7(sParam1);
				break;
			
			case 3:
				unk_0x0D3BE1DE0262A012(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 28));
				break;
			
			case 4:
				unk_0x36187931D29E5BBE(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x29398344B9E5B8A7(sParam1);
				break;
			
			case 6:
				unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 27), 4294967295);
				break;
			
			case 7:
				unk_0x8CFFBE74CB5C864A(iParam2);
				break;
			
			case 8:
				unk_0xD7992BEF7A9D109E(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x9E5E60D8C63FD9D1();
				break;
			
			default:
				break;
		}
		unk_0x5D96D8530B3D0904(iParam0, 29);
	}
}

int func_229(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_230()
{
	if (Global_1FE1[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_1FE1[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_1FE1[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_1FE1[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_1FE1[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_1FE1[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 25);
	unk_0x5D96D8530B3D0904(&Global_1CBD, 11);
}

void func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	
	func_254();
	iLocal_454 = func_253();
	if (uParam0->f_3 == 3)
	{
		sLocal_466[0] = "base";
		func_251(&uLocal_482, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_482, "oddjobs@towingcome_here");
		func_251(&uLocal_482, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_793)
	{
		func_251(&uLocal_482, "Ped");
		func_251(&uLocal_482, "oddjobs@towing");
		func_251(&uLocal_482, "oddjobs@towingangryidle_a");
		func_251(&uLocal_482, "oddjobs@towingpleadingidle_b");
		func_251(&uLocal_482, "oddjobs@towingpleadingidle_a");
		func_251(&uLocal_482, "move_m@JOG@");
	}
	else if (bLocal_793)
	{
		func_251(&uLocal_482, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_482, "oddjobs@towing");
	}
	if (uParam0->f_3 == 2)
	{
		func_251(&uLocal_482, "RANDOM@CAR_SLEEPING");
	}
	else if (uParam0->f_3 == 4)
	{
		sLocal_465 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		func_251(&uLocal_482, sLocal_465);
		func_249(&uLocal_472, joaat("ambulance"));
		func_249(&uLocal_472, joaat("s_m_m_paramedic_01"));
		sLocal_466[0] = "react_big_variations_a";
		sLocal_466[1] = "react_big_variations_b";
		sLocal_466[2] = "react_big_variations_c";
		func_251(&uLocal_482, "move_m@JOG@");
	}
	unk_0xAB8E2DDC7AF955E0(joaat("towtruck"), true);
	if (uParam0->f_3 == 1)
	{
		unk_0x9E5E60D8C63FD9D1();
		func_251(&uLocal_482, "oddjobs@towing");
		func_251(&uLocal_482, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_482, "oddjobs@towingpleadingidle_b");
		func_249(&uLocal_472, joaat("freightcont1"));
		func_249(&uLocal_472, joaat("tankercar"));
		func_249(&uLocal_472, joaat("freight"));
		func_249(&uLocal_472, joaat("freightcar"));
		func_249(&uLocal_472, joaat("s_m_m_lsmetro_01"));
		func_249(&uLocal_472, joaat("a_f_m_bevhills_01"));
		func_249(&uLocal_472, joaat("a_m_y_genstreet_02"));
	}
	if (uParam0->f_3 == 2)
	{
		func_248();
	}
	else if (uParam0->f_3 == 4)
	{
		iLocal_819[iVar0] = Local_393[iLocal_450 /*23*/].f_14;
	}
	else
	{
		func_247();
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_819[iVar0] == 0)
		{
			iLocal_819[iVar0] = func_245(&iLocal_819, &iLocal_49, 10);
			unk_0xD4D331DFE794EACD(iLocal_819[iVar0], 3);
		}
		if (bLocal_799)
		{
			iLocal_819[iVar0] = joaat("landstalker");
			func_249(&uLocal_472, iLocal_819[iVar0]);
			unk_0xD4D331DFE794EACD(iLocal_819[iVar0], 3);
		}
		else if (iLocal_819[iVar0] != 0)
		{
			func_249(&uLocal_472, iLocal_819[iVar0]);
			unk_0xD4D331DFE794EACD(iLocal_819[iVar0], 3);
		}
		iVar0++;
	}
	if (!bLocal_793 && iLocal_796)
	{
		if (bLocal_799)
		{
			func_244(&iVar1);
			iLocal_47 = joaat("a_m_m_tranvest_01");
			iLocal_47 = iLocal_47;
			func_249(&uLocal_472, iLocal_47);
		}
		else if (bLocal_800)
		{
			func_243(&iVar1);
		}
		else if (uParam0->f_3 == 3)
		{
			func_242(&iVar1, 1);
		}
		else if (uParam0->f_3 == 0 && !bLocal_799)
		{
			func_242(&iVar1, 1);
		}
		else
		{
			func_242(&iVar1, 0);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			uLocal_820[iVar0] = func_245(&uLocal_820, &iLocal_48, iVar1);
			if (uLocal_820[iVar0] != 0)
			{
				func_249(&uLocal_472, uLocal_820[iVar0]);
			}
			iVar0++;
		}
	}
	func_249(&uLocal_472, iLocal_392);
	func_241(&uLocal_490, "TOW", 2, 0);
	func_241(&uLocal_490, "DTRSHRD", 3, 0);
	func_240(&uLocal_472);
	func_237(&uLocal_482, &uLocal_490);
	while (!unk_0x83D8570832F172A7(iLocal_454))
	{
		func_226(&uLocal_490);
		SYSTEM::WAIT(0);
	}
	while (!func_236(&uLocal_472) || !unk_0x1F04E7FA44219580(iLocal_819[0]))
	{
		func_226(&uLocal_490);
		SYSTEM::WAIT(0);
	}
	while (!func_232(&uLocal_490))
	{
		func_226(&uLocal_490);
		SYSTEM::WAIT(0);
	}
	if (uParam0->f_3 == 1)
	{
		while (!unk_0xAE317D00A5A55DF6("SCRIPT\TOWING_TRAIN", false, 4294967295) || !unk_0x25F7A4D42AF2AB93())
		{
			func_226(&uLocal_490);
			SYSTEM::WAIT(0);
		}
	}
	while (!unk_0x67C1D9E5B91B2E37(2) || !unk_0x67C1D9E5B91B2E37(3))
	{
		func_226(&uLocal_490);
		SYSTEM::WAIT(0);
	}
}

bool func_232(var uParam0)
{
	return func_233(uParam0);
}

int func_233(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_10F)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_234(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_10F = 0;
	return 1;
}

bool func_234(var uParam0)
{
	return func_235(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_235(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 29))
		{
			switch (func_229(iParam0))
			{
				case 0:
					return unk_0xB87F6CF6E5628C67(iParam2);
					break;
				
				case 1:
					return unk_0xB4AE0788C1587752(sParam1);
					break;
				
				case 2:
					return unk_0x59F02DA2266A744C(sParam1);
					break;
				
				case 3:
					return unk_0x27117E2CDD4D67C3(sParam1);
					break;
				
				case 4:
					return unk_0x3DDA6C6A285628E4(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1C2E18E9C63BEB77(sParam1);
					break;
				
				case 6:
					return unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(iParam0, 27), 4294967295);
					break;
				
				case 7:
					return unk_0x64EF15C5E09BAD76(iParam2);
					break;
				
				case 8:
					return unk_0x67C1D9E5B91B2E37(iParam2);
					break;
				
				case 9:
					return unk_0x25F7A4D42AF2AB93();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_236(var uParam0)
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

void func_237(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x2EBF5002C6B6A06C((*uParam0)[iVar0]))
		{
			func_238(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_238(var uParam0, char* sParam1)
{
	func_239(uParam0, 1, 4294967295, sParam1, 0);
}

void func_239(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != 4294967295)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x7F8A39872A07D2CE(sParam3, "NULL"))
					{
						if (unk_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_10F)
	{
		uParam0->f_10F = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_240(var uParam0)
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

void func_241(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	if (bParam3)
	{
		unk_0x5D96D8530B3D0904(&uVar0, 26);
	}
	func_239(uParam0, 8, iParam2, sParam1, uVar0);
}

void func_242(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iLocal_48[0] = joaat("a_m_y_genstreet_02");
		iLocal_48[1] = joaat("a_m_y_beach_03");
		iLocal_48[2] = joaat("g_m_y_salvagoon_01");
		iLocal_48[3] = joaat("a_m_m_bevhills_02");
		*uParam0 = 4;
	}
	else
	{
		iLocal_48[0] = joaat("a_f_m_bevhills_01");
		iLocal_48[1] = joaat("a_m_y_genstreet_02");
		iLocal_48[2] = joaat("a_f_y_hipster_02");
		iLocal_48[3] = joaat("a_m_y_beach_03");
		iLocal_48[4] = joaat("s_f_y_sweatshop_01");
		iLocal_48[5] = joaat("g_m_y_salvagoon_01");
		*uParam0 = 6;
	}
}

void func_243(var uParam0)
{
	iLocal_48[0] = joaat("a_m_m_tramp_01");
	iLocal_48[1] = joaat("a_m_y_methhead_01");
	iLocal_48[2] = joaat("a_m_m_tramp_01");
	iLocal_48[3] = joaat("a_m_y_methhead_01");
	*uParam0 = 4;
}

void func_244(var uParam0)
{
	iLocal_48[0] = joaat("a_m_y_yoga_01");
	iLocal_48[1] = joaat("a_m_y_beach_03");
	iLocal_48[2] = joaat("a_m_y_musclbeac_01");
	*uParam0 = 3;
}

var func_245(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = unk_0x09AC81E49EA267F7(0, (iParam2 - 1));
	while (func_246((*iParam1)[iVar1], uParam0) || iVar0 > 25)
	{
		iVar0++;
		iVar1 = unk_0x09AC81E49EA267F7(0, (iParam2 - 1));
	}
	return (*iParam1)[iVar1];
}

int func_246(int iParam0, var uParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] != 0)
		{
			if ((*uParam1)[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_247()
{
	iLocal_49[0] = joaat("tailgater");
	iLocal_49[1] = joaat("asterope");
	iLocal_49[2] = joaat("primo");
	iLocal_49[3] = joaat("primo");
	iLocal_49[4] = joaat("schwarzer");
	iLocal_49[5] = joaat("emperor");
	iLocal_49[6] = joaat("premier");
	iLocal_49[7] = joaat("buffalo");
	iLocal_49[8] = joaat("intruder");
	iLocal_49[9] = joaat("intruder");
}

void func_248()
{
	iLocal_49[0] = joaat("buccaneer");
	iLocal_49[1] = joaat("voodoo2");
	iLocal_49[2] = joaat("manana");
	iLocal_49[3] = joaat("ruiner");
	iLocal_49[4] = joaat("ruiner");
	iLocal_49[5] = joaat("voodoo2");
	iLocal_49[6] = joaat("surfer2");
	iLocal_49[7] = joaat("emperor2");
	iLocal_49[8] = joaat("stanier");
	iLocal_49[9] = joaat("tailgater");
}

int func_249(var uParam0, int iParam1)
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
	iVar1 = func_250(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_250(var uParam0)
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

int func_251(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x2EBF5002C6B6A06C((*uParam0)[iVar0]))
		{
			if (unk_0x7F8A39872A07D2CE((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_252(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_252(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0x2EBF5002C6B6A06C((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_253()
{
	return unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_254()
{
	func_300(&uLocal_162, 1);
}

void func_255()
{
	switch (iLocal_170)
	{
		case 2:
			if ((Global_1B416.f_4E00.f_4 % 2) == 0)
			{
				sLocal_467 = "TOWABDBITCHM";
			}
			else
			{
				sLocal_467 = "TOWABDATTACKM";
			}
			break;
		
		case 4:
			break;
		
		case 3:
			sLocal_467 = "TOWBREAKM";
			break;
		
		case 0:
			if (bLocal_799)
			{
			}
			else
			{
				sLocal_467 = "TOWHANDIBEGM";
			}
			break;
		
		case 1:
			sLocal_467 = "TOWTRAINM";
			break;
	}
}

int func_256()
{
	return Local_393[iLocal_450 /*23*/].f_16;
}

void func_257(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_258()
{
	iLocal_170 = func_260(Global_1B416.f_4E00.f_2);
	if (!func_259(iLocal_170))
	{
		iLocal_170 = 3;
	}
	if (iLocal_170 == 3)
	{
	}
	else
	{
		iLocal_450 = func_262(1300f, iLocal_170, Global_1B416.f_4E00.f_9);
		Global_1B416.f_4E00.f_9 = iLocal_450;
	}
	if (iLocal_450 == 0)
	{
		iLocal_170 = 3;
	}
	Global_1B416.f_4E00.f_2 = iLocal_170;
}

int func_259(int iParam0)
{
	iLocal_450 = func_262(1300f, iParam0, Global_1B416.f_4E00.f_9);
	if (iLocal_450 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2000000;
	iVar1 = 2;
	if (iParam0 != 2)
	{
		if (Global_1B416.f_4E00.f_4 < iVar0)
		{
			iVar0 = Global_1B416.f_4E00.f_4;
			iVar1 = 2;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_1B416.f_4E00.f_6 < iVar0)
		{
			iVar0 = Global_1B416.f_4E00.f_6;
			iVar1 = 0;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_1B416.f_4E00.f_5 < iVar0)
		{
			iVar0 = Global_1B416.f_4E00.f_5;
			iVar1 = 1;
		}
	}
	if (iParam0 != 3)
	{
		if (Global_1B416.f_4E00.f_7 < iVar0)
		{
			iVar0 = Global_1B416.f_4E00.f_7;
			iVar1 = 3;
		}
	}
	if (iParam0 != 4)
	{
		if (Global_1B416.f_4E00.f_8 < iVar0)
		{
			iVar0 = Global_1B416.f_4E00.f_8;
			iVar1 = 4;
		}
	}
	return iVar1;
}

int func_261()
{
	if (Global_181B8 == 10 || Global_181B8 == 9)
	{
		return 1;
	}
	return 0;
}

int func_262(float fParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3[53];
	int iVar4;
	int iVar5;
	
	fVar0 = 500f;
	iVar1 = 4294967295;
	iVar4 = 0;
	iVar5 = 0;
	while (iVar5 < 53)
	{
		fVar2 = func_9(Local_393[iVar5 /*23*/].f_1, 1);
		if (!func_11(Local_393[iVar5 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar5 != iParam2)
			{
				if (iParam1 == 4294967295)
				{
					iVar3[iVar4] = iVar5;
					iVar4++;
				}
				else if (Local_393[iVar5 /*23*/] == iParam1)
				{
					iVar3[iVar4] = iVar5;
					iVar4++;
				}
			}
		}
		iVar5++;
	}
	if (iVar4 > 1)
	{
		iVar1 = iVar3[unk_0x09AC81E49EA267F7(0, (iVar4 - 1))];
	}
	else if (iVar4 == 1)
	{
		iVar1 = iVar3[0];
	}
	else
	{
		return 0;
	}
	return iVar1;
}

void func_263(int iParam0)
{
	if (!func_7(iParam0))
	{
		func_59(iParam0);
	}
}

void func_264()
{
	vLocal_45[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	vLocal_45[1 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	vLocal_45[2 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	vLocal_45[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	vLocal_45[4 /*3*/] = { 1151.507f, -773.4066f, 56.61f };
	vLocal_45[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	vLocal_45[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	vLocal_45[7 /*3*/] = { 263.4725f, 2601.842f, 43.8197f };
	vLocal_46[0 /*3*/] = { 401.6046f, -1632.781f, 28.2928f };
}

void func_265(var uParam0)
{
	*(uParam0[0 /*28*/][0 /*3*/]) = { 568.8983f, -1698.723f, 28.2631f };
	*(uParam0[0 /*28*/][1 /*3*/]) = { 575.1474f, -1697.549f, 28.2631f };
	*(uParam0[0 /*28*/][2 /*3*/]) = { 584.8786f, -1703.875f, 28.2631f };
	(uParam0[0 /*28*/])->f_1B = 3;
	(uParam0[0 /*28*/])->f_17 = { 565.9069f, -1702.813f, 28.2227f };
	(uParam0[0 /*28*/])->f_1A = 58.4094f;
	(uParam0[0 /*28*/])->f_11 = { 564.5385f, -1689.707f, 38.2854f };
	(uParam0[0 /*28*/])->f_14 = { 605.4141f, -1715.221f, 18.0923f };
	*(uParam0[1 /*28*/][0 /*3*/]) = { 240.0033f, -1141.433f, 28.3033f };
	*(uParam0[1 /*28*/][1 /*3*/]) = { 240.5303f, -1137.75f, 28.3091f };
	*(uParam0[1 /*28*/][2 /*3*/]) = { 229.8743f, -1145.763f, 28.3013f };
	(uParam0[1 /*28*/])->f_1B = 3;
	(uParam0[1 /*28*/])->f_17 = { 239.0778f, -1134.141f, 28.2367f };
	(uParam0[1 /*28*/])->f_1A = 266.7983f;
	(uParam0[1 /*28*/])->f_11 = { 242.7403f, -1124.753f, 38.3223f };
	(uParam0[1 /*28*/])->f_14 = { 225.7671f, -1152.415f, 18.2047f };
	(uParam0[1 /*28*/])->f_A[0 /*3*/] = { 232.3824f, -1137.855f, 28.1944f };
	(uParam0[1 /*28*/])->f_A[1 /*3*/] = { 230.8579f, -1136.252f, 28.0348f };
	*(uParam0[2 /*28*/][0 /*3*/]) = { -95.1473f, -1716.656f, 28.4491f };
	*(uParam0[2 /*28*/][1 /*3*/]) = { -93.1677f, -1717.84f, 28.4239f };
	(uParam0[2 /*28*/])->f_1B = 2;
	(uParam0[2 /*28*/])->f_17 = { -102.9092f, -1729.668f, 28.7511f };
	(uParam0[2 /*28*/])->f_1A = 105.1153f;
	(uParam0[2 /*28*/])->f_A[0 /*3*/] = { -99.8953f, -1726.702f, 28.4622f };
	(uParam0[2 /*28*/])->f_A[1 /*3*/] = { -101.1025f, -1728.689f, 28.6286f };
	*(uParam0[3 /*28*/][0 /*3*/]) = { -117.7085f, -1321.069f, 28.2857f };
	*(uParam0[3 /*28*/][1 /*3*/]) = { -116.6308f, -1325.362f, 28.3192f };
	(uParam0[3 /*28*/])->f_1B = 2;
	(uParam0[3 /*28*/])->f_17 = { -112.3024f, -1329.219f, 28.2685f };
	(uParam0[3 /*28*/])->f_1A = 179.9845f;
	(uParam0[3 /*28*/])->f_A[0 /*3*/] = { -113.1683f, -1319.459f, 28.2125f };
	(uParam0[3 /*28*/])->f_A[1 /*3*/] = { -112.2886f, -1322.422f, 28.2633f };
	*(uParam0[4 /*28*/][0 /*3*/]) = { 308.2367f, -1706.026f, 28.3827f };
	*(uParam0[4 /*28*/][1 /*3*/]) = { 298.1392f, -1700.768f, 28.3234f };
	(uParam0[4 /*28*/])->f_1B = 2;
	(uParam0[4 /*28*/])->f_17 = { 314.1078f, -1704.305f, 28.3111f };
	(uParam0[4 /*28*/])->f_1A = 227.316f;
	(uParam0[4 /*28*/])->f_A[0 /*3*/] = { 304.5671f, -1697.522f, 28.2629f };
	(uParam0[4 /*28*/])->f_A[1 /*3*/] = { 308.3995f, -1699.695f, 28.3051f };
	*(uParam0[5 /*28*/][0 /*3*/]) = { 776.3322f, -2046.078f, 28.2818f };
	*(uParam0[5 /*28*/][1 /*3*/]) = { 776.0253f, -2048.392f, 28.2653f };
	(uParam0[5 /*28*/])->f_1B = 2;
	(uParam0[5 /*28*/])->f_17 = { 787.8897f, -2034.542f, 28.2393f };
	(uParam0[5 /*28*/])->f_1A = 348.1702f;
	(uParam0[5 /*28*/])->f_A[0 /*3*/] = { 782.5989f, -2047.48f, 28.159f };
	(uParam0[5 /*28*/])->f_A[1 /*3*/] = { 783.3265f, -2051.183f, 28.1589f };
	*(uParam0[6 /*28*/][0 /*3*/]) = { 28.2787f, -986.7457f, 28.5094f };
	*(uParam0[6 /*28*/][1 /*3*/]) = { 35.6153f, -988.3468f, 28.4971f };
	*(uParam0[6 /*28*/][2 /*3*/]) = { 38.553f, -985.1667f, 28.5576f };
	(uParam0[6 /*28*/])->f_1B = 3;
	(uParam0[6 /*28*/])->f_17 = { 43.6799f, -982.0863f, 28.4103f };
	(uParam0[6 /*28*/])->f_1A = 251.1427f;
	(uParam0[6 /*28*/])->f_A[0 /*3*/] = { 30.5244f, -980.0237f, 28.4037f };
	(uParam0[6 /*28*/])->f_A[1 /*3*/] = { 34.0509f, -979.3044f, 28.4079f };
	*(uParam0[7 /*28*/][0 /*3*/]) = { 99.1579f, -1521.963f, 28.3247f };
	*(uParam0[7 /*28*/][1 /*3*/]) = { 105.699f, -1527.331f, 28.3186f };
	(uParam0[7 /*28*/])->f_1B = 2;
	(uParam0[7 /*28*/])->f_17 = { 95.4077f, -1529.473f, 28.3325f };
	(uParam0[7 /*28*/])->f_1A = 51.3731f;
	(uParam0[7 /*28*/])->f_A[0 /*3*/] = { 100.3829f, -1529.783f, 28.2238f };
	(uParam0[7 /*28*/])->f_A[1 /*3*/] = { 97.5322f, -1531.58f, 28.3374f };
	*(uParam0[8 /*28*/][0 /*3*/]) = { 370.2508f, -871.9623f, 28.2916f };
	*(uParam0[8 /*28*/][1 /*3*/]) = { 364.377f, -872.4929f, 28.2916f };
	(uParam0[8 /*28*/])->f_1B = 2;
	(uParam0[8 /*28*/])->f_17 = { 370.0709f, -865.2366f, 28.2507f };
	(uParam0[8 /*28*/])->f_1A = 271.3831f;
	(uParam0[8 /*28*/])->f_A[0 /*3*/] = { 363.9474f, -865.3307f, 28.2621f };
	(uParam0[8 /*28*/])->f_A[1 /*3*/] = { 361.2415f, -866.9158f, 28.1908f };
	*(uParam0[9 /*28*/][0 /*3*/]) = { 258.1324f, -2035.098f, 17.2524f };
	*(uParam0[9 /*28*/][1 /*3*/]) = { 263.1343f, -2026.365f, 17.7171f };
	(uParam0[9 /*28*/])->f_1B = 2;
	(uParam0[9 /*28*/])->f_17 = { 260.0068f, -2041.806f, 16.9454f };
	(uParam0[9 /*28*/])->f_1A = 140.9065f;
	(uParam0[9 /*28*/])->f_A[0 /*3*/] = { 264.5263f, -2036.198f, 17.2682f };
	(uParam0[9 /*28*/])->f_A[1 /*3*/] = { 264.3815f, -2032.379f, 17.329f };
	*(uParam0[10 /*28*/][0 /*3*/]) = { 411.4076f, -1869.433f, 25.5691f };
	*(uParam0[10 /*28*/][1 /*3*/]) = { 416.1884f, -1862.589f, 26.0458f };
	(uParam0[10 /*28*/])->f_1B = 2;
	(uParam0[10 /*28*/])->f_17 = { 412.9648f, -1876.901f, 25.3104f };
	(uParam0[10 /*28*/])->f_1A = 135.5291f;
	(uParam0[10 /*28*/])->f_A[0 /*3*/] = { 418.299f, -1872.54f, 25.6552f };
	(uParam0[10 /*28*/])->f_A[1 /*3*/] = { 419.0923f, -1869.039f, 25.6907f };
	*(uParam0[11 /*28*/][0 /*3*/]) = { 500.9577f, -1664.881f, 28.7134f };
	*(uParam0[11 /*28*/][1 /*3*/]) = { 501.1261f, -1668.809f, 28.7152f };
	(uParam0[11 /*28*/])->f_1B = 2;
	(uParam0[11 /*28*/])->f_17 = { 503.8388f, -1661.237f, 28.4841f };
	(uParam0[11 /*28*/])->f_1A = 50.8842f;
	(uParam0[11 /*28*/])->f_A[0 /*3*/] = { 507.0525f, -1670.254f, 28.7152f };
	(uParam0[11 /*28*/])->f_A[1 /*3*/] = { 507.7841f, -1665.116f, 28.4902f };
	*(uParam0[12 /*28*/][0 /*3*/]) = { -208.9247f, -660.1125f, 32.629f };
	*(uParam0[12 /*28*/][1 /*3*/]) = { -204.0615f, -660.8978f, 32.7011f };
	*(uParam0[12 /*28*/][2 /*3*/]) = { -198.1905f, -664.2867f, 32.8159f };
	(uParam0[12 /*28*/])->f_1B = 3;
	(uParam0[12 /*28*/])->f_17 = { -213.0429f, -666.7334f, 32.6039f };
	(uParam0[12 /*28*/])->f_1A = 70.1131f;
	(uParam0[12 /*28*/])->f_A[0 /*3*/] = { -210.6179f, -667.8796f, 32.6494f };
	(uParam0[12 /*28*/])->f_A[1 /*3*/] = { -204.9018f, -667.8836f, 32.6425f };
	*(uParam0[13 /*28*/][0 /*3*/]) = { -310.1606f, -869.7873f, 30.6891f };
	*(uParam0[13 /*28*/][1 /*3*/]) = { -315.0338f, -869.8134f, 30.6555f };
	*(uParam0[13 /*28*/][2 /*3*/]) = { -319.5981f, -868.6276f, 30.6449f };
	(uParam0[13 /*28*/])->f_1B = 3;
	(uParam0[13 /*28*/])->f_17 = { -309.987f, -864.1183f, 30.6228f };
	(uParam0[13 /*28*/])->f_1A = 261.3995f;
	(uParam0[13 /*28*/])->f_A[0 /*3*/] = { -316.0121f, -862.7733f, 30.6267f };
	(uParam0[13 /*28*/])->f_A[1 /*3*/] = { -317.526f, -863.8655f, 30.5453f };
	*(uParam0[14 /*28*/][0 /*3*/]) = { 407.2907f, -1479.637f, 28.2895f };
	*(uParam0[14 /*28*/][1 /*3*/]) = { 404.6483f, -1483.57f, 28.2895f };
	(uParam0[14 /*28*/])->f_1B = 2;
	(uParam0[14 /*28*/])->f_17 = { 403.5326f, -1475.197f, 28.2951f };
	(uParam0[14 /*28*/])->f_1A = 301.9695f;
	(uParam0[14 /*28*/])->f_A[0 /*3*/] = { 399.232f, -1477.783f, 28.2928f };
	(uParam0[14 /*28*/])->f_A[1 /*3*/] = { 401.2551f, -1479.737f, 28.1369f };
	*(uParam0[15 /*28*/][0 /*3*/]) = { -686.6597f, -851.2509f, 22.9054f };
	*(uParam0[15 /*28*/][1 /*3*/]) = { -696.9954f, -852.1266f, 22.6746f };
	(uParam0[15 /*28*/])->f_1B = 2;
	(uParam0[15 /*28*/])->f_17 = { -674.3848f, -844.9825f, 23.1517f };
	(uParam0[15 /*28*/])->f_1A = 269.1391f;
	(uParam0[15 /*28*/])->f_A[0 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
	(uParam0[15 /*28*/])->f_A[1 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
}

void func_266(var uParam0)
{
	(uParam0[0 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[0 /*23*/])->f_4 = 180.477f;
	(uParam0[0 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[0 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[0 /*23*/] = 0;
	(uParam0[1 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[1 /*23*/])->f_4 = 180.477f;
	(uParam0[1 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[1 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[1 /*23*/] = 0;
	(uParam0[2 /*23*/])->f_1 = { -301.9741f, -898.8075f, 30.0813f };
	(uParam0[2 /*23*/])->f_4 = 168.6079f;
	(uParam0[2 /*23*/])->f_6 = { -301.0894f, -934.515f, 30.0813f };
	(uParam0[2 /*23*/])->f_9 = 66.2119f;
	(*uParam0)[2 /*23*/] = 0;
	(uParam0[3 /*23*/])->f_1 = { -359.0859f, -965.5469f, 30.0701f };
	(uParam0[3 /*23*/])->f_4 = 145.3635f;
	(*uParam0)[3 /*23*/] = 2;
	(uParam0[4 /*23*/])->f_1 = { 4.5819f, -1762.495f, 28.2918f };
	(uParam0[4 /*23*/])->f_4 = 51.8577f;
	(*uParam0)[4 /*23*/] = 2;
	(uParam0[5 /*23*/])->f_1 = { 260.5293f, -1872.327f, 25.8171f };
	(uParam0[5 /*23*/])->f_4 = 55f;
	(*uParam0)[5 /*23*/] = 1;
	(uParam0[5 /*23*/])->f_6 = { 209.1288f, -2149.055f, 13.3765f };
	(uParam0[5 /*23*/])->f_5 = 1;
	(uParam0[5 /*23*/])->f_D = { 331.456f, -1789.7f, 26.817f };
	(uParam0[5 /*23*/])->f_10 = { 190.235f, -1957.1f, 26.816f };
	(uParam0[5 /*23*/])->f_13 = 7.2f;
	(uParam0[6 /*23*/])->f_1 = { 967.3045f, -1873.789f, 30.1425f };
	(uParam0[6 /*23*/])->f_4 = 41.1599f;
	(*uParam0)[6 /*23*/] = 2;
	(uParam0[7 /*23*/])->f_1 = { -607.5065f, -1216.34f, 13.4082f };
	(uParam0[7 /*23*/])->f_4 = 131.5235f;
	(*uParam0)[7 /*23*/] = 2;
	(uParam0[8 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[8 /*23*/])->f_4 = 263.5155f;
	(uParam0[8 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[8 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[8 /*23*/] = 0;
	(uParam0[9 /*23*/])->f_1 = { -136.0945f, -785.4554f, 31.4112f };
	(uParam0[9 /*23*/])->f_4 = 276.5309f;
	(*uParam0)[9 /*23*/] = 2;
	(uParam0[10 /*23*/])->f_1 = { -32.488f, -1354.867f, 28.1676f };
	(uParam0[10 /*23*/])->f_4 = 90.8486f;
	(*uParam0)[10 /*23*/] = 2;
	(uParam0[11 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[11 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[11 /*23*/] = 1;
	(uParam0[11 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[11 /*23*/])->f_5 = 0;
	(uParam0[11 /*23*/])->f_D = { -111.725f, -1538.781f, -29.292f };
	(uParam0[11 /*23*/])->f_10 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[11 /*23*/])->f_13 = 7.8f;
	(uParam0[12 /*23*/])->f_1 = { 220.6214f, -852.1f, 29.1084f };
	(uParam0[12 /*23*/])->f_4 = 249.5924f;
	(*uParam0)[12 /*23*/] = 2;
	(uParam0[13 /*23*/])->f_1 = { 337.0184f, -1156.93f, 28.2919f };
	(uParam0[13 /*23*/])->f_4 = 270.3139f;
	(*uParam0)[13 /*23*/] = 2;
	(uParam0[14 /*23*/])->f_1 = { 953.1846f, -2113.256f, 29.5516f };
	(uParam0[14 /*23*/])->f_4 = 265.591f;
	(*uParam0)[14 /*23*/] = 2;
	(uParam0[15 /*23*/])->f_1 = { -88.9769f, -2003.448f, 17.0168f };
	(uParam0[15 /*23*/])->f_4 = 352.601f;
	(*uParam0)[15 /*23*/] = 2;
	(uParam0[16 /*23*/])->f_1 = { 211.0682f, -791.7485f, 29.9f };
	(uParam0[16 /*23*/])->f_4 = 68.5508f;
	(*uParam0)[16 /*23*/] = 2;
	(uParam0[17 /*23*/])->f_1 = { -327.4179f, -1529.127f, 26.5696f };
	(uParam0[17 /*23*/])->f_4 = 179.9431f;
	(*uParam0)[17 /*23*/] = 2;
	(uParam0[18 /*23*/])->f_1 = { -596.5739f, -889.578f, 24.4759f };
	(uParam0[18 /*23*/])->f_4 = 269.5022f;
	(uParam0[18 /*23*/])->f_6 = { -584.4996f, -872.2784f, 24.8909f };
	(uParam0[18 /*23*/])->f_9 = 83.1267f;
	(*uParam0)[18 /*23*/] = 0;
	(uParam0[19 /*23*/])->f_1 = { 408.6235f, -989.5519f, 28.2665f };
	(uParam0[19 /*23*/])->f_4 = 233.0824f;
	(*uParam0)[19 /*23*/] = 2;
	(uParam0[20 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[20 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[20 /*23*/] = 1;
	(uParam0[20 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[20 /*23*/])->f_5 = 0;
	(uParam0[20 /*23*/])->f_D = { -111.725f, -1538.781f, -29.292f };
	(uParam0[20 /*23*/])->f_10 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[20 /*23*/])->f_13 = 7.8f;
	(uParam0[21 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[21 /*23*/])->f_4 = 263.5155f;
	(uParam0[21 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[21 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[21 /*23*/] = 0;
	(uParam0[22 /*23*/])->f_1 = { -310.2984f, -686.4995f, 32.1219f };
	(uParam0[22 /*23*/])->f_4 = 269.6159f;
	(uParam0[22 /*23*/])->f_6 = { -373.468f, -672.849f, 30.4925f };
	(uParam0[22 /*23*/])->f_9 = 274.2857f;
	(*uParam0)[22 /*23*/] = 0;
	(uParam0[23 /*23*/])->f_1 = { -316.4254f, -895.1236f, 30.0701f };
	(uParam0[23 /*23*/])->f_4 = 347.1421f;
	(*uParam0)[23 /*23*/] = 2;
	(uParam0[24 /*23*/])->f_1 = { 53.578f, -1417.226f, 28.3517f };
	(uParam0[24 /*23*/])->f_4 = 224.8985f;
	(*uParam0)[24 /*23*/] = 2;
	(uParam0[25 /*23*/])->f_1 = { 401.6395f, -2054.658f, 20.575f };
	(uParam0[25 /*23*/])->f_4 = 168.9083f;
	(*uParam0)[25 /*23*/] = 2;
	(uParam0[26 /*23*/])->f_1 = { 146.2919f, -2051.071f, 17.3217f };
	(uParam0[26 /*23*/])->f_4 = 265.1393f;
	(*uParam0)[26 /*23*/] = 1;
	(uParam0[26 /*23*/])->f_6 = { 339.577f, -1779.002f, 28.1454f };
	(uParam0[26 /*23*/])->f_5 = 0;
	(uParam0[26 /*23*/])->f_D = { 149.063f, -2005.992f, -18.327f };
	(uParam0[26 /*23*/])->f_10 = { 144.98f, -2095.9f, 18.327f };
	(uParam0[26 /*23*/])->f_13 = 8.5f;
	(uParam0[27 /*23*/])->f_1 = { 363.1678f, -1749.957f, 28.2073f };
	(uParam0[27 /*23*/])->f_4 = 229.6858f;
	(*uParam0)[27 /*23*/] = 1;
	(uParam0[27 /*23*/])->f_6 = { 150.5184f, -2010.497f, 17.7098f };
	(uParam0[27 /*23*/])->f_5 = 1;
	(uParam0[27 /*23*/])->f_D = { 428.271f, -1674.163f, -29.211f };
	(uParam0[27 /*23*/])->f_10 = { 299.18f, -1826.923f, 29.211f };
	(uParam0[27 /*23*/])->f_13 = 9f;
	(uParam0[28 /*23*/])->f_1 = { 171.3444f, -1776.831f, 28.0622f };
	(uParam0[28 /*23*/])->f_4 = 321.1031f;
	(*uParam0)[28 /*23*/] = 1;
	(uParam0[28 /*23*/])->f_6 = { -92.782f, -1554.607f, 32.2626f };
	(uParam0[28 /*23*/])->f_5 = 1;
	(uParam0[28 /*23*/])->f_D = { 94.446f, -1712.766f, -29.071f };
	(uParam0[28 /*23*/])->f_10 = { 248.549f, -1840.251f, 29.211f };
	(uParam0[28 /*23*/])->f_13 = 8f;
	(uParam0[29 /*23*/])->f_1 = { 421.2757f, -1277.618f, 29.2671f };
	(uParam0[29 /*23*/])->f_4 = 359.101f;
	(uParam0[29 /*23*/])->f_6 = { 455.9831f, -1267.655f, 29.0609f };
	(uParam0[29 /*23*/])->f_9 = 97.7539f;
	(*uParam0)[29 /*23*/] = 0;
	(uParam0[30 /*23*/])->f_1 = { 211.0559f, -1371.688f, 29.5776f };
	(uParam0[30 /*23*/])->f_4 = 52.932f;
	(uParam0[30 /*23*/])->f_6 = { 209.6618f, -1406.521f, 28.2921f };
	(uParam0[30 /*23*/])->f_9 = 263.4376f;
	(*uParam0)[30 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_1 = { -219.3074f, -1491.846f, 30.2593f };
	(uParam0[31 /*23*/])->f_4 = 322.6262f;
	(*uParam0)[31 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_6 = { -177.2324f, -1506.01f, 31.6696f };
	(uParam0[32 /*23*/])->f_1 = { 538.7713f, -1524.826f, 28.168f };
	(uParam0[32 /*23*/])->f_4 = 50.4239f;
	(*uParam0)[32 /*23*/] = 1;
	(uParam0[32 /*23*/])->f_6 = { 535.2374f, -1093.33f, 27.4652f };
	(uParam0[32 /*23*/])->f_5 = 0;
	(uParam0[32 /*23*/])->f_D = { 557.229f, -1501.367f, -29.273f };
	(uParam0[32 /*23*/])->f_10 = { 518.983f, -1547.597f, 29.273f };
	(uParam0[32 /*23*/])->f_13 = 8.2f;
	(uParam0[33 /*23*/])->f_1 = { 497.2474f, -1199.327f, 28.3046f };
	(uParam0[33 /*23*/])->f_4 = 212.2787f;
	(*uParam0)[33 /*23*/] = 1;
	(uParam0[33 /*23*/])->f_6 = { 516.6573f, -926.7039f, 14.6979f };
	(uParam0[33 /*23*/])->f_5 = 0;
	(uParam0[33 /*23*/])->f_D = { 512.849f, -1198.747f, -29.311f };
	(uParam0[33 /*23*/])->f_10 = { 483.086f, -1202.507f, 29.311f };
	(uParam0[33 /*23*/])->f_13 = 8f;
	(uParam0[34 /*23*/])->f_1 = { 576.4442f, -1705.259f, 28.0895f };
	(uParam0[34 /*23*/])->f_4 = 43.2791f;
	(*uParam0)[34 /*23*/] = 4;
	(uParam0[34 /*23*/])->f_14 = joaat("tailgater");
	(uParam0[34 /*23*/])->f_15 = 0;
	(uParam0[34 /*23*/])->f_16 = 0;
	(uParam0[34 /*23*/])->f_A = { 585.9758f, -1707.779f, 28.2677f };
	(uParam0[35 /*23*/])->f_1 = { 233.0704f, -1138.882f, 28.2302f };
	(uParam0[35 /*23*/])->f_4 = 311.5479f;
	(*uParam0)[35 /*23*/] = 4;
	(uParam0[35 /*23*/])->f_14 = joaat("emperor");
	(uParam0[35 /*23*/])->f_15 = 0;
	(uParam0[35 /*23*/])->f_16 = 1;
	(uParam0[36 /*23*/])->f_1 = { -100.5493f, -1724.973f, 28.3857f };
	(uParam0[36 /*23*/])->f_4 = 81.5938f;
	(*uParam0)[36 /*23*/] = 4;
	(uParam0[36 /*23*/])->f_14 = joaat("intruder");
	(uParam0[36 /*23*/])->f_15 = 1;
	(uParam0[36 /*23*/])->f_16 = 2;
	(uParam0[36 /*23*/])->f_A = { -92.7179f, -1721.093f, 28.3288f };
	(uParam0[37 /*23*/])->f_1 = { -114.5507f, -1318.912f, 28.1481f };
	(uParam0[37 /*23*/])->f_4 = 157.6585f;
	(*uParam0)[37 /*23*/] = 4;
	(uParam0[37 /*23*/])->f_14 = joaat("asterope");
	(uParam0[37 /*23*/])->f_15 = 0;
	(uParam0[37 /*23*/])->f_16 = 3;
	(uParam0[37 /*23*/])->f_A = { -111.4177f, -1293.568f, 28.2889f };
	(uParam0[38 /*23*/])->f_1 = { 303.2563f, -1699.098f, 28.1861f };
	(uParam0[38 /*23*/])->f_4 = 213.8354f;
	(*uParam0)[38 /*23*/] = 4;
	(uParam0[38 /*23*/])->f_14 = joaat("emperor2");
	(uParam0[38 /*23*/])->f_15 = 0;
	(uParam0[38 /*23*/])->f_16 = 4;
	(uParam0[38 /*23*/])->f_A = { 284.1822f, -1679.657f, 28.3083f };
	(uParam0[39 /*23*/])->f_1 = { 784.1456f, -2046.703f, 28.1368f };
	(uParam0[39 /*23*/])->f_4 = 12.6961f;
	(*uParam0)[39 /*23*/] = 4;
	(uParam0[39 /*23*/])->f_14 = joaat("blista");
	(uParam0[39 /*23*/])->f_15 = 1;
	(uParam0[39 /*23*/])->f_16 = 5;
	(uParam0[39 /*23*/])->f_A = { 784.365f, -2070.999f, 28.3414f };
	(uParam0[40 /*23*/])->f_1 = { 29.4785f, -980.7521f, 28.4051f };
	(uParam0[40 /*23*/])->f_4 = 221.9553f;
	(*uParam0)[40 /*23*/] = 4;
	(uParam0[40 /*23*/])->f_14 = joaat("emperor");
	(uParam0[40 /*23*/])->f_15 = 0;
	(uParam0[40 /*23*/])->f_16 = 6;
	(uParam0[40 /*23*/])->f_A = { 10.3525f, -970.0844f, 28.4022f };
	(uParam0[41 /*23*/])->f_1 = { 101.5021f, -1529.546f, 28.2147f };
	(uParam0[41 /*23*/])->f_4 = 31.1362f;
	(*uParam0)[41 /*23*/] = 4;
	(uParam0[41 /*23*/])->f_14 = joaat("premier");
	(uParam0[41 /*23*/])->f_15 = 1;
	(uParam0[41 /*23*/])->f_16 = 7;
	(uParam0[41 /*23*/])->f_A = { 117.6439f, -1547.885f, 28.2914f };
	(uParam0[42 /*23*/])->f_1 = { 360.6348f, -867.98f, 28.1345f };
	(uParam0[42 /*23*/])->f_4 = 249.799f;
	(*uParam0)[42 /*23*/] = 4;
	(uParam0[42 /*23*/])->f_14 = joaat("buffalo");
	(uParam0[42 /*23*/])->f_15 = 0;
	(uParam0[42 /*23*/])->f_16 = 8;
	(uParam0[42 /*23*/])->f_A = { 324.7404f, -864.9786f, 28.2923f };
	(uParam0[43 /*23*/])->f_1 = { 261.1898f, -2035.051f, 17.2895f };
	(uParam0[43 /*23*/])->f_4 = 339.6013f;
	(*uParam0)[43 /*23*/] = 4;
	(uParam0[43 /*23*/])->f_14 = joaat("premier");
	(uParam0[43 /*23*/])->f_15 = 1;
	(uParam0[43 /*23*/])->f_16 = 9;
	(uParam0[43 /*23*/])->f_A = { 279.2888f, -2017.846f, 18.4895f };
	(uParam0[44 /*23*/])->f_1 = { 418.623f, -1867.903f, 25.6724f };
	(uParam0[44 /*23*/])->f_4 = 103.9975f;
	(*uParam0)[44 /*23*/] = 4;
	(uParam0[44 /*23*/])->f_14 = joaat("intruder");
	(uParam0[44 /*23*/])->f_15 = 0;
	(uParam0[44 /*23*/])->f_16 = 10;
	(uParam0[44 /*23*/])->f_A = { 443.8106f, -1847.293f, 26.8106f };
	(uParam0[45 /*23*/])->f_1 = { 507.4709f, -1668.593f, 28.6539f };
	(uParam0[45 /*23*/])->f_4 = 78.9463f;
	(*uParam0)[45 /*23*/] = 4;
	(uParam0[45 /*23*/])->f_14 = joaat("tailgater");
	(uParam0[45 /*23*/])->f_15 = 1;
	(uParam0[45 /*23*/])->f_16 = 11;
	(uParam0[45 /*23*/])->f_A = { 525.0562f, -1678.781f, 28.4452f };
	(uParam0[46 /*23*/])->f_1 = { -203.7249f, -667.237f, 32.6054f };
	(uParam0[46 /*23*/])->f_4 = 34.4328f;
	(*uParam0)[46 /*23*/] = 4;
	(uParam0[46 /*23*/])->f_14 = joaat("asterope");
	(uParam0[46 /*23*/])->f_15 = 0;
	(uParam0[46 /*23*/])->f_16 = 12;
	(uParam0[46 /*23*/])->f_A = { -179.7505f, -678.1224f, 33.1625f };
	(uParam0[47 /*23*/])->f_1 = { -318.031f, -865.0022f, 30.482f };
	(uParam0[47 /*23*/])->f_4 = 238.9396f;
	(*uParam0)[47 /*23*/] = 4;
	(uParam0[47 /*23*/])->f_14 = joaat("emperor2");
	(uParam0[47 /*23*/])->f_15 = 0;
	(uParam0[47 /*23*/])->f_16 = 13;
	(uParam0[47 /*23*/])->f_A = { -338.2523f, -859.7131f, 30.5587f };
	(uParam0[48 /*23*/])->f_1 = { 401.2838f, -1480.87f, 28.3058f };
	(uParam0[48 /*23*/])->f_4 = 281.6565f;
	(*uParam0)[48 /*23*/] = 4;
	(uParam0[48 /*23*/])->f_14 = joaat("blista");
	(uParam0[48 /*23*/])->f_15 = 2;
	(uParam0[48 /*23*/])->f_16 = 14;
	(uParam0[48 /*23*/])->f_A = { 369.6188f, -1495.73f, 28.2385f };
	(uParam0[49 /*23*/])->f_1 = { 2912.906f, 4410.625f, 47.9319f };
	(uParam0[49 /*23*/])->f_4 = 51.9751f;
	(*uParam0)[49 /*23*/] = 4;
	(uParam0[49 /*23*/])->f_14 = joaat("emperor2");
	(uParam0[49 /*23*/])->f_15 = 0;
	(uParam0[49 /*23*/])->f_16 = 15;
	(uParam0[49 /*23*/])->f_A = { 2929.237f, 4389.601f, 49.1801f };
	(uParam0[50 /*23*/])->f_1 = { 1684.671f, 4789.85f, 40.9384f };
	(uParam0[50 /*23*/])->f_4 = 337.6293f;
	(*uParam0)[50 /*23*/] = 4;
	(uParam0[50 /*23*/])->f_14 = joaat("tailgater");
	(uParam0[50 /*23*/])->f_15 = 1;
	(uParam0[50 /*23*/])->f_16 = 16;
	(uParam0[50 /*23*/])->f_A = { 1677.444f, 4772.696f, 40.9936f };
	(uParam0[51 /*23*/])->f_1 = { 217.386f, -2545.061f, 5.1932f };
	(uParam0[51 /*23*/])->f_4 = 95.5124f;
	(*uParam0)[51 /*23*/] = 1;
	(uParam0[51 /*23*/])->f_6 = { 150.731f, -2066.663f, 17.2342f };
	(uParam0[51 /*23*/])->f_5 = 0;
	(uParam0[51 /*23*/])->f_D = { 217.8829f, -2593.548f, 4.174078f };
	(uParam0[51 /*23*/])->f_10 = { 217.1816f, -2499.779f, 12.43667f };
	(uParam0[51 /*23*/])->f_13 = 8f;
	(uParam0[52 /*23*/])->f_1 = { -692.027f, -847.6826f, 22.6477f };
	(uParam0[52 /*23*/])->f_4 = 245.055f;
	(*uParam0)[52 /*23*/] = 4;
	(uParam0[52 /*23*/])->f_14 = joaat("tailgater");
	(uParam0[52 /*23*/])->f_15 = 0;
	(uParam0[52 /*23*/])->f_16 = 15;
	(uParam0[52 /*23*/])->f_A = { -723.7541f, -844.7679f, 21.9551f };
}

void func_267()
{
	char* sVar0;
	
	if (iLocal_906 < 16)
	{
		unk_0x790015DC92C918E2();
		unk_0x5CEB4DB888A62073(true);
		func_300(&Global_1AED1, 3);
		switch (iLocal_875)
		{
			case 2:
				sVar0 = "TOW_FAIL_05";
				break;
			
			case 0:
				sVar0 = "TOW_FAIL_10";
				break;
			
			case 6:
				sVar0 = "DTRSHRD_FAIL_03";
				break;
			
			case 1:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 11:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 13:
				sVar0 = "TOW_FAIL_16";
				break;
			
			case 4:
				sVar0 = "TOW_FAIL_12";
				break;
			
			case 5:
				sVar0 = "TOW_FAIL_01";
				break;
			
			case 3:
				sVar0 = "TOW_FAIL_03";
				break;
			
			case 8:
				sVar0 = "TOW_FAIL_04";
				break;
			
			case 9:
				sVar0 = "TOW_FAIL_04a";
				break;
			
			case 14:
				sVar0 = "TOW_FAIL_06";
				break;
			
			case 15:
				sVar0 = "TOW_FAIL_07";
				break;
			
			case 16:
				sVar0 = "TOW_FAIL_09";
				break;
			
			case 17:
				sVar0 = "TOW_FAIL_09a";
				break;
			
			case 18:
				sVar0 = "TOW_FAIL_02";
				break;
			
			case 21:
				sVar0 = "TOW_FAIL_11";
				break;
			
			case 22:
				sVar0 = "TOW_FAIL_13";
				break;
			
			case 23:
				sVar0 = "TOW_FAIL_14";
				break;
		}
		if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			sVar0 = "TOW_FAIL_15";
		}
		if (!unk_0xEA6BC48857E0AC4C(sVar0))
		{
			func_270(sVar0);
		}
		func_269();
		func_271(unk_0xBB0808A181D4745C());
		while (!func_268())
		{
			SYSTEM::WAIT(0);
		}
		func_193();
	}
}

int func_268()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_181B8 == 7 || Global_181B8 == 8)
	{
		return 1;
	}
	return 0;
}

void func_269()
{
	Global_181DB = 1;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_26())
			{
				case 0:
					StringCopy(&Global_12C36, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_12C36, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_12C36, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_12C3A, "", 16);
		}
		Global_181DB = 0;
	}
	else if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_26())
			{
				case 0:
					StringCopy(&Global_12C36, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_12C36, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_12C36, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_12C3A, "", 16);
		}
		Global_181DB = 0;
		unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 25);
	}
}

void func_270(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (unk_0x4880526EC51D1C27(sParam0) <= 16)
		{
			StringCopy(&Global_12C36, sParam0, 16);
			StringCopy(&Global_12C3A, "", 16);
			if (unk_0x192DA571D9133D23())
			{
				unk_0x32BB9995E509E19B();
			}
		}
	}
}

void func_271(char* sParam0)
{
	if (Global_181B8 != 12)
	{
		func_272(sParam0, 5, 4294967295);
	}
}

int func_272(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<32> Var1;
	int iVar2;
	
	func_297();
	func_296();
	Global_181B8 = 0;
	StringCopy(&(Global_181B8.f_3), sParam0, 32);
	Global_181B8.f_B = iParam1;
	unk_0x65C5EBCA17A891FC(1);
	unk_0xD99B71B9E48EB0E6(0);
	unk_0x2C84016B4A95F6BA(0);
	func_292(1);
	func_290(1);
	func_287(0);
	func_286(1);
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 9);
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 6);
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 20);
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 21);
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 5);
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0x377BE9A1BF38C7CE(iVar0))
				{
					unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 5);
				}
			}
		}
	}
	unk_0xA37A90C62806D848(1);
	unk_0x790015DC92C918E2();
	func_285(0);
	func_284(1);
	Global_181B8.f_2 = Global_181DD;
	if (func_283())
	{
		if (func_282())
		{
			if (Global_181DD >= func_279())
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_15DBC[iParam2 /*34*/].f_F, 16))
				{
					if (Global_1B416.f_2378.f_14A[iParam2 /*6*/].f_1 >= 2)
					{
						Global_16AF8 = 1;
					}
				}
			}
		}
		else if (Global_181B8.f_B == 6)
		{
			func_274(iParam2, &Var1);
			if (Var1.f_1F == 1)
			{
				if (Global_1B416.f_4889[iParam2 /*6*/].f_4 >= 2)
				{
					Global_16AF8 = 1;
				}
			}
		}
		else
		{
			iVar2 = func_273(unk_0xBB0808A181D4745C());
			if (iVar2 > 4294967295)
			{
				if (Global_1B416.f_6195.f_4[iVar2] >= 2)
				{
					Global_16AF8 = 1;
				}
			}
		}
	}
	return 1;
}

int func_273(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond4", sParam0))
	{
		return 3;
	}
	return 4294967295;
}

void func_274(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_275(uParam1, "Abigail1", func_277(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 1:
			func_275(uParam1, "Abigail2", func_277(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, 4294967295, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 2:
			func_275(uParam1, "Barry1", func_277(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 3:
			func_275(uParam1, "Barry2", func_277(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 4:
			func_275(uParam1, "Barry3", func_277(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", 4294967295, 0, "", 164, 1, 4294967295, 0, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 5:
			func_275(uParam1, "Barry3A", func_277(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 6:
			func_275(uParam1, "Barry3C", func_277(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 7:
			func_275(uParam1, "Barry4", func_277(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, 4294967295, 4, 2, 800, 2000, func_276(iParam0), 0, 0);
			break;
		
		case 8:
			func_275(uParam1, "Dreyfuss1", func_277(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 9:
			func_275(uParam1, "Epsilon1", func_277(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 10:
			func_275(uParam1, "Epsilon2", func_277(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 11:
			func_275(uParam1, "Epsilon3", func_277(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 12:
			func_275(uParam1, "Epsilon4", func_277(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 13:
			func_275(uParam1, "Epsilon5", func_277(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 14:
			func_275(uParam1, "Epsilon6", func_277(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 15:
			func_275(uParam1, "Epsilon7", func_277(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", 4294967295, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 16:
			func_275(uParam1, "Epsilon8", func_277(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, 4294967295, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 17:
			func_275(uParam1, "Extreme1", func_277(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", 4294967295, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 18:
			func_275(uParam1, "Extreme2", func_277(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 19:
			func_275(uParam1, "Extreme3", func_277(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 20:
			func_275(uParam1, "Extreme4", func_277(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 21:
			func_275(uParam1, "Fanatic1", func_277(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 700, 2000, func_276(iParam0), 1, 0);
			break;
		
		case 22:
			func_275(uParam1, "Fanatic2", func_277(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 700, 2000, func_276(iParam0), 1, 0);
			break;
		
		case 23:
			func_275(uParam1, "Fanatic3", func_277(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 2, 700, 2000, func_276(iParam0), 0, 1);
			break;
		
		case 24:
			func_275(uParam1, "Hao1", func_277(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", 4294967295, 0, "controller_Races", 13, 1, 4294967295, 4, 2, 2000, 500, func_276(iParam0), 0, 1);
			break;
		
		case 25:
			func_275(uParam1, "Hunting1", func_277(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", 4294967295, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 26:
			func_275(uParam1, "Hunting2", func_277(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, 4294967295, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 27:
			func_275(uParam1, "Josh1", func_277(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", 4294967295, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 28:
			func_275(uParam1, "Josh2", func_277(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 29:
			func_275(uParam1, "Josh3", func_277(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 4294967295, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 30:
			func_275(uParam1, "Josh4", func_277(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", 4294967295, 36, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 31:
			func_275(uParam1, "Maude1", func_277(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", 4294967295, 0, "BailBond_Launcher", 0, 1, 4294967295, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 32:
			func_275(uParam1, "Minute1", func_277(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", 4294967295, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 33:
			func_275(uParam1, "Minute2", func_277(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", 4294967295, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 34:
			func_275(uParam1, "Minute3", func_277(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", 4294967295, 10, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 35:
			func_275(uParam1, "MrsPhilips1", func_277(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", 4294967295, 0, "ambient_MrsPhilips", 0, 1, 4294967295, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 36:
			func_275(uParam1, "MrsPhilips2", func_277(iParam0), 0, 11, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 37:
			func_275(uParam1, "Nigel1", func_277(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", 4294967295, 0, "", 177, 1, 4294967295, 1, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 38:
			func_275(uParam1, "Nigel1A", func_277(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 39:
			func_275(uParam1, "Nigel1B", func_277(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		
		case 40:
			func_275(uParam1, "Nigel1C", func_277(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		
		case 41:
			func_275(uParam1, "Nigel1D", func_277(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		
		case 42:
			func_275(uParam1, "Nigel2", func_277(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", 4294967295, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 43:
			func_275(uParam1, "Nigel3", func_277(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", 4294967295, 16, "postRC_Nigel3", 0, 0, 4294967295, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 44:
			func_275(uParam1, "Omega1", func_277(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", 4294967295, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 45:
			func_275(uParam1, "Omega2", func_277(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 46:
			func_275(uParam1, "Paparazzo1", func_277(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", 4294967295, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 47:
			func_275(uParam1, "Paparazzo2", func_277(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", 4294967295, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 48:
			func_275(uParam1, "Paparazzo3", func_277(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", 4294967295, 8, "", 183, 1, 4294967295, 2, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 49:
			func_275(uParam1, "Paparazzo3A", func_277(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 50:
			func_275(uParam1, "Paparazzo3B", func_277(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 51:
			func_275(uParam1, "Paparazzo4", func_277(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", 4294967295, 8, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 52:
			func_275(uParam1, "Rampage1", func_277(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", 4294967295, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 54:
			func_275(uParam1, "Rampage3", func_277(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", 4294967295, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 55:
			func_275(uParam1, "Rampage4", func_277(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", 4294967295, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 56:
			func_275(uParam1, "Rampage5", func_277(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", 4294967295, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 53:
			func_275(uParam1, "Rampage2", func_277(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", 4294967295, 0, "rampage_controller", 0, 0, 4294967295, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 57:
			func_275(uParam1, "TheLastOne", func_277(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 58:
			func_275(uParam1, "Tonya1", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", 4294967295, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 59:
			func_275(uParam1, "Tonya2", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 60:
			func_275(uParam1, "Tonya3", func_277(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 61:
			func_275(uParam1, "Tonya4", func_277(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 62:
			func_275(uParam1, "Tonya5", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_275(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_277(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_278(iParam0) };
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

struct<2> func_278(int iParam0)
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

int func_279()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_280(&(Global_181B8.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_280(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_281(iVar0, 1);
	if (iVar1 == 4294967295 && !bParam1)
	{
	}
	return iVar1;
}

int func_281(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_15DBC[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return 4294967295;
}

int func_282()
{
	if ((((Global_181B8.f_B == 0 || Global_181B8.f_B == 1) || Global_181B8.f_B == 2) || Global_181B8.f_B == 3) || Global_181B8.f_B == 4)
	{
		return 1;
	}
	return 0;
}

int func_283()
{
	if ((((Global_181B8.f_B == 0 || Global_181B8.f_B == 1) || Global_181B8.f_B == 2) || Global_181B8.f_B == 6) || Global_181B8.f_B == 3)
	{
		return 1;
	}
	if (Global_181B8.f_B == 5)
	{
		if (func_273(&(Global_181B8.f_3)) > 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

void func_284(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_A3FC = 1;
	}
	else
	{
		Global_A3FC = 0;
	}
}

void func_285(bool bParam0)
{
	unk_0x8BCB70EB440DED83(bParam0);
	unk_0xBFE31971E49FA500(bParam0);
}

void func_286(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x56FCE5C6DA4AA600();
		unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 3);
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 3))
	{
		unk_0x17D339215F817B98();
		unk_0x0674E58A79778E99(&(Global_181B8.f_14), 3);
	}
}

void func_287(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 4))
		{
			func_289();
			unk_0x0674E58A79778E99(&(Global_181B8.f_14), 4);
		}
	}
	else
	{
		func_288();
		unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 4);
	}
}

void func_288()
{
	Global_56C3.f_5 = 1;
}

void func_289()
{
	Global_56C3.f_5 = 0;
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		func_291();
		if (Global_4C1E.f_1 == 10 || Global_4C1E.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 16);
		}
		Global_4C1E.f_1 = 1;
		if (func_162(0))
		{
			func_292(0);
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

void func_291()
{
	if (Global_4C1E.f_1 == 9 || Global_4C1E.f_1 == 10)
	{
		Global_517A = 0;
		Global_5176 = 1;
	}
}

void func_292(int iParam0)
{
	if (func_295())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_294())
		{
			func_293(1, 1);
		}
		else
		{
			func_293(0, 0);
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
	if (!func_23())
	{
		Global_4C1E.f_1 = 3;
	}
}

void func_293(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_162(0))
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

bool func_294()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 5);
}

bool func_295()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 19);
}

void func_296()
{
	Global_16AF8 = 0;
	Global_16AF9 = 0;
}

void func_297()
{
	Global_181B8 = 13;
	Global_181B8.f_1 = 4294967295;
	Global_181B8.f_2 = 0;
	Global_181B8.f_1E = 0f;
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 25);
	Global_181DA = 0;
	func_284(0);
	func_299();
	func_298();
	Global_181B8.f_12 = 4294967295;
	Global_181B8.f_13 = 4294967295;
}

void func_298()
{
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 22);
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 8);
}

void func_299()
{
	if (Global_181B8.f_10 != 0)
	{
		unk_0xE17FDF9E3068281B(&(Global_181B8.f_10));
		Global_181B8.f_10 = 0;
	}
	if (Global_181B8.f_11 != 0)
	{
		unk_0xE17FDF9E3068281B(&(Global_181B8.f_11));
		Global_181B8.f_11 = 0;
	}
}

void func_300(var uParam0, int iParam1)
{
	func_301(uParam0, iParam1);
}

void func_301(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_302()
{
	if (((Global_181B8 == 13 || Global_181B8 == 10) || Global_181B8 == 11) || Global_181B8 == 12)
	{
		return 0;
	}
	return 1;
}

