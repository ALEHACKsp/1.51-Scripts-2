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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	struct<199> Local_80 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744705981, -178150202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1 } ;
	struct<8> Local_81[32];
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 1;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	vector3 vLocal_105 = { 0f, 0f, 0f };
	vector3 vLocal_106 = { 0f, 0f, 0f };
	int iLocal_107 = 0;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	struct<14> Local_115 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	vector3 vLocal_120[217] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_121[217] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_122 = 0;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	float fLocal_125 = 0f;
	int iLocal_126 = 0;
	struct<105> Local_127 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0 } ;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = -1;
	var uLocal_133 = -1;
	var uLocal_134 = -1;
	var uLocal_135 = -1;
	var uLocal_136 = -1;
	var uLocal_137 = -1;
	var uLocal_138 = 0;
	var uLocal_139 = 32;
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
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
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
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	vector3 vLocal_563 = { 0f, 0f, 0f };
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 12;
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
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
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
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 1065353216;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	int iLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	struct<12> Local_1277 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	int iLocal_1288 = 0;
	int iLocal_1289 = 0;
	int iLocal_1290 = 0;
	int iLocal_1291 = 0;
	int iLocal_1292 = 0;
	int iLocal_1293 = 0;
	int iLocal_1294 = 0;
	vector3 vLocal_1295 = { 0f, 0f, 0f };
	float fLocal_1296 = 0f;
	float fLocal_1297 = 0f;
	vector3 vLocal_1298 = { 0f, 0f, 0f };
	float fLocal_1299 = 0f;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	int iLocal_1304 = 0;
	var uLocal_1305 = 0;
	struct<21> Local_1306 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_1292 = 4294967295;
	iLocal_1293 = 4294967295;
	fLocal_1297 = -1f;
	if (unk_0x8CD06866876216F2() && func_1274(unk_0xD803B885F5E47A62(), 0, 1))
	{
		func_1221(ScriptParam_1306);
	}
	else
	{
		func_1160();
	}
	while (true)
	{
		func_1159();
		if (func_1152() || func_1149(24))
		{
			func_1160();
		}
		if (func_1148())
		{
			func_1160();
		}
		func_1129();
		if (Local_80.f_C5 == 2)
		{
			if (func_1125(1))
			{
				func_1068(0, 5, 0, !unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0), 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
				func_1160();
			}
		}
		switch (func_1067(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_1066() == 1)
				{
					if (func_1065())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 7))
						{
							if (func_1064(11))
							{
								unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 7);
							}
						}
						func_1061();
						vLocal_105 = { vLocal_120[0 /*3*/] };
						fLocal_108 = func_1060();
						fLocal_109 = fLocal_108;
						iLocal_104 = 0;
						uLocal_110 = func_1059();
						if (Local_80.f_C5 == 2)
						{
							func_1057();
						}
						if (!func_1004(1))
						{
							func_1002(func_1003(), 1);
							func_997();
						}
						func_990(136, Local_80.f_A7, 0, 0);
						if (Local_80.f_C5 == 2)
						{
							func_906(4294967295, 0, Local_80.f_C5 == 2, 200, 0, 0);
							if (func_901())
							{
								unk_0x5D96D8530B3D0904(&iLocal_84, 1);
							}
						}
						Local_81[unk_0x57270EE11514DC67() /*8*/] = 1;
					}
				}
				else if (func_1066() == 4)
				{
					Local_81[unk_0x57270EE11514DC67() /*8*/] = 3;
				}
				break;
			
			case 1:
				if (func_1066() == 1)
				{
					func_894();
					func_736();
					func_732();
					func_731();
					func_686();
					func_619();
					func_433();
					func_432();
					func_428();
					func_424();
					func_408();
				}
				else if (func_1066() == 4)
				{
					Local_81[unk_0x57270EE11514DC67() /*8*/] = 3;
				}
				break;
			
			case 3:
				func_407(&(Local_80.f_16));
				if (func_406(&(Local_80.f_16)))
				{
					Local_81[unk_0x57270EE11514DC67() /*8*/] = 4;
				}
				break;
			
			case 2:
				Local_81[unk_0x57270EE11514DC67() /*8*/] = 4;
			
			case 4:
				func_1160();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			if (Local_80.f_C5 == 2)
			{
				if (func_405())
				{
					if (func_1066() < 4)
					{
						Local_80 = 4;
					}
				}
			}
			switch (func_1066())
			{
				case 0:
					if (func_392(&(Local_80.f_A7)))
					{
						func_390();
						if (func_1065())
						{
							func_1061();
							Local_80.f_B8.f_7 = func_389();
							Local_80.f_8 = func_1060();
							Local_80.f_A6 = func_1059();
							Local_80 = 1;
							func_388(&(Local_80.f_20), 0, 0);
							func_385(func_387(136, Local_80.f_A7, 0, 0));
						}
					}
					break;
				
				case 1:
					func_375();
					func_28();
					func_3();
					if (func_1())
					{
						Local_80 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	bool bVar0;
	int iVar1;
	
	if (Local_80.f_15 >= 2)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < unk_0x54EABC0DD106045B())
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
			{
				if (Local_81[iVar1 /*8*/].f_7 < 5)
				{
					bVar0 = false;
				}
			}
			iVar1++;
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (Local_80.f_C5 == 2)
	{
		return;
	}
	bVar1 = true;
	if (Local_80.f_15 > 0)
	{
		if (func_27())
		{
			iVar0 = unk_0x9539D44F3E4492F6(Local_80.f_B8.f_7);
		}
		else
		{
			func_26();
		}
		if (!func_25(vLocal_105, Local_80.f_C2, 1056964608, 0))
		{
			if (!func_24(&uLocal_1302))
			{
				func_388(&uLocal_1302, 0, 0);
			}
			else if (func_23(&uLocal_1302, 500, 0))
			{
				Local_80.f_C2 = { vLocal_105 };
				func_22(&uLocal_1302);
			}
		}
		iVar2 = Global_40001.f_2B97;
		func_4(&(Local_80.f_B8), iVar0, Local_80.f_C2, bVar1, Global_40001.f_2B95, Global_40001.f_2B96, iVar2, 4352);
	}
}

void func_4(var uParam0, int iParam1, vector3 vParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	switch (func_21(uParam0))
	{
		case 0:
			if (unk_0x9BFC2168CB5FCF68(false, 0) == 0)
			{
				unk_0x0BEC04ECA8485A3A(1);
			}
			func_20(uParam0, 1);
			break;
		
		case 1:
			if (!func_19(vParam2))
			{
				if (func_13(uParam0, func_18(vParam2), func_17()))
				{
					if (func_9(uParam0))
					{
						func_7(uParam0);
						func_20(uParam0, 2);
					}
				}
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (func_6(uParam0))
				{
					iVar0 = unk_0x1B50683925F00106(uParam0->f_3);
					iVar1 = unk_0xB177666FAB6F4417(uParam0->f_2);
					func_5(uParam0, iVar0, iVar1, iParam1, fParam4, fParam5, iParam6, iParam7);
				}
			}
			break;
		
		default:
			break;
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!func_24(&(uParam0->f_8)))
	{
		func_388(&(uParam0->f_8), 0, 0);
	}
	else if (func_23(&(uParam0->f_8), 5000, 0))
	{
		func_22(&(uParam0->f_8));
		iVar0 = 1;
	}
	if ((!unk_0xEB6A8945D1AC98A1(iParam1) && !unk_0x437347B10A200C4B(iParam2, 0)) && !unk_0xEB6A8945D1AC98A1(iParam3))
	{
		if (((unk_0xD1960163A3042274(iParam1, 3021937204) != 1 && unk_0xD1960163A3042274(iParam1, 3021937204) != 0) || iParam3 != uParam0->f_4) || iVar0)
		{
			if (iParam3 != uParam0->f_4)
			{
				uParam0->f_4 = iParam3;
				unk_0xA3BF0AA5A2608191(iParam1);
			}
			unk_0xF0AA83C9A59C491C(iParam1, iParam2, iParam3, fParam4, 32, fParam5, iParam6, iParam7);
		}
	}
}

int func_6(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0->f_2) && unk_0xE9F78D191AD5EDBA(uParam0->f_3))
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xA5FBBC2F619A4DE2(uParam0->f_2);
	unk_0xAA6B3A4292417750(iVar0, true, true, true, true, false, false, 0, false);
	unk_0x120A395B0ECB8EA5(iVar0, false);
	iVar1 = unk_0xB177666FAB6F4417(uParam0->f_2);
	unk_0x1F85B199848ECF4E(iVar1, false, 0);
	unk_0x5072321D4A2E8A10(iVar1, false);
	iVar2 = unk_0xA5FBBC2F619A4DE2(uParam0->f_3);
	unk_0xE121AE1BBF90E186(iVar2, true);
	unk_0x56FDC9ADE35F7DB0(iVar1, true, true, 0);
	unk_0x552A77B585309C2B(iVar1, 0.3f);
	unk_0x873BCADC75FF6D20(iVar1);
	unk_0xAC0C6241732E36F6(iVar1);
	func_8(1);
}

void func_8(bool bParam0)
{
	if (bParam0)
	{
		if (Global_240000 == 0)
		{
			Global_240000 = 1;
		}
	}
	else if (Global_240000 == 1)
	{
		Global_240000 = 0;
	}
}

int func_9(var uParam0)
{
	int iVar0;
	
	if (unk_0xE9F78D191AD5EDBA(uParam0->f_3))
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(uParam0->f_1);
	if (unk_0xB87F6CF6E5628C67(uParam0->f_1))
	{
		if (func_11(uParam0->f_2))
		{
			iVar0 = unk_0xA5FBBC2F619A4DE2(uParam0->f_2);
			if (unk_0xAFE0D3608EDA7039(iVar0))
			{
				if (func_10(&(uParam0->f_3), uParam0->f_2, 4, uParam0->f_1, 4294967295, 1, 1, 1))
				{
					return 1;
				}
			}
			else
			{
				unk_0x0C8A454B494DAA0D(iVar0);
			}
		}
	}
	return 0;
}

int func_10(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	if (!unk_0xE9F78D191AD5EDBA(iParam1))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), bParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_12(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0;
}

int func_12(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0))
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

int func_13(var uParam0, vector3 vParam1, float fParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (unk_0xE9F78D191AD5EDBA(uParam0->f_2))
	{
		return 1;
	}
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = false;
	bVar4 = true;
	unk_0x523BCC9DC80CD82F(*uParam0);
	if (unk_0xB87F6CF6E5628C67(*uParam0))
	{
		if (!func_19(vParam1))
		{
			if (func_14(&(uParam0->f_2), *uParam0, vParam1, fParam2, bVar0, bVar1, bVar2, bVar3, bVar4, 1, 0, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0;
	}
	if (!unk_0xE75B31D140F2F10B(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == 4262088844)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_26B66F.f_1974 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam13)
			{
				unk_0x271603AF9C0C7EB3(iVar1, true);
			}
			unk_0x120A395B0ECB8EA5(iVar1, bParam8);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam6)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 1);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 1);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam7);
			unk_0x8E44A2B22BBBAFE4(iVar1, 1);
			if (bParam10)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 5, 5, 1f);
			}
			func_15(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_15(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_16(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 4294967295)
	{
		if ((Global_24B2D0.f_B60[1 /*6*/].f_5 == iParam3 && Global_24B2D0.f_B60[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_24B2D0.f_B60[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_24B2D0.f_B60[iVar0 /*6*/] = { Global_24B2D0.f_B60[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_24B2D0.f_B60[1 /*6*/] = { vParam0 };
		Global_24B2D0.f_B60[1 /*6*/].f_3 = fParam1;
		Global_24B2D0.f_B60[1 /*6*/].f_4 = iParam2;
		Global_24B2D0.f_B60[1 /*6*/].f_5 = iParam3;
	}
}

int func_16(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > 4294967295)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return 4294967295;
}

float func_17()
{
	return Global_440000.f_1E4A1[0 /*325*/].f_3;
}

Vector3 func_18(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0 = { vParam0 };
	vVar0.z = (vVar0.z + 100f);
	return vVar0;
}

int func_19(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

int func_21(var uParam0)
{
	return uParam0->f_5;
}

void func_22(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_23(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_388(uParam0, bParam2, 0);
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

bool func_24(var uParam0)
{
	return uParam0->f_1;
}

int func_25(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_26()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = func_389();
	iVar2 = 0;
	while (iVar2 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar2)))
		{
			iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar2));
			if (func_1274(iVar0, 1, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar2 /*8*/].f_1, 0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar2 /*8*/].f_1, 1))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar2 /*8*/].f_1, 11))
						{
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (Local_80.f_B8.f_7 != iVar1)
	{
		Local_80.f_B8.f_7 = iVar1;
	}
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	if (Local_80.f_B8.f_7 != func_389())
	{
		if (func_1274(Local_80.f_B8.f_7, 1, 1))
		{
			if (unk_0xFB75B0F82CA525F6(Local_80.f_B8.f_7))
			{
				iVar0 = unk_0x7B9C1F53FE442D06(Local_80.f_B8.f_7);
				if (unk_0x81A93C8315C28F58(iVar0))
				{
					iVar1 = iVar0;
					if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar1 /*8*/].f_1, 1))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar1 /*8*/].f_1, 11))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar1 /*8*/].f_1, 0))
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

void func_28()
{
	switch (Local_80.f_15)
	{
		case 0:
			func_370();
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 2))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 0))
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_1), 8);
					Local_80.f_15 = 1;
					unk_0x679C321F8CAA2CFA(vLocal_120[0 /*3*/], (func_1060() + 50f), 1);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 13))
			{
				unk_0x5D96D8530B3D0904(&(Local_80.f_1), 8);
				Local_80.f_15 = 1;
				unk_0x679C321F8CAA2CFA(vLocal_120[0 /*3*/], (func_1060() + 50f), 1);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 12))
			{
				Local_80.f_15 = 3;
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 16))
			{
				func_37();
				Local_80.f_15 = 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 18))
			{
				Local_80.f_15 = 3;
			}
			break;
		
		case 1:
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 9))
			{
				Local_80.f_15 = 2;
			}
			break;
		
		case 2:
			func_33();
			func_29(0);
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
			{
				Local_80.f_15 = 3;
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 10))
			{
				Local_80.f_15 = 3;
			}
			break;
		
		case 3:
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 16))
			{
				func_37();
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 5))
			{
				if (Local_80.f_15 == 3)
				{
					Local_80.f_15 = 5;
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			break;
	}
}

void func_29(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar10;
	bool bVar11;
	
	if (bParam0)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			return;
		}
	}
	if (Local_80.f_C5 == 0 || Local_80.f_C5 == 2)
	{
		fLocal_1296 = func_32();
	}
	iVar0 = iLocal_104 + 1;
	if (!func_31(vLocal_105, 0f, 0f, 0f, 0))
	{
		if (!func_31(vLocal_1295, vLocal_105, 0))
		{
			vLocal_1295 = { vLocal_105 };
		}
	}
	if (iVar0 < 217)
	{
		vVar1 = { vLocal_120[iVar0 /*3*/] };
		fVar5 = SYSTEM::VDIST2(vLocal_105, vVar1);
		if (!func_31(vLocal_120[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			if (!func_31(vLocal_120[iLocal_104 /*3*/], 0f, 0f, 0f, 0))
			{
				if (fVar5 < (0.1f * 0.1f))
				{
					vLocal_105 = { vLocal_120[iVar0 /*3*/] };
					iLocal_104++;
					bVar7 = true;
				}
				else
				{
					vVar2 = { vVar1 - vLocal_105 };
					vVar3 = { func_30(vVar2) };
					if (!unk_0xBFF81ED3B99522C7())
					{
						vVar4 = { vLocal_105 + vVar3 * FtoV(unk_0x6117725E0134737F()) * Vector(Local_80.f_A6, Local_80.f_A6, Local_80.f_A6) * Vector(fLocal_1296, fLocal_1296, fLocal_1296) };
					}
					else
					{
						vVar4 = { vLocal_105 + vVar3 * FtoV(unk_0x6117725E0134737F()) * Vector(Local_80.f_A6, Local_80.f_A6, Local_80.f_A6) };
					}
					fVar6 = SYSTEM::VDIST2(vLocal_105, vVar4);
					if (fVar6 > fVar5)
					{
						vVar9 = { vVar1 };
					}
					else
					{
						vVar9 = { vVar4 };
					}
				}
			}
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 3))
			{
				unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 3);
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
			{
				if (!func_31(vLocal_120[(iLocal_122 - 1) /*3*/], 0f, 0f, 0f, 0))
				{
					vVar9 = { vLocal_120[(iLocal_122 - 1) /*3*/] };
				}
			}
		}
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		if (!func_24(&(Local_80.f_AC)))
		{
			func_388(&(Local_80.f_AC), 0, 0);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
		{
			if (!func_23(&(Local_80.f_AC), 16000, 0))
			{
				if (!bVar7)
				{
					Local_80.f_B0 = { vVar9 };
					Local_80.f_AB = iLocal_104;
				}
				else
				{
					Local_80.f_B0 = { vLocal_105 };
					Local_80.f_AB = iLocal_104;
				}
			}
			else if (func_23(&(Local_80.f_AC), 16500, 0))
			{
				func_22(&(Local_80.f_AC));
			}
		}
	}
	if (!func_31(Local_80.f_B0, 0f, 0f, 0f, 0))
	{
		if (iLocal_107 != Local_80.f_AB || !func_31(vLocal_106, Local_80.f_B0, 0))
		{
			if (iLocal_107 != Local_80.f_AB)
			{
				iLocal_107 = Local_80.f_AB;
				vLocal_106 = { Local_80.f_B0 };
				vLocal_105 = { vLocal_106 };
				iLocal_104 = iLocal_107;
				bVar7 = true;
			}
			else
			{
				vLocal_106 = { Local_80.f_B0 };
				vVar10 = { Local_80.f_B0 };
			}
			bVar8 = true;
		}
	}
	if (!bVar7)
	{
		if (bVar8)
		{
			bVar11 = true;
			if (bVar11)
			{
				vLocal_105 = { vVar10 };
			}
		}
		else
		{
			vLocal_105 = { vVar9 };
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
	{
		if (!func_31(vLocal_105, vLocal_120[(iLocal_122 - 1) /*3*/], 0))
		{
			vLocal_105 = { vLocal_120[(iLocal_122 - 1) /*3*/] };
		}
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_102))
	{
		unk_0x2F9282246F89FFD1(iLocal_102, vLocal_105);
	}
}

Vector3 func_30(vector3 vParam0)
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

bool func_31(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

float func_32()
{
	return 0.9f;
}

void func_33()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (!func_24(&(Local_80.f_1A)))
	{
		func_388(&(Local_80.f_1A), 0, 0);
	}
	if (!func_23(&(Local_80.f_1A), 10000, 0))
	{
		return;
	}
	else if (!func_23(&(Local_80.f_1A), 20000, 0))
	{
		if (!func_24(&uLocal_113))
		{
			func_388(&uLocal_113, 0, 0);
		}
		if (func_23(&uLocal_113, 1000, 0))
		{
			fVar0 = Local_80.f_A6;
			if (fVar0 < func_36())
			{
				fVar0 = (fVar0 + 0.5f);
				fVar0 = (fVar0 * func_35());
				if (fVar0 > func_36())
				{
					fVar0 = func_36();
				}
				Local_80.f_A6 = fVar0;
			}
			func_22(&uLocal_113);
		}
	}
	else if (fLocal_124 <= (fLocal_123 / 2f))
	{
		if (Local_80.f_A6 != func_36())
		{
			Local_80.f_A6 = func_36();
		}
	}
	else if (!func_24(&uLocal_113))
	{
		func_388(&uLocal_113, 0, 0);
	}
	else if (func_23(&uLocal_113, 1000, 0))
	{
		if (Local_80.f_A6 > func_34())
		{
			fVar1 = (func_36() - func_34());
			fVar3 = (fLocal_123 / 2f);
			fVar2 = ((fLocal_124 - fVar3) / fVar3);
			fVar4 = (func_36() - (fVar1 * fVar2));
			fVar4 = (fVar4 * 0.8f);
			fVar4 = (fVar4 * func_35());
			if (fVar4 < func_34())
			{
				fVar4 = func_34();
			}
			Local_80.f_A6 = fVar4;
			func_22(&uLocal_113);
		}
	}
}

float func_34()
{
	return Global_40001.f_2B8C;
}

float func_35()
{
	return Global_40001.f_2B8D;
}

float func_36()
{
	return Global_40001.f_2B8A;
}

void func_37()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	char cVar6[32];
	struct<4> Var7;
	struct<4> Var8;
	struct<4> Var9;
	int iVar10;
	int iVar11;
	struct<20> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	struct<4> Var18;
	struct<4> Var19;
	var uVar20;
	var uVar21;
	int iVar22;
	var uVar23;
	int iVar24;
	char[] cVar25[8];
	var uVar26;
	int iVar27;
	var uVar28;
	char cVar29[32];
	int iVar30;
	var uVar31;
	struct<4> Var32;
	struct<4> Var33;
	struct<4> Var34;
	
	iVar5 = 4294967295;
	Var9 = { func_369() };
	iVar10 = func_389();
	if (!func_367(unk_0xD803B885F5E47A62(), 0))
	{
		iVar5 = unk_0x57270EE11514DC67();
		iVar10 = unk_0xD803B885F5E47A62();
	}
	else
	{
		iVar11 = Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_2E4;
		if (unk_0x40B8C182D63932FC(iVar11))
		{
			if (unk_0xFB75B0F82CA525F6(iVar11))
			{
				iVar10 = iVar11;
				iVar5 = unk_0x7B9C1F53FE442D06(iVar11);
			}
		}
	}
	Var12.f_2 = 1065353216;
	Var12.f_3 = 1065353216;
	Var12.f_4 = 1;
	Var12.f_9 = 4294967295;
	Var12.f_12 = 4294967295;
	Var12.f_13 = 4294967295;
	if (Local_80.f_C5 != 2)
	{
		if (func_366(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 2);
			return;
		}
	}
	else if (func_359())
	{
		unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 2);
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 2))
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 12))
	{
		unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 2);
		return;
	}
	if (!func_1004(1))
	{
		if (iVar5 > 4294967295)
		{
			if (iVar10 != func_389())
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 17))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 16))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 18))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar5 /*8*/].f_1, 0))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 17))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 10))
									{
										if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3) && unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 11))
										{
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 19))
											{
												if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
												{
													if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
													{
														if (unk_0xAFE0D3608EDA7039(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
														{
															unk_0x5D96D8530B3D0904(&iLocal_82, 19);
														}
													}
												}
											}
											if (unk_0xEAE0D21A50E6C7F4(Local_80.f_A, iVar5))
											{
												if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar5 /*8*/].f_1, 1))
												{
													bVar17 = true;
												}
											}
											if (func_358(&iVar13, &iVar14, &iVar15))
											{
												if (iVar15 > 2)
												{
													if (func_357(iVar10, iVar13, iVar14))
													{
														bVar2 = true;
													}
													if (!bVar2)
													{
														bVar16 = true;
													}
												}
												else if (iVar15 == 2)
												{
													if (iVar10 == iVar13 || iVar10 == iVar14)
													{
														Var18 = { func_356() };
														if (iVar10 == iVar13)
														{
															func_354(func_355(), &Var18, unk_0x6E524813889AECF8(iVar14), 1, 15000, &Var9, 2);
														}
														else
														{
															func_354(func_355(), &Var18, unk_0x6E524813889AECF8(iVar13), 1, 15000, &Var9, 2);
														}
														func_353(1);
													}
													else
													{
														if (func_357(iVar10, iVar13, iVar14))
														{
															bVar2 = true;
														}
														if (!bVar2)
														{
															Var19 = { func_352() };
															func_350(func_351(), func_389(), func_389(), 4294967295, &Var19, &Var9, 1, 15000, 2, unk_0x6E524813889AECF8(iVar13), unk_0x6E524813889AECF8(iVar14), 0);
														}
														func_353(0);
													}
												}
												if (!bVar2 || (bVar2 && iVar4))
												{
													if (iVar5 == unk_0x57270EE11514DC67())
													{
														func_338(bVar17, &iVar0, &iVar1, iVar15);
														if (Local_80.f_C5 != 2)
														{
															Local_1277.f_6 = iVar0;
															Local_1277.f_7 = iVar1;
															Global_2594A0 = iVar0;
															if (iVar0 > 0)
															{
																if (func_337())
																{
																	func_326(968073639, iVar0, &uVar20, 0, 1, 0);
																}
																else
																{
																	unk_0x9AC21D04D5646532(iVar0, "AM_PENNED_IN", &uVar21);
																}
															}
															if (!func_325())
															{
																if (Local_1277.f_6 > 0)
																{
																	func_324(11, Local_1277.f_6);
																}
															}
															func_323();
															func_322(0, "", 2658791846, 1487716476, iVar1, 1, 4294967295, 0);
														}
														else
														{
															Var12 = iVar0;
															Var12.f_1 = iVar1;
															func_137(200, bVar17, &Var12, 0);
														}
													}
													unk_0x5D96D8530B3D0904(&iLocal_82, 17);
												}
											}
											else if (bVar17)
											{
												if (iVar5 == unk_0x57270EE11514DC67())
												{
													func_338(1, &iVar0, &iVar1, 1);
													if (Local_80.f_C5 != 2)
													{
														Local_1277.f_6 = iVar0;
														Local_1277.f_7 = iVar1;
														Global_2594A0 = iVar0;
														if (iVar0 > 0)
														{
															if (func_337())
															{
																func_326(968073639, iVar0, &iVar22, 0, 1, 0);
															}
															else
															{
																unk_0x9AC21D04D5646532(iVar0, "AM_PENNED_IN", &uVar23);
															}
														}
														if (!func_325())
														{
															if (Local_1277.f_6 > 0)
															{
																func_324(11, Local_1277.f_6);
															}
														}
														func_323();
														func_322(0, "", 2658791846, 1487716476, iVar1, 1, 4294967295, 0);
													}
													else
													{
														Var12 = iVar0;
														Var12.f_1 = iVar1;
														func_137(200, 1, &Var12, 0);
													}
												}
												Var7 = { func_136() };
												func_134(func_135(), "PEN_WIN", &Var7, 1, 15000, 2, 1, 0);
												unk_0x5D96D8530B3D0904(&iLocal_82, 17);
												func_353(1);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
											{
												if (func_1274(iVar10, 1, 1))
												{
													iVar13 = func_133();
													if (iVar13 != func_389())
													{
														if (unk_0x40B8C182D63932FC(iVar13))
														{
															if (!bVar2)
															{
																if (func_131(iVar13, 1))
																{
																	iVar24 = func_130(iVar13);
																	if (iVar24 > 4294967295)
																	{
																		uVar26 = func_128(iVar24);
																		cVar25 = func_118(iVar13);
																		bVar3 = true;
																	}
																}
															}
															if (Local_80.f_C5 == 2)
															{
																bVar2 = false;
																bVar3 = false;
															}
															if (!bVar2 && !bVar3)
															{
																Var8 = { func_117() };
																func_354(func_351(), &Var8, unk_0x6E524813889AECF8(iVar13), 1, 15000, &Var9, 2);
															}
															else if (bVar3)
															{
																Var8 = { func_116() };
																func_68(func_351(), &Var9, &Var8, cVar25, uVar26, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
															}
															else if (unk_0xFB75B0F82CA525F6(iVar13))
															{
																Var8 = { func_67() };
																func_354(91, &Var8, unk_0x6E524813889AECF8(iVar13), 1, 15000, &Var9, 2);
																iVar4 = 1;
															}
															else
															{
																Var8 = { func_117() };
																func_354(func_351(), &Var8, unk_0x6E524813889AECF8(iVar13), 1, 15000, &Var9, 2);
																iVar4 = 1;
															}
														}
													}
													else
													{
														cVar6 = { func_66() };
														func_134(func_351(), &Var9, &cVar6, 1, 15000, 2, 1, 0);
													}
													if (!bVar2 || (bVar2 && iVar4))
													{
														if (iVar5 == unk_0x57270EE11514DC67())
														{
															func_338(0, &iVar0, &iVar1, 1);
															if (Local_80.f_C5 != 2)
															{
																Local_1277.f_6 = iVar0;
																Local_1277.f_7 = iVar1;
																Global_2594A0 = iVar0;
																if (iVar0 > 0)
																{
																	if (func_337())
																	{
																		func_326(968073639, iVar0, &iVar27, 0, 1, 0);
																	}
																	else
																	{
																		unk_0x9AC21D04D5646532(iVar0, "AM_PENNED_IN", &uVar28);
																	}
																}
																if (!func_325())
																{
																	if (Local_1277.f_6 > 0)
																	{
																		func_324(11, Local_1277.f_6);
																	}
																}
																func_323();
																func_322(0, "", 2658791846, 1487716476, iVar1, 1, 4294967295, 0);
															}
															else
															{
																Var12 = iVar0;
																Var12.f_1 = iVar1;
																func_137(200, 0, &Var12, 0);
															}
														}
														unk_0x5D96D8530B3D0904(&iLocal_82, 17);
													}
													func_353(0);
												}
											}
											if (bVar16)
											{
												cVar29 = { func_65() };
												if (bVar17)
												{
													func_134(func_355(), &Var9, &cVar29, 1, 4294967295, 2, 1, 0);
												}
												else
												{
													func_134(func_355(), &Var9, &cVar29, 1, 4294967295, 2, 1, 0);
												}
												func_353(0);
											}
										}
									}
									else
									{
										cVar6 = { func_66() };
										func_134(func_351(), &Var9, &cVar6, 1, 15000, 2, 1, 0);
										if (iVar5 == unk_0x57270EE11514DC67())
										{
											func_338(0, &iVar0, &iVar1, 1);
											if (Local_80.f_C5 != 2)
											{
												Local_1277.f_6 = iVar0;
												Local_1277.f_7 = iVar1;
												Global_2594A0 = iVar0;
												if (iVar0 > 0)
												{
													if (func_337())
													{
														func_326(968073639, iVar0, &iVar30, 0, 1, 0);
													}
													else
													{
														unk_0x9AC21D04D5646532(iVar0, "AM_PENNED_IN", &uVar31);
													}
												}
												func_323();
												func_322(0, "", 2658791846, 1487716476, iVar1, 1, 4294967295, 0);
											}
											else
											{
												Var12 = iVar0;
												Var12.f_1 = iVar1;
												func_137(200, 0, &Var12, 0);
											}
										}
										unk_0x5D96D8530B3D0904(&iLocal_82, 17);
									}
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 17))
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar5 /*8*/].f_1, 5))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar5 /*8*/].f_1, 1))
										{
											unk_0x55D0A2DB35045A35(iLocal_562);
											unk_0x43A06902454A1172(iLocal_562);
										}
									}
									if (unk_0x0F1CCD77290EE12F())
									{
										unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 2);
									}
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 10))
							{
								if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
								{
									iVar13 = func_133();
									if (iVar13 != func_389())
									{
										if (!func_358(&iVar13, &iVar14, &iVar15))
										{
											Var32 = { func_117() };
											func_62(&Var32, iVar13, 1, 0, 0, 0, 1, 0);
										}
										else if (iVar15 == 2)
										{
											Var33 = { func_61() };
											func_58(&Var33, iVar13, iVar14, 1, 1, 0, 0);
										}
										else
										{
											Var34 = { func_65() };
											func_53(&Var34);
										}
									}
									unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 2);
									if (Local_80.f_C5 != 2)
									{
										func_48(0);
									}
									else
									{
										func_353(0);
									}
								}
							}
							else
							{
								unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 2);
								if (Local_80.f_C5 != 2)
								{
									func_48(0);
								}
								else
								{
									func_353(0);
								}
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 2))
						{
							unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 2);
							if (func_38(unk_0xD803B885F5E47A62()) >= 2)
							{
								func_134(func_351(), &Var9, "CAG_NOP", 1, 15000, 2, 1, 0);
							}
							func_353(0);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 2))
					{
						unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 2);
						if (func_38(unk_0xD803B885F5E47A62()) >= 2)
						{
							func_134(func_351(), &Var9, "CAG_NOP", 1, 15000, 2, 1, 0);
						}
						func_353(0);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 2))
				{
					unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 2);
					if (func_38(unk_0xD803B885F5E47A62()) >= 2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 1))
						{
							func_134(func_351(), &Var9, "CAG_PRES", 1, 15000, 2, 1, 0);
						}
					}
					func_353(0);
				}
			}
			else if (func_367(unk_0xD803B885F5E47A62(), 0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3) && unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 11))
				{
					unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 2);
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 10))
				{
					unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 2);
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 2))
	{
		if ((unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3) || unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 10)) || unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 16))
		{
			unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 2);
		}
	}
}

int func_38(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_47(iParam0) && !func_46(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 8));
	bVar2 = func_45(iParam0);
	uVar3 = func_44();
	bVar4 = func_359();
	if ((bVar1 && (func_43(iParam0) || func_42(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_41(iParam0)) && !func_39(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_26B66F.f_1404.f_D8 != iVar0)
	{
		Global_26B66F.f_1404.f_D8 = iVar0;
	}
	return iVar0;
}

bool func_39(int iParam0)
{
	return func_40(iParam0, 19);
}

bool func_40(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_40(iParam0, 9);
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

bool func_44()
{
	return Global_1406A2;
}

bool func_45(int iParam0)
{
	return func_40(iParam0, 20);
}

bool func_46(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 2);
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18D84D[iVar0 /*615*/] != 4294967295;
	}
	return 0;
}

void func_48(bool bParam0)
{
	if (bParam0)
	{
		if (func_49(1))
		{
			unk_0x5D96D8530B3D0904(&Global_180713, 1);
		}
	}
	else if (func_49(2))
	{
		unk_0x5D96D8530B3D0904(&Global_180713, 2);
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = func_50(2534, 4294967295, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0) && unk_0xEAE0D21A50E6C7F4(iVar0, 1)) && unk_0xEAE0D21A50E6C7F4(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 3) && unk_0xEAE0D21A50E6C7F4(iVar0, 4)) && unk_0xEAE0D21A50E6C7F4(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 6) && unk_0xEAE0D21A50E6C7F4(iVar0, 7)) && unk_0xEAE0D21A50E6C7F4(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 9) && unk_0xEAE0D21A50E6C7F4(iVar0, 10)) && unk_0xEAE0D21A50E6C7F4(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_50(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_51(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_52();
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

int func_52()
{
	return Global_1407E9;
}

int func_53(char* sParam0)
{
	int iVar0;
	
	iVar0 = 4294967295;
	unk_0x1E64CE678ED5F61E(sParam0);
	iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	func_54(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_54(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_57() || !unk_0xA14BB9332558B949()) || !func_367(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_55(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = iParam0;
		Global_197EBE.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_197EBE.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_197EBE.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_197EBE - 1))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_56(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_197EBE++;
	if (Global_197EBE > 5)
	{
		Global_197EBE = 5;
		return Global_197EBE;
	}
	return (Global_197EBE - 1);
}

void func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_57()
{
	return unk_0xC146D5FBD23C6954(2532323046);
}

int func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var2;
	
	iVar0 = 4294967295;
	if ((unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam2)) || iParam6)
	{
		if (!bParam5)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam2), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam2), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		if (unk_0xEA6BC48857E0AC4C(&Var2))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(iParam3);
		unk_0xD06AC7C87A34A6AD(func_59(&Var1));
		unk_0x3A820E495A7BA3E5(iParam4);
		unk_0xD06AC7C87A34A6AD(func_59(&Var2));
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		func_54(22, sParam0, 1, &Var1, 0, 0, 0, 0f, 0, &Var2, 0, 0);
	}
	return iVar0;
}

var func_59(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_60(&cVar0);
}

var func_60(char[4] cParam0)
{
	return cParam0;
}

struct<4> func_61()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_WON2P", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WON2P", 16);
			break;
	}
	return Var0;
}

int func_62(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(iParam2);
		unk_0xD06AC7C87A34A6AD(func_59(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		}
		else
		{
			Global_265942 = { func_64(iParam1) };
			if (unk_0xD9DA83C40D038174(&Global_2658FC, 35, &Global_265942))
			{
				iVar2 = 0;
				if (unk_0x7F8A39872A07D2CE(&(Global_2658FC.f_16), "Leader") && Global_2658FC.f_1E == 0)
				{
					iVar2 = 1;
				}
				if (Global_2658FC.f_15 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_63(&Var1) };
					}
					iVar0 = unk_0x0D020422A92A2236(iVar3, unk_0x95A6C443DD6B08B2(&Global_2658FC, 35), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar2, 0, Global_2658FC, &Var1, Global_140CF2, Global_140CF3, Global_140CF4);
				}
				else
				{
					iVar0 = unk_0xDCEBC63DB246F9AE(iVar3, unk_0x95A6C443DD6B08B2(&Global_2658FC, 35), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar2, 0, Global_2658FC, Global_140CF2, Global_140CF3, Global_140CF4);
				}
			}
			else
			{
				iVar0 = unk_0x47AFB2993A42BD03(0, 1);
			}
		}
		func_54(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_63(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_64(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

struct<4> func_65()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAWD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_DRAWD", 16);
			break;
	}
	return Var0;
}

struct<4> func_66()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_NWN", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NWN", 16);
			break;
	}
	return Var0;
}

struct<4> func_67()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONPG", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WONPG", 16);
			break;
	}
	return Var0;
}

int func_68(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_389();
	iVar1 = func_389();
	iVar2 = func_389();
	return func_69(uParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_69(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_115(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = uParam4;
	Var0.f_47 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_48 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_47 = iParam14;
	}
	func_113(&(Var0.f_45), 4);
	return func_70(&Var0);
}

int func_70(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2537E2.f_BE5)
		{
			return 0;
		}
	}
	func_85(uParam0, uParam0->f_11);
	func_82(uParam0);
	if (func_81())
	{
		func_82(uParam0);
	}
	if (func_80(uParam0->f_1))
	{
		func_73();
		if (Global_2537E2.f_AA3[0 /*80*/].f_2 == 0)
		{
			Global_2537E2.f_AA3[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2537E2.f_AA3[0 /*80*/].f_1 == 13 || Global_2537E2.f_AA3[0 /*80*/].f_1 == 53) || Global_2537E2.f_AA3[0 /*80*/].f_1 == 54) || Global_2537E2.f_AA3[0 /*80*/].f_1 == 58)
		{
			Global_2537E2.f_AA3[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2537E2.f_AA3[iVar0 + 1 /*80*/] = { Global_2537E2.f_AA3[iVar0 /*80*/] };
			iVar0 = (iVar0 + 4294967295);
		}
		Global_2537E2.f_AA3[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 == 0)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_73();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_113(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 2);
				Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_72(uParam0->f_45, 128))
			{
				if (func_71(Global_2537E2.f_AA3[iVar0 /*80*/].f_1))
				{
					Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
					func_113(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_72(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_73()
{
	bool bVar0;
	
	if (Global_2537E2.f_BE6)
	{
		return;
	}
	if (!Global_12C5A)
	{
		Global_12C5A = 1;
		bVar0 = true;
	}
	func_74();
	if (bVar0)
	{
		Global_12C5A = 0;
	}
}

void func_74()
{
	Global_2537E2.f_BE7 = 0;
	Global_2537E2.f_BE7.f_242 = 0;
	func_78(&(Global_2537E2.f_BE7.f_1));
	Global_2537E2.f_BE7.f_1.f_1 = 0;
	func_75(&(Global_2537E2.f_BE7.f_1));
}

void func_75(var uParam0)
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
				if (unk_0x757EF87A33649210() && !func_77(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_76(0);
}

void func_76(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_77(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

void func_78(var uParam0)
{
	func_79(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_79(var uParam0)
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

int func_80(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_81()
{
	return Global_2564C8.f_11;
}

void func_82(var uParam0)
{
	if (func_84(uParam0->f_1))
	{
		uParam0->f_48 = func_83();
	}
}

int func_83()
{
	return 21;
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_85(var uParam0, int iParam1)
{
	if (func_84(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_389() || !func_1274(iParam1, 0, 1))
	{
		return;
	}
	if (func_71(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_86(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

int func_86(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_111(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == 4294967294)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > 4294967295 && iVar0 < 4)
		{
			if (Global_440000.f_2E673[iVar0] != 4294967295)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_111(unk_0xD803B885F5E47A62()) || (func_110() && func_109())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 31)) && !bParam4)
	{
		iVar1 = func_108();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 4294967295)
				{
					if (func_1274(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_440000.f_2E673[iParam1] != 4294967295)
							{
								return func_106(iParam1, iParam0, 0);
							}
							else
							{
								return func_99(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_99(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_440000.f_2E673[iParam1] != 4294967295)
				{
					return func_106(iParam1, iParam0, 0);
				}
				else
				{
					return func_87(0, 4294967295, 0);
				}
			}
			else
			{
				return func_87(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_440000.f_2E673[iParam1] != 4294967295)
		{
			return func_106(iParam1, iParam0, 0);
		}
		else
		{
			return func_99(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_99(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_87(bool bParam0, int iParam1, bool bParam2)
{
	return func_88(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_88(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_98() || (func_97() && func_95())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_94(iParam2, iVar0);
		}
		else
		{
			return func_94(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_93(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_92(1);
				}
				else
				{
					return func_92(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 20))
			{
				return func_89(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_89(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_92(1);
	}
	return func_92(0);
}

int func_89(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_91(iParam0, iParam1, iParam3);
	if (func_90(Global_440000.f_2F9AE, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_38DB3 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_40001.f_233B[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_91(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_93(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_92(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > 4294967295 && iParam1 > 4294967295) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 1);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 2);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 4);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 5);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 6);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 8);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 9);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 10);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 12);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 13);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 14);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_94(int iParam0, int iParam1)
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_91(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_95()
{
	if (func_96())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 4);
}

bool func_96()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 12);
}

bool func_97()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0);
}

int func_98()
{
	if (func_96() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 4294967294)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > 4294967295)
	{
		if (Global_184507[iVar2 /*876*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 4294967295)
		{
			if (func_102())
			{
				iVar3 = func_130(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_128(iVar3);
				}
			}
			if ((func_101(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18)) || ((func_93(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18)))
			{
				return func_92(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 26))
			{
				return func_100(1);
			}
			else
			{
				return func_88(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_18060A == 1 && Global_180614 == 0))
			{
				return func_92(1);
			}
			else
			{
				return func_88(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_130(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_128(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_100(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_101(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 4294967294)
	{
		if (iParam3 == 0)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 4294967295 && unk_0x08067D4957B73C02(iParam1) == 4294967295)
			{
				return 0;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 4294967295 && iParam2 == 4294967295)
			{
				return 0;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == iParam2;
	}
	return unk_0x08067D4957B73C02(iParam0) == iParam2;
}

int func_102()
{
	if (((func_105() || func_104()) || func_81()) || func_103())
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return Global_2564C8.f_13;
}

var func_104()
{
	return Global_2564C8.f_10;
}

var func_105()
{
	return Global_2564C8.f_F;
}

int func_106(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_102())
	{
		iVar2 = func_130(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_128(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_389())
	{
		if (Global_440000.f_2E673[iParam0] != 4294967295 && Global_440000.f_2E673[iParam0] <= 4)
		{
			if (Global_440000.f_2E673[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_440000.f_2E673[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_440000.f_2E673[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_440000.f_2E673[iParam0] == 4)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_440000.f_2E673[iParam0];
			}
		}
		else
		{
			iVar0 = func_88(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 13))
		{
			iVar0 = func_107(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 26) && !func_93(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_100(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_107(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_440000.f_38E2F;
			break;
		
		case 1:
			iVar0 = Global_440000.f_38E30;
			break;
		
		case 2:
			iVar0 = Global_440000.f_38E31;
			break;
		
		case 3:
			iVar0 = Global_440000.f_38E32;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_108()
{
	return Global_240006.f_2;
}

bool func_109()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 4);
}

bool func_110()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 14);
}

int func_111(int iParam0)
{
	if (func_367(iParam0, 0))
	{
		return 1;
	}
	if (func_112())
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

bool func_112()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 3);
}

void func_113(var uParam0, int iParam1)
{
	func_114(uParam0, iParam1);
}

void func_114(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_115(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_11 = func_389();
	uParam1->f_12 = func_389();
	uParam1->f_13 = func_389();
	uParam1->f_14 = func_389();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 1;
	uParam1->f_4A = 1;
	uParam1->f_4B = 1;
	uParam1->f_4C = 0;
	uParam1->f_4D = 0;
	uParam1->f_49 = 0;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

struct<4> func_116()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONPG2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WONPG2", 16);
			break;
	}
	return Var0;
}

struct<4> func_117()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WONP", 16);
			break;
	}
	return Var0;
}

char* func_118(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		sVar0 = func_127(&(Global_18D84D[iParam0 /*615*/].f_B.f_68));
		return sVar0;
	}
	if (Global_18D84D[iParam0 /*615*/].f_B.f_78 != Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_78)
	{
		sVar0 = func_122(iParam0, 0);
		return sVar0;
	}
	if (((func_40(iParam0, 28) || func_40(unk_0xD803B885F5E47A62(), 28)) || func_121(iParam0)) && !func_120(iParam0))
	{
		return func_122(iParam0, 0);
	}
	iVar1 = func_119(iParam0);
	if (iVar1 != func_389())
	{
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0, 4294967295, 1))
			{
				return func_122(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_389())
	{
		sVar0 = func_127(&(Global_18D84D[iVar1 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar0))
		{
			return func_122(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_119(int iParam0)
{
	if (iParam0 != func_389())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_389();
}

int func_120(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_64(iParam0) };
	if (unk_0xDC30EF462887322E())
	{
		if (unk_0x4DEB7B48DD0AABA4(0))
		{
			if (unk_0x5B9BB2932920F9CD(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_389())
	{
		Var0 = { func_64(iParam0) };
		if (unk_0x33A494591F2C1975() || unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x4DEB7B48DD0AABA4(0))
			{
				return 0;
			}
		}
		else if (unk_0xDC30EF462887322E())
		{
			if (unk_0x4DEB7B48DD0AABA4(0))
			{
				if (unk_0x5B9BB2932920F9CD(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_122(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_124(iParam0, 1))
		{
			return func_123();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_123()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

bool func_124(int iParam0, bool bParam1)
{
	return func_125(iParam0, bParam1, 1);
}

int func_125(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_389())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_126(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_389() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0, int iParam1)
{
	if (iParam0 != func_389())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_389())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_127(var uParam0)
{
	return uParam0;
}

int func_128(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_129(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_129(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_130(int iParam0)
{
	if (!iParam0 == func_389())
	{
		if (func_131(iParam0, 1))
		{
			return Global_24E4E9.f_332.f_B[func_119(iParam0)];
		}
	}
	return 4294967295;
}

bool func_131(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_132(iParam0))
		{
			return 0;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_389();
}

int func_132(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_389())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_133()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_389();
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (iVar0 == func_389())
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_A, iVar2))
			{
				if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar2)))
				{
					iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar2));
					if (unk_0xFB75B0F82CA525F6(iVar1))
					{
						iVar0 = iVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_134(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_115(iParam0, &Var0, 4294967295, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	if (iParam7 != 0)
	{
		func_113(&(Var0.f_45), iParam7);
	}
	return func_70(&Var0);
}

int func_135()
{
	if (Local_80.f_C5 != 2)
	{
		return 64;
	}
	return 87;
}

struct<4> func_136()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_WON", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WON", 16);
			break;
	}
	return Var0;
}

void func_137(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_320(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_319(iParam0, uParam2->f_D, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_A / uParam2->f_B) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_15 == 1) && !uParam2->f_16)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_318(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_12 > 4294967295)
	{
		iVar0 = (iVar0 + uParam2->f_12);
	}
	if (uParam2->f_13 > 4294967295)
	{
		iVar1 = (iVar1 + uParam2->f_13);
	}
	if (func_316(iParam0))
	{
		if (bParam1)
		{
			if (func_315(unk_0xD803B885F5E47A62()) > 0)
			{
				func_314();
			}
			else
			{
				func_313();
			}
		}
		else
		{
			func_312();
		}
	}
	func_296(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_294(iParam0, uParam2, &iVar0, &iVar5);
	func_268(iParam0, uParam2, &iVar0, &iVar5);
	func_265(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_248(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_26B66F.f_1404.f_17E = iVar4;
	}
	else
	{
		Global_26B66F.f_1404.f_17E = iVar5;
	}
	iVar8 = func_247();
	if (iVar8 != func_389() && iParam0 != 148)
	{
		if (func_131(unk_0xD803B885F5E47A62(), 0))
		{
			if (!func_245(unk_0xD803B885F5E47A62(), iVar8, 1))
			{
				func_235(&iVar0, 1);
			}
		}
	}
	func_229(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_198C74.f_A = iVar1;
		func_323();
		func_182(0, unk_0x16F2683693E537C9(), "", 3419251281, 1626430110, iVar1, 1, 4294967295, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_198C74.f_9 = iVar0;
		func_169(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_168(iParam0, iVar0);
		if (func_167(iParam0))
		{
			if (func_166(iParam0) > 4294967295)
			{
				func_324(func_166(iParam0), iVar0);
			}
		}
		Global_2594A0 = iVar0;
		func_165(&Global_258DD8, 0, 0);
	}
	if (func_41(unk_0xD803B885F5E47A62()) || func_45(unk_0xD803B885F5E47A62()))
	{
		func_153(iParam0);
	}
	if (func_152(iParam0))
	{
		Global_198C86.f_D = iVar0;
		Global_198C86.f_E = iVar1;
	}
	if (func_151(iParam0))
	{
		Global_198CBC.f_D = iVar0;
		Global_198CBC.f_E = iVar1;
	}
	if (func_150(iParam0))
	{
		Global_198CFB.f_C = iVar0;
		Global_198CFB.f_D = iVar1;
	}
	if (func_149(iParam0))
	{
		Global_198D27.f_C = iVar0;
		Global_198D27.f_D = iVar1;
	}
	if (func_148(iParam0))
	{
		Global_198D5D.f_C = iVar0;
		Global_198D5D.f_D = iVar1;
	}
	if (func_147(iParam0))
	{
		if (func_146(iParam0))
		{
			Global_198DAF.f_C = iVar0;
			Global_198DAF.f_D = iVar1;
		}
		else if (func_140(iParam0))
		{
			Global_198DE5.f_C = iVar0;
			Global_198DE5.f_D = iVar1;
		}
	}
	if (func_139(iParam0))
	{
		Global_198E39.f_C = iVar0;
		Global_198E39.f_D = iVar1;
	}
	if (func_138(iParam0))
	{
		Global_198E84.f_10 = iVar0;
		Global_198E84.f_11 = iVar1;
	}
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_140(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_141(func_142(unk_0xD803B885F5E47A62()))))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_142(int iParam0)
{
	if (func_145(iParam0) == 237 || func_145(iParam0) == 250)
	{
		return func_143(iParam0);
	}
	return 4294967295;
}

int func_143(int iParam0)
{
	if (func_144(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 4294967295;
}

int func_144(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_145(int iParam0)
{
	if (func_144(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 4294967295;
}

int func_146(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 148 && func_126(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_153(int iParam0)
{
	if (func_164(unk_0xD803B885F5E47A62()) && func_162())
	{
		if (func_161(iParam0))
		{
			func_157(10146, 4294967295);
		}
		else if (func_156(iParam0))
		{
			func_157(10148, 4294967295);
		}
		else if (func_155(iParam0, 1))
		{
			func_157(10149, 4294967295);
		}
		else if (func_154(iParam0))
		{
			func_157(10150, 4294967295);
		}
	}
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_155(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_157(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_50(iParam0, func_51(iParam1), 0);
	iVar0++;
	if (!func_160(iParam0))
	{
		func_159(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_158(iParam0, iVar0, iParam1, 1);
	}
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_152DD4[func_51(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_152DDA[func_51(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_152DE0[func_51(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_152DE6[func_51(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_152DEC[func_51(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_152DB6[func_51(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_152DBC[func_51(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_152DC2[func_51(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_152DC8[func_51(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_152DCE[func_51(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_152D98[func_51(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_152D9E[func_51(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_152DA4[func_51(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_152DAA[func_51(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_152DB0[func_51(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_152DF2[func_51(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_152DF8[func_51(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_152DFE[func_51(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_152E04[func_51(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_152E0A[func_51(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_152E10[func_51(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_152E16[func_51(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_152E1C[func_51(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_152E22[func_51(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2775D1[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2775D1[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2775D1[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2775D1[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_277666[func_51(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_152E28[func_51(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_152E2E[func_51(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_152E34[func_51(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_152E3A[func_51(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_152E40[func_51(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_27761A[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_27761A[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_27761A[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_27761A[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_27761A[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_277669[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_277669[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_277669[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_277669[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_277669[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_277679[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_277679[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_277679[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_277679[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_277679[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_27761A[5 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2775D1[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_277689[func_51(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_277692[func_51(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27768C[func_51(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_277695[func_51(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27768F[func_51(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_277698[func_51(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27769B[func_51(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_27761A[6 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2775D1[5 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_27761A[7 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2775D1[6 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_27761A[8 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2775D1[7 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_27761A[9 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2775D1[8 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_27761A[10 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2775D1[9 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_27761A[11 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2775D1[10 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_27761A[12 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2775D1[11 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_27761A[13 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2775D1[12 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_27761A[14 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2775D1[13 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_27761A[15 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2775D1[14 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_27761A[16 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2775D1[15 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_27761A[17 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2775D1[16 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2775D1[17 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2775D1[18 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2775D1[19 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2775D1[20 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_27769E[func_51(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2776A1[func_51(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2776A4[func_51(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2776A7[func_51(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2776AA[func_51(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2776AD[func_51(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2776B0[func_51(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2776B3[func_51(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2776B6[func_51(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2776B9[func_51(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2776BC[func_51(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2776BF[func_51(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2776C2[func_51(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2776C5[func_51(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2775D1[21 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_27761A[23 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2775D1[22 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_27761A[24 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2775D1[23 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_160(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_162()
{
	return func_163(unk_0xD803B885F5E47A62());
}

bool func_163(int iParam0)
{
	return func_126(iParam0, 1);
}

bool func_164(int iParam0)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_7B, 14);
}

void func_165(var uParam0, bool bParam1, bool bParam2)
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

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_168(int iParam0, int iParam1)
{
	if (func_164(unk_0xD803B885F5E47A62()) && func_162())
	{
		if (func_161(iParam0) && iParam1 > 0)
		{
			func_159(10147, (func_50(10147, 4294967295, 0) + iParam1), 4294967295, 1, 0);
		}
	}
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_181();
	if (iVar5 != func_389())
	{
		func_180(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_179(1);
	Var7.f_1 = 4294967295;
	switch (iParam0)
	{
		case 168:
			if (!func_337())
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_162())
			{
				if (!func_337())
				{
					Var7 = { func_178() };
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_177(Var7)), func_176(Var7), iParam4);
				}
			}
			else if (func_337())
			{
				func_326(3438960429, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_175())
			{
				if (!func_337())
				{
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_177(func_174(unk_0xD803B885F5E47A62()))), 5, iParam4);
				}
			}
			else if (func_337())
			{
				func_326(3438960429, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_175())
			{
				if (!func_337())
				{
					iVar2 = func_170(uParam5->f_10, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0x13A30CD1AD15553C(iVar3, iParam4, iParam2, iVar2, uParam5->f_10);
				}
			}
			else if (func_337())
			{
				func_326(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x3CF6953686BFBF61(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_337())
			{
				func_326(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x53D560AAF6BF3D4E(iParam1);
			}
			break;
		
		case 237:
			if (func_175())
			{
				if (!func_337())
				{
					unk_0x5D421B9474B610E6(iParam1, uParam5->f_14, iParam4);
				}
			}
			else if (func_337())
			{
				func_326(3438960429, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_337())
			{
				func_326(3333932415, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xA106C1682C790290(iParam1);
			}
			break;
		
		case 249:
			if (func_337())
			{
				func_326(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x546613D1293DBF87(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_337())
			{
				func_326(3660240660, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x163F1C05711ACF77(iParam1);
			}
			break;
		
		case 243:
			if (func_337())
			{
				func_326(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xA8C1B24657FB32B3(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_16)
			{
				if (func_337())
				{
					func_326(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0xB0E03FD240577D6C(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_337())
			{
				func_326(2262437735, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0xB0E03FD240577D6C(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_337())
			{
				func_326(3438960429, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x0C06D61FE6218C43(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_170(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_173(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_171(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_171(int iParam0, int iParam1)
{
	return (func_172(iParam0) * iParam1);
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_40001.f_5722;
		
		case 0:
			return Global_40001.f_5723;
		
		case 1:
			return Global_40001.f_5724;
		
		case 2:
			return Global_40001.f_5725;
		
		case 3:
			return Global_40001.f_5726;
		
		case 4:
			return Global_40001.f_5727;
		
		case 5:
			return Global_40001.f_5728;
		
		case 6:
			return Global_40001.f_5729;
		
		case 7:
			return Global_40001.f_572A;
		
		default:
	}
	return 0;
}

float func_173(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572C);
	switch (iParam0)
	{
		case 4294967295:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_40001.f_572E;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572B);
			break;
		
		case 3:
			fVar0 = Global_40001.f_572E;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572B);
			break;
		
		case 0:
			fVar0 = Global_40001.f_572F;
			break;
		
		case 1:
			fVar0 = Global_40001.f_572F;
			break;
		
		case 4:
			fVar0 = Global_40001.f_572F;
			break;
		
		case 6:
			fVar0 = Global_40001.f_5730;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572D);
			break;
		
		case 2:
			fVar0 = Global_40001.f_5730;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572D);
			break;
		
		case 5:
			fVar0 = Global_40001.f_5730;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572D);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_174(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_B7[5 /*12*/];
}

bool func_175()
{
	return func_132(unk_0xD803B885F5E47A62());
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return 4294967295;
}

char* func_177(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_178()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_C1;
}

bool func_179(bool bParam0)
{
	return func_131(unk_0xD803B885F5E47A62(), bParam0);
}

void func_180(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_18D84D[iParam0 /*615*/].f_B.f_8[0];
	*uParam2 = Global_18D84D[iParam0 /*615*/].f_B.f_8[1];
}

int func_181()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

int func_182(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_183(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_183(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_193(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_189(unk_0x64430C979F516F7A(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_184(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_184(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_187(iParam0, 1) };
	if (iParam0 == func_186(unk_0x16F2683693E537C9()))
	{
		func_185(1);
	}
	func_189(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_185(int iParam0)
{
	Global_2537E2.f_763 = iParam0;
}

int func_186(int iParam0)
{
	return iParam0;
}

Vector3 func_187(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar1 = { unk_0x3B276DB863622D2E(2) };
	}
	if (iParam0 == func_188(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	fVar2 = 0f;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		fVar2 = unk_0xD9522BA9E27E1349(iParam0);
		if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x8A5E176FF719A014(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_188(int iParam0)
{
	return iParam0;
}

void func_189(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = 4294967295;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 0 || Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != 4294967295)
		{
			Global_2537E2.f_50A[iVar1 /*30*/] = { vParam0 };
			Global_2537E2.f_50A[iVar1 /*30*/].f_6 = 1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_4 = func_192(Global_2537E2.f_50A[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_2537E2.f_50A[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_50A[iVar1 /*30*/].f_3 = iParam1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_8 = iParam2;
			Global_2537E2.f_50A[iVar1 /*30*/].f_9 = func_191();
			Global_2537E2.f_50A[iVar1 /*30*/].f_A = func_190();
			StringCopy(&(Global_2537E2.f_50A[iVar1 /*30*/].f_16), sParam3, 16);
			Global_2537E2.f_50A[iVar1 /*30*/].f_1A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_190()
{
	if (Global_2537E2.f_763)
	{
		Global_2537E2.f_763 = 0;
		return 1;
	}
	Global_2537E2.f_763 = 0;
	return 0;
}

var func_191()
{
	var uVar0;
	
	uVar0 = Global_2537E2.f_765;
	Global_2537E2.f_765 = 1;
	return uVar0;
}

float func_192(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_193(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_194(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_194(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_228(unk_0xD803B885F5E47A62()) || func_227(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_25A3 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_25A3;
		}
	}
	else if (func_225() || func_224(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_58F6 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_58F6;
		}
	}
	else if (Global_40001.f_19EB > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_40001.f_19EB;
	}
	if (func_223(sParam2))
	{
	}
	if (func_222())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_220(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_219(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_216(0, &iVar1);
					break;
				
				case 3:
					func_216(1, &iVar1);
					break;
				
				case 1:
					func_213(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_19BCBA)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_212(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_204((func_211(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 4294967295)
				{
					func_212(1165, iVar1, 4294967295);
				}
				func_199(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 4294967295)
			{
				func_195((func_197(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_195((func_197(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_195(int iParam0)
{
	if (func_222())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_196(joaat("mpply_globalxp"), iParam0);
	}
}

void func_196(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_197(int iParam0)
{
	if (iParam0 > 4294967295)
	{
		if (func_1274(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_198(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_198(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_199(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_64(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_202(func_203(&Var0));
			if (iVar1 == 0)
			{
				func_201(&Global_152D8B, iParam0);
				func_200(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 1)
			{
				func_201(&Global_152D8C, iParam0);
				func_200(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 2)
			{
				func_201(&Global_152D8D, iParam0);
				func_200(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 3)
			{
				func_201(&Global_152D8E, iParam0);
				func_200(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 4)
			{
				func_201(&Global_152D8F, iParam0);
				func_200(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_152D86 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_152D89 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_152D8A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_152D8B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_152D8C = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_152D8D = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_152D8E = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_152D8F = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_152D90 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_152D91 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_152D92 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_152D93 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_152D94 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_152D95 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_152D96 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_201(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_202(int iParam0)
{
	if (iParam0 == Global_152D86)
	{
		return 0;
	}
	else if (iParam0 == Global_152D87)
	{
		return 1;
	}
	else if (iParam0 == Global_152D88)
	{
		return 2;
	}
	else if (iParam0 == Global_152D89)
	{
		return 3;
	}
	else if (iParam0 == Global_152D8A)
	{
		return 4;
	}
	else
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_203(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_258BBD;
		}
	}
	return Global_258BBD;
}

void func_204(int iParam0, int iParam1, int iParam2)
{
	if (func_222())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2583 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_152E1C[func_51(4294967295)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_51(4294967295)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 3136273443, 2949543449);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 2708045899, iParam1);
				return;
			}
		}
		if (func_210(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_208(iParam0, 1);
		}
		func_158(639, iParam0, 4294967295, 1);
		func_159(640, func_208(iParam0, 1), 4294967295, 1, 0);
		Global_152E1C[func_51(4294967295)] = iParam0;
		func_205(3185322862, 7, 0);
	}
}

void func_205(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_207(iParam1, iParam2))
	{
		iVar0 = func_206();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_206()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_258B8D[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_207(int iParam0, var uParam1)
{
	if (Global_140861)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_14086D) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_208(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_209(iParam0, 0);
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_4713D[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4713D[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_210(int iParam0)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_1, iParam0);
	}
	return 1;
}

int func_211(int iParam0)
{
	if (Global_1406D3.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_51(4294967295)];
			}
			else if (func_210(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_51(4294967295)];
	}
	return 0;
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_50(iParam0, func_51(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_160(iParam0))
	{
		func_159(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_158(iParam0, iVar0, iParam2, 1);
	}
}

void func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != 4294967295)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_93(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_215(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_214(*iParam0, 100) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_214(*iParam0, 100) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_214(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_215(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_64(iParam0) };
		Global_26594F = { func_64(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_265942))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_26594F))
			{
				unk_0xD9DA83C40D038174(&Global_2658FC, 35, &Global_265942);
				unk_0xD9DA83C40D038174(&Global_26591F, 35, &Global_26594F);
				if (Global_2658FC == Global_26591F)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_216(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_1274(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_215(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_1274(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_217(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_215(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_214(*iParam1, 100) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_214(*iParam1, 100) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_217(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_218(iParam0), func_218(iParam1));
	return 0f;
}

Vector3 func_218(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_219(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_214(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_220(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_211(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_211(unk_0xD803B885F5E47A62());
		}
	}
	if (func_221(8000, 0, 0) > 0)
	{
		if (func_221(8000, 0, 0) < (iParam0 + func_211(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_221(8000, 0, 0) - func_211(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_221(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_4713D[iParam0];
}

int func_222()
{
	return 1;
}

int func_223(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	return func_148(func_145(iParam0));
}

bool func_225()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_81();
	}
	return func_226(Global_440000.f_2F9AE);
}

int func_226(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_40001.f_1390[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_227(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 2;
}

bool func_228(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 7;
}

void func_229(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_234(7))
	{
		return;
	}
	iVar0 = func_232(iParam0);
	iVar1 = func_231(iParam0);
	iVar2 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_26B66F.f_1404.f_109, unk_0x2B6E0A53779D29EA()));
	if (func_230(iParam0) != 4294967295)
	{
		if (iVar2 > func_230(iParam0))
		{
			iVar2 = func_230(iParam0);
		}
	}
	else if (iVar2 > Global_40001.f_306B)
	{
		iVar2 = Global_40001.f_306B;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_230(int iParam0)
{
	if (func_155(iParam0, 0) || func_156(iParam0))
	{
		return Global_40001.f_4837;
	}
	if (func_161(iParam0))
	{
		return Global_40001.f_4836;
	}
	switch (iParam0)
	{
		case 192:
			return Global_40001.f_4833;
		
		case 191:
			return Global_40001.f_4835;
		
		case 190:
			return Global_40001.f_4834;
		
		case 227:
			return Global_40001.f_5233;
		
		case 226:
			return Global_40001.f_5227;
		
		case 225:
			return Global_40001.f_523B;
		
		case 230:
			return Global_40001.f_571F;
		
		case 229:
			return Global_40001.f_56BF;
		
		case 233:
			return Global_40001.f_58FB;
		
		case 237:
			return Global_40001.f_5D86;
		
		case 238:
			return Global_40001.f_5DF5;
		
		case 249:
			return Global_40001.f_5E05;
		
		case 243:
			return Global_40001.f_66BD;
		
		default:
	}
	return 4294967295;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_30C6;
		
		case 152:
			return Global_40001.f_30E9;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_30DD;
		
		case 157:
			return Global_40001.f_30BC;
		
		case 159:
			return Global_40001.f_30AB;
		
		case 164:
			return Global_40001.f_30D3;
		
		case 160:
			return Global_40001.f_3105;
		
		case 162:
			return Global_40001.f_3119;
		
		case 163:
			return Global_40001.f_30F6;
		
		case 154:
			return Global_40001.f_313C;
		
		case 155:
			return Global_40001.f_3132;
		
		case 153:
			return Global_40001.f_310E;
		
		case 170:
			return Global_40001.f_3A93;
		
		case 171:
			return Global_40001.f_3ACE;
		
		case 172:
			return Global_40001.f_3AE0;
		
		case 173:
			return Global_40001.f_3AA5;
		
		case 166:
			return Global_40001.f_3AB4;
		
		case 167:
			return Global_40001.f_3B0F;
		
		case 169:
			return Global_40001.f_3AF3;
		
		case 168:
			return Global_40001.f_3AEC;
		
		case 179:
			return Global_40001.f_47BE;
		
		case 180:
			return Global_40001.f_46E0;
		
		case 182:
			return Global_40001.f_46E0;
		
		case 183:
			return Global_40001.f_46E0;
		
		case 185:
			return Global_40001.f_46E0;
		
		case 186:
			return Global_40001.f_46E0;
		
		case 189:
			return Global_40001.f_47BE;
		
		case 190:
			return Global_40001.f_4664;
		
		case 191:
			return Global_40001.f_46BF;
		
		case 192:
			return Global_40001.f_45F1;
		
		case 193:
			return Global_40001.f_47BE;
		
		case 194:
			return Global_40001.f_47BE;
		
		case 195:
			return Global_40001.f_46E0;
		
		case 197:
			return Global_40001.f_46E0;
		
		case 198:
			return Global_40001.f_46E0;
		
		case 199:
			return Global_40001.f_47BE;
		
		case 200:
			return Global_40001.f_47BE;
		
		case 201:
			return Global_40001.f_47BE;
		
		case 205:
			return Global_40001.f_47BE;
		
		case 207:
			return Global_40001.f_46E0;
		
		case 208:
			return Global_40001.f_46E0;
		
		case 209:
			return Global_40001.f_46E0;
		
		case 210:
			return Global_40001.f_47BE;
		
		case 211:
			return Global_40001.f_47BE;
		
		case 214:
			return Global_40001.f_4B10;
		
		case 215:
			return Global_40001.f_4B12;
		
		case 216:
			return Global_40001.f_4B14;
		
		case 217:
			return Global_40001.f_4B16;
		
		case 218:
			return Global_40001.f_4B18;
		
		case 219:
			return Global_40001.f_4B1A;
		
		case 220:
			return Global_40001.f_4B1C;
		
		case 221:
			return Global_40001.f_4B1E;
		
		case 225:
			if (!func_175())
			{
				return Global_40001.f_523D;
			}
			break;
		
		case 226:
			if (!func_175())
			{
				return Global_40001.f_5229;
			}
			break;
		
		case 227:
			if (!func_175())
			{
				return Global_40001.f_5235;
			}
			break;
		
		case 229:
			if (!func_175())
			{
				return Global_40001.f_56C1;
			}
			break;
		
		case 230:
			if (!func_175())
			{
				return Global_40001.f_5721;
			}
			break;
		
		case 233:
			if (!func_175())
			{
				return Global_40001.f_58FA;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_175())
			{
				return Global_40001.f_5D88;
			}
			break;
		
		case 238:
			if (!func_175())
			{
				return Global_40001.f_5DF7;
			}
			break;
		
		case 249:
			if (!func_175())
			{
				return Global_40001.f_5E07;
			}
			break;
		
		case 243:
			if (!func_175())
			{
				return Global_40001.f_66C0;
			}
			break;
		
		case 158:
			if (!func_175())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_30C5;
		
		case 152:
			return Global_40001.f_30E8;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_30DC;
		
		case 157:
			return Global_40001.f_30BB;
		
		case 159:
			return Global_40001.f_30AA;
		
		case 164:
			return Global_40001.f_30D2;
		
		case 160:
			return Global_40001.f_3104;
		
		case 162:
			return Global_40001.f_3118;
		
		case 163:
			return Global_40001.f_30F5;
		
		case 154:
			return Global_40001.f_313B;
		
		case 155:
			return Global_40001.f_3131;
		
		case 153:
			return Global_40001.f_310D;
		
		case 170:
			return Global_40001.f_3A92;
		
		case 171:
			return Global_40001.f_3ACD;
		
		case 172:
			return Global_40001.f_3ADF;
		
		case 173:
			return Global_40001.f_3AA4;
		
		case 166:
			return Global_40001.f_3AB3;
		
		case 179:
			return Global_40001.f_47BD;
		
		case 180:
			return Global_40001.f_46DF;
		
		case 182:
			return Global_40001.f_46DF;
		
		case 183:
			return Global_40001.f_46DF;
		
		case 185:
			return Global_40001.f_46DF;
		
		case 186:
			return Global_40001.f_46DF;
		
		case 189:
			return Global_40001.f_47BD;
		
		case 193:
			return Global_40001.f_47BD;
		
		case 194:
			return Global_40001.f_47BD;
		
		case 195:
			return Global_40001.f_46DF;
		
		case 197:
			return Global_40001.f_46DF;
		
		case 198:
			return Global_40001.f_46DF;
		
		case 199:
			return Global_40001.f_47BD;
		
		case 200:
			return Global_40001.f_47BD;
		
		case 201:
			return Global_40001.f_47BD;
		
		case 205:
			return Global_40001.f_47BD;
		
		case 207:
			return Global_40001.f_46DF;
		
		case 208:
			return Global_40001.f_46DF;
		
		case 209:
			return Global_40001.f_46DF;
		
		case 210:
			return Global_40001.f_47BD;
		
		case 211:
			return Global_40001.f_47BD;
		
		case 190:
			if (func_233(0))
			{
				return Global_40001.f_4663;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_233(0))
			{
				return Global_40001.f_46BE;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_233(0))
			{
				return Global_40001.f_45F0;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_40001.f_4B0F;
		
		case 215:
			return Global_40001.f_4B11;
		
		case 216:
			return Global_40001.f_4B13;
		
		case 217:
			return Global_40001.f_4B15;
		
		case 218:
			return Global_40001.f_4B17;
		
		case 219:
			return Global_40001.f_4B19;
		
		case 220:
			return Global_40001.f_4B1B;
		
		case 221:
			return Global_40001.f_4B1D;
		
		case 225:
			if (func_233(0))
			{
				return Global_40001.f_523C;
			}
			break;
		
		case 226:
			if (func_233(0))
			{
				return Global_40001.f_5228;
			}
			break;
		
		case 227:
			if (func_233(0))
			{
				return Global_40001.f_5234;
			}
			break;
		
		case 229:
			if (func_233(0))
			{
				return Global_40001.f_56C0;
			}
			break;
		
		case 230:
			if (func_233(0))
			{
				return Global_40001.f_5720;
			}
			break;
		
		case 233:
			if (func_233(0))
			{
				return Global_40001.f_58FC;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_233(0))
			{
				return Global_40001.f_5D87;
			}
			break;
		
		case 238:
			if (func_233(0))
			{
				return Global_40001.f_5DF6;
			}
			break;
		
		case 249:
			if (func_233(0))
			{
				return Global_40001.f_5E06;
			}
			break;
		
		case 243:
			return Global_40001.f_66BC;
		
		case 158:
			if (func_233(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_233(bool bParam0)
{
	return func_124(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_234(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_2D, iParam0);
}

void func_235(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_175())
		{
			if (func_179(0))
			{
				if (!func_233(0))
				{
					if (unk_0x40B8C182D63932FC(func_181()))
					{
						if (func_244() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_244());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_242(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_241("GB_BCUT_TICK1", func_181(), iVar0, 0, 0, 1);
						}
						func_240(20);
						func_236(func_181(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1274(iParam0, 0, 1))
	{
		Var0 = 3000381556;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_239(iParam0);
		func_238(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(1, &Var0, 8, func_237(iParam0));
	}
}

int func_237(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 4294967295)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

void func_238(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_239(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

void func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_241(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 4294967295;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_86(iParam1, 4294967294, 1, 0, 0));
		unk_0xD06AC7C87A34A6AD(func_59(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		func_54(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_242(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_243(1);
	}
	else
	{
		iVar1 = func_243(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_243(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_244()
{
	return Global_40001.f_3065;
}

int func_245(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_389())
	{
		if (!bParam2)
		{
			if (func_246(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_389())
		{
			return iParam1 == Global_18D84D[iParam0 /*615*/].f_B;
		}
	}
	return 0;
}

int func_246(int iParam0, int iParam1)
{
	if (iParam1 != func_389())
	{
		if (iParam0 != func_389())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_389())
			{
				if (Global_18D84D[iParam0 /*615*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_247()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23;
}

void func_248(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_233(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_175())
		{
			iVar17 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar17 = func_181();
		}
		iVar11 = iVar17;
		if (iVar11 != 4294967295)
		{
			iVar0 = Global_184507[iVar11 /*876*/].f_356.f_1;
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_184507[iVar11 /*876*/].f_356.f_2;
			}
			else
			{
				iVar2 = func_264(Global_184507[iVar11 /*876*/].f_356, *uParam3);
			}
			if (uParam1->f_11)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_263(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0xD803B885F5E47A62())
				{
					func_262("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_198DAF.f_31 = *uParam3;
			if (iVar17 == unk_0xD803B885F5E47A62())
			{
				if (iVar2 > 0)
				{
					func_261(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_259(*uParam3);
				}
				iVar6 = func_258(&uVar5);
				iVar7 = Global_40001.f_5DA5;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_5DA4));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_240(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0x54EABC0DD106045B())
						{
							iVar22 = iVar21;
							if (unk_0x81A93C8315C28F58(iVar22))
							{
								iVar23 = unk_0x4B2BFE4A3BC248ED(iVar22);
								if (func_257(iVar23))
								{
									func_249(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_40001.f_5D89;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_5D8A;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19BCC3 = *iParam2;
					func_240(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_251(iParam0);
	func_250(iParam0, uVar0, iParam1, iParam2);
}

void func_250(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 3693313620;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_239(iParam0);
	func_238(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_389())
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			unk_0xFB061A86A7AC749F(1, &Var0, 8, func_237(iParam0));
		}
	}
}

int func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_256();
	iVar0 = func_254(iParam0, iVar0);
	iVar1 = Global_18D84D[func_181() /*615*/].f_B.f_1C1;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_3A6B));
	if (iVar0 < func_253())
	{
		iVar0 = func_253();
	}
	if (iVar0 > func_252())
	{
		iVar0 = func_252();
	}
	return iVar0;
}

int func_252()
{
	return Global_40001.f_3A6C;
}

int func_253()
{
	return Global_40001.f_3F03;
}

int func_254(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_315(iParam0) * func_255());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_255()
{
	return Global_40001.f_3F02;
}

var func_256()
{
	return Global_40001.f_305D;
}

int func_257(int iParam0)
{
	if (unk_0x40B8C182D63932FC(iParam0))
	{
		if (iParam0 != unk_0xD803B885F5E47A62())
		{
			if (func_245(iParam0, unk_0xD803B885F5E47A62(), 0))
			{
				if (!func_40(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_258(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x40B8C182D63932FC(unk_0x117658E336116132(iVar0)))
		{
			iVar2 = unk_0x117658E336116132(iVar0);
			if (!func_367(iVar2, 0) && !func_245(iVar2, unk_0xD803B885F5E47A62(), 1))
			{
				iVar1++;
			}
			else if (func_367(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_259(int iParam0)
{
	func_260(iParam0, 7236);
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_50(iParam1, 4294967295, 0);
	func_159(iParam1, (iVar0 + iParam0), 4294967295, 1, 0);
}

void func_261(int iParam0)
{
	func_260(iParam0, 7231);
}

int func_262(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 4294967295;
	unk_0x1E64CE678ED5F61E(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	func_54(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_263(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_5DA6);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_264(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_265(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_233(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_175())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_181();
		}
		if (iVar15 != 4294967295)
		{
			iVar0 = (uParam1->f_F + uParam1->f_8);
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_171(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_170(uParam1->f_10, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_267(*iParam2) > 0)
			{
				if (iVar15 == unk_0xD803B885F5E47A62())
				{
					func_262("SMTICK_RONCUT", func_267(*iParam2));
				}
				*iParam2 = (*iParam2 - func_267(*iParam2));
			}
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_266(iVar2, iVar9);
				iVar6 = func_258(&uVar5);
				iVar7 = Global_40001.f_5732;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_5731));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_240(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x54EABC0DD106045B())
						{
							iVar19 = iVar18;
							if (unk_0x81A93C8315C28F58(iVar19))
							{
								iVar20 = unk_0x4B2BFE4A3BC248ED(iVar19);
								if (func_257(iVar20))
								{
									func_249(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_40001.f_56EF;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_56F0;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19BCC3 = *iParam2;
					func_240(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_266(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_260(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_260(iParam1, 6117);
	}
}

int func_267(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_5711);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_40001.f_5712))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_5712);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_268(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_233(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_175())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_181();
		}
		if (iVar15 != 4294967295)
		{
			iVar16 = func_174(iVar15);
			iVar0 = (func_293(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_289(iVar15, iVar16, iVar1);
			if (uParam1->f_E == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_522B));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_522A));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_283(iVar16, iVar2);
				if (func_279(iVar16) >= Global_40001.f_5067 || iVar2 >= Global_40001.f_5067)
				{
					func_269(5);
				}
				iVar6 = func_258(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_40001.f_522D);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_522C));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_240(108);
					}
					else
					{
						func_240(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x54EABC0DD106045B())
						{
							iVar19 = iVar18;
							if (unk_0x81A93C8315C28F58(iVar19))
							{
								iVar20 = unk_0x4B2BFE4A3BC248ED(iVar19);
								if (func_257(iVar20))
								{
									func_249(iVar20, 1, 2389839094);
								}
							}
							iVar18++;
						}
					}
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_40001.f_522E;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_522F;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19BCC3 = *iParam2;
					func_240(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_40001.f_505B)
			{
				if (func_271(Global_40001.f_505C))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_40001.f_505D)
			{
				if (func_271(Global_40001.f_505E))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_40001.f_505F)
			{
				if (func_271(Global_40001.f_5060))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_40001.f_5061)
			{
				if (func_271(Global_40001.f_5062))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_40001.f_5063)
			{
				if (func_271(Global_40001.f_5064))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_40001.f_5065)
			{
				if (func_271(Global_40001.f_5066))
				{
					func_262("CLOTHAWDSTRAP3", Global_40001.f_5067);
				}
			}
			break;
		
		case 6:
			if (Global_40001.f_5068)
			{
				if (func_271(Global_40001.f_5069))
				{
					func_262("CLOTHAWDSTRAP5", Global_40001.f_50ED);
				}
			}
			break;
		
		case 7:
			if (Global_40001.f_506B)
			{
				if (func_271(Global_40001.f_506C))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_40001.f_506D)
			{
				if (func_271(Global_40001.f_506E))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_40001.f_506F)
			{
				if (func_271(Global_40001.f_5070))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_40001.f_5071)
			{
				if (func_271(Global_40001.f_5072))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_40001.f_5073)
			{
				if (func_271(Global_40001.f_5074))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_40001.f_5075)
			{
				if (func_271(Global_40001.f_5076))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_40001.f_5077)
			{
				if (func_271(Global_40001.f_5078))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_40001.f_5079)
			{
				if (func_271(Global_40001.f_507A))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_270(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	unk_0x1E64CE678ED5F61E(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam3);
	}
	unk_0x6B012227B3921E18(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	}
	else
	{
		Global_265942 = { func_64(unk_0xD803B885F5E47A62()) };
		if (unk_0xD9DA83C40D038174(&Global_2658FC, 35, &Global_265942))
		{
			iVar1 = 0;
			if (unk_0x7F8A39872A07D2CE(&(Global_2658FC.f_16), "Leader") && Global_2658FC.f_1E == 0)
			{
				iVar1 = 1;
			}
			if (Global_2658FC.f_15 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x0D020422A92A2236(iVar2, unk_0x95A6C443DD6B08B2(&Global_2658FC, 35), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar1, 0, Global_2658FC, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), Global_140CF2, Global_140CF3, Global_140CF4);
		}
		else
		{
			iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		}
	}
	func_54(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case 3103481304:
		case 2559625089:
			if (!func_276(15417, 4294967295, 4294967295))
			{
				func_275(15417, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case 4174055868:
		case 2887664642:
		case 2255168310:
			if (!func_276(15418, 4294967295, 4294967295))
			{
				func_275(15418, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case 2935769924:
		case 4153970748:
		case 2444324359:
			if (!func_276(15425, 4294967295, 4294967295))
			{
				func_275(15425, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 3599602535:
		case 1263491585:
		case 2987652061:
		case 258618816:
			if (!func_276(15405, 4294967295, 4294967295))
			{
				func_275(15405, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case 3723642317:
		case 1374601256:
			if (!func_276(15393, 4294967295, 4294967295))
			{
				func_275(15393, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case 3634679186:
			if (!func_276(15409, 4294967295, 4294967295))
			{
				func_275(15409, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case 2492427392:
		case 3289780757:
		case 3868944767:
			if (!func_276(15396, 4294967295, 4294967295))
			{
				func_275(15396, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2196597796:
		case 3097998512:
		case 2980310317:
		case 3162445127:
			if (!func_276(15412, 4294967295, 4294967295))
			{
				func_275(15412, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3122223739:
		case 2792755277:
		case 1110085176:
		case 3405296186:
			if (!func_274(209, 4294967295))
			{
				func_272(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2411791819:
		case 3710352815:
		case 2557983445:
		case 4112352903:
			if (!func_276(15403, 4294967295, 4294967295))
			{
				func_275(15403, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case 3404257586:
		case 2797983601:
		case 48701978:
			if (!func_274(209, 4294967295))
			{
				func_272(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3424976530:
		case 3713826333:
		case 1827333048:
		case 3648114472:
			if (!func_276(15389, 4294967295, 4294967295))
			{
				func_275(15389, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3752338848:
		case 3424508832:
		case 420690954:
		case 3886574485:
			if (!func_274(209, 4294967295))
			{
				func_272(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_276(15398, 4294967295, 4294967295))
			{
				func_275(15398, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 2933869803:
		case 4221319652:
		case 3258386893:
		case 2529150874:
		case 2303587303:
		case 2563356175:
			if (!func_276(15400, 4294967295, 4294967295))
			{
				func_275(15400, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3127501824:
		case 3981548879:
		case 4091931946:
		case 2761646929:
		case 2065127290:
		case 3904886266:
			if (!func_274(209, 4294967295))
			{
				func_272(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2189358123:
		case 3596480360:
		case 917598912:
		case 939297301:
		case 4238563984:
		case 2926043467:
			if (!func_276(15408, 4294967295, 4294967295))
			{
				func_275(15408, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2430046428:
		case 3222061766:
		case 682284723:
		case 1186965403:
		case 4002266725:
		case 2226228703:
			if (!func_274(209, 4294967295))
			{
				func_272(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case 3646067695:
		case 3682843522:
			if (!func_276(15411, 4294967295, 4294967295))
			{
				func_275(15411, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case 3405772618:
		case 801334272:
			if (!func_276(15397, 4294967295, 4294967295))
			{
				func_275(15397, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case 4148261629:
			if (!func_276(15413, 4294967295, 4294967295))
			{
				func_275(15413, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case 2297277414:
		case 627387411:
		case 3447136105:
			if (!func_276(15391, 4294967295, 4294967295))
			{
				func_275(15391, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case 2731313194:
		case 1932815241:
		case 2677758273:
		case 308545041:
		case 1682427144:
			if (!func_276(15388, 4294967295, 4294967295))
			{
				func_275(15388, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case 3574885561:
		case 1626031863:
		case 2903012379:
		case 35480964:
		case 2029975158:
			if (!func_274(209, 4294967295))
			{
				func_272(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3170262904:
		case 3444874261:
		case 926585800:
		case 2461997424:
		case 1539395388:
		case 1377465778:
			if (!func_276(15401, 4294967295, 4294967295))
			{
				func_275(15401, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case 3972875916:
		case 2690230073:
		case 3458584499:
			if (!func_276(15394, 4294967295, 4294967295))
			{
				func_275(15394, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3760111810:
		case 3126392231:
		case 2927838092:
		case 3288939386:
			if (!func_274(209, 4294967295))
			{
				func_272(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3778634034:
		case 756873456:
		case 87453937:
		case 2856191972:
			if (!func_276(15406, 4294967295, 4294967295))
			{
				func_275(15406, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case 3564929588:
		case 2608307573:
		case 3200692489:
			if (!func_276(15395, 4294967295, 4294967295))
			{
				func_275(15395, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case 3324508810:
		case 1992217604:
		case 2946241204:
			if (!func_274(209, 4294967295))
			{
				func_272(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2804308795:
		case 975601953:
		case 2360410088:
		case 1786218600:
			if (!func_276(15410, 4294967295, 4294967295))
			{
				func_275(15410, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2559332058:
		case 1614208560:
		case 3260934977:
		case 2436945402:
			if (!func_276(15407, 4294967295, 4294967295))
			{
				func_275(15407, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case 3568934735:
		case 1747334867:
		case 1237632771:
			if (!func_274(209, 4294967295))
			{
				func_272(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2363349808:
		case 2469980134:
		case 236389050:
		case 1987485798:
			if (!func_274(209, 4294967295))
			{
				func_272(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2568634995:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_276(15414, 4294967295, 4294967295))
			{
				func_275(15414, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2912044766:
		case 734151492:
		case 3937330446:
		case 3272973588:
			if (!func_276(15415, 4294967295, 4294967295))
			{
				func_275(15415, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case 2528104976:
		case 479676642:
		case 2640138660:
			if (!func_276(15399, 4294967295, 4294967295))
			{
				func_275(15399, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2518176946:
		case 579562906:
		case 242920617:
		case 2929259547:
			if (!func_276(15404, 4294967295, 4294967295))
			{
				func_275(15404, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2306910001:
		case 3675212365:
		case 3075243594:
		case 3906758817:
			if (!func_274(209, 4294967295))
			{
				func_272(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case 2717995956:
		case 2087194554:
			if (!func_276(15392, 4294967295, 4294967295))
			{
				func_275(15392, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case 2889930927:
		case 3672065391:
		case 981732339:
			if (!func_276(15390, 4294967295, 4294967295))
			{
				func_275(15390, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case 3313834683:
		case 1271443068:
			if (!func_276(15402, 4294967295, 4294967295))
			{
				func_275(15402, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 4002044941:
		case 4260428506:
		case 2385980452:
		case 2509849112:
			if (!func_276(15416, 4294967295, 4294967295))
			{
				func_275(15416, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2799534611:
		case 1898518287:
		case 2029126042:
		case 2773934483:
			if (!func_274(209, 4294967295))
			{
				func_272(209, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 2171481858:
		case 1457900554:
		case 4280650683:
		case 619771057:
			if (!func_276(15426, 4294967295, 4294967295))
			{
				func_275(15426, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3479260505:
		case 3228839791:
		case 1281631799:
		case 2775938488:
			if (!func_276(15422, 4294967295, 4294967295))
			{
				func_275(15422, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2976164949:
		case 2928217253:
		case 447234752:
		case 1996626130:
			if (!func_276(15423, 4294967295, 4294967295))
			{
				func_275(15423, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case 2313207439:
			if (!func_276(15421, 4294967295, 4294967295))
			{
				func_275(15421, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case 2655677837:
		case 3732359775:
		case 3415687675:
			if (!func_276(15427, 4294967295, 4294967295))
			{
				func_275(15427, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3375652548:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_276(15419, 4294967295, 4294967295))
			{
				func_275(15419, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case 3410686596:
		case 4208984884:
		case 1573086793:
			if (!func_276(15420, 4294967295, 4294967295))
			{
				func_275(15420, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_272(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_273())
	{
		iVar0 = Global_276C68[iParam0 /*3*/][func_51(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

int func_273()
{
	return 1;
	return 0;
}

int func_274(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_276C68[iParam0 /*3*/][func_51(iParam1)];
	if (unk_0x89484FAA0691E684(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_275(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_52();
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

int func_276(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_52();
	}
	iVar1 = func_278(iParam0, iParam1);
	uVar2 = func_277(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_277(int iParam0)
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

int func_278(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_52();
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

int func_279(int iParam0)
{
	int iVar0;
	
	iVar0 = func_281(iParam0);
	return func_50(func_280(iVar0), 4294967295, 0);
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_281(int iParam0)
{
	int iVar0;
	
	if (func_282(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_282(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_283(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_281(iParam0);
	iVar1 = func_280(iVar0);
	iVar2 = (func_50(iVar1, 4294967295, 0) + iParam1);
	func_159(iVar1, iVar2, 4294967295, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_286(9357, 4294967295, 4294967295) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iVar0 /*12*/] != 0)
			{
				iVar1 = func_280(iVar0);
				iVar3 = (iVar3 + func_50(iVar1, 4294967295, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_285(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_284(9357, iVar5, 4294967295, 1);
	}
}

var func_284(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_52();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xB8E1F940D68B4FA6(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_52();
	}
	iVar0 = 0;
	iVar1 = func_288(iParam0, iParam1);
	iVar2 = func_287(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_287(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_288(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_52();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_176(iParam1);
	if (func_282(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_40001.f_4240;
				if (func_290(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4245);
				}
				if (func_290(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_424A);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_40001.f_423F;
				if (func_290(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4244);
				}
				if (func_290(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4249);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_40001.f_423E;
				if (func_290(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4243);
				}
				if (func_290(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4248);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_40001.f_423C;
				if (func_290(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4241);
				}
				if (func_290(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4246);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_40001.f_423D;
				if (func_290(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4242);
				}
				if (func_290(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4247);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_40001.f_5244;
				if (func_290(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_5246);
				}
				if (func_290(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_5245);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_290(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_292(iParam0, iParam1))
	{
		iVar0 = func_291(iParam0, iParam1);
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_291(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_282(iParam1) && iParam0 != func_389())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_292(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_282(iParam1) && iParam0 != func_389())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_293(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_389())
	{
		return 0;
	}
	if (func_282(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_294(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_A > 0)
		{
			if (func_162())
			{
				Var0 = { func_178() };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_F + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = func_289(unk_0xD803B885F5E47A62(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_48A3);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_48A2);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_258(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_40001.f_4899);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_40001.f_4898));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_C == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_240(86);
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (func_233(0))
			{
				Var14 = { func_295(func_181()) };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_F + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = func_289(func_181(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_48A3));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_48A2));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_40001.f_48CA;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_40001.f_48CB;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_295(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_C1;
}

void func_296(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_132(unk_0xD803B885F5E47A62()))
		{
			if (bParam1)
			{
				func_311();
			}
			func_310();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_132(unk_0xD803B885F5E47A62()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_302(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B6));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_301(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_258(&uVar2);
					iVar4 = Global_40001.f_3F0D;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_40001.f_3BF6));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_240(44);
					}
				}
				func_299(*iParam3);
				func_298();
				Global_26B66F.f_1404.f_17D = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x54EABC0DD106045B())
				{
					iVar8 = iVar7;
					if (unk_0x81A93C8315C28F58(iVar8))
					{
						iVar9 = unk_0x4B2BFE4A3BC248ED(iVar8);
						if (func_257(iVar9))
						{
							func_249(iVar9, 1, 3002513507);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_132(unk_0xD803B885F5E47A62()))
		{
			func_297();
		}
	}
}

void func_297()
{
	int iVar0;
	
	iVar0 = Global_27768F[func_52()];
	iVar0++;
	func_158(3667, iVar0, 4294967295, 1);
}

void func_298()
{
	int iVar0;
	
	iVar0 = Global_277695[func_52()];
	iVar0++;
	func_158(3666, iVar0, 4294967295, 1);
}

void func_299(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_277698[func_52()];
	iVar0 = (iVar0 + iParam0);
	func_158(3668, iVar0, 4294967295, 1);
	if (func_286(7666, 4294967295, 4294967295) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_300(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_284(7666, iVar2, 4294967295, 1);
	}
}

int func_300(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_3F92;
			break;
		
		case 2:
			return Global_40001.f_3F93;
			break;
		
		case 3:
			return Global_40001.f_3F94;
			break;
		
		case 4:
			return Global_40001.f_3F95;
			break;
		
		case 5:
			return Global_40001.f_3F96;
			break;
		
		case 6:
			return Global_40001.f_3F97;
			break;
		
		case 7:
			return Global_40001.f_3F98;
			break;
		
		case 8:
			return Global_40001.f_3F99;
			break;
		
		case 9:
			return Global_40001.f_3F9A;
			break;
		
		case 10:
			return Global_40001.f_3F9B;
			break;
		
		case 11:
			return Global_40001.f_3F9C;
			break;
		
		case 12:
			return Global_40001.f_3F9D;
			break;
		
		case 13:
			return Global_40001.f_3F9E;
			break;
		
		case 14:
			return Global_40001.f_3F9F;
			break;
		
		case 15:
			return Global_40001.f_3FA0;
			break;
		
		case 16:
			return Global_40001.f_3FA1;
			break;
		
		case 17:
			return Global_40001.f_3FA2;
			break;
		
		case 18:
			return Global_40001.f_3FA3;
			break;
		
		case 19:
			return Global_40001.f_3FA4;
			break;
		
		case 20:
			return Global_40001.f_3FA5;
			break;
		
		case 21:
			return Global_40001.f_3FA6;
			break;
		
		case 22:
			return Global_40001.f_3FA7;
			break;
		
		case 23:
			return Global_40001.f_3FA8;
			break;
		
		case 24:
			return Global_40001.f_3FA9;
			break;
	}
	return 0;
}

var func_301(int iParam0)
{
	if (iParam0 >= Global_40001.f_3BE0)
	{
		return Global_40001.f_3BF5;
	}
	else if (iParam0 >= Global_40001.f_3BDF)
	{
		return Global_40001.f_3BF4;
	}
	else if (iParam0 >= Global_40001.f_3BDE)
	{
		return Global_40001.f_3BF3;
	}
	else if (iParam0 >= Global_40001.f_3BDD)
	{
		return Global_40001.f_3BF2;
	}
	else if (iParam0 >= Global_40001.f_3BDC)
	{
		return Global_40001.f_3BF1;
	}
	else if (iParam0 >= Global_40001.f_3BDB)
	{
		return Global_40001.f_3BF0;
	}
	else if (iParam0 >= Global_40001.f_3BDA)
	{
		return Global_40001.f_3BEF;
	}
	else if (iParam0 >= Global_40001.f_3BD9)
	{
		return Global_40001.f_3BEE;
	}
	else if (iParam0 >= Global_40001.f_3BD8)
	{
		return Global_40001.f_3BED;
	}
	else if (iParam0 >= Global_40001.f_3BD7)
	{
		return Global_40001.f_3BEC;
	}
	else if (iParam0 >= Global_40001.f_3BD6)
	{
		return Global_40001.f_3BEB;
	}
	else if (iParam0 >= Global_40001.f_3BD5)
	{
		return Global_40001.f_3BEA;
	}
	else if (iParam0 >= Global_40001.f_3BD4)
	{
		return Global_40001.f_3BE9;
	}
	else if (iParam0 >= Global_40001.f_3BD3)
	{
		return Global_40001.f_3BE8;
	}
	else if (iParam0 >= Global_40001.f_3BD2)
	{
		return Global_40001.f_3BE7;
	}
	else if (iParam0 >= Global_40001.f_3BD1)
	{
		return Global_40001.f_3BE6;
	}
	else if (iParam0 >= Global_40001.f_3BD0)
	{
		return Global_40001.f_3BE5;
	}
	else if (iParam0 >= Global_40001.f_3BCF)
	{
		return Global_40001.f_3BE4;
	}
	else if (iParam0 >= Global_40001.f_3BCE)
	{
		return Global_40001.f_3BE3;
	}
	else if (iParam0 >= Global_40001.f_3BCD)
	{
		return Global_40001.f_3BE2;
	}
	return Global_40001.f_3BE1;
}

int func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_309(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_308(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_307(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_303(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_303(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_307(unk_0x09AC81E49EA267F7(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_303(int iParam0)
{
	int iVar0;
	
	if (func_306(iParam0))
	{
		iVar0 = func_304(func_305(iParam0));
		return func_50(iVar0, 4294967295, 0);
	}
	return 0;
}

int func_304(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_305(int iParam0)
{
	int iVar0;
	
	if (func_306(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_6A[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_306(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_307(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_40001.f_3CA8;
	}
	else if (iParam0 == 2)
	{
		return Global_40001.f_3CA6;
	}
	else if (iParam0 == 3)
	{
		return Global_40001.f_3CAA;
	}
	else if (iParam0 == 4)
	{
		return Global_40001.f_3CA4;
	}
	else if (iParam0 == 5)
	{
		return Global_40001.f_3CA2;
	}
	else if (iParam0 == 6)
	{
		return Global_40001.f_3CAC;
	}
	return 0;
}

int func_308(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_306(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_199337[iVar0] == iParam1 && Global_19933E[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_309(int iParam0)
{
	int iVar0;
	
	if (func_306(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_6A[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_310()
{
	int iVar0;
	
	iVar0 = Global_27768C[func_52()];
	iVar0++;
	Global_27768C[func_52()] = iVar0;
	func_158(3665, iVar0, 4294967295, 1);
}

void func_311()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_277689[func_52()];
	iVar1 = Global_277692[func_52()];
	iVar0++;
	iVar1++;
	Global_277689[func_52()] = iVar0;
	Global_277692[func_52()] = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_80 = iVar1;
	func_158(3663, iVar0, 4294967295, 1);
	func_158(3664, iVar1, 4294967295, 1);
}

void func_312()
{
	if (func_175())
	{
		Global_2567E2.f_C02.f_86 = 0;
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
	}
}

void func_313()
{
	if (func_175())
	{
		if (Global_2567E2.f_C02.f_86 < 10)
		{
			Global_2567E2.f_C02.f_86++;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
		}
	}
}

void func_314()
{
	if (func_175())
	{
		if (Global_2567E2.f_C02.f_86 > 0)
		{
			Global_2567E2.f_C02.f_86 = (Global_2567E2.f_C02.f_86 - 1);
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
		}
	}
}

int func_315(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_1C;
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_179(1) && !func_233(1))
			{
				if (func_317(func_181()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_317(int iParam0)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 26);
}

int func_318(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_40001.f_4769;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30DA) * Global_40001.f_30DF));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30A8) * Global_40001.f_30AD));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30C3) * Global_40001.f_30C7));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30D0) * Global_40001.f_30D4));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30E6) * Global_40001.f_30EB));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3188) * Global_40001.f_3189));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_318E) * Global_40001.f_318F));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_318C) * Global_40001.f_318D));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3186) * Global_40001.f_3187));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_318A) * Global_40001.f_318B));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3184) * Global_40001.f_3185));
		
		case 170:
			return 0;
		
		case 171:
			return Global_40001.f_3ACB;
		
		case 172:
			return Global_40001.f_3ADB;
		
		case 173:
			return Global_40001.f_3AA2;
		
		case 166:
			return 0;
		
		case 179:
			return Global_40001.f_4771;
		
		case 180:
			return Global_40001.f_46F4;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_46FC;
		
		case 185:
			return Global_40001.f_4705;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_47C9;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_47DA;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_4741;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_47F9;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_477F;
		
		case 205:
			return Global_40001.f_47EC;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_475E;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_47E7;
		
		case 211:
			return Global_40001.f_47C3;
		
		case 214:
			return Global_40001.f_4A15;
		
		case 215:
			return Global_40001.f_4A1F;
		
		case 216:
			return Global_40001.f_4A29;
		
		case 217:
			return Global_40001.f_4A32;
		
		case 218:
			return Global_40001.f_4A3B;
		
		case 219:
			return Global_40001.f_4A4B;
		
		case 241:
			return Global_40001.f_5E1A;
		
		case 242:
			return Global_40001.f_5E16;
		
		case 248:
			return Global_40001.f_5E19;
		
		case 244:
			return Global_40001.f_5E17;
		
		case 239:
			return Global_40001.f_5E1B;
		
		case 240:
			return Global_40001.f_5E1C;
		
		case 243:
			return Global_40001.f_66BB;
		
		default:
	}
	return 0;
}

int func_319(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_40001.f_476A;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30DB) * Global_40001.f_30E0));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30A9) * Global_40001.f_30AE));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30C4) * Global_40001.f_30C8));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30D1) * Global_40001.f_30D5));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30E7) * Global_40001.f_30EC));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_310C) * Global_40001.f_310F));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_313A) * Global_40001.f_313D));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3130) * Global_40001.f_3133));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3103) * Global_40001.f_3106));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3117) * Global_40001.f_311C));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30F4) * Global_40001.f_30F7));
		
		case 170:
			return Global_40001.f_3A91;
		
		case 171:
			return Global_40001.f_3ACC;
		
		case 172:
			return Global_40001.f_3ADC;
		
		case 173:
			return Global_40001.f_3AA3;
		
		case 166:
			return 0;
		
		case 167:
			return Global_40001.f_42C2;
		
		case 168:
			return Global_40001.f_42C1;
		
		case 179:
			return Global_40001.f_4772;
		
		case 180:
			return Global_40001.f_46F5;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_46FD;
		
		case 185:
			return Global_40001.f_4706;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_47CA;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_47DB;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_4742;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_47FA;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_4780;
		
		case 205:
			return Global_40001.f_47ED;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_475F;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_47E8;
		
		case 211:
			return Global_40001.f_47C4;
		
		case 214:
			return Global_40001.f_4A16;
		
		case 215:
			return Global_40001.f_4A20;
		
		case 216:
			return Global_40001.f_4A2A;
		
		case 217:
			return Global_40001.f_4A33;
		
		case 218:
			return Global_40001.f_4A3C;
		
		case 219:
			return Global_40001.f_4A4C;
		
		case 178:
			if (func_175())
			{
				return Global_40001.f_499B;
			}
			else if (bParam1)
			{
				return Global_40001.f_499C;
			}
			break;
		
		case 188:
			if (func_175())
			{
				return Global_40001.f_49EF;
			}
			else if (bParam1)
			{
				return Global_40001.f_49F0;
			}
			break;
		
		case 225:
			if (func_175() && !func_162())
			{
				if (func_317(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5238;
				}
				else
				{
					return Global_40001.f_5239;
				}
			}
			else if (func_162())
			{
				return Global_40001.f_523A;
			}
			break;
		
		case 226:
			if (func_175() && !func_162())
			{
				if (func_317(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5224;
				}
				else
				{
					return Global_40001.f_5225;
				}
			}
			else if (func_162())
			{
				return Global_40001.f_5226;
			}
			break;
		
		case 227:
			if (func_175() && !func_162())
			{
				if (func_317(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5230;
				}
				else
				{
					return Global_40001.f_5231;
				}
			}
			else if (func_162())
			{
				return Global_40001.f_5232;
			}
			break;
		
		case 229:
			if (func_175() && !func_162())
			{
				if (func_317(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_56BC;
				}
				else
				{
					return Global_40001.f_56BD;
				}
			}
			else if (func_162())
			{
				return Global_40001.f_56BE;
			}
			break;
		
		case 230:
			if (func_175() && !func_162())
			{
				if (func_317(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_571C;
				}
				else
				{
					return Global_40001.f_571D;
				}
			}
			else if (func_162())
			{
				return Global_40001.f_571E;
			}
			break;
		
		case 233:
			if (func_175() && !func_162())
			{
				if (func_317(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_58F8;
				}
				else
				{
					return Global_40001.f_58F9;
				}
			}
			else if (func_162())
			{
				return Global_40001.f_58F7;
			}
			break;
		
		case 241:
			return Global_40001.f_5E21;
		
		case 242:
			return Global_40001.f_5E1D;
		
		case 244:
			return Global_40001.f_5E1E;
		
		case 248:
			return Global_40001.f_5E20;
		
		case 239:
			return Global_40001.f_5E22;
		
		case 240:
			return Global_40001.f_5E23;
		
		case 237:
			if (func_175() && !func_162())
			{
				if (func_317(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5D83;
				}
				else
				{
					return Global_40001.f_5D84;
				}
			}
			else if (func_162())
			{
				return Global_40001.f_5D85;
			}
			break;
		
		case 238:
			if (func_175() && !func_162())
			{
				if (func_317(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5DF2;
				}
				else
				{
					return Global_40001.f_5DF3;
				}
			}
			else if (func_162())
			{
				return Global_40001.f_5DF4;
			}
			break;
		
		case 249:
			if (func_175() && !func_162())
			{
				if (func_317(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5E02;
				}
				else
				{
					return Global_40001.f_5E03;
				}
			}
			else if (func_162())
			{
				return Global_40001.f_5E04;
			}
			break;
		
		case 243:
			if (func_175() && !func_162())
			{
				if (func_317(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_66BE;
				}
				else
				{
					return Global_40001.f_66BF;
				}
			}
			else if (func_162())
			{
				return Global_40001.f_66BE;
			}
			break;
		
		case 158:
			if (func_175() && !func_162())
			{
				if (func_317(unk_0xD803B885F5E47A62()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_162())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_320(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_321(iParam0))
	{
		if (!func_175())
		{
			*uParam1 = 1f;
			*uParam2 = Global_40001.f_3070;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_131(unk_0xD803B885F5E47A62(), 1))
	{
		if (func_152(iParam0))
		{
			*uParam1 = (Global_40001.f_46DD / 100f);
			*uParam2 = (Global_40001.f_46DD / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_40001.f_5E24;
			*uParam2 = Global_40001.f_5E24;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_40001.f_5E25;
			*uParam2 = Global_40001.f_5E25;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_40001.f_5E27;
			*uParam2 = Global_40001.f_5E27;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_40001.f_5E28;
			*uParam2 = Global_40001.f_5E28;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_40001.f_5E29;
			*uParam2 = Global_40001.f_5E29;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_40001.f_5E2A;
			*uParam2 = Global_40001.f_5E2A;
		}
		else
		{
			*uParam1 = Global_40001.f_306D;
			*uParam2 = Global_40001.f_306C;
		}
	}
	else if (func_152(iParam0))
	{
		*uParam1 = (Global_40001.f_46DE / 100f);
		*uParam2 = (Global_40001.f_46DE / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_40001.f_5E2B;
		*uParam2 = Global_40001.f_5E2B;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_40001.f_5E2C;
		*uParam2 = Global_40001.f_5E2C;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_40001.f_5E2E;
		*uParam2 = Global_40001.f_5E2E;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_40001.f_5E2F;
		*uParam2 = Global_40001.f_5E2F;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_40001.f_5E30;
		*uParam2 = Global_40001.f_5E30;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_40001.f_5E31;
		*uParam2 = Global_40001.f_5E31;
	}
	else
	{
		*uParam1 = Global_40001.f_306F;
		*uParam2 = Global_40001.f_306E;
	}
	iVar0 = func_247();
	if (iVar0 != func_389())
	{
		if (func_245(unk_0xD803B885F5E47A62(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

var func_322(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_193(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

void func_323()
{
	Global_25920D = 1;
}

void func_324(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_40001.f_5BC1 == 0 || Global_40001.f_5BC1 == 1)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_40001.f_5BC1 == 1)
			{
				Global_26B66F.f_11B = iParam0;
				if (iParam1 > Global_40001.f_19B8)
				{
					iParam1 = Global_40001.f_19B8;
				}
				Global_26B66F.f_11C = iParam1;
				Global_26B66F.f_11D = 0;
			}
		}
	}
}

bool func_325()
{
	return Global_40001.f_2C8E;
}

void func_326(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_337())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case 2649738075:
		case 3709248901:
		case 2935592169:
		case 454359403:
		case 3312573245:
		case 1643659499:
		case 2222677642:
		case 650665123:
		case 1654961868:
		case 3418119454:
		case 68030260:
		case 2172668013:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case 3778748250:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case 2905739390:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case 3395164992:
		case 3631022961:
		case 1208553146:
		case 3681746286:
		case 3623904420:
		case 3887766060:
		case 3540943093:
		case 2409522409:
		case 1931729587:
		case 1064954035:
		case 4114826223:
		case 2131324797:
		case 1612072658:
		case 3777519894:
		case 1948102096:
		case 1108628223:
		case 2460920732:
		case 3055958484:
		case 4072603454:
		case 3018288428:
		case 1564537328:
		case 4198373795:
		case 742499889:
		case 2050093329:
		case 2542479227:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case 2964212290:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case 3958163446:
		case 2882274531:
		case 618167454:
		case 980623936:
		case 437291904:
		case 4159154248:
		case 3364862819:
		case 2874057976:
		case 2561569253:
		case 2402207034:
		case 2749230248:
		case 2039302543:
		case 402505853:
		case 3151457114:
		case 1678112166:
		case 837955913:
		case 2762500152:
		case 1815541181:
			if (iParam1 > 0 || Global_40001.f_6BC0)
			{
				func_327(iParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 4263810419:
		case 3267748665:
		case 2896648878:
		case 1652884147:
		case 4237099040:
		case 3078478004:
		case 4248344981:
		case 3942610365:
		case 3304681061:
		case 563463121:
		case 1734805203:
		case 941287179:
		case 3108887451:
		case 2309817038:
		case 3167945912:
		case 4185766010:
		case 312105838:
		case 1982688246:
		case 3633936878:
		case 1301046174:
		case 2708796979:
		case 393059668:
		case 23796958:
		case 3217811126:
		case 1780666425:
		case 2251272238:
		case 2372412947:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case 4140234963:
		case 2932306805:
		case 645708827:
		case 767907967:
		case 2324815990:
		case 718859568:
		case 2339402525:
		case 892388724:
		case 2868046458:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case 4235299214:
		case 1736933716:
		case 2826443171:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case 3360501964:
		case 3100714174:
		case 4082360211:
		case 3479420741:
		case 1048226110:
		case 569170531:
		case 3438960429:
		case 848090538:
		case 4247420391:
		case 4001907056:
		case 463142405:
		case 1550217370:
		case 4193659516:
		case 3630369731:
		case 599804707:
		case 3967048882:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case 2164767625:
		case 3067312758:
		case 1864522104:
		case 215608230:
		case 3418954532:
		case 3572072971:
		case 1407278493:
		case 2715572802:
		case 4267523385:
		case 1179783540:
		case 923419301:
		case 3986141121:
		case 603298940:
		case 4282347442:
		case 3983854621:
		case 870439158:
		case 3320678556:
		case 4290828642:
		case 3114013174:
		case 2376916280:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case 3122066507:
		case 2279567963:
		case 2720171655:
		case 3333932415:
		case 1135468152:
		case 1265272476:
		case 3660240660:
		case 696556762:
		case 403506509:
		case 3411090882:
		case 3230816581:
		case 2907714241:
		case 3578004144:
		case 1138089938:
		case 3733955243:
			func_327(iParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 2601396541:
		case 1868043300:
		case 3597718413:
		case 2999421501:
		case 914079366:
		case 395122350:
		case 3962986220:
		case 1671535231:
			if (iParam1 > 0 || Global_40001.f_6BC0)
			{
				func_327(iParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
		case 3800402237:
		case 827308208:
		case 2437282104:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case 2718886530:
		case 1508411869:
		case 1428501742:
		case 2376000145:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case 2267308920:
		case 2277042259:
		case 1668610896:
		case 2262437735:
		case 3070487849:
		case 3975660607:
		case 3828440032:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case 3452904320:
			func_327(iParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_327(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_337())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_52()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 1;
			return 0;
		}
		if (Global_25908F)
		{
			if (iParam3 == 1067618600 || iParam3 == 2991135598)
			{
				Global_411259 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_411012[iVar2 /*85*/].f_42.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_334(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != 4294967295)
				{
					Global_411012[*uParam0 /*85*/].f_42.f_8 = 1;
					Global_411012[*uParam0 /*85*/].f_42.f_C = 1;
				}
			}
			Global_411249 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_411257 = 1;
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 1;
			Global_41125B = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 1;
			Global_41125B = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_333(1, iParam4);
			Global_411257 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_328(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_329(iParam0);
	}
}

void func_329(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_337())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_332(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_411012[iParam0 /*85*/].f_42);
		}
		func_330(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_330(var uParam0)
{
	uParam0->f_42 = 0;
	uParam0->f_42 = 2147483647;
	uParam0->f_42.f_1 = 0;
	uParam0->f_42.f_2 = 0;
	uParam0->f_42.f_3 = 2701847856;
	uParam0->f_42.f_4 = 2209654107;
	uParam0->f_42.f_5 = 0;
	uParam0->f_42.f_6 = 1227573907;
	uParam0->f_42.f_7 = 3133133477;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_D = 0;
	uParam0->f_2 = 0;
	func_331(&(uParam0->f_E));
	func_331(&(uParam0->f_E.f_D));
	StringCopy(&(uParam0->f_E.f_1A), "", 32);
	StringCopy(&(uParam0->f_E.f_22), "", 24);
	StringCopy(&(uParam0->f_E.f_28), "", 16);
	StringCopy(&(uParam0->f_E.f_2C), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_42.f_8 = 0;
	uParam0->f_42.f_9 = 0;
	uParam0->f_42.f_A = 0;
	uParam0->f_42.f_B = 0;
	uParam0->f_42.f_D = 0;
	uParam0->f_42.f_C = 0;
	uParam0->f_42.f_E = 0;
	uParam0->f_42.f_F = 0;
	uParam0->f_42.f_10 = 0;
	uParam0->f_42.f_12 = 0;
}

void func_331(var uParam0)
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

int func_332(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 1;
	}
	return 0;
}

void func_333(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_334(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0)
		{
			if (!func_337())
			{
				iParam0 = iVar0 + 900;
			}
			Global_411012[iVar0 /*85*/].f_42.f_2 = 1;
			Global_411012[iVar0 /*85*/].f_42.f_1 = iParam5;
			Global_411012[iVar0 /*85*/].f_42.f_3 = iParam1;
			Global_411012[iVar0 /*85*/].f_42.f_4 = iParam2;
			Global_411012[iVar0 /*85*/].f_42.f_7 = iParam3;
			Global_411012[iVar0 /*85*/].f_42.f_5 = 0;
			Global_411012[iVar0 /*85*/].f_42 = iParam0;
			Global_411012[iVar0 /*85*/].f_42.f_6 = iParam4;
			Global_411012[iVar0 /*85*/].f_42.f_B = uParam8;
			Global_411012[iVar0 /*85*/].f_42.f_A = iParam7;
			Global_411012[iVar0 /*85*/].f_42.f_D = iParam9;
			Global_411012[iVar0 /*85*/].f_42.f_C = 0;
			Global_411012[iVar0 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			Global_411012[iVar0 /*85*/].f_42.f_12 = 0;
			Global_411249 = 0;
			if (bParam6)
			{
				Global_411012[iVar0 /*85*/].f_42.f_5 = 1;
			}
			if (iParam1 == 3159588365 && iParam10)
			{
				func_335(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_335(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_42 };
	vVar0.f_2.f_21 = iParam19;
	iVar1 = func_237(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_336();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_336()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_337()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

void func_338(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	if (Local_80.f_C5 == 2)
	{
		func_349(bParam0, iParam1, iParam2, iParam3);
		return;
	}
	if (iLocal_1292 == 4294967295)
	{
		iLocal_1292 = func_348(&uLocal_118, 0, 0);
	}
	if (!bParam0)
	{
		if (Local_80.f_C5 != 2)
		{
			func_48(1);
		}
	}
	if (iLocal_1292 < (Global_40001.f_2C18 * 60000))
	{
		fVar0 = Global_40001.f_2C1C;
	}
	else if (iLocal_1292 < (Global_40001.f_2C19 * 60000))
	{
		fVar0 = Global_40001.f_2C1D;
	}
	else if (iLocal_1292 < (Global_40001.f_2C1A * 60000))
	{
		fVar0 = Global_40001.f_2C1E;
	}
	else if (iLocal_1292 < (Global_40001.f_2C1B * 60000))
	{
		fVar0 = Global_40001.f_2C1F;
	}
	else
	{
		fVar0 = Global_40001.f_2C20;
	}
	fVar1 = SYSTEM::TO_FLOAT(func_347());
	fVar2 = SYSTEM::TO_FLOAT(func_346());
	fVar3 = SYSTEM::TO_FLOAT(func_345());
	fVar4 = SYSTEM::TO_FLOAT(func_344());
	fVar5 = func_343();
	iVar6 = func_342();
	if (iLocal_1293 > iVar6)
	{
		iLocal_1293 = iVar6;
	}
	uVar7 = func_341(1);
	uVar8 = func_339(1);
	*iParam1 = uVar7;
	*iParam2 = uVar8;
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 14))
		{
			iVar9 = SYSTEM::ROUND((((fVar1 * fVar0) + (((fVar3 * fVar0) * (SYSTEM::TO_FLOAT(iLocal_1293) * fVar5)) / IntToFloat(iParam3))) * Global_40001.f_2CB4));
			*iParam2 = (*iParam2 + SYSTEM::ROUND((((fVar2 * fVar0) + ((fVar4 * fVar0) * (SYSTEM::TO_FLOAT(iLocal_1293) * fVar5))) * Global_40001.f_2CB5)));
			if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_5 == 4294967295)
			{
				Local_81[unk_0x57270EE11514DC67() /*8*/].f_5 = *iParam1;
			}
			func_235(&iVar9, 1);
			*iParam1 = (*iParam1 + iVar9);
		}
	}
}

int func_339(bool bParam0)
{
	int iVar0;
	
	if (!bParam0)
	{
		return Global_40001.f_2C24;
	}
	func_340();
	iVar0 = (Global_40001.f_2C24 * iLocal_1288);
	if (Local_80.f_C5 == 2)
	{
		return 0;
	}
	return iVar0;
}

void func_340()
{
	float fVar0;
	
	if (iLocal_1288 != 0)
	{
		return;
	}
	if (func_24(&uLocal_1286))
	{
		iLocal_1288 = func_348(&uLocal_1286, 0, 0);
	}
	fVar0 = SYSTEM::TO_FLOAT(iLocal_1288);
	fVar0 = (fVar0 / 60000f);
	iLocal_1288 = SYSTEM::FLOOR(fVar0);
	if (iLocal_1288 >= 1)
	{
	}
	else
	{
		iLocal_1288 = 1;
	}
	if (iLocal_1288 > Global_40001.f_2CAB)
	{
		iLocal_1288 = Global_40001.f_2CAB;
	}
}

int func_341(bool bParam0)
{
	int iVar0;
	
	if (!bParam0)
	{
		return Global_40001.f_2C23;
	}
	func_340();
	iVar0 = (Global_40001.f_2C23 * iLocal_1288);
	if (Local_80.f_C5 == 2)
	{
		return 0;
	}
	return iVar0;
}

var func_342()
{
	if (Local_80.f_C5 == 2)
	{
		return Global_40001.f_47B2;
	}
	return Global_40001.f_2C22;
}

var func_343()
{
	if (Local_80.f_C5 == 2)
	{
		return Global_40001.f_47B1;
	}
	return Global_40001.f_2C21;
}

var func_344()
{
	if (Local_80.f_C5 == 2)
	{
		return Global_40001.f_47AB;
	}
	return Global_40001.f_2C17;
}

var func_345()
{
	if (Local_80.f_C5 == 2)
	{
		return Global_40001.f_47A9;
	}
	return Global_40001.f_2C16;
}

var func_346()
{
	if (Local_80.f_C5 == 2)
	{
		return Global_40001.f_47AA;
	}
	return Global_40001.f_2C15;
}

var func_347()
{
	if (Local_80.f_C5 == 2)
	{
		return Global_40001.f_47A8;
	}
	return Global_40001.f_2C14;
}

int func_348(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0);
}

void func_349(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	if (iLocal_1292 == 4294967295)
	{
		iLocal_1292 = func_348(&uLocal_118, 0, 0);
	}
	if (iLocal_1292 < (Global_40001.f_2C18 * 60000))
	{
		fVar0 = Global_40001.f_47AC;
	}
	else if (iLocal_1292 < (Global_40001.f_2C19 * 60000))
	{
		fVar0 = Global_40001.f_47AD;
	}
	else if (iLocal_1292 < (Global_40001.f_2C1A * 60000))
	{
		fVar0 = Global_40001.f_47AE;
	}
	else if (iLocal_1292 < (Global_40001.f_2C1B * 60000))
	{
		fVar0 = Global_40001.f_47AF;
	}
	else
	{
		fVar0 = Global_40001.f_47B0;
	}
	fVar1 = SYSTEM::TO_FLOAT(func_347());
	fVar2 = SYSTEM::TO_FLOAT(func_346());
	fVar3 = SYSTEM::TO_FLOAT(func_345());
	fVar4 = SYSTEM::TO_FLOAT(func_344());
	fVar5 = func_343();
	iVar6 = func_342();
	if (iLocal_1293 > iVar6)
	{
		iLocal_1293 = iVar6;
	}
	uVar7 = func_341(1);
	uVar8 = func_339(1);
	*uParam1 = uVar7;
	*uParam2 = uVar8;
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 14))
		{
			iVar9 = SYSTEM::ROUND((((fVar1 * fVar0) + (((fVar3 * fVar0) * (SYSTEM::TO_FLOAT(iLocal_1293) * fVar5)) / IntToFloat(iParam3))) * Global_40001.f_2CB4));
			*uParam2 = (*uParam2 + SYSTEM::ROUND((((fVar2 * fVar0) + ((fVar4 * fVar0) * (SYSTEM::TO_FLOAT(iLocal_1293) * fVar5))) * Global_40001.f_2CB5)));
			if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_5 == 4294967295)
			{
				Local_81[unk_0x57270EE11514DC67() /*8*/].f_5 = *uParam1;
			}
			func_235(&iVar9, 1);
			*uParam1 = (*uParam1 + iVar9);
		}
	}
}

int func_350(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_115(uParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_11 = iParam1;
	Var0.f_12 = iParam2;
	Var0.f_47 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_48 = iParam8;
	StringCopy(&(Var0.f_19), sParam9, 64);
	StringCopy(&(Var0.f_29), sParam10, 64);
	StringCopy(&(Var0.f_39), sParam11, 16);
	return func_70(&Var0);
}

int func_351()
{
	if (Local_80.f_C5 != 2)
	{
		return 66;
	}
	return 88;
}

struct<4> func_352()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAW2P", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_DRAW2P", 16);
			break;
	}
	return Var0;
}

void func_353(bool bParam0)
{
	if (Local_80.f_C5 == 2)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 31))
		{
			Global_198C74.f_2 = Local_80.f_B3;
			Global_198C74.f_3 = Local_80.f_B4;
			if (bParam0)
			{
				func_1068(1, 1, 0, !unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0), 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
			}
			else
			{
				func_1068(0, 2, 0, !unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0), 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
			}
		}
	}
}

int func_354(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_115(iParam0, &Var0, 4294967295, sParam1, sParam5);
	StringCopy(&(Var0.f_19), sParam2, 64);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam6;
	return func_70(&Var0);
}

int func_355()
{
	if (Local_80.f_C5 != 2)
	{
		return 68;
	}
	return 88;
}

struct<4> func_356()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAWP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_DRAWP", 16);
			break;
	}
	return Var0;
}

int func_357(int iParam0, int iParam1, int iParam2)
{
	return 0;
	if (!func_175())
	{
		return 0;
	}
	if (iParam1 != func_389())
	{
		if (func_245(iParam1, iParam0, 1))
		{
			return 1;
		}
	}
	if (iParam2 != func_389())
	{
		if (func_245(iParam2, iParam0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_358(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_133();
	*iParam1 = func_389();
	if (iVar0 != func_389())
	{
		*iParam2 = 1;
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_A, iVar2))
			{
				if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar2)))
				{
					iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar2));
					if (!func_367(iVar1, 0))
					{
						if (iVar1 != iVar0)
						{
							if (unk_0xFB75B0F82CA525F6(iVar1))
							{
								iVar4 = unk_0x7B9C1F53FE442D06(iVar1);
								iVar3 = iVar4;
								if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar3 /*8*/].f_1, 1))
								{
									*iParam2++;
									if (*iParam1 == func_389())
									{
										*iParam0 = iVar0;
										*iParam1 = iVar1;
									}
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	if (*iParam2 > 1)
	{
		return 1;
	}
	return 0;
}

int func_359()
{
	if ((func_40(unk_0xD803B885F5E47A62(), 21) || func_40(unk_0xD803B885F5E47A62(), 22)) || func_365())
	{
		return 1;
	}
	if (func_361())
	{
		func_360(22);
		return 1;
	}
	return 0;
}

void func_360(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

int func_361()
{
	if (func_144(unk_0xD803B885F5E47A62(), 0))
	{
		if (((func_44() && !func_364()) || func_363(unk_0xD803B885F5E47A62(), 21)) || func_363(unk_0xD803B885F5E47A62(), 25))
		{
			return 1;
		}
		else
		{
			func_362(27);
		}
	}
	return 0;
}

void func_362(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

bool func_363(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

bool func_364()
{
	return Global_1406A2.f_1;
}

bool func_365()
{
	return func_274(358, 4294967295);
}

bool func_366(int iParam0)
{
	if (func_46(iParam0))
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 8);
}

bool func_367(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_368(4294967295, 0) == 8;
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

int func_368(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_52();
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

struct<4> func_369()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_OVR", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BK_RUN_OVER", 16);
			break;
	}
	return Var0;
}

void func_370()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 1);
	if (Local_80.f_C5 == 2)
	{
		bVar0 = true;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 6))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 7))
		{
			if (func_374() - func_348(&(Local_80.f_18), 0, 0)) >= func_373()
			{
				func_22(&(Local_80.f_18));
				unk_0x5D96D8530B3D0904(&(Local_80.f_1), 7);
			}
		}
	}
	iVar1 = func_374();
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 7))
	{
		iVar1 = func_373();
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 12))
	{
		if (bVar0)
		{
			if (func_24(&(Local_80.f_1E)))
			{
				func_22(&(Local_80.f_1E));
			}
			if (!func_24(&(Local_80.f_18)))
			{
				func_388(&(Local_80.f_18), 0, 0);
				if (Local_80.f_22 > 0)
				{
					iVar2 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), (4294967295 * Local_80.f_22));
					func_372(&(Local_80.f_18), iVar2);
					Local_80.f_22 = 0;
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 2))
			{
				if ((iVar1 - func_348(&(Local_80.f_18), 0, 0)) <= 0)
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 1))
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_1), 2);
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 0))
			{
				if (func_24(&(Local_80.f_18)))
				{
					Local_80.f_22 = func_348(&(Local_80.f_18), 0, 0);
				}
			}
			else
			{
				Local_80.f_22 = 0;
			}
			if (func_24(&(Local_80.f_18)))
			{
				func_22(&(Local_80.f_18));
			}
			if (!func_24(&(Local_80.f_1E)))
			{
				func_388(&(Local_80.f_1E), 0, 0);
			}
			else if (func_23(&(Local_80.f_1E), func_371(), 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_80.f_1), 12);
			}
		}
	}
}

int func_371()
{
	if (Local_80.f_C5 != 2)
	{
		return Global_40001.f_2B81;
	}
	return Global_40001.f_47A5 * 1000;
}

void func_372(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_1 = 1;
}

int func_373()
{
	return Global_40001.f_2B90;
}

int func_374()
{
	if (Local_80.f_C5 != 2)
	{
		return Global_40001.f_2B80;
	}
	return 300000;
}

void func_375()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	bVar6 = false;
	bVar7 = false;
	if (Local_80 != 4)
	{
		iLocal_85 = 0;
		while (iLocal_85 < unk_0x54EABC0DD106045B())
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_85)))
			{
				iVar0++;
				iVar11 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_85));
				if (!func_367(iVar11, 0))
				{
					if (Local_80.f_C5 == 2)
					{
						if (!bVar10)
						{
							if (func_384() != func_389())
							{
								if (func_384() == iVar11)
								{
									bVar10 = true;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_81[iLocal_85 /*8*/].f_1, 0))
					{
						iVar1++;
					}
					if (!func_46(iVar11) || (Local_80.f_C5 == 2 && func_38(iVar11) > 0))
					{
						iVar4++;
					}
					else if (Local_80.f_15 == 0)
					{
						if (Local_80.f_C5 == 2)
						{
							if (func_38(iVar11) == 0)
							{
							}
						}
					}
					if (Local_80.f_15 == 0)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iLocal_85 /*8*/].f_1, 0))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_81[iLocal_85 /*8*/].f_1, 13))
							{
								iVar5 = func_383();
								if (iVar5 < func_382())
								{
									unk_0x5D96D8530B3D0904(&(Local_80.f_23), iLocal_85);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_23, iLocal_85))
							{
								unk_0x0674E58A79778E99(&(Local_80.f_23), iLocal_85);
							}
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 9))
					{
						if (Local_80.f_15 == 1)
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_81[iLocal_85 /*8*/].f_1, 0))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_81[iLocal_85 /*8*/].f_1, 4))
								{
									bVar7 = true;
								}
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_81[iLocal_85 /*8*/].f_1, 3))
						{
							bVar8 = true;
						}
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_81[iLocal_85 /*8*/].f_1, 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iLocal_85 /*8*/].f_1, 1))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4) || (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4) && !unk_0xEAE0D21A50E6C7F4(Local_81[iLocal_85 /*8*/].f_1, 5)))
							{
								if (func_381(bVar8))
								{
									iVar2++;
									if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_9, iLocal_85))
									{
										unk_0x5D96D8530B3D0904(&(Local_80.f_9), iLocal_85);
										unk_0x5D96D8530B3D0904(&(Local_80.f_A), iVar11);
										if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3) && !unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 11))
										{
										}
									}
									if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
									{
										iVar9 = 1;
									}
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
							{
								if (unk_0xEAE0D21A50E6C7F4(Local_80.f_9, iLocal_85))
								{
									unk_0x0674E58A79778E99(&(Local_80.f_9), iLocal_85);
									unk_0x0674E58A79778E99(&(Local_80.f_A), iVar11);
								}
								if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_81[iLocal_85 /*8*/].f_1, 5))
									{
										iVar3++;
									}
								}
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_9, iLocal_85))
						{
							unk_0x0674E58A79778E99(&(Local_80.f_9), iLocal_85);
							unk_0x0674E58A79778E99(&(Local_80.f_A), iVar11);
						}
					}
					else
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_80.f_9, iLocal_85))
						{
							unk_0x0674E58A79778E99(&(Local_80.f_9), iLocal_85);
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_80.f_A, iVar11))
						{
							unk_0x0674E58A79778E99(&(Local_80.f_A), iVar11);
						}
					}
					if (func_1274(iVar11, 1, 1))
					{
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_80.f_9, iLocal_85))
					{
						unk_0x0674E58A79778E99(&(Local_80.f_9), iLocal_85);
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_80.f_23, iLocal_85))
					{
						unk_0x0674E58A79778E99(&(Local_80.f_23), iLocal_85);
					}
				}
				if (Local_80.f_15 <= 2)
				{
					bVar6 = true;
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_81[iLocal_85 /*8*/].f_1, 2))
				{
					if (!func_367(iVar11, 0))
					{
					}
					bVar6 = true;
				}
			}
			else
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_80.f_9, iLocal_85))
				{
					unk_0x0674E58A79778E99(&(Local_80.f_9), iLocal_85);
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_80.f_23, iLocal_85))
				{
					unk_0x0674E58A79778E99(&(Local_80.f_23), iLocal_85);
				}
			}
			iLocal_85++;
		}
		if (Local_80.f_C5 == 2)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 17))
			{
				if (!bVar10)
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_1), 17);
				}
			}
		}
		if (iVar1 > Local_80.f_B7)
		{
			Local_80.f_B7 = iVar1;
		}
		if (iVar0 > Local_80.f_B6)
		{
			Local_80.f_B6 = iVar0;
		}
		else
		{
			Local_80.f_B5 = (Local_80.f_B6 - iVar0);
		}
		if (Local_80.f_A5 != (iVar2 + iVar3))
		{
			Local_80.f_A5 = (iVar2 + iVar3);
			func_377();
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 13))
		{
			if (Local_80.f_A5 >= func_382() || (iVar4 >= 2 && Local_80.f_A5 >= iVar4))
			{
				unk_0x5D96D8530B3D0904(&(Local_80.f_1), 13);
			}
		}
		if (Local_80.f_15 == 0)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 0))
			{
				if (iVar1 >= 1)
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_1), 0);
				}
			}
			else if (iVar1 == 0)
			{
				unk_0x0674E58A79778E99(&(Local_80.f_1), 0);
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 1))
			{
				if (iVar1 >= 2)
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_1), 1);
				}
			}
			else if (iVar1 < 2)
			{
				unk_0x0674E58A79778E99(&(Local_80.f_1), 1);
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 6))
			{
				if (iVar1 >= func_376())
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_1), 6);
				}
			}
			if (Local_80.f_C5 == 2)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 18))
				{
					if (func_24(&(Local_80.f_20)))
					{
						if (func_23(&(Local_80.f_20), 10000, 0))
						{
							if (iVar4 < 2)
							{
								unk_0x5D96D8530B3D0904(&(Local_80.f_1), 18);
							}
						}
					}
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 9))
		{
			if (Local_80.f_15 == 1)
			{
				if (!bVar7)
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_1), 9);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
		{
			if (bVar8)
			{
				unk_0x5D96D8530B3D0904(&(Local_80.f_1), 4);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 10))
				{
					if (!func_24(&(Local_80.f_1C)))
					{
						func_388(&(Local_80.f_1C), 0, 0);
					}
					else if (func_23(&(Local_80.f_1C), 60000, 0))
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_1), 10);
					}
				}
				if (iVar2 == 0 && iVar3 == 0)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 10))
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_1), 10);
					}
				}
			}
		}
		if (Local_80.f_15 == 2)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
			{
				if (iVar2 == 1 || iVar9)
				{
					Local_80.f_A9 = 1900;
					Local_80.f_A8 = 18000;
					unk_0x5D96D8530B3D0904(&(Local_80.f_1), 3);
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_1), 11);
					}
					if (iVar1 == 1)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 14))
						{
							unk_0x5D96D8530B3D0904(&(Local_80.f_1), 14);
						}
					}
				}
				else if (iVar2 == 0)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4) || (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4) && iVar3 == 0))
						{
							unk_0x5D96D8530B3D0904(&(Local_80.f_1), 3);
							if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
							{
								unk_0x5D96D8530B3D0904(&(Local_80.f_1), 11);
							}
						}
					}
				}
				else if (iVar4 == 0)
				{
					Local_80.f_15 = 5;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
				{
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
		{
			if (!func_24(&(Local_80.f_AE)))
			{
				func_388(&(Local_80.f_AE), 0, 0);
			}
			if (func_23(&(Local_80.f_AE), 100, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 11))
				{
					func_377();
					unk_0x5D96D8530B3D0904(&(Local_80.f_1), 11);
				}
			}
		}
		if (Local_80.f_15 > 2)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 5))
			{
				if (!bVar6)
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_1), 5);
				}
			}
		}
	}
}

int func_376()
{
	if (Global_40001.f_2C8F < Global_40001.f_2CD4)
	{
		return Global_40001.f_2C8F;
	}
	return Global_40001.f_2CD4;
}

void func_377()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			func_380(iVar0);
			bVar2 = unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 0);
			bVar3 = true;
			if (!bVar2)
			{
				bVar3 = false;
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 1))
			{
				bVar3 = false;
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 5))
				{
					bVar3 = false;
				}
			}
			func_379(iVar0, iVar1, bVar3, bVar2);
		}
		else if (Local_80.f_24[iVar0 /*4*/].f_2 != 4294967295)
		{
			func_380(iVar0);
		}
		iVar0++;
	}
	func_378();
}

void func_378()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_80.f_24[iVar1 /*4*/].f_2 > Local_80.f_24[(iVar1 - 1) /*4*/].f_2)
				{
					uVar2 = Local_80.f_24[iVar1 /*4*/].f_2;
					uVar3 = Local_80.f_24[iVar1 /*4*/];
					uVar4 = Local_80.f_24[iVar1 /*4*/].f_1;
					uVar5 = Local_80.f_24[iVar1 /*4*/].f_3;
					Local_80.f_24[iVar1 /*4*/].f_2 = Local_80.f_24[(iVar1 - 1) /*4*/].f_2;
					Local_80.f_24[iVar1 /*4*/] = Local_80.f_24[(iVar1 - 1) /*4*/];
					Local_80.f_24[iVar1 /*4*/].f_1 = Local_80.f_24[(iVar1 - 1) /*4*/].f_1;
					Local_80.f_24[iVar1 /*4*/].f_3 = Local_80.f_24[(iVar1 - 1) /*4*/].f_3;
					Local_80.f_24[(iVar1 - 1) /*4*/].f_2 = uVar2;
					Local_80.f_24[(iVar1 - 1) /*4*/].f_3 = uVar5;
					Local_80.f_24[(iVar1 - 1) /*4*/] = uVar3;
					Local_80.f_24[(iVar1 - 1) /*4*/].f_1 = uVar4;
				}
			}
			iVar1 = (iVar1 + 4294967295);
		}
		iVar0 = (iVar0 + 4294967295);
	}
}

void func_379(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar0 = 1;
	}
	if (bParam3)
	{
		iVar1 = 1;
	}
	Local_80.f_24[iParam0 /*4*/] = iParam0;
	Local_80.f_24[iParam0 /*4*/].f_1 = iParam1;
	Local_80.f_24[iParam0 /*4*/].f_2 = iVar0;
	Local_80.f_24[iParam0 /*4*/].f_3 = iVar1;
}

void func_380(int iParam0)
{
	Local_80.f_24[iParam0 /*4*/] = 4294967295;
	Local_80.f_24[iParam0 /*4*/].f_1 = 4294967295;
	Local_80.f_24[iParam0 /*4*/].f_2 = 4294967295;
	Local_80.f_24[iParam0 /*4*/].f_3 = 4294967295;
}

int func_381(bool bParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 11))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
			{
				return 1;
			}
			if (bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_382()
{
	if (Local_80.f_C5 != 2)
	{
		return Global_40001.f_2C8F;
	}
	return Global_40001.f_47A7;
}

int func_383()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_80.f_23, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_384()
{
	if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_80.f_C6)))
	{
		return unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_80.f_C6));
	}
	return func_389();
}

void func_385(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 1982372647;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam0;
	iVar1 = func_386(1, 1);
	if (!iVar1 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &vVar0, 3, iVar1);
	}
}

var func_386(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_1274(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_367(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_387(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return 4294967295;
}

void func_388(var uParam0, bool bParam1, bool bParam2)
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

int func_389()
{
	return 4294967295;
}

void func_390()
{
	if (Local_80.f_C5 != 4294967295)
	{
		return;
	}
	switch (Local_80.f_A7)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_80.f_C5 = 0;
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			Local_80.f_C5 = 2;
			func_391();
			break;
	}
}

void func_391()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (Local_80.f_C6 == 4294967295)
		{
			Local_80.f_C6 = unk_0x57270EE11514DC67();
		}
	}
}

int func_392(var uParam0)
{
	if (func_402())
	{
		*uParam0 = unk_0x09AC81E49EA267F7(6, 11);
		if (!func_396(*uParam0, 1128792064))
		{
		}
		else
		{
			return 0;
		}
	}
	else
	{
		*uParam0 = unk_0x09AC81E49EA267F7(0, 5);
	}
	if (!func_395(*uParam0))
	{
		if (!func_393(136, *uParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_393(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_394(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_40001.f_1FB0)
		{
			if (Global_263F7A.f_88[iVar0 /*2*/] == iVar1 && Global_263F7A.f_88[iVar0 /*2*/].f_1 == func_387(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return 4294967295;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_40001.f_2B83;
			break;
		
		case 1:
			return Global_40001.f_2B84;
			break;
		
		case 2:
			return Global_40001.f_2B85;
			break;
		
		case 3:
			return Global_40001.f_2B86;
			break;
		
		case 4:
			return Global_40001.f_2B87;
			break;
		
		case 6:
			return Global_40001.f_47B4;
			break;
		
		case 7:
			return Global_40001.f_47B5;
			break;
		
		case 8:
			return Global_40001.f_47B6;
			break;
		
		case 9:
			return Global_40001.f_47B7;
			break;
		
		case 10:
			return Global_40001.f_47B8;
			break;
	}
	return 0;
}

bool func_396(int iParam0, float fParam1)
{
	return func_397(func_401(iParam0), fParam1, 1, 1, 0, 0, 0, 0);
}

int func_397(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0)
		{
			if (func_1274(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_400(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 4294967295)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 4294967295 && iParam7) && bParam4) && func_398(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_218(iVar1), vParam0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_398(int iParam0)
{
	if (func_215(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_265942 = { func_64(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_265942))
	{
		return 1;
	}
	if (func_399(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_399(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_119(iParam0);
	if (!iVar0 == func_389())
	{
		if (iVar0 == func_119(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_400(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 1;
	}
	return 0;
}

Vector3 func_401(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 6:
			vVar0 = { 770.8729f, -232.9857f, 65.1145f };
			break;
		
		case 7:
			vVar0 = { 157.237f, -1519.715f, 28.1416f };
			break;
		
		case 8:
			vVar0 = { -899.8332f, 5567.762f, 2.7747f };
			break;
		
		case 9:
			vVar0 = { -1894.427f, 2010.27f, 140.5029f };
			break;
		
		case 10:
			vVar0 = { 1036.689f, -619.3324f, 57.1851f };
			break;
	}
	return vVar0;
}

bool func_402()
{
	return func_403(unk_0xD803B885F5E47A62()) == 200;
}

int func_403(int iParam0)
{
	if (func_404(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_20;
	}
	return 4294967295;
}

int func_404(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295 || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_405()
{
	if (Global_26B66F.f_1404.f_28)
	{
		Global_26B66F.f_1404.f_28 = 0;
		return 1;
	}
	return 0;
}

int func_406(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_407(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_388(uParam0, 0, 0);
		}
	}
}

void func_408()
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_367(unk_0xD803B885F5E47A62(), 0))
	{
		switch (iLocal_1304)
		{
			case 0:
				if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4, 0))
				{
					if (func_423("PEN_BIKE"))
					{
						unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 0);
					}
				}
				else if (!func_423("PEN_BIKE"))
				{
					unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 0);
				}
				iLocal_1304++;
				break;
			
			case 1:
				if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4, 1))
				{
					if (func_423("PEN_VEHG"))
					{
						unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 1);
					}
				}
				else if (!func_423("PEN_VEHG"))
				{
					unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 1);
				}
				iLocal_1304++;
				break;
			
			case 2:
				if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4, 2))
				{
					if (func_423("PEN_PBIKE"))
					{
						unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 2);
					}
				}
				else if (!func_423("PEN_PBIKE"))
				{
					unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 2);
				}
				iLocal_1304++;
				break;
			
			case 3:
				if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4, 3))
				{
					if (func_423("PEN_PVEHG"))
					{
						unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 3);
					}
				}
				else if (!func_423("PEN_PVEHG"))
				{
					unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 3);
				}
				iLocal_1304++;
				break;
			
			case 4:
				if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4, 4))
				{
					if (func_423("PEN_AREA"))
					{
						unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 4);
					}
				}
				else if (!func_423("PEN_AREA"))
				{
					unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 4);
				}
				iLocal_1304++;
				break;
			
			case 5:
				if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4, 5))
				{
					if (func_423("PEN_BAREA"))
					{
						unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 5);
					}
				}
				else if (!func_423("PEN_BAREA"))
				{
					unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 5);
				}
				iLocal_1304++;
				break;
			
			case 6:
				if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4, 6))
				{
					if (func_423("PEN_EXITV"))
					{
						unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 6);
					}
				}
				else if (!func_423("PEN_EXITV"))
				{
					unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 6);
				}
				iLocal_1304++;
				break;
			
			case 7:
				Var0 = { func_422() };
				if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4, 7))
				{
					if (func_423(&Var0))
					{
						unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 7);
					}
				}
				else if (!func_423(&Var0))
				{
					unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_4), 7);
				}
				iLocal_1304++;
				break;
		}
		if (iLocal_1304 > 7)
		{
			iLocal_1304 = 0;
		}
	}
	else
	{
		if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_4 != 0)
		{
			Local_81[unk_0x57270EE11514DC67() /*8*/].f_4 = 0;
		}
		iVar1 = Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_2E4;
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (unk_0xFB75B0F82CA525F6(iVar1))
			{
				iVar2 = unk_0x7B9C1F53FE442D06(iVar1);
				iVar3 = iVar2;
				switch (iLocal_1304)
				{
					case 0:
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar3 /*8*/].f_4, 0))
						{
							if (func_423("PEN_BIKE"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_BIKE"))
						{
							func_409("PEN_BIKE", 0);
						}
						iLocal_1304++;
						break;
					
					case 1:
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar3 /*8*/].f_4, 1))
						{
							if (func_423("PEN_VEHG"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_VEHG"))
						{
							func_409("PEN_VEHG", 0);
						}
						iLocal_1304++;
						break;
					
					case 2:
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar3 /*8*/].f_4, 2))
						{
							if (func_423("PEN_PBIKE"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_PBIKE"))
						{
							func_409("PEN_PBIKE", 0);
						}
						iLocal_1304++;
						break;
					
					case 3:
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar3 /*8*/].f_4, 3))
						{
							if (func_423("PEN_PVEHG"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_PVEHG"))
						{
							func_409("PEN_PVEHG", 0);
						}
						iLocal_1304++;
						break;
					
					case 4:
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar3 /*8*/].f_4, 4))
						{
							if (func_423("PEN_AREA"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_AREA"))
						{
							func_409("PEN_AREA", 0);
						}
						iLocal_1304++;
						break;
					
					case 5:
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar3 /*8*/].f_4, 5))
						{
							if (func_423("PEN_BAREA"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_BAREA"))
						{
							func_409("PEN_BAREA", 0);
						}
						iLocal_1304++;
						break;
					
					case 6:
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar3 /*8*/].f_4, 6))
						{
							if (func_423("PEN_EXITV"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_EXITV"))
						{
							func_409("PEN_EXITV", 0);
						}
						iLocal_1304++;
						break;
					
					case 7:
						Var0 = { func_422() };
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar3 /*8*/].f_4, 7))
						{
							if (func_423(&Var0))
							{
								func_421();
							}
						}
						else if (!func_423(&Var0))
						{
							func_409(&Var0, 0);
						}
						iLocal_1304++;
						break;
				}
				if (iLocal_1304 > 7)
				{
					iLocal_1304 = 0;
				}
			}
		}
	}
}

void func_409(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_419(sParam0))
	{
		return;
	}
	func_413();
	Global_140749 = 0;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	func_412();
	func_411(bParam1);
	func_410();
}

void func_410()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 1);
}

void func_411(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0);
}

void func_412()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 86400000);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

void func_413()
{
	func_415();
	func_414(0);
}

void func_414(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x8CD06866876216F2();
	Global_140749 = 20;
	StringCopy(&(Global_140749.f_1), "", 32);
	Global_140749.f_9 = 0;
	if (bVar0)
	{
		Global_140749.f_A = unk_0x2B6E0A53779D29EA();
		Global_140749.f_B = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_140749.f_C), "", 16);
	StringCopy(&(Global_140749.f_10), "", 64);
	StringCopy(&(Global_140749.f_20), "", 64);
	Global_140749.f_34 = 0;
	Global_140749.f_35 = 0;
	Global_140749.f_36 = 0;
	Global_140749.f_37 = 4294967295;
	Global_140749.f_38 = 0;
	Global_140749.f_3B = 0;
	if (bParam0)
	{
		return;
	}
}

void func_415()
{
	if (!func_418())
	{
	}
	if (func_417())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_416();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_416()
{
	switch (Global_140749)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			return;
		
		case 2:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			unk_0x6D99DF8263D35CE5(Global_140749.f_35);
			return;
		
		case 3:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 4:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 5:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 6:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 7:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 8:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 9:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 10:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		case 12:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 13:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 11:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 14:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 15:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 17:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			return;
		
		case 16:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 19:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 18:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		default:
	}
}

int func_417()
{
	if (Global_140749 == 20)
	{
		return 0;
	}
	return 1;
}

int func_418()
{
	if (!func_417())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_416();
	return unk_0xB165082A56EE6E7F();
}

bool func_419(char* sParam0)
{
	if (!func_417())
	{
		return 0;
	}
	if (Global_140749 == 11)
	{
		return func_420(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_420(char* sParam0)
{
	if (!func_417())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

void func_421()
{
	if (!func_417())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_413();
}

struct<4> func_422()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_STARTO", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_STARTO", 16);
			break;
	}
	return Var0;
}

int func_423(char* sParam0)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (!func_417())
	{
		return 0;
	}
	if (Global_140749 == 11)
	{
		if (unk_0x7724E025FD444F45(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return 0;
	}
	return func_419(sParam0);
}

void func_424()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 1))
		{
			bVar5 = true;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 1))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					iVar1 = unk_0xA30B8362589C124A(iVar0, 4294967295, 0);
					if (unk_0xC844350D5D58C99A(iVar1))
					{
						if (iVar1 != unk_0x16F2683693E537C9())
						{
							if (unk_0x34BFC6F0CB887BC2(iVar1))
							{
								iVar2 = unk_0x83FACCC48B68F9D1(iVar1);
								if (unk_0xFB75B0F82CA525F6(iVar2))
								{
									iVar3 = unk_0x7B9C1F53FE442D06(iVar2);
									iVar4 = iVar3;
									if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar4 /*8*/].f_1, 0))
									{
										bVar5 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (func_427(unk_0xD803B885F5E47A62()))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		func_426();
		func_425();
	}
}

void func_425()
{
	Global_26B66F.f_6FF.f_38 = 1;
}

void func_426()
{
	Global_26B66F.f_6FF.f_36 = 1;
}

bool func_427(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 4);
}

void func_428()
{
	float fVar0;
	
	if (!func_24(&uLocal_1278) || (func_24(&uLocal_1278) && func_23(&uLocal_1278, 5000, 0)))
	{
		fVar0 = func_431(unk_0x16F2683693E537C9(), vLocal_105, 1);
		if (!func_430(unk_0xD803B885F5E47A62()))
		{
			if (fVar0 <= 700f)
			{
				func_429(1);
			}
		}
		else if (fVar0 > 700f)
		{
			func_429(0);
		}
		func_22(&uLocal_1278);
		func_388(&uLocal_1278, 0, 0);
	}
}

void func_429(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 5);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 5);
	}
}

int func_430(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 5);
	}
	return 0;
}

float func_431(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

void func_432()
{
	if (Local_80.f_C5 != 2)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0) || unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 11))
			{
				if (Local_80.f_15 == 2)
				{
					if (unk_0xC92DB9682A650680("PENNED_IN_START_MUSIC"))
					{
						unk_0x5D96D8530B3D0904(&iLocal_83, 11);
					}
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 15))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 12))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 16))
					{
						if (unk_0xC92DB9682A650680("PENNED_IN_70_PERCENT"))
						{
							unk_0x5D96D8530B3D0904(&iLocal_83, 16);
						}
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 12))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 11))
				{
					if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 > 2)
					{
						if (unk_0xC92DB9682A650680("PENNED_IN_STOP_MUSIC"))
						{
							unk_0x5D96D8530B3D0904(&iLocal_83, 12);
						}
					}
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0) || unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 11))
		{
			if (Local_80.f_15 == 2)
			{
				if (unk_0xC92DB9682A650680("CAGED_IN_START_MUSIC"))
				{
					unk_0x5D96D8530B3D0904(&iLocal_83, 11);
					unk_0xBEF52C1D400C0A44(0);
				}
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 15))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 12))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 16))
				{
					if (unk_0xC92DB9682A650680("CAGED_IN_70_PERCENT"))
					{
						unk_0x5D96D8530B3D0904(&iLocal_83, 16);
					}
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 12))
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 11))
			{
				if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 > 2)
				{
					if (unk_0xC92DB9682A650680("CAGED_IN_STOP_MUSIC"))
					{
						unk_0x5D96D8530B3D0904(&iLocal_83, 12);
						unk_0xBEF52C1D400C0A44(1);
					}
				}
			}
		}
	}
}

void func_433()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_367(unk_0xD803B885F5E47A62(), 0))
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 22))
		{
			unk_0x0674E58A79778E99(&iLocal_83, 22);
		}
		return;
	}
	if (func_617())
	{
		func_494(0);
	}
	iVar0 = Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_2E4;
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 22))
	{
		if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_1 != 0)
		{
			Local_81[unk_0x57270EE11514DC67() /*8*/].f_1 = 0;
		}
		unk_0x5D96D8530B3D0904(&iLocal_83, 22);
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 13))
	{
		unk_0x5D96D8530B3D0904(&iLocal_83, 13);
		func_421();
	}
	if (iLocal_1301 == 2)
	{
		func_485();
	}
	if (unk_0x40B8C182D63932FC(iVar0))
	{
		if (unk_0xFB75B0F82CA525F6(iVar0))
		{
			iVar1 = unk_0x7B9C1F53FE442D06(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_81[iVar2 /*8*/].f_7;
			if (iVar3 > 0)
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_103))
				{
					unk_0x142CC44DB769B57E(&iLocal_103);
				}
			}
			switch (iVar3)
			{
				case 0:
					func_478(1, 0);
					func_468();
					func_454();
					break;
				
				case 1:
					func_454();
					func_478(!unk_0xEAE0D21A50E6C7F4(iLocal_82, 9), 0);
					break;
				
				case 2:
					func_29(1);
					func_448();
					func_478(0, 0);
					func_439();
					if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar2 /*8*/].f_1, 5))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar2 /*8*/].f_1, 1))
						{
							if (!func_24(&uLocal_111))
							{
								func_388(&uLocal_111, 0, 0);
							}
							if (func_24(&uLocal_111))
							{
								if ((func_438() - func_348(&uLocal_111, 0, 0)) >= 0)
								{
									func_435((func_438() - func_348(&uLocal_111, 0, 0)), "PEN_ELM", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, 4294967295);
								}
							}
						}
					}
					else if (func_24(&uLocal_111))
					{
						func_22(&uLocal_111);
					}
					func_37();
					break;
				
				case 3:
					if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar2 /*8*/].f_1, 0) || unk_0xEAE0D21A50E6C7F4(Local_81[iVar2 /*8*/].f_1, 6))
					{
						func_478(0, 1);
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_102))
					{
						unk_0x61755AC17D8F538E(iLocal_102, 55);
					}
					func_37();
					break;
				
				default:
					if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar2 /*8*/].f_1, 2))
					{
						func_434();
					}
					break;
				}
			}
	}
	if (Local_80.f_15 > 4)
	{
		func_1160();
	}
}

void func_434()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_102))
	{
		unk_0x142CC44DB769B57E(&iLocal_102);
	}
}

void func_435(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_437(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_150976.f_1 = 1;
		func_436(7, iVar0);
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

void func_436(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_437(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_438()
{
	if (Local_80.f_C5 != 2)
	{
		return Global_40001.f_2B91;
	}
	return 15000;
}

void func_439()
{
	float fVar0;
	float fVar1;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
	{
		return;
	}
	if (iLocal_1293 == 4294967295)
	{
		if (Local_80.f_A5 > 0)
		{
			iLocal_1293 = Local_80.f_A5;
		}
	}
	else if (Local_80.f_A5 > iLocal_1293)
	{
		iLocal_1293 = Local_80.f_A5;
	}
	if (func_445(0))
	{
		if (!func_1004(1))
		{
			func_442(Local_80.f_A5, "PEN_REMP", 4294967295, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, 4294967295);
		}
	}
	fVar0 = func_441();
	if (fVar0 >= fLocal_124)
	{
		fLocal_124 = fVar0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 15))
	{
		if (fLocal_124 >= fLocal_125)
		{
			unk_0x5D96D8530B3D0904(&iLocal_83, 15);
		}
	}
	fVar1 = (fLocal_123 - fLocal_124);
	if (func_445(0))
	{
		if (!func_1004(1))
		{
			func_440(SYSTEM::ROUND(fVar1), SYSTEM::ROUND(fLocal_123), "PEN_DST", 1, 4294967295, 2, 3212836864, 3212836864, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 4294967295, 0, 4294967295, 3212836864, 3212836864, 0, 1, 0, 0, 1, 4294967295);
		}
	}
}

void func_440(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_437(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_150976.f_1 = 1;
		func_436(0, iVar0);
		Global_150976.f_46F[iVar0] = iParam0;
		Global_150976.f_46F.f_B[iVar0] = iParam1;
		StringCopy(&(Global_150976.f_46F.f_16[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_46F.f_C2[iVar0] = iParam3;
		Global_150976.f_46F.f_B7[iVar0] = iParam4;
		Global_150976.f_46F.f_D8[iVar0] = iParam5;
		Global_150976.f_46F.f_E3[iVar0 /*3*/] = iParam6;
		Global_150976.f_46F.f_E3[iVar0 /*3*/].f_1 = iParam7;
		Global_150976.f_46F.f_102[iVar0] = iParam8;
		Global_150976.f_46F.f_10D[iVar0] = iParam9;
		Global_150976.f_46F.f_138[iVar0] = iParam10;
		Global_150976.f_46F.f_143[iVar0] = iParam11;
		Global_150976.f_46F.f_14E[iVar0] = iParam12;
		Global_150976.f_46F.f_159[iVar0] = iParam13;
		Global_150976.f_46A = 1;
		Global_150976.f_46F.f_164[iVar0] = iParam14;
		Global_150976.f_46F.f_16F[iVar0] = iParam15;
		Global_150976.f_46F.f_17A[iVar0] = iParam16;
		Global_150976.f_46F.f_185[iVar0] = iParam17;
		Global_150976.f_46F.f_190[iVar0] = iParam18;
		Global_150976.f_46F.f_19B[iVar0] = iParam19;
		Global_150976.f_46F.f_1A6[iVar0] = iParam20;
		Global_150976.f_46F.f_1B1[iVar0] = iParam21;
		Global_150976.f_46F.f_1BC[iVar0] = iParam22;
		Global_150976.f_46F.f_1C7[iVar0] = iParam23;
		Global_150976.f_46F.f_1D2[iVar0] = iParam24;
		Global_150976.f_46F.f_CD[iVar0] = iParam25;
		Global_150976.f_46F.f_1DD[iVar0] = iParam26;
		Global_150976.f_46F.f_1E8[iVar0] = iParam27;
		Global_150976.f_46F.f_1F3[iVar0] = iParam28;
		Global_150976.f_46F.f_1FE[iVar0] = iParam29;
		Global_150976.f_46F.f_209[iVar0] = iParam30;
		Global_150976.f_46F.f_214[iVar0] = iParam31;
		Global_150976.f_46F.f_21F[iVar0] = iParam32;
		Global_150976.f_46F.f_22A[iVar0] = iParam33;
	}
}

float func_441()
{
	float fVar0;
	int iVar1;
	
	fVar0 = unk_0x0EB28750412C3A5A(vLocal_105, vLocal_120[iLocal_104 /*3*/], true);
	if (iLocal_104 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_104 - 1))
		{
			fVar0 = (fVar0 + fLocal_121[iVar1]);
			iVar1++;
		}
	}
	return fVar0;
}

void func_442(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_437(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_150976.f_1 = 1;
		func_436(6, iVar0);
		Global_150976.f_F68[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_F68.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_F68.f_B7[iVar0] = iParam3;
		Global_150976.f_F68.f_AC[iVar0] = iParam2;
		Global_150976.f_F68.f_104[iVar0] = iParam4;
		Global_150976.f_F68.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_150976.f_F68.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_150976.f_F68.f_1BB[iVar0] = iParam7;
		Global_150976.f_F68.f_1C6[iVar0] = iParam8;
		Global_150976.f_F68.f_1F1[iVar0] = iParam9;
		Global_150976.f_F68.f_1FC[iVar0] = iParam10;
		Global_150976.f_F68.f_CD[iVar0] = iParam11;
		Global_150976.f_F68.f_D8[iVar0] = iParam12;
		Global_150976.f_F68.f_E3[iVar0] = iParam13;
		Global_150976.f_F68.f_EE[iVar0] = iParam14;
		Global_150976.f_F68.f_F9[iVar0] = iParam15;
		Global_150976.f_F68.f_207[iVar0] = iParam16;
		Global_150976.f_F68.f_212[iVar0] = iParam17;
		Global_150976.f_F68.f_21D[iVar0] = iParam18;
		Global_150976.f_F68.f_228[iVar0] = iParam19;
		Global_150976.f_F68.f_233[iVar0] = iParam20;
		Global_150976.f_F68.f_23E[iVar0] = iParam21;
		Global_150976.f_F68.f_249[iVar0] = iParam22;
		Global_150976.f_F68.f_254[iVar0] = iParam23;
		Global_150976.f_F68.f_25F[iVar0] = iParam24;
		Global_150976.f_F68.f_C2[iVar0] = iParam25;
		if (iParam15 == 5 && func_444())
		{
			Global_150976.f_46A = 1;
		}
		if (unk_0x0EFF6B4415DAF4A1())
		{
			iVar2 = 0;
			unk_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_150976.f_46E = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_150976.f_46D = 1;
			}
			else if (iParam0 > 999)
			{
				Global_150976.f_46A = 1;
			}
			if (func_443())
			{
				Global_150976.f_46E = 1;
			}
		}
	}
}

int func_443()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_444()
{
	if (((unk_0xB3260A60545D3F11() == 8 || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 12)
	{
		return 1;
	}
	return 0;
}

int func_445(bool bParam0)
{
	if (func_447())
	{
		return 0;
	}
	if (func_446())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1274(unk_0xD803B885F5E47A62(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_446()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0;
}

bool func_447()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 12);
}

void func_448()
{
	if (iLocal_1294)
	{
		func_434();
		if (func_453(100f, 10f, 5f))
		{
			iLocal_1294 = 1;
		}
	}
	func_449();
	if (unk_0xE4EDC4B0E92C078B(iLocal_102))
	{
		unk_0x516E63E474722206(iLocal_102, fLocal_108);
	}
}

void func_449()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_452();
	fVar1 = (fVar0 / fLocal_123);
	fVar2 = ((((func_1060() - func_451()) * fVar1) + func_451()) * func_450());
	if (fVar2 < func_451())
	{
		fVar2 = func_451();
	}
	if (fVar2 > func_1060())
	{
		fVar2 = func_1060();
	}
	fLocal_109 = fLocal_108;
	if (fVar2 > fLocal_109)
	{
		fVar2 = fLocal_109;
	}
	fLocal_108 = fVar2;
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
	{
		if (fLocal_108 != func_451())
		{
			fLocal_108 = func_451();
		}
	}
	if (!func_24(&uLocal_1282) || (func_24(&uLocal_1282) && func_23(&uLocal_1282, 5000, 0)))
	{
		func_22(&uLocal_1282);
		func_388(&uLocal_1282, 0, 0);
		Local_81[unk_0x57270EE11514DC67() /*8*/].f_6 = fLocal_108;
	}
}

float func_450()
{
	return Global_40001.f_2B8E;
}

float func_451()
{
	if (Local_80.f_C5 != 2)
	{
		return Global_40001.f_2B89;
	}
	return Global_40001.f_47BA;
}

float func_452()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = unk_0x0EB28750412C3A5A(vLocal_105, vLocal_120[iLocal_104 + 1 /*3*/], true);
	iVar1 = iLocal_104 + 1;
	if (iVar1 < (iLocal_122 - 1))
	{
		iVar2 = iVar1;
		while (iVar2 <= (iLocal_122 - 1))
		{
			fVar0 = (fVar0 + fLocal_121[iVar2]);
			iVar2++;
		}
	}
	return fVar0;
}

int func_453(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = unk_0x755FF954DAE327E1((fParam0 - fParam1));
	if (fLocal_108 > fParam1)
	{
		fLocal_108 = (fLocal_108 - IntToFloat(SYSTEM::FLOOR(((fVar0 / fParam2) * unk_0x6117725E0134737F()))));
		if (fLocal_108 < fParam1)
		{
			fLocal_108 = fParam1;
		}
	}
	else
	{
		fLocal_108 = fParam1;
		return 1;
	}
	return 0;
}

void func_454()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 7))
	{
		func_467(&iLocal_1271);
		unk_0x5D96D8530B3D0904(&iLocal_82, 7);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 4))
	{
		if (func_466(&iLocal_1271))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 8))
			{
				if (func_455(&iLocal_1271, 1, 0, 1))
				{
					unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 4);
				}
			}
		}
	}
}

int func_455(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
	{
		if (func_1004(1))
		{
			return 1;
		}
	}
	if (func_466(iParam0))
	{
		if (!func_465(&(iParam0->f_3)))
		{
			func_463(&(iParam0->f_3));
		}
		unk_0xD9ACBBA59FD5A09E(4);
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = SYSTEM::FLOOR(func_460(&(iParam0->f_3)));
		iVar1 = unk_0x51D1D19912234EA0((iVar0 - 3));
		bVar2 = false;
		if (func_72(iParam0->f_1, 4))
		{
			if (iParam0->f_2 >= 5)
			{
				if (!func_72(iParam0->f_1, 16))
				{
					unk_0x4D7F4CC43D4D0DE3(4294967295, "GO", "HUD_MINI_GAME_SOUNDSET", false);
					func_113(&(iParam0->f_1), 16);
					unk_0xE96F19797E59AB06();
				}
			}
			else
			{
				iParam0->f_2++;
			}
		}
		if (!func_72(iParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_72(iParam0->f_1, 1))
			{
				func_113(&(iParam0->f_1), 1);
				unk_0x4D7F4CC43D4D0DE3(4294967295, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_459(iParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_72(iParam0->f_1, 2))
			{
				func_113(&(iParam0->f_1), 2);
				unk_0x4D7F4CC43D4D0DE3(4294967295, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_459(iParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_72(iParam0->f_1, 4))
			{
				func_113(&(iParam0->f_1), 4);
				unk_0x4D7F4CC43D4D0DE3(4294967295, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_459(iParam0, iVar1);
				if (!func_367(unk_0xD803B885F5E47A62(), 0))
				{
					func_409("PEN_AREA", 0);
				}
			}
			else if (iVar1 == 0 && !func_72(iParam0->f_1, 8))
			{
				func_113(&(iParam0->f_1), 8);
				unk_0xA402F6C87C08815C(18, &iVar3, &iVar4, &iVar5, &uVar6);
				unk_0x7E60C62A7CE58FC8(*iParam0, "SET_MESSAGE");
				func_458("CNTDWN_GO");
				unk_0x3CAEA85DA607305E(iVar3);
				unk_0x3CAEA85DA607305E(iVar4);
				unk_0x3CAEA85DA607305E(iVar5);
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
				func_434();
				func_1002(func_1003(), 0);
				unk_0x5D96D8530B3D0904(&iLocal_82, 9);
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 6))
				{
					unk_0x82A772610883F395("pennedIn", 0, 1);
					unk_0x5D96D8530B3D0904(&iLocal_82, 6);
					if (unk_0x562F77A7F33D2E46("MP_Player_Outside_Bubble_Scene"))
					{
						unk_0x8910D3D58E0132B8("MP_Player_Outside_Bubble_Scene");
					}
					unk_0x8BC9595FD2792B5D("MP_Player_Inside_Bubble_Scene");
				}
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && func_457()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				iParam0->f_1 = 0;
				func_456(&(iParam0->f_3));
			}
			unk_0x8910D3D58E0132B8("RACES_RADIO_MUTE_scene");
			unk_0x8BC9595FD2792B5D("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < unk_0x54EABC0DD106045B())
			{
				if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar7)))
				{
					iVar8 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar7));
					if (iVar8 != unk_0xD803B885F5E47A62())
					{
						iVar9 = unk_0x9539D44F3E4492F6(iVar8);
						if (unk_0x405E212DDE472467(iVar9, 0))
						{
							iVar10 = unk_0x6937EA2286828455(iVar9, 0);
							unk_0x2E1E5367A885F9B7(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return 1;
		}
	}
	return 0;
}

void func_456(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_457()
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

void func_458(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_459(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x7E60C62A7CE58FC8(*iParam0, "SET_MESSAGE");
	unk_0x7ACC3006A87F8B39("NUMBER");
	unk_0x6D99DF8263D35CE5(unk_0x51D1D19912234EA0(iParam1));
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iVar0);
	unk_0x3CAEA85DA607305E(iVar1);
	unk_0x3CAEA85DA607305E(iVar2);
	unk_0x1200CC973A2399C8(true);
	unk_0x7E60D21B163E9D56();
}

float func_460(var uParam0)
{
	if (func_465(uParam0))
	{
		if (func_462(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_461(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_461(bool bParam0)
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

bool func_462(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

void func_463(int iParam0)
{
	func_464(iParam0, 0f);
}

void func_464(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_461(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_465(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

int func_466(int iParam0)
{
	if (!unk_0x83D8570832F172A7(*iParam0))
	{
		return 0;
	}
	return 1;
}

void func_467(int iParam0)
{
	*iParam0 = unk_0xB01F55A0FD1CFD49("COUNTDOWN");
}

void func_468()
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	int iVar3;
	int iVar4;
	
	bVar0 = unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 1);
	if (!func_477())
	{
		return;
	}
	iVar1 = func_374();
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 7))
	{
		iVar1 = func_373();
	}
	if (Local_80.f_C5 == 2)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar3 = func_382();
		if (iVar3 > iLocal_1289)
		{
			iVar3 = iLocal_1289;
		}
		if (iVar4 != Local_80.f_A5)
		{
			iVar4 = Local_80.f_A5;
		}
		if (!func_367(unk_0xD803B885F5E47A62(), 0))
		{
			Var2 = { func_422() };
			if (Local_80.f_C5 != 2)
			{
				if (!func_423(&Var2))
				{
					func_409(&Var2, 0);
				}
			}
			else if (!func_423(&Var2))
			{
				func_474(&Var2, "CAG_BLIP", iLocal_1291, 0);
			}
		}
		if (Local_80.f_C5 != 2)
		{
			if ((iVar1 - func_348(&(Local_80.f_18), 0, 0)) >= 0)
			{
				func_473((iVar1 - func_348(&(Local_80.f_18), 0, 0)));
				func_469(iVar4, iVar3, (iVar1 - func_348(&(Local_80.f_18), 0, 0)), 1, func_472(4294967295));
			}
			else
			{
				func_469(iVar4, iVar3, 0, 1, func_472(4294967295));
			}
		}
		else if ((iVar1 - func_348(&(Local_80.f_18), 0, 0)) >= 0)
		{
			func_473((iVar1 - func_348(&(Local_80.f_18), 0, 0)));
			func_469(iVar4, iVar3, (iVar1 - func_348(&(Local_80.f_18), 0, 0)), 1, "SYG_GOTOTIMER");
		}
		else
		{
			func_469(iVar4, iVar3, 0, 1, "SYG_GOTOTIMER");
		}
	}
	else if (!func_367(unk_0xD803B885F5E47A62(), 0))
	{
		Var2 = { func_422() };
		if (func_423(&Var2))
		{
			func_421();
		}
	}
}

void func_469(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_445(0) == 0)
	{
		return;
	}
	func_471();
	func_470(iParam0, iParam1, "HUD_PARITIC", 4294967295, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_223(sParam4))
	{
		sVar0 = sParam4;
	}
	func_435(iParam2, sVar0, 0, 0, 4294967295, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, 4294967295);
}

void func_470(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_437(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_150976.f_1 = 1;
		func_436(4, iVar0);
		Global_150976.f_CC8[iVar0] = iParam0;
		Global_150976.f_CC8.f_AC[iVar0] = iParam1;
		StringCopy(&(Global_150976.f_CC8.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_CC8.f_B7[iVar0] = iParam3;
		Global_150976.f_CC8.f_D8[iVar0] = iParam5;
		Global_150976.f_CC8.f_C2[iVar0] = iParam4;
		Global_150976.f_CC8.f_E3[iVar0] = iParam6;
		Global_150976.f_CC8.f_10E[iVar0] = iParam7;
		Global_150976.f_CC8.f_119[iVar0] = iParam8;
		Global_150976.f_CC8.f_124[iVar0] = iParam9;
		Global_150976.f_CC8.f_12F[iVar0] = iParam10;
		Global_150976.f_CC8.f_13A[iVar0] = iParam11;
		Global_150976.f_CC8.f_145[iVar0] = iParam13;
		Global_150976.f_CC8.f_150[iVar0] = iParam14;
		Global_150976.f_CC8.f_15B[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x0EFF6B4415DAF4A1()) && iParam12)
		{
			Global_150976.f_46A = 1;
		}
	}
}

void func_471()
{
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(7);
	Global_259211 = 1;
}

char* func_472(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xBB0808A181D4745C();
	return "HUD_STARTING";
	if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_473(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6117725E0134737F())
	{
		Global_26B66F.f_1361 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 1))
		{
			unk_0x4D7F4CC43D4D0DE3(4294967295, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_26B66F.f_1361 = 0;
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 1);
		}
	}
}

void func_474(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_475(sParam0, sParam1, bParam3, iParam2))
	{
		Global_140749 = 19;
		Global_140749.f_38 = iParam2;
	}
}

int func_475(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (func_476(sParam0, sParam1) && Global_140749.f_38 == Global_140749.f_3A)
	{
		return 0;
	}
	func_413();
	Global_140749 = 3;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	StringCopy(&(Global_140749.f_10), sParam1, 64);
	Global_140749.f_3A = uParam3;
	Global_140749.f_38 = uParam3;
	func_412();
	func_411(bParam2);
	func_410();
	return 1;
}

bool func_476(char* sParam0, char* sParam1)
{
	if (!func_417())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (!unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C)))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam1) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

int func_477()
{
	if (Local_80.f_C5 != 2)
	{
		return 1;
	}
	else if (func_901())
	{
		return 1;
	}
	else if (func_38(unk_0xD803B885F5E47A62()) == 3)
	{
		return 1;
	}
	if (func_423("CAG_STARTO"))
	{
		func_421();
	}
	return 0;
}

void func_478(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	
	if (Local_80.f_C5 == 2)
	{
		if (func_38(unk_0xD803B885F5E47A62()) < 2)
		{
			return;
		}
	}
	if (!bParam0)
	{
		if (!bParam1 || func_484())
		{
			unk_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &iVar3);
		}
		else
		{
			unk_0xA402F6C87C08815C(3, &iVar0, &iVar1, &iVar2, &iVar3);
		}
	}
	else if (Local_80.f_C5 == 2)
	{
		unk_0xA402F6C87C08815C(iLocal_1291, &iVar0, &iVar1, &iVar2, &iVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(29, &iVar0, &iVar1, &iVar2, &iVar3);
	}
	fVar4 = 0.5f;
	vVar5 = { vLocal_105 };
	fVar6 = (fLocal_108 * 2f);
	switch (Local_80.f_A7)
	{
		case 0:
			fVar7 = 36.9f;
			fVar8 = 7.875f;
			fVar6 = func_483();
			vVar5 = { func_482() };
			break;
		
		case 1:
			fVar7 = 26.25f;
			fVar8 = 4.375f;
			fVar6 = func_483();
			vVar5 = { func_482() };
			break;
		
		case 2:
			fVar7 = 49.875f;
			fVar8 = 12f;
			fVar6 = func_483();
			vVar5 = { func_482() };
			break;
		
		case 3:
			fVar7 = 9.5f;
			fVar8 = 0f;
			fVar6 = func_483();
			vVar5 = { func_482() };
			break;
		
		case 4:
			fVar7 = 38.75f;
			fVar8 = 10.25f;
			fVar6 = func_483();
			vVar5 = { func_482() };
			break;
		
		case 6:
			fVar7 = 5.25f;
			fVar8 = 0f;
			fVar6 = func_483();
			vVar5 = { func_482() };
			break;
		
		case 7:
			fVar7 = 5.25f;
			fVar8 = 0.875f;
			fVar6 = func_483();
			vVar5 = { func_482() };
			break;
		
		case 8:
			fVar7 = 15.375f;
			fVar8 = 4.75f;
			fVar6 = func_483();
			vVar5 = { func_482() };
			break;
		
		case 9:
			fVar7 = 13.625f;
			fVar8 = 4.5f;
			fVar6 = 38.875f;
			vVar5 = { func_482() };
			break;
		
		case 10:
			fVar7 = 7.75f;
			fVar8 = 2f;
			fVar6 = func_483();
			vVar5 = { func_482() };
			break;
	}
	vVar5.z = (vVar5.z - fVar8);
	if (func_484())
	{
		fVar4 = (fVar4 / 2f);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
	{
		if (func_1004(1))
		{
			bVar9 = true;
		}
	}
	if (!func_481())
	{
		if (func_480(unk_0xD803B885F5E47A62()) == 0)
		{
			if (!func_479())
			{
				if (!bParam0)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
					{
						if (!bVar9)
						{
							unk_0x90E052DDCCA8C7EA(vLocal_105, fLocal_108, iVar0, iVar1, iVar2, fVar4);
						}
					}
				}
				else
				{
					unk_0x922D0EFFF8F2403B(1, vVar5, 0f, 0f, 0f, 0f, 0f, 0f, fVar6, fVar6, fVar7, iVar0, iVar1, iVar2, iVar3, 0, 0, 2, 0, 0, 0, false);
				}
			}
		}
	}
}

bool func_479()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 20);
}

int func_480(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4;
}

bool func_481()
{
	return (unk_0xEAE0D21A50E6C7F4(iLocal_83, 5) || unk_0xEAE0D21A50E6C7F4(iLocal_83, 8));
}

Vector3 func_482()
{
	vector3 vVar0;
	
	switch (Local_80.f_A7)
	{
		case 0:
			vVar0 = { vLocal_105 };
			vVar0.x = 1457.639f;
			vVar0.y = -2371.45f;
			break;
		
		case 1:
			vVar0 = { vLocal_105 };
			vVar0.x = -1903.733f;
			vVar0.y = 2042.75f;
			break;
		
		case 2:
			vVar0 = { vLocal_105 };
			vVar0.x = 2237.85f;
			vVar0.y = 1469f;
			break;
		
		case 3:
			vVar0 = { vLocal_105 };
			vVar0.x = -1210.197f;
			vVar0.y = -2437.739f;
			break;
		
		case 4:
			vVar0 = { vLocal_105 };
			vVar0.x = 106.968f;
			vVar0.y = 7003.605f;
			break;
		
		case 6:
			vVar0 = { vLocal_105 };
			break;
		
		case 7:
			vVar0 = { vLocal_105 };
			break;
		
		case 8:
			vVar0 = { vLocal_105 };
			vVar0.x = -2653.049f;
			vVar0.y = 1505.637f;
			break;
		
		case 9:
			vVar0 = { vLocal_105 };
			vVar0.x = -1464.237f;
			vVar0.y = 2789.826f;
			break;
		
		case 10:
			vVar0 = { vLocal_105 };
			vVar0.x = 999.892f;
			vVar0.y = -677.42f;
			break;
	}
	return vVar0;
}

float func_483()
{
	float fVar0;
	
	switch (Local_80.f_A7)
	{
		case 0:
			fVar0 = 155.375f;
			break;
		
		case 1:
			fVar0 = 94.75f;
			break;
		
		case 2:
			fVar0 = 198.75f;
			break;
		
		case 3:
			fVar0 = 250f;
			break;
		
		case 4:
			fVar0 = 196.375f;
			break;
		
		case 7:
			fVar0 = 36f;
			break;
		
		case 6:
		case 8:
		case 9:
		case 10:
			fVar0 = 42.5f;
			break;
	}
	return fVar0;
}

int func_484()
{
	if (unk_0x57270EE11514DC67() != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 11);
	}
	return 0;
}

void func_485()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 19))
	{
		func_493();
		unk_0x3D21B322A308C613(0);
		if (func_492("SCTV_HELI_HLP"))
		{
			unk_0xA37A90C62806D848(1);
		}
		func_487(&(Local_80.f_B8), 1, unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 5), 0);
		if (!func_367(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 11);
			unk_0x0674E58A79778E99(&(Global_25033E[unk_0x6E61BE9E61434AC1() /*421*/].f_C3), 2);
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 14);
			func_486(unk_0xD803B885F5E47A62(), 0);
		}
		unk_0x5D96D8530B3D0904(&iLocal_83, 19);
	}
}

void func_486(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset");
	}
	unk_0x0674E58A79778E99(&iVar0, iParam1);
	unk_0xB7E567188872123E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset", iVar0);
}

void func_487(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	}
	if (bParam2)
	{
		if (unk_0xE9F78D191AD5EDBA(uParam0->f_2) && unk_0x526BC32A660C89E6(uParam0->f_2))
		{
			iVar0 = unk_0xA5FBBC2F619A4DE2(uParam0->f_2);
			if (bParam3)
			{
				func_491(&(uParam0->f_2));
			}
			else
			{
				unk_0x82692E8F6A0D7A22(&iVar0);
			}
		}
		if (unk_0xE9F78D191AD5EDBA(uParam0->f_3) && unk_0x526BC32A660C89E6(uParam0->f_3))
		{
			iVar1 = unk_0xA5FBBC2F619A4DE2(uParam0->f_3);
			if (bParam3)
			{
				func_491(&(uParam0->f_3));
			}
			else
			{
				unk_0x82692E8F6A0D7A22(&iVar1);
			}
		}
	}
	func_488(1, 4294967295);
	func_8(0);
}

void func_488(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_490(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_574E.f_20E1)
	{
		unk_0xA5E3ADAAA4CD5D6C(15);
		Global_574E.f_20E1 = 0;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_574E.f_15FC[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(9, false);
		Global_574E.f_15FC[iVar0] = 0;
	}
	if (Global_574E.f_15EE[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_574E.f_15EE[iVar0] = 0;
	}
	if (Global_574E.f_15F5[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_574E.f_15F5[iVar0] = 0;
	}
	if (bParam0)
	{
		func_489(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0;
	}
}

void func_489(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_490(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 4294967295)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x12AB0310C2281427(&cVar0);
	iVar3 = 4294967295;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_574E.f_1659[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_574E.f_1659[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != 4294967295)
		{
			Global_574E.f_1659[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_491(var uParam0)
{
	int iVar0;
	
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!unk_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
}

bool func_492(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_493()
{
	Global_2537E2.f_484.f_A = 0;
}

void func_494(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		Global_14E2D0[iVar0 /*42*/] = 4294967295;
		Global_14E2D0[iVar0 /*42*/].f_1 = func_389();
		Global_14E2D0[iVar0 /*42*/].f_9 = 4294967295;
		Global_14E2D0[iVar0 /*42*/].f_1F = 4294967295;
		StringCopy(&(Local_127.f_68), "FM_AE_SORT_12", 16);
		if (Local_80.f_24[iVar0 /*4*/] > 4294967295)
		{
			if (Local_80.f_24[iVar0 /*4*/].f_3 > 0)
			{
				Global_14E2D0[iVar0 /*42*/] = Local_80.f_24[iVar0 /*4*/];
				Global_14E2D0[iVar0 /*42*/].f_1 = Local_80.f_24[iVar0 /*4*/].f_1;
				Global_14E2D0[iVar0 /*42*/].f_9 = 4294967295;
				Global_14E2D0[iVar0 /*42*/].f_29 = Local_80.f_24[iVar0 /*4*/].f_2;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
		if (!func_616())
		{
			if (Local_127.f_67 != 136)
			{
				Local_127.f_67 = 136;
			}
			else
			{
				func_614(1, 136);
			}
		}
	}
	iVar1 = 27;
	if (Local_80.f_C5 == 2)
	{
		iVar1 = 28;
	}
	func_495(&Global_14E2D0, &iLocal_126, iVar1, &Local_127, &uLocal_139, 4294967295, 0, 0);
}

void func_495(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_613(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_612() || iParam2 == 28)
	{
		if (func_564(iParam1, iParam2, uParam3, Global_180529, 0, func_617(), sParam7))
		{
			func_563(1);
			if ((!func_562() && !func_561()) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 1))
			{
				if (func_560())
				{
					func_557();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_556(1);
						Global_180529 = 0;
						iVar19 = 4294967295;
						if (Global_180606 != 1)
						{
							func_555(iParam1, 0, 0);
							if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 7))
							{
								unk_0x0674E58A79778E99(&(uParam3->f_21), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = 4294967295;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_1274(unk_0x117658E336116132(iVar17), 0, 1))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
									if (!func_367(iVar3, 0))
									{
										if ((func_554(iVar3) || Global_25033E[iVar3 /*421*/].f_EC != 4294967295) || func_553(iVar3))
										{
											iVar9 = iVar3;
											if (func_132(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_552(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_550(unk_0xD803B885F5E47A62(), 0) && func_145(unk_0xD803B885F5E47A62()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_549())
							{
								if (func_1274(unk_0x117658E336116132(iVar17), 0, 1))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
								}
								else
								{
									iVar3 = func_389();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_548(iVar3) && func_545(iVar3, iParam2)) && func_1274(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
								Var6 = { func_540(iVar3) };
								if (iVar3 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_64(iVar3) };
								iVar5 = func_534(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0x5283D58F79627134(iVar5);
								}
								Global_180529++;
								if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_16;
								}
								if ((uParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
								}
								if ((uParam0[iVar17 /*42*/])->f_29 != 4294967295)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != 4294967295 || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									if (!func_549())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != 4294967295)
								{
									func_529(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_528(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = 4294967294;
									}
								}
								iVar16 = func_527(iVar3, 0);
								if (bVar2)
								{
									if (func_131(iVar3, 1) && iVar1[iVar9] != 4294967295)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_27 != 4294967295)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_526(iParam5))
								{
									func_525(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_525(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								unk_0x5D96D8530B3D0904(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0x117658E336116132(iVar17);
							if (func_1274(iVar3, 0, 1) && !unk_0xEAE0D21A50E6C7F4(iVar14, iVar3))
							{
								iVar3 = unk_0x117658E336116132(iVar17);
							}
							else
							{
								iVar3 = func_389();
							}
							if (func_548(iVar3))
							{
								if (func_1274(unk_0x117658E336116132(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
									Var6 = { func_540(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_64(iVar3) };
									iVar5 = func_534(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x5283D58F79627134(iVar5);
									}
									Global_180529++;
									iVar16 = func_527(iVar3, 1);
									if (bVar2)
									{
										if (func_131(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_508(iVar3, unk_0x6E524813889AECF8(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 11))
						{
							func_505(uParam3, iParam1, iParam2);
						}
						func_22(&(uParam3->f_15));
						func_504();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 7))
						{
							func_503(uParam3, iParam1);
							func_502(iParam1, 0, 1);
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 7);
						}
						func_503(uParam3, iParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 11))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 11);
						}
						if (func_498(uParam3))
						{
							Global_180606 = 1;
						}
						func_496(uParam3);
						if (Global_180606 == 1)
						{
							uParam3->f_1B = 0;
						}
						if (Global_180606 == 2)
						{
							uParam3->f_1B = 0;
						}
					}
					if (unk_0x83D8570832F172A7(*iParam1))
					{
						unk_0xD9ACBBA59FD5A09E(7);
						unk_0xEF45C43067063F18(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xD9ACBBA59FD5A09E(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0;
			func_504();
			func_556(0);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 7))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_21), 7);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 10))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_21), 10);
			}
		}
	}
	unk_0xD59EF13BB60323B9();
}

void func_496(var uParam0)
{
	if (!func_24(&(uParam0->f_15)))
	{
		func_388(&(uParam0->f_15), 0, 0);
	}
	else if (func_23(&(uParam0->f_15), 250, 0))
	{
		func_22(&(uParam0->f_15));
		func_497(0);
	}
}

void func_497(bool bParam0)
{
	if (bParam0)
	{
		if (Global_180606 != 2)
		{
			Global_180606 = 2;
		}
	}
	else
	{
		switch (Global_180606)
		{
			case 0:
				Global_180606 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_498(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x117658E336116132(uParam0->f_25);
	if (iVar3 != func_389() && func_1274(iVar3, 0, 1))
	{
		Var2 = { func_64(iVar3) };
		iVar1 = func_501(uParam0, uParam0->f_25);
		if (func_500(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 1;
							func_499(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 1;
						func_499(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 1;
							func_499(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_499(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar4 = 1;
							func_499(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 1;
						func_499(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_25++;
	if (uParam0->f_25 >= 32)
	{
		uParam0->f_25 = 0;
	}
	return iVar4;
}

void func_499(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_500(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

var func_501(var uParam0, int iParam1)
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_502(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x7E60C62A7CE58FC8(*iParam0, "COLLAPSE"))
	{
		unk_0x1200CC973A2399C8(bParam1);
		unk_0x7E60D21B163E9D56();
	}
	if (iParam2 == 1)
	{
		if (unk_0x7E60C62A7CE58FC8(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_503(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 10))
	{
		unk_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_23);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_21), 10);
	}
}

void func_504()
{
	if (Global_180606 != 0)
	{
		Global_180606 = 0;
	}
}

void func_505(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_389())
		{
			if (func_1274(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 4294967295)
				{
					iVar1 = func_507(uParam0->f_26[iVar0 /*2*/], 0, iParam2);
					func_506(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_184507[iVar0 /*876*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_506(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_ICON"))
		{
			unk_0x3CAEA85DA607305E(iParam1);
			unk_0x3CAEA85DA607305E(iParam2);
			if (iParam2 == 65)
			{
				unk_0x3CAEA85DA607305E(iParam3);
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

int func_507(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_508(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_524() && iParam4 < func_523())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_18052B)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_180606 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7E60C62A7CE58FC8(*iParam2, sVar1))
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 8) || uParam3->f_6C == 6)
			{
				func_522("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_522(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_522("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(65);
			}
			unk_0x3CAEA85DA607305E(4294967295);
			func_522("");
			if (uParam3->f_6C == 6)
			{
				func_522("");
			}
			else
			{
				func_522(&sParam5);
			}
			func_512(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_511(uParam3))
			{
				func_458("DPAD_FRIEND");
			}
			else if (func_510(uParam3))
			{
				func_458("DPAD_FRIEND");
			}
			else if (func_509(uParam3))
			{
				func_458("DPAD_CREW");
			}
			else
			{
				func_458("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_509(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 6);
}

bool func_510(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 5);
}

int func_511(var uParam0)
{
	if (func_510(uParam0) && func_509(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_512(var uParam0, int iParam1)
{
	if (func_521(iParam1))
	{
		unk_0x3CAEA85DA607305E(121);
	}
	else if (func_516(iParam1))
	{
		unk_0x3CAEA85DA607305E(122);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1B, 15) && iParam1 > 4294967295) && iParam1 < 32) && unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam1 /*421*/].f_19D, 0))
	{
		unk_0x3CAEA85DA607305E(123);
	}
	else
	{
		if (func_513())
		{
			uParam0->f_24 = 0;
		}
		unk_0x1200CC973A2399C8(uParam0->f_24);
	}
}

int func_513()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_514() || func_105())
		{
			return 1;
		}
	}
	return 0;
}

int func_514()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_105();
	}
	return func_515(Global_440000.f_2F9AE);
}

int func_515(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_40001.f_137E[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_516(int iParam0)
{
	if ((func_1274(iParam0, 0, 1) && func_517()) && func_124(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_517()
{
	if (func_47(unk_0xD803B885F5E47A62()) || func_520())
	{
		if (!func_518(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_518(int iParam0)
{
	if (func_519(iParam0) == 236 || func_519(iParam0) == 150)
	{
		return func_43(iParam0);
	}
	return 0;
}

int func_519(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 4294967295;
}

int func_520()
{
	switch (func_145(unk_0xD803B885F5E47A62()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_521(int iParam0)
{
	if (func_513())
	{
		if (func_1274(iParam0, 0, 1))
		{
			return func_132(iParam0);
		}
	}
	if ((func_1274(iParam0, 0, 1) && func_517()) && func_126(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_522(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_523()
{
	int iVar0;
	
	if (Global_18052B)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_524()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_18052B)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_525(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_524() && iParam3 < func_523())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_18052B)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == 4294967294)
			{
				iParam10 = 4294967295;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_180606 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x83D8570832F172A7(*iParam1))
		{
			if (unk_0x7E60C62A7CE58FC8(*iParam1, sVar1))
			{
				unk_0x3CAEA85DA607305E(iParam3);
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 8) || uParam2->f_6C == 6)
				{
					func_522("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_6C == 6 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_458(sParam16);
				}
				else
				{
					func_522(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_522("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(65);
				}
				if (iParam12 == 1)
				{
					unk_0x3CAEA85DA607305E(iVar0);
				}
				else
				{
					unk_0x3CAEA85DA607305E(4294967295);
				}
				if (func_549())
				{
					func_522("");
				}
				else if (uParam2->f_6C == 6 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 5 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 7 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 8 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_68)))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21994591120B91F0(fParam13, 1);
					}
					if (iParam10 != 4294967295)
					{
						unk_0x6D99DF8263D35CE5(iParam10);
					}
					unk_0x6B012227B3921E18(&(uParam2->f_68));
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 9)
				{
					unk_0x7ACC3006A87F8B39("FM_AE_CASH");
					unk_0xCBD015EC7E4226BC(iParam10, 1);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x7ACC3006A87F8B39("FM_AE_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 1);
						unk_0x779B34565F4D71B1();
					}
					else
					{
						unk_0x7ACC3006A87F8B39("FM_NG_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 1);
						unk_0x779B34565F4D71B1();
					}
				}
				else if (iParam15 > 4294967295)
				{
					if (iParam15 == 0 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_68)))
					{
						func_458(&(uParam2->f_68));
					}
					else
					{
						func_522("");
					}
				}
				else if (iParam14 != 4294967295)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam14, 6);
					unk_0x779B34565F4D71B1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7ACC3006A87F8B39("NUMBER");
					unk_0x21994591120B91F0(fParam13, 1);
					unk_0x779B34565F4D71B1();
				}
				else if (iParam10 != 4294967295)
				{
					unk_0x3CAEA85DA607305E(iParam10);
				}
				else
				{
					func_522("");
				}
				if (uParam2->f_6C == 6)
				{
					func_522("");
				}
				else
				{
					func_522(&sParam4);
				}
				func_512(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_522("");
					func_522("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_511(uParam2))
				{
					func_458("DPAD_FRIEND");
				}
				else if (func_510(uParam2))
				{
					func_458("DPAD_FRIEND");
				}
				else if (func_509(uParam2))
				{
					func_458("DPAD_CREW");
				}
				else
				{
					func_458("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_526(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_527(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_47(iParam0)) && !func_45(iParam0))
	{
		iVar0 = func_83();
	}
	iVar1 = func_130(iParam0);
	if (!iVar1 == 4294967295)
	{
		return func_128(iVar1);
	}
	return iVar0;
}

char* func_528(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_529(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_533(iParam3))
	{
		*fParam1 = (func_530(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_526(iParam3))
	{
		*fParam1 = (func_530(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_530(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_532(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_531(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_531(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_532(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_533(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_534(int iParam0)
{
	int iVar0;
	
	iVar0 = func_537(iParam0);
	if (iVar0 == 4294967295)
	{
		func_535(iParam0, 1);
		return 0;
	}
	Global_153216[iVar0 /*5*/].f_4 = 1;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_535(int iParam0, bool bParam1)
{
	if (!func_1274(iParam0, 0, 1))
	{
		return;
	}
	if (func_537(iParam0) != 4294967295)
	{
		return;
	}
	if (Global_1532B9)
	{
		if (iParam0 == Global_1532B9.f_1)
		{
			return;
		}
	}
	if (func_536(iParam0))
	{
		return;
	}
	if (Global_1532DF >= 32)
	{
		return;
	}
	Global_1532BE[Global_1532DF] = iParam0;
	Global_1532DF++;
	if (bParam1)
	{
	}
}

int func_536(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1532DF)
	{
		if (Global_1532BE[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_537(int iParam0)
{
	int iVar0;
	
	if (!func_1274(iParam0, 0, 1))
	{
		return 4294967295;
	}
	if (Global_1532B7 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1532B7)
	{
		if (Global_153216[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_153216[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_153216[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_538(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_538(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1532B7)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_153216[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_153216[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x5283D58F79627134(Global_153216[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_153216[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1532B7)
	{
		Global_153216[iVar2 /*5*/] = { Global_153216[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_539(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 1);
}

void func_539(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_389();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_540(int iParam0)
{
	char cVar0[32];
	
	if (func_1274(iParam0, 0, 1))
	{
		Global_265942 = { func_64(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_500(Global_265942))
			{
				if (!unk_0x5B9BB2932920F9CD(&Global_265942))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0x4DEB7B48DD0AABA4(0))
		{
			return cVar0;
		}
		if (func_544(&Global_265942))
		{
			Global_2658FC = { func_542(iParam0) };
			func_541(&Global_2658FC, &cVar0);
		}
	}
	return cVar0;
}

void func_541(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

struct<35> func_542(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_543(iParam0))
	{
		return Global_14088D[unk_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_64(iParam0) };
	unk_0xD9DA83C40D038174(&Var1, 35, &Var0);
	return Var1;
}

int func_543(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 1;
	}
	return 0;
}

int func_544(var uParam0)
{
	if (unk_0x1963B11DE70153E0())
	{
		if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_545(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_46(iParam0) || func_547(iParam0)) || func_366(iParam0))
		{
			return 0;
		}
	}
	if (!func_546(iParam0))
	{
		return 0;
	}
	if ((!func_554(iParam0) && Global_25033E[iParam0 /*421*/].f_EC == 4294967295) && !func_553(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_546(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 22);
}

int func_547(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 10) || unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 9));
	}
	return 0;
}

int func_548(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_389())
	{
		return 0;
	}
	if (func_367(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iVar0 /*876*/].f_8E, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_549()
{
	switch (func_145(unk_0xD803B885F5E47A62()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_519(unk_0xD803B885F5E47A62()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_45(unk_0xD803B885F5E47A62()))
	{
		switch (func_145(unk_0xD803B885F5E47A62()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_518(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_550(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295 && func_551(Global_18D84D[iParam0 /*615*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295)
	{
		if (func_551(Global_18D84D[iParam0 /*615*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_551(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_155(iParam0, 0);
	return 0;
}

void func_552(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1274(unk_0x117658E336116132(iVar0), 0, 1))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_367(iVar1, 0))
			{
				if ((func_554(iVar1) || Global_25033E[iVar1 /*421*/].f_EC != 4294967295) || func_553(iVar1))
				{
					if (func_245(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_553(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0;
}

int func_554(int iParam0)
{
	if (func_1274(iParam0, 0, 1))
	{
		if (func_1274(unk_0xD803B885F5E47A62(), 0, 1))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_145(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_555(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_556(bool bParam0)
{
	if (bParam0)
	{
		if (Global_15038F.f_2 == 0)
		{
			Global_15038F.f_2 = 1;
		}
	}
	else if (Global_15038F.f_2 == 1)
	{
		Global_15038F.f_2 = 0;
	}
}

void func_557()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 1))
	{
		if (func_559())
		{
			func_558();
		}
	}
}

void func_558()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 != 0)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
			func_113(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 1);
		}
		iVar0++;
	}
}

bool func_559()
{
	return Global_2537E2.f_AA3[0 /*80*/].f_1 != 0;
}

int func_560()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0) && func_559())
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 1) && func_559())
	{
		return 1;
	}
	return 0;
}

int func_561()
{
	if (func_559())
	{
		if (func_71(Global_2537E2.f_AA3[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_562()
{
	if (func_559())
	{
		if (func_84(Global_2537E2.f_AA3[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_563(int iParam0)
{
	if (Global_15038F.f_1 != Global_15038F)
	{
		Global_15038F.f_1 = Global_15038F;
	}
	if (Global_15038F != iParam0)
	{
		Global_15038F = iParam0;
	}
}

int func_564(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_611(iParam1);
	fVar4 = func_610();
	iVar5 = 4294967295;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_609())
		{
			if (func_608() > 0 && Global_18052B)
			{
				unk_0xB8E3919889462ACD();
				unk_0xD668DA5CA4A1D2C8(fVar4);
				unk_0x3584F71E5CA29322(18);
				if (unk_0xFEBC1E4EC9E001F0())
				{
					unk_0xE19C2AAC820D8ED5();
				}
				unk_0x3584F71E5CA29322(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_592())
		{
			func_591(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 26))
	{
		func_591(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_24(&(uParam2->f_13)))
	{
		if (func_608() == 1)
		{
			func_590(bVar3, iParam0, 0);
			func_388(&(uParam2->f_13), 0, 0);
			func_591(iParam0, uParam2, 0);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 5);
		}
	}
	if (func_24(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(10);
		if (func_23(&(uParam2->f_13), 10000, 0) || (func_608() == 0 && !bParam5))
		{
			func_591(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_589();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xB8E3919889462ACD();
				}
				unk_0x3584F71E5CA29322(18);
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0))
			{
				if (bVar2 == 0)
				{
					func_589();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(18);
				}
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (func_590(bVar3, iParam0, 0))
				{
					func_555(iParam0, 0, 0);
					sVar1 = func_587(iParam1, &(Global_440000.f_2F9B5), bParam4);
					Var0 = { func_585(iParam1) };
					if (bParam4)
					{
						func_582(iParam0, sVar1, "", 0, 4294967295, 4294967295, 1);
					}
					else if (iParam1 == 27)
					{
						func_576(iParam0, func_579(uParam2), func_577(uParam2), 4294967295);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_572(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(sParam6))
						{
							sVar6 = sParam6;
						}
						func_570(iParam0, sVar6, func_571(), 4294967295);
					}
					else if (func_513())
					{
						uParam2->f_22 = Global_18052A;
						func_582(iParam0, sVar1, &Var0, 1, 4294967295, Global_18052A, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_565(iParam1);
						uParam2->f_22 = Global_18052A;
						func_582(iParam0, sVar1, "", 0, iVar5, Global_18052A, 1);
					}
					else
					{
						iVar5 = func_565(iParam1);
						func_582(iParam0, sVar1, &Var0, 1, iVar5, 4294967295, 1);
					}
					unk_0x5D96D8530B3D0904(&(uParam2->f_21), 0);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0))
			{
				Global_180529 = uParam3;
				Global_180528 = 1;
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_18052A)
					{
						unk_0x0674E58A79778E99(&(uParam2->f_21), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_565(int iParam0)
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_569())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_568(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 20;
			}
			if (func_567(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_566(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 2;
	}
	if (func_225())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_566(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 4;
}

bool func_567(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 7;
}

bool func_568(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 2;
}

bool func_569()
{
	return Global_440000.f_1 == 0;
}

void func_570(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_458(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_458("");
		if (iParam3 != 4294967295)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_571()
{
	switch (func_145(unk_0xD803B885F5E47A62()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_572(var uParam0)
{
	switch (uParam0->f_70)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_6E)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_145(unk_0xD803B885F5E47A62()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_574())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_233(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_233(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_573(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B5))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_573(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_574()
{
	return (func_575() && func_163(func_247()));
}

bool func_575()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 148;
}

void func_576(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_458(sParam1);
		}
		else if (func_519(unk_0xD803B885F5E47A62()) == 133)
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_458("");
		if (iParam3 != 4294967295)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_577(var uParam0)
{
	int iVar0;
	
	iVar0 = func_519(unk_0xD803B885F5E47A62());
	if (func_616())
	{
		if (uParam0->f_67 != 4294967295)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_578())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_578()
{
	if (func_519(unk_0xD803B885F5E47A62()) == 133)
	{
		return Global_26B66F.f_13B5;
	}
	return 4294967295;
}

char* func_579(var uParam0)
{
	int iVar0;
	
	iVar0 = func_519(unk_0xD803B885F5E47A62());
	if (func_616())
	{
		if (uParam0->f_67 != 4294967295)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_581() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_581() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_578())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_580() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_580()
{
	return Global_26B66F.f_13B8;
}

int func_581()
{
	if (func_519(unk_0xD803B885F5E47A62()) == 132)
	{
		return Global_26B66F.f_13B3;
	}
	return 4294967295;
}

void func_582(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_522(sParam1);
		}
		else if (iParam5 != 4294967295)
		{
			unk_0x7ACC3006A87F8B39(sParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_458(sParam1);
		}
		if (func_609() && iParam6)
		{
			if (func_584())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			unk_0x6D99DF8263D35CE5(iVar0);
			unk_0x6D99DF8263D35CE5(iVar1);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_458(sParam2);
		}
		if (iParam4 != 4294967295)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_583(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(166);
			}
			else if (func_81())
			{
				unk_0x3CAEA85DA607305E(220);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_583(int iParam0)
{
	if (func_568(iParam0) || func_567(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_584()
{
	return Global_18052B;
}

struct<4> func_585(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_586(unk_0xD803B885F5E47A62()) || func_566(unk_0xD803B885F5E47A62()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_440000.f_CC, 16);
			break;
	}
	if (func_513() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_CC, 16);
	}
	return Var0;
}

bool func_586(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 5;
}

char* func_587(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_513() || unk_0xEA6BC48857E0AC4C(sParam1)))
	{
		uVar0 = func_588();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_180619 == 0)
		{
			Global_180619 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		if (Global_180619 == 1)
		{
			Global_180619 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_180619 == 0)
		{
			Global_180619 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_588()
{
	if (unk_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_589()
{
	Global_A56F = 1;
}

bool func_590(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return unk_0x83D8570832F172A7(*iParam1);
}

void func_591(int iParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_21), 7);
	Global_180529 = 0;
	func_504();
	Global_180528 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_24(&(uParam1->f_13)))
		{
			func_22(&(uParam1->f_13));
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11F0), 5);
		}
	}
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam1->f_21, 0))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_21), 0);
	}
	unk_0xD668DA5CA4A1D2C8(0f);
}

int func_592()
{
	if (func_607())
	{
		return 0;
	}
	if (func_606())
	{
		return 0;
	}
	if (!func_604())
	{
		return 0;
	}
	if (!func_602())
	{
		return 0;
	}
	if (func_601(8, 4294967295))
	{
		return 0;
	}
	if (func_608() == 2)
	{
		return 0;
	}
	if (Global_26B66F.f_11BF)
	{
		return 0;
	}
	if (func_446())
	{
		return 0;
	}
	else if (!func_598(unk_0xD803B885F5E47A62(), 1, 0) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_597(1) || func_595(1)) || Global_56C3.f_7C) || Global_56C3)
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (func_594() && Global_19DEEC == 2)
	{
		return 0;
	}
	if (func_111(unk_0xD803B885F5E47A62()) && !func_594())
	{
		return 0;
	}
	if (Global_195C36)
	{
		return 0;
	}
	if (Global_195C3B)
	{
		return 0;
	}
	if (func_234(0))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 4))
	{
		return 0;
	}
	if (Global_14E876)
	{
		return 0;
	}
	if ((Global_19C478.f_2CE.f_5 || Global_19CF82.f_2CE.f_5) || Global_19C0AC.f_2CE.f_5)
	{
		return 0;
	}
	if ((Global_19E2B1.f_2D4.f_5 || Global_19E2B1.f_2E8.f_2D4.f_5) || Global_19E2B1.f_5D9.f_2D4.f_5)
	{
		return 0;
	}
	if (func_593(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((Global_14E899 || Global_14E89A) || Global_14E89B)
	{
		return 0;
	}
	return 1;
}

bool func_593(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_4, 6);
}

bool func_594()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 12) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0));
}

int func_595(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_596(unk_0x16F2683693E537C9()))
			{
				if (unk_0x06F8112AA79C53D9(0, 25) || unk_0x06F8112AA79C53D9(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_56C3.f_82)
	{
		return 0;
	}
	if (unk_0x06F8112AA79C53D9(0, 19) || (!bParam0 && unk_0x7FEE810EE9E768EB(0, 19)))
	{
		return 1;
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (((unk_0x06F8112AA79C53D9(0, 166) || unk_0x06F8112AA79C53D9(0, 167)) || unk_0x06F8112AA79C53D9(0, 168)) || unk_0x06F8112AA79C53D9(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x7FEE810EE9E768EB(0, 166) || unk_0x7FEE810EE9E768EB(0, 167)) || unk_0x7FEE810EE9E768EB(0, 168)) || unk_0x7FEE810EE9E768EB(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_596(int iParam0)
{
	int iVar0;
	
	if (unk_0x18AF0C72ABD5543B())
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			unk_0xCAE036C45E7FC720(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_597(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 4);
	}
	return Global_56C3.f_4;
}

int func_598(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_599(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_184507[iParam0 /*876*/] == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool func_599(int iParam0)
{
	return func_600(iParam0);
}

bool func_600(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0);
}

bool func_601(int iParam0, int iParam1)
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

int func_602()
{
	if (func_603() == 0)
	{
		return 1;
	}
	return 0;
}

int func_603()
{
	return Global_1406D3.f_12;
}

int func_604()
{
	if (func_605())
	{
		return 1;
	}
	if (unk_0x757EF87A33649210())
	{
		return 0;
	}
	if (unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749())
	{
		return 0;
	}
	if (unk_0x06980BB66EBA4D95())
	{
		return 0;
	}
	return 1;
}

bool func_605()
{
	return Global_1406B8;
}

bool func_606()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 5;
}

bool func_607()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_608()
{
	return Global_150392.f_44;
}

int func_609()
{
	if (Global_18052A > 16)
	{
		return 1;
	}
	return 0;
}

float func_610()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_611(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_612()
{
	if (func_617())
	{
		return 1;
	}
	if (func_366(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_616())
	{
		return 1;
	}
	if (func_47(unk_0xD803B885F5E47A62()))
	{
		switch (func_519(unk_0xD803B885F5E47A62()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_427(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_427(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_427(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

int func_613(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_47(unk_0xD803B885F5E47A62()) && !func_45(unk_0xD803B885F5E47A62())) && !func_518(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_144(unk_0xD803B885F5E47A62(), 0) && func_45(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
		if (func_38(unk_0xD803B885F5E47A62()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_614(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_184488)
		{
			if (!func_1064(0) && !func_1064(func_615(iParam1)))
			{
				Global_184488 = 1;
			}
		}
	}
	else if (Global_184488)
	{
		Global_184488 = 0;
	}
}

int func_615(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		case 150:
			return 12;
		
		default:
	}
	return Global_40001.f_5C52;
}

bool func_616()
{
	return Global_184488;
}

int func_617()
{
	if (func_618(unk_0xD803B885F5E47A62()))
	{
		return Global_1420BD;
	}
	return 0;
}

int func_618(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_367(iParam0, 0))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0;
}

void func_619()
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	bool bVar3;
	
	bVar2 = true;
	bVar3 = true;
	if (iLocal_1301 == 1 && !func_446())
	{
		func_682(&vLocal_563);
	}
	switch (iLocal_1301)
	{
		case 0:
			if (func_681())
			{
				iLocal_1301++;
			}
			break;
		
		case 1:
			iVar0 = unk_0x9539D44F3E4492F6(Local_80.f_B8.f_7);
			if (unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iVar0, 0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, true) };
				vLocal_563.f_2 = { vVar1 };
			}
			else if (!func_19(vLocal_563.f_2))
			{
				vVar1 = { vLocal_563.f_2 };
			}
			vLocal_563.y = unk_0xA5FBBC2F619A4DE2(Local_80.f_B8.f_2);
			if (unk_0xC844350D5D58C99A(vLocal_563.y))
			{
				if (!unk_0x437347B10A200C4B(vLocal_563.y, 0))
				{
					if (!func_673())
					{
						if (func_19(vLocal_1298))
						{
							if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
							{
								if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
								{
									vLocal_1298 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
									fLocal_1299 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
								}
							}
						}
					}
					unk_0xB12423B4F533017F(vLocal_563.y);
					if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_DE == 99)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 11))
						{
							unk_0xCD5125FFD341A313(false);
							if (!unk_0xECB7F6EB4B9E0C91())
							{
								unk_0x3D21B322A308C613(1);
							}
							unk_0xF8BBEE601D3667D7(vLocal_563.y, 1);
							unk_0x9F528B1B53FBC5D9(unk_0x16F2683693E537C9(), vLocal_563.y, unk_0xF653B9B22DA806A9(vLocal_563.y, "chassis"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 11);
							unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_C3), 2);
							unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 14);
							func_672(unk_0xD803B885F5E47A62(), 0);
							func_667();
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 12))
						{
							func_658(unk_0xD803B885F5E47A62(), 0, 8192, 0);
							unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), true);
							unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 12);
						}
						func_649();
						func_647();
						if (func_673())
						{
							func_658(unk_0xD803B885F5E47A62(), 1, 0, 0);
							iLocal_1301++;
						}
						else
						{
							func_630(&(Local_80.f_B8), &vLocal_563, vLocal_563.y, vVar1, bVar3, bVar2);
							if (bVar2)
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 18) && func_622(0, 1, 1, 0))
								{
									func_621("SCTV_HELI_HLP", 30000);
									if (Local_80.f_C5 != 2)
									{
										func_620(1);
									}
									unk_0x5D96D8530B3D0904(&iLocal_83, 18);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_620(int iParam0)
{
	unk_0x2D03DF47CD5D6E35(3, 21, 200, 0, 0);
	if (iParam0 && !func_559())
	{
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_621(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam1);
}

int func_622(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xFEBC1E4EC9E001F0())
	{
		return 0;
	}
	if (func_629())
	{
		return 0;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	if (func_607())
	{
		return 0;
	}
	if (func_628())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_598(unk_0xD803B885F5E47A62(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_627(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (func_626())
	{
		return 0;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (Global_180528)
	{
		return 0;
	}
	if (func_625())
	{
		return 0;
	}
	if (func_624())
	{
		return 0;
	}
	if (func_446())
	{
		return 0;
	}
	if (Global_12061)
	{
		return 0;
	}
	if (Global_26DD70)
	{
		return 0;
	}
	if (func_623(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_623(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_265BE1;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_624()
{
	return Global_2564C8.f_24F;
}

bool func_625()
{
	return Global_2564C8.f_2E8;
}

bool func_626()
{
	return Global_2537E2.f_BE7.f_242;
}

int func_627(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_D0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_628()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0);
}

int func_629()
{
	if (Global_5145 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_630(var uParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam4, bool bParam5)
{
	switch (func_646(uParam1))
	{
		case 0:
			if (func_645() || bParam4)
			{
				func_644(uParam1, 1);
			}
			break;
		
		case 1:
			if (!unk_0x9F4FE516EAACCFC5(*uParam1))
			{
				*uParam1 = unk_0x0D032838710EE57D("default_scripted_camera", false);
			}
			else
			{
				unk_0xBAF1FC9E86FF7F91();
				unk_0xC5940439E4EB9A33(*uParam1, iParam2, 0f, 2.75f, -1.25f, 1);
				unk_0xE3BB8E05FCEB3FBE(*uParam1, true);
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				func_8(1);
				func_644(uParam1, 2);
			}
			break;
		
		case 2:
			if (unk_0x9F4FE516EAACCFC5(*uParam1))
			{
				if (!unk_0xFBB4F23D534EB790(*uParam1))
				{
					unk_0xC5940439E4EB9A33(*uParam1, iParam2, 0f, 2.75f, -1.25f, 1);
					unk_0xE3BB8E05FCEB3FBE(*uParam1, true);
					unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				}
				else
				{
					unk_0xC9E4A2CFEBE9BD26(*uParam1, vParam3);
				}
				if (bParam5)
				{
					func_631(uParam1);
				}
				if (func_645() && !bParam4)
				{
					func_487(uParam0, 1, 1, 1);
					func_644(uParam1, 0);
				}
			}
			else
			{
				func_644(uParam1, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_631(var uParam0)
{
	struct<9> Var0;
	
	Var0 = { func_643() };
	if (func_641(0, 4294967295, 0))
	{
		switch (uParam0->f_2C3)
		{
			case 0:
				func_639(&(uParam0->f_7));
				func_638(2, 202, "HUD_QUIT", &(uParam0->f_7), 1, 361);
				uParam0->f_2C3++;
				break;
			
			case 1:
				func_632(&(uParam0->f_6), &Var0, &(uParam0->f_7), 0);
				break;
			}
	}
}

void func_632(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || unk_0xB8E3620B82AD47D7(2))
	{
		*uParam2 = 0;
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
		}
		func_637(uParam2);
	}
	if (Global_141384 < 2)
	{
		func_636(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x83D8570832F172A7(*uParam0))
		{
			*uParam0 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			unk_0x7526D52FFFAB1652(*uParam0, "CLEAR_ALL");
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_2B5)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B1, iVar0))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_2B2, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_36;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_37;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_38;
						func_635(unk_0xF59058FCB716F903(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_635(unk_0xF59058FCB716F903(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_36;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_37;
						func_635(unk_0xE32F7AC5E6DF304A(iVar4, iVar5, true));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AE, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						if (uParam2->f_2B6 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0 /*57*/].f_24, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_24);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AF, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_25);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B0, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0 /*57*/].f_26));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_458(&(uParam2->f_1[iVar0 /*57*/].f_20));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B3, iVar0))
						{
							unk_0x1200CC973A2399C8(true);
							unk_0x3CAEA85DA607305E(uParam2->f_1[iVar0 /*57*/].f_37);
						}
						else
						{
							unk_0x1200CC973A2399C8(false);
							unk_0x3CAEA85DA607305E(361);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					func_635(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0 /*57*/].f_10)))
					{
						func_635(&(uParam2->f_1[iVar0 /*57*/].f_10));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AE, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						if (uParam2->f_2B6 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0 /*57*/].f_24, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_24);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AF, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_25);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B0, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0 /*57*/].f_26));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_458(&(uParam2->f_1[iVar0 /*57*/].f_20));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						unk_0x1200CC973A2399C8(false);
						unk_0x3CAEA85DA607305E(361);
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar0++;
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF(uParam2->f_2BB);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x3CAEA85DA607305E(0);
			unk_0x7E60D21B163E9D56();
			*uParam2 = 1;
		}
	}
	uParam2->f_2B7 = 0.05f;
	uParam2->f_2B8 = 0.045f;
	uParam2->f_2B9 = 0f;
	uParam2->f_2BA = 0f;
	if (*uParam2 == 1)
	{
		func_634(*uParam0, uParam1);
	}
	func_633();
}

void func_633()
{
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
}

void func_634(int iParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_635(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_636(int iParam0)
{
	Global_141384 = iParam0;
}

void func_637(var uParam0)
{
	uParam0->f_2B4 = 0;
}

void func_638(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_2B5 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_2B5;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_20), sParam2, 16);
	unk_0x5D96D8530B3D0904(&(uParam3->f_2B1), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_36 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_37 = iParam1;
	uParam3->f_1[iVar0 /*57*/].f_38 = iParam5;
	if (bParam4)
	{
		unk_0x5D96D8530B3D0904(&(uParam3->f_2B3), iVar0);
		if (iParam5 < 361)
		{
		}
	}
	uParam3->f_2B5++;
}

void func_639(var uParam0)
{
	func_640(uParam0);
	uParam0->f_2B4 = 1;
}

void func_640(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_10), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_20), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_24 = 0;
		uParam0->f_1[iVar0 /*57*/].f_25 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_26), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_36 = 2;
		uParam0->f_1[iVar0 /*57*/].f_37 = 361;
		uParam0->f_1[iVar0 /*57*/].f_38 = 361;
		iVar0++;
	}
	uParam0->f_2AE = 0;
	uParam0->f_2AF = 0;
	uParam0->f_2B0 = 0;
	uParam0->f_2B1 = 0;
	uParam0->f_2B3 = 0;
	uParam0->f_2B2 = 0;
	uParam0->f_2B4 = 0;
	uParam0->f_2B5 = 0;
	uParam0->f_2B7 = 0f;
	uParam0->f_2B8 = 0f;
	uParam0->f_2B9 = 0f;
	uParam0->f_2BA = 0f;
	uParam0->f_2BB = 1f;
}

bool func_641(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_490(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_574E.f_1603[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1603[iVar0 /*4*/])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_574E.f_1603[iVar0 /*4*/]), 9);
		Global_574E.f_15FC[iVar0] = 1;
		if (!unk_0x01C309A4BDFCAD82(&(Global_574E.f_1603[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", false);
	Global_574E.f_15EE[iVar0] = 1;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", false);
		Global_574E.f_15F5[iVar0] = 1;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_574E.f_161C[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_642(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_642(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

struct<9> func_643()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_644(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

int func_645()
{
	if ((!unk_0x91E3F625EF57450D(2) && unk_0xD245978525608929(2, 231)) || (unk_0x91E3F625EF57450D(2) && unk_0xD245978525608929(2, 44)))
	{
		return 1;
	}
	return 0;
}

int func_646(var uParam0)
{
	return uParam0->f_5;
}

void func_647()
{
	unk_0xC2127C0F64D6A3B9();
	func_648();
}

void func_648()
{
	Global_56C3.f_86 = 1;
}

void func_649()
{
	func_657();
	func_650(0);
	unk_0x3FC8DBCC154CA56B();
	unk_0x5024DE80A08E9E70(19);
}

void func_650(int iParam0)
{
	if (func_656())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 1)
	{
		if (func_655(0))
		{
			func_651(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 2);
	}
}

void func_651(int iParam0)
{
	if (func_656())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_654())
		{
			func_653(1, 1);
		}
		else
		{
			func_653(0, 0);
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
	if (!func_652())
	{
		Global_4C1E.f_1 = 3;
	}
}

int func_652()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_653(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_655(0))
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

bool func_654()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 5);
}

int func_655(int iParam0)
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

bool func_656()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 19);
}

void func_657()
{
	Global_2537E2.f_484.f_A = 1;
}

void func_658(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_666())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_602())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(1);
				}
				else if (bVar14 || (!func_367(unk_0xD803B885F5E47A62(), 0) && !func_112()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0);
					}
					Global_25033E[iParam0 /*421*/].f_F4 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_663(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_662(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, true, 0);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, false);
					}
					unk_0x120A395B0ECB8EA5(iVar27, true);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, false);
				}
				unk_0x25C5402CC10F76CD(iVar27, true);
				unk_0x62DE699599F0417E(iParam0, 0);
				unk_0x7569764C11F70C0A(iParam0, 0);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 1);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0)
				{
					func_661();
					func_660();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_25033E[iParam0 /*421*/].f_F5 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_24B2D0.f_A70)
				{
					Global_24B2D0.f_A70 = 0;
				}
			}
			else
			{
				if (!func_662(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, true);
						}
					}
					if (func_659(Global_440000.f_38DB3))
					{
						unk_0x1E9649458B15960F(iVar27, true);
					}
				}
				if (Global_140856)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 1);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_659(int iParam0)
{
	return iParam0 == 17;
}

void func_660()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0;
	Global_2537E2.f_4D2 = 0;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 4294967295;
	Global_2537E2.f_4D9 = 0;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_661()
{
	Global_24B2D0.f_2B6 = 0;
	Global_24B2D0.f_AA6 = 0;
	Global_24B2D0.f_200 = 0;
	Global_24B2D0.f_258 = 0;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0;
	Global_24B2D0.f_A79 = 0;
}

int func_662(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, 2500551826);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_663(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
	}
	if (bParam0 == 1)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_665();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_240006.f_3A[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 1);
			}
		}
		if (func_367(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_664(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_664(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_665()
{
	int iVar0;
	
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_240006.f_3A[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 2);
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0);
		}
	}
}

int func_666()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 4294967295)
	{
		return 1;
	}
	return 0;
}

void func_667()
{
	if (func_671() || func_670())
	{
		func_669();
		func_668();
	}
}

void func_668()
{
	if ((!func_446() && !func_624()) && Global_2567E1)
	{
		Global_440000.f_2F9AE = 0;
	}
}

void func_669()
{
	Global_2564C8.f_290 = 1;
}

var func_670()
{
	return Global_2564C8.f_27B;
}

bool func_671()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 11);
}

void func_672(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset");
	}
	unk_0x5D96D8530B3D0904(&iVar0, iParam1);
	unk_0xB7E567188872123E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset", iVar0);
}

int func_673()
{
	if (func_680(&vLocal_563))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 5))
	{
		return 1;
	}
	if (func_674())
	{
		return 1;
	}
	if (func_1004(0))
	{
		return 1;
	}
	if (func_367(unk_0xD803B885F5E47A62(), 0))
	{
		return 1;
	}
	if (Local_80.f_B8.f_7 == func_389())
	{
		return 1;
	}
	return 0;
}

int func_674()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_189.f_5, 0))
	{
		return 1;
	}
	if (func_676() && Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 != 3)
	{
		return 1;
	}
	if (func_675() && Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 != 3)
	{
		return 1;
	}
	if (Global_248A90)
	{
		return 1;
	}
	if (Global_1806FA.f_14)
	{
		return 1;
	}
	return 0;
}

bool func_675()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 5);
}

int func_676()
{
	if (((func_679() || func_479()) || func_678()) || func_677())
	{
		return 1;
	}
	return 0;
}

bool func_677()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 1);
}

bool func_678()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 2);
}

bool func_679()
{
	return Global_2564C8.f_256;
}

bool func_680(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_2C5, 2);
}

int func_681()
{
	if (!func_6(&(Local_80.f_B8)))
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
	{
		return 0;
	}
	if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 < 3)
	{
		return 0;
	}
	if (!func_1274(unk_0xD803B885F5E47A62(), 1, 1))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 5))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 12))
	{
		return 0;
	}
	if (Local_80.f_B8.f_7 == func_389())
	{
		return 0;
	}
	if (!func_1274(Local_80.f_B8.f_7, 1, 1))
	{
		return 0;
	}
	if (Local_80.f_B8.f_7 == unk_0xD803B885F5E47A62())
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 21))
	{
		return 0;
	}
	if (func_446())
	{
		return 0;
	}
	if (unk_0x20906E1D6BDC7044(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (Local_80.f_A5 < 2)
	{
		return 0;
	}
	return 1;
}

void func_682(var uParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2C5, 2))
	{
		switch (uParam0->f_2C4)
		{
			case 0:
				if (!unk_0x798A3F1296751F46())
				{
					if (func_685(uParam0))
					{
						func_684(uParam0);
						UI::_SET_WARNING_MESSAGE_2("SPEC_LEAVE", "SPEC_SURE", 36, 0, 0, 4294967295, 0, 0, 1, 0);
						if (unk_0xD245978525608929(2, 201))
						{
							unk_0x4D7F4CC43D4D0DE3(4294967295, "EXIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							uParam0->f_2C4++;
						}
					}
					else
					{
						func_683(uParam0);
					}
				}
				break;
			
			case 1:
				unk_0x5D96D8530B3D0904(&(uParam0->f_2C5), 2);
				break;
			}
	}
}

void func_683(var uParam0)
{
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (unk_0xD245978525608929(2, 202))
	{
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2C5, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2C5), 0);
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2C5, 1))
		{
			unk_0x4D7F4CC43D4D0DE3(4294967295, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			unk_0x5D96D8530B3D0904(&(uParam0->f_2C5), 1);
		}
	}
}

void func_684(var uParam0)
{
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (unk_0xD245978525608929(2, 202))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_2C5, 0))
		{
			unk_0x4D7F4CC43D4D0DE3(4294967295, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			unk_0x0674E58A79778E99(&(uParam0->f_2C5), 0);
		}
	}
}

bool func_685(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_2C5, 0);
}

void func_686()
{
	vector3 vVar0;
	
	if (Local_80.f_C5 != 2)
	{
		return;
	}
	if (Local_80.f_15 > 0)
	{
		return;
	}
	vVar0 = { vLocal_120[0 /*3*/] };
	if (!func_31(vVar0, 0f, 0f, 0f, 0))
	{
		func_687(200, vVar0, &uLocal_1305, 1140457472, 1144750080, 0);
	}
}

void func_687(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_47(unk_0xD803B885F5E47A62()) && !func_46(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 8)) && (func_43(unk_0xD803B885F5E47A62()) || func_42(unk_0xD803B885F5E47A62()))) || func_19(vParam1))
	{
		return;
	}
	Global_198C6B = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vParam1);
	func_727(iParam0, fVar0);
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 15)
	{
		if (func_41(unk_0xD803B885F5E47A62()) || func_726(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x70305AA977EFE679(1344549371))
			{
				unk_0x8134AB7E30C9809E(1344549371);
			}
		}
		else if (unk_0x70305AA977EFE679(1344549371))
		{
			unk_0x64366F76B4845277(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_363(unk_0xD803B885F5E47A62(), 21) || func_363(unk_0xD803B885F5E47A62(), 25)))
		{
			func_725(vParam1, 1, 0);
		}
		if (!*uParam2 && func_1274(unk_0xD803B885F5E47A62(), 1, 1))
		{
			*uParam2 = 1;
			if (func_724(iParam0))
			{
				unk_0x51B096AAC60548C1(func_723(iParam0));
				if (func_722(iParam0, 4294967295))
				{
					unk_0x34D79252800B23FF(0);
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 1);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 1);
					}
					unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0);
				}
			}
			if (func_721(iParam0))
			{
				fVar1 = func_720(iParam0);
				if (fVar1 != 1f)
				{
					func_716(fVar1);
					unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 1);
				}
			}
			if (!Global_247C05)
			{
				if (func_715(iParam0) && func_41(unk_0xD803B885F5E47A62()))
				{
					func_713(1);
					func_712(2);
				}
			}
			func_360(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_40(unk_0xD803B885F5E47A62(), 19))
			{
				func_362(19);
			}
		}
		if (*uParam2 && func_1274(unk_0xD803B885F5E47A62(), 1, 1))
		{
			*uParam2 = 0;
			if (func_724(iParam0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0))
				{
					unk_0x51B096AAC60548C1(1f);
					unk_0x34D79252800B23FF(5);
					unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0);
				}
			}
			if (func_721(iParam0))
			{
				func_711();
				unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 1);
			}
			if (iParam5 && !func_47(unk_0xD803B885F5E47A62()))
			{
				if (func_145(unk_0xD803B885F5E47A62()) != 152)
				{
					func_689();
				}
			}
			if (func_234(2))
			{
				func_713(0);
				func_688(2);
			}
		}
	}
}

void func_688(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_2D), iParam0);
}

void func_689()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_18), &Global_24C36F, 2);
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_1A), &Global_24C371, 19);
	func_709();
	func_692(1, 1, 0);
	func_690();
}

void func_690()
{
	func_691(0, 0);
}

void func_691(int iParam0, int iParam1)
{
	Global_24B2D0.f_16 = iParam0;
	Global_24B2D0.f_17 = iParam1;
}

void func_692(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2D), &Global_24C384, 320);
	}
	else
	{
		Global_24B2D0.f_2D = { Global_24C384 };
		Global_24B2D0.f_2D.f_31 = { Global_24C384.f_31 };
		Global_24B2D0.f_2D.f_34 = Global_24C384.f_34;
		Global_24B2D0.f_2D.f_35 = Global_24C384.f_35;
	}
	if (bParam0)
	{
		func_708();
	}
	if (!bParam2)
	{
		func_695(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_694(0);
	func_693();
}

void func_693()
{
	struct<6> Var0;
	
	if (Global_24B2D0.f_1E7.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_24B2D0.f_1E7 = { Var0 };
	}
}

void func_694(bool bParam0)
{
	if (bParam0)
	{
		Global_24B2D0.f_2C1 = 0;
	}
	else
	{
		Global_24B2D0.f_2C1 = 1;
	}
}

void func_695(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_707())
		{
			func_706();
		}
		Global_24B2D0.f_2C2.f_206 = unk_0x0D0A574C76D769AC();
		Global_24B2D0.f_2C2.f_1F8 = iParam1;
		Global_24B2D0.f_2C2.f_1F9 = iParam2;
		Global_24B2D0.f_2C2.f_1FA = iParam10;
		func_704();
		func_699(8, 0, 0, 0, 0);
		Global_24B2D0.f_2C2.f_1FB = iParam11;
		Global_24B2D0.f_2C2.f_200 = iParam3;
		Global_24B2D0.f_2C2.f_201 = iParam4;
		Global_24B2D0.f_2C2.f_1FE = iParam5;
		Global_24B2D0.f_2C2.f_1FF = iParam6;
		Global_24B2D0.f_2C2.f_202 = iParam7;
		Global_24B2D0.f_2C2.f_203 = iParam8;
		Global_24B2D0.f_2C2.f_204 = iParam9;
		Global_24B2D0.f_2C2.f_205 = iParam14;
		Global_24B2D0.f_2C2.f_1FC = iParam12;
		Global_24B2D0.f_2C2.f_1FD = iParam13;
		Global_24B2D0.f_6D1 = 1;
	}
	else
	{
		func_696();
	}
}

void func_696()
{
	if (func_707() && !func_698())
	{
		func_706();
	}
	if (func_698())
	{
		func_697();
	}
	else
	{
		func_704();
		func_699(0, 0, 0, 0, 0);
		Global_24B2D0.f_6D1 = 0;
		Global_24B2D0.f_6D0 = 0;
	}
}

void func_697()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2C2), &(Global_24B2D0.f_4C9), 519);
	Global_24B2D0.f_1E7 = { Global_24B2D0.f_1ED };
	if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		Global_24B2D0.f_6D0 = 0;
	}
}

int func_698()
{
	if ((Global_24B2D0.f_6D0 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_4C9.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_4C9.f_206))
	{
		return 1;
	}
	return 0;
}

void func_699(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2537E2.f_766.f_2BF.f_10 != func_389())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_2537E2.f_766.f_2BF.f_10 /*421*/].f_194, 0) && func_700())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_24D062 = 0;
	}
	Global_24B2D0.f_1E7 = iParam0;
	Global_24B2D0.f_1E7.f_1 = unk_0x0D0A574C76D769AC();
	Global_24B2D0.f_1E7.f_2 = iParam1;
	Global_24B2D0.f_1E7.f_3 = iParam2;
	Global_24B2D0.f_1E7.f_4 = iParam3;
	Global_24B2D0.f_1E7.f_5 = iParam4;
}

int func_700()
{
	if ((((((func_145(unk_0xD803B885F5E47A62()) == 229 || func_145(unk_0xD803B885F5E47A62()) == 191) || func_703()) || func_702()) || func_623(unk_0xD803B885F5E47A62())) || Global_265BE2.f_E2 == 1) || (Global_24B2D0.f_6D1 && func_701(unk_0xD803B885F5E47A62())))
	{
		return 0;
	}
	return 1;
}

int func_701(int iParam0)
{
	if (func_43(iParam0))
	{
		return 1;
	}
	if (func_45(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_702()
{
	return Global_180605;
}

int func_703()
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_704()
{
	if (func_707() && !func_698())
	{
		func_706();
	}
	func_705();
	Global_24B2D0.f_2C2 = 0;
}

void func_705()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_24B2D0.f_2C2.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_706()
{
	if (func_698())
	{
		if (Global_24B2D0.f_2C2.f_206 == Global_24B2D0.f_4C9.f_206)
		{
			return;
		}
	}
	if (!unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_4C9), &(Global_24B2D0.f_2C2), 519);
		Global_24B2D0.f_1ED = { Global_24B2D0.f_1E7 };
		Global_24B2D0.f_6D0 = 1;
	}
}

int func_707()
{
	if ((Global_24B2D0.f_6D1 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_2C2.f_206))
	{
		return 1;
	}
	return 0;
}

void func_708()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_16D), &Global_24C4C4, 121);
}

void func_709()
{
	func_710();
	Global_24B2D0.f_8CE = 0;
}

void func_710()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_24B2D0.f_8CF[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_711()
{
	if (unk_0x1727A44C562FBED2(Global_26B66F.f_1400))
	{
		if (!Global_26B66F.f_1400 == unk_0x0D0A574C76D769AC() && Global_26B66F.f_13FF < 1f)
		{
			return;
		}
	}
	Global_26B66F.f_1400 = 4294967295;
	Global_26B66F.f_13FF = 1f;
}

void func_712(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_2D), iParam0);
}

void func_713(int iParam0)
{
	if (func_714() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0;
	Global_247C08 = 0;
}

int func_714()
{
	if ((((Global_EC6CD != 4294967295 && Global_EC6CD != 33) && Global_EC6CD != 35) && Global_EC6CD != 37) && Global_EC6CD != 21)
	{
		return 1;
	}
	return 0;
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_716(float fParam0)
{
	float fVar0;
	
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_717())
	{
		return;
	}
	fVar0 = (Global_26B66F.f_13FF - fParam0);
	if (unk_0x1727A44C562FBED2(Global_26B66F.f_1400))
	{
		if (!Global_26B66F.f_1400 == unk_0x0D0A574C76D769AC() && unk_0x755FF954DAE327E1(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_26B66F.f_13FF = fParam0;
	Global_26B66F.f_1400 = unk_0x0D0A574C76D769AC();
}

int func_717()
{
	switch (func_719())
	{
		case 0:
			return func_718();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_718()
{
	switch (Global_259530)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_719()
{
	return Global_7830;
}

float func_720(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_721(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_722(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_723(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_724(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_725(vector3 vParam0, int iParam1, int iParam2)
{
	Global_24B2D0.f_2D.f_31 = { vParam0 };
	Global_24B2D0.f_2D.f_34 = iParam1;
	Global_24B2D0.f_2D.f_35 = iParam2;
}

int func_726(int iParam0)
{
	if (func_132(iParam0))
	{
		if (func_41(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_727(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_730(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_728();
	}
}

void func_728()
{
	if (!func_729(unk_0xD803B885F5E47A62()))
	{
		func_360(25);
	}
}

bool func_729(int iParam0)
{
	return func_40(iParam0, 25);
}

int func_730(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_40001.f_30EA;
		
		case 142:
			return Global_40001.f_30DE;
		
		case 157:
			return Global_40001.f_30BD;
		
		case 159:
			return Global_40001.f_30AC;
		
		case 162:
			return Global_40001.f_311B;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return 4294967295;
}

void func_731()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
	{
		if (Local_80.f_C5 == 2)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
			{
				if (Local_80.f_15 >= 2)
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 3))
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
								iLocal_560 = iVar0;
								unk_0xAA6B3A4292417750(iVar0, false, true, true, false, false, false, 0, false);
								unk_0x5D96D8530B3D0904(&iLocal_84, 3);
							}
						}
					}
					else if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0xC844350D5D58C99A(iLocal_560))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_560, 0))
							{
								unk_0xAA6B3A4292417750(iLocal_560, false, false, false, false, false, false, 0, false);
								unk_0x0674E58A79778E99(&iLocal_84, 3);
							}
						}
					}
					else if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
					{
						iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
						if (iVar0 != iLocal_560)
						{
							if (unk_0xC844350D5D58C99A(iLocal_560))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_560, 0))
								{
									unk_0xAA6B3A4292417750(iLocal_560, false, false, false, false, false, false, 0, false);
									unk_0x0674E58A79778E99(&iLocal_84, 3);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 3))
	{
		if (unk_0xC844350D5D58C99A(iLocal_560))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_560, 0))
			{
				unk_0xAA6B3A4292417750(iLocal_560, false, false, false, false, false, false, 0, false);
				unk_0x0674E58A79778E99(&iLocal_84, 3);
			}
		}
	}
}

void func_732()
{
	if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 == 0 || Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 == 2)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0) || unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
		{
			if (!func_735())
			{
				func_734();
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0) || unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
	{
		if (func_735())
		{
			func_733();
		}
	}
}

void func_733()
{
	unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 5);
}

void func_734()
{
	unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 5);
}

bool func_735()
{
	return unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 5);
}

void func_736()
{
	struct<4> Var0;
	char* sVar1;
	int iVar2;
	struct<4> Var3;
	struct<4> Var4;
	struct<4> Var5;
	struct<4> Var6;
	struct<4> Var7;
	struct<4> Var8;
	
	if (func_367(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	switch (Local_81[unk_0x57270EE11514DC67() /*8*/].f_7)
	{
		case 0:
			if (Local_80.f_C5 == 2)
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 29))
				{
					if (func_901())
					{
						func_879(200, 1, Local_80.f_C5, 0);
					}
					else
					{
						func_879(200, 0, Local_80.f_C5, 0);
					}
					unk_0x5D96D8530B3D0904(&iLocal_83, 29);
				}
			}
			if (!func_1004(1))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 31))
				{
					func_1002(func_1003(), 1);
					func_997();
					unk_0x0674E58A79778E99(&iLocal_82, 31);
				}
				if (Local_80.f_15 == 0)
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 0))
					{
						if (func_622(0, 1, 1, 1))
						{
							if (func_878())
							{
								sVar1 = func_877();
								if (Local_80.f_C5 == 2)
								{
									if (func_878())
									{
										func_876(sVar1, "CAG_BLIPS", iLocal_1291, 30000);
									}
								}
								else
								{
									func_621(sVar1, 30000);
									func_620(0);
								}
								unk_0x5D96D8530B3D0904(&iLocal_82, 0);
								unk_0x4D7F4CC43D4D0DE3(4294967295, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
							}
						}
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
				{
					if (func_875(1))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 8))
						{
							func_874();
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 3))
						{
							Var0 = { func_873() };
							if (func_492(&Var0))
							{
								if (func_23(&uLocal_1284, 3000, 0))
								{
									unk_0x0674E58A79778E99(&iLocal_83, 3);
									func_22(&uLocal_1284);
									unk_0xA37A90C62806D848(1);
								}
							}
						}
						if (iLocal_557 < func_382())
						{
							if (!func_427(unk_0xD803B885F5E47A62()))
							{
								func_872(1);
							}
							if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 8))
							{
								unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), false);
								if (!func_44())
								{
									if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
									{
										unk_0xDC4BBCD7EBECDC32(false);
										unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 8);
										unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0);
										unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, true);
									}
									else if (func_870(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0))))
									{
										if (func_869(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
										{
											unk_0xDC4BBCD7EBECDC32(false);
											unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0);
											unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 8);
											unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, true);
										}
									}
								}
							}
							else if (func_44())
							{
								unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 8);
							}
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 18))
							{
								unk_0x5D96D8530B3D0904(&iLocal_82, 18);
							}
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								if (!func_44())
								{
									if (func_870(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0))))
									{
										if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 24))
										{
											unk_0x0674E58A79778E99(&iLocal_82, 24);
										}
										if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 23))
										{
											unk_0x0674E58A79778E99(&iLocal_82, 23);
										}
										iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
										if (unk_0xDF1306B443CD3D15(iVar2, 0))
										{
											unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 398, true);
											if (unk_0xA30B8362589C124A(iVar2, 4294967295, 0) == unk_0x16F2683693E537C9())
											{
												if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
												{
													if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
													{
														if (unk_0x0B1BF75E4AE17AC1(unk_0x16F2683693E537C9()))
														{
															unk_0x545E1397F38D9D5A(unk_0x16F2683693E537C9(), 1);
														}
													}
													else if (!unk_0x0B1BF75E4AE17AC1(unk_0x16F2683693E537C9()))
													{
														unk_0x545E1397F38D9D5A(unk_0x16F2683693E537C9(), 0);
													}
												}
												if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 13))
												{
													unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 13);
												}
												if (unk_0xEAE0D21A50E6C7F4(Local_80.f_23, unk_0x57270EE11514DC67()))
												{
													if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
													{
														unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 6);
													}
													unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 0);
													iLocal_559 = iVar2;
													if (Local_1277.f_B == 0)
													{
														Local_1277.f_B = unk_0xDD0E7998AE8AD485();
													}
													sVar1 = func_868();
													if (func_492(sVar1))
													{
														unk_0xA37A90C62806D848(1);
													}
												}
											}
											else
											{
												if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 11))
												{
													if (func_622(0, 1, 1, 1))
													{
														if (func_878())
														{
															Var3 = { func_867() };
															if (func_878())
															{
																func_621(&Var3, 30000);
															}
															if (Local_80.f_C5 != 2)
															{
																func_620(1);
															}
															unk_0x5D96D8530B3D0904(&iLocal_82, 11);
														}
													}
												}
												if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
												{
													unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 6);
												}
											}
										}
									}
									else
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 24))
										{
											if (func_622(0, 1, 1, 1))
											{
												if (func_878())
												{
													sVar1 = func_866();
													if (func_878())
													{
														func_621(sVar1, 30000);
													}
													if (Local_80.f_C5 != 2)
													{
														func_620(1);
													}
													unk_0x5D96D8530B3D0904(&iLocal_82, 24);
												}
											}
										}
										if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 8))
										{
											func_865(1);
											unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 8);
											unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
										}
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 23))
								{
									if (func_622(0, 1, 1, 1))
									{
										unk_0x5D96D8530B3D0904(&iLocal_82, 23);
										if (func_878())
										{
											func_621("PEN_PASSMD", 30000);
										}
										if (Local_80.f_C5 != 2)
										{
											func_620(1);
										}
									}
								}
							}
							else
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 1))
								{
									if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 0))
									{
										if (func_622(0, 1, 1, 1))
										{
											if (func_878())
											{
												sVar1 = func_868();
												if (func_878())
												{
													func_621(sVar1, 30000);
												}
												if (Local_80.f_C5 != 2)
												{
													func_620(1);
												}
												unk_0x5D96D8530B3D0904(&iLocal_82, 1);
											}
										}
									}
								}
								if (unk_0xDF1306B443CD3D15(iLocal_559, 0))
								{
								}
								if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
								{
									unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 6);
								}
							}
							func_864();
						}
					}
					else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 8))
						{
							func_862();
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 24))
						{
							unk_0x0674E58A79778E99(&iLocal_82, 24);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 18))
						{
							unk_0x0674E58A79778E99(&iLocal_82, 18);
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 8))
						{
							func_865(1);
							unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
							unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 8);
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, false);
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
						{
							unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 6);
						}
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x0B1BF75E4AE17AC1(unk_0x16F2683693E537C9()))
						{
							unk_0x545E1397F38D9D5A(unk_0x16F2683693E537C9(), 0);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 4))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 3))
							{
								if (func_622(0, 1, 1, 1))
								{
									if (func_878())
									{
										unk_0x0674E58A79778E99(&iLocal_83, 4);
										unk_0x5D96D8530B3D0904(&iLocal_83, 3);
										func_22(&uLocal_1284);
										func_388(&uLocal_1284, 0, 0);
										Var0 = { func_873() };
										if (func_878())
										{
											func_621(&Var0, 30000);
										}
										if (Local_80.f_C5 != 2)
										{
											func_620(1);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (!func_875(1))
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 8))
							{
								func_865(1);
								unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 8);
								unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
								unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, false);
							}
							unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 0);
							unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 13);
							func_997();
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x0B1BF75E4AE17AC1(unk_0x16F2683693E537C9()))
							{
								unk_0x545E1397F38D9D5A(unk_0x16F2683693E537C9(), 0);
							}
							if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 18))
							{
								unk_0x0674E58A79778E99(&iLocal_82, 18);
							}
							if (unk_0xDF1306B443CD3D15(iLocal_559, 0))
							{
							}
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 398, false);
							if (func_427(unk_0xD803B885F5E47A62()))
							{
								func_872(0);
							}
							unk_0x5D96D8530B3D0904(&iLocal_83, 4);
						}
					}
					else
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 3))
						{
							Var0 = { func_873() };
							if (func_492(&Var0))
							{
								if (func_23(&uLocal_1284, 3000, 0))
								{
									unk_0x0674E58A79778E99(&iLocal_83, 3);
									func_22(&uLocal_1284);
									unk_0xA37A90C62806D848(1);
								}
							}
						}
						if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
						{
						}
						if (func_44())
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x0B1BF75E4AE17AC1(unk_0x16F2683693E537C9()))
							{
								unk_0x545E1397F38D9D5A(unk_0x16F2683693E537C9(), 0);
							}
							unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 0);
							unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 13);
						}
						else if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 25))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 7))
							{
								if (func_622(0, 1, 1, 1))
								{
									if (func_878())
									{
										Var4 = { func_861() };
										if (func_878())
										{
											func_621(&Var4, 30000);
										}
										if (Local_80.f_C5 != 2)
										{
											func_620(1);
										}
										unk_0x5D96D8530B3D0904(&iLocal_82, 25);
									}
								}
							}
						}
						func_864();
					}
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if ((!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) || (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && !unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))) || !func_870(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0))))
						{
							unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 0);
							unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 13);
							if (unk_0xDF1306B443CD3D15(iLocal_559, 0))
							{
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 1))
						{
							Var0 = { func_860() };
							if (func_492(&Var0))
							{
								unk_0xA37A90C62806D848(1);
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 3))
						{
							if (func_622(0, 1, 1, 1))
							{
								if (func_878())
								{
									Var0 = { func_860() };
									if (func_878())
									{
										func_621(&Var0, 30000);
									}
									if (Local_80.f_C5 != 2)
									{
										func_620(1);
									}
									unk_0x5D96D8530B3D0904(&iLocal_82, 3);
								}
							}
						}
					}
					if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 2))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
							{
								if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 1))
								{
									if (func_622(0, 1, 1, 1))
									{
										if (func_878())
										{
											Var0 = { func_859() };
											if (func_878())
											{
												func_621(&Var0, 30000);
											}
											if (Local_80.f_C5 != 2)
											{
												func_620(1);
											}
											unk_0x5D96D8530B3D0904(&iLocal_82, 2);
										}
									}
								}
							}
						}
					}
				}
				func_478(1, 0);
				func_468();
				func_454();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 31))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_103))
				{
					unk_0x142CC44DB769B57E(&iLocal_103);
				}
				func_434();
				func_421();
				unk_0x5D96D8530B3D0904(&iLocal_82, 31);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, false);
				if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
				{
					unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 0);
				}
			}
			if (Local_80.f_15 >= 1)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 12))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
					{
						if (Local_80.f_C5 == 2)
						{
							if (!func_901())
							{
								func_713(1);
							}
							func_853(0);
							func_728();
							func_852(1);
						}
						else
						{
							func_843(136, 0f, 0f, 1, 1, 1, 0);
							func_819(1);
							func_872(0);
						}
						func_872(0);
						if (unk_0xE4EDC4B0E92C078B(iLocal_103))
						{
							unk_0x142CC44DB769B57E(&iLocal_103);
						}
						func_421();
						func_818(1);
						func_815();
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x0B1BF75E4AE17AC1(unk_0x16F2683693E537C9()))
						{
							unk_0x545E1397F38D9D5A(unk_0x16F2683693E537C9(), 0);
						}
						iLocal_101 = unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9());
						if (Local_80.f_C5 != 2)
						{
							unk_0x6DF7BF67E86AAE86(unk_0x16F2683693E537C9(), iLocal_99);
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, true);
						}
						else
						{
							func_865(0);
							unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), false, true, true, false, false, false, 0, false);
							unk_0x5D96D8530B3D0904(&iLocal_84, 2);
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, false);
						}
						func_812(8, 0, 1);
						unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
						func_388(&uLocal_1286, 0, 0);
						Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 1;
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
					{
						if (Local_80.f_C5 == 2)
						{
						}
						else
						{
							func_843(136, 0f, 0f, 1, 1, 0, 0);
						}
						func_421();
						if (unk_0xE4EDC4B0E92C078B(iLocal_103))
						{
							unk_0x142CC44DB769B57E(&iLocal_103);
						}
						func_818(1);
						unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
						func_872(0);
						Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 1;
					}
					else
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 8))
						{
							func_865(1);
							unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
							unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 8);
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, false);
						}
						if (unk_0xE4EDC4B0E92C078B(iLocal_103))
						{
							unk_0x142CC44DB769B57E(&iLocal_103);
						}
						func_872(0);
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 398, false);
						func_421();
						func_811(&iLocal_1271);
						Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 3;
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 8))
					{
						func_865(1);
						unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
						unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 8);
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, false);
					}
					func_434();
					if (unk_0xE4EDC4B0E92C078B(iLocal_103))
					{
						unk_0x142CC44DB769B57E(&iLocal_103);
					}
					func_421();
					func_811(&iLocal_1271);
					func_872(0);
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 398, false);
					Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 3;
				}
			}
			else if (Local_80.f_C5 != 2 && func_808(2, 0, 1, 0, 0))
			{
				func_872(0);
				Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 5;
			}
			func_807();
			break;
		
		case 1:
			func_454();
			func_807();
			func_478(!unk_0xEAE0D21A50E6C7F4(iLocal_82, 9), 0);
			func_864();
			func_806();
			if (Local_80.f_15 >= 2)
			{
				func_388(&uLocal_118, 0, 0);
				Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 2;
			}
			break;
		
		case 2:
			if (Local_1277.f_9 == 0)
			{
				Local_1277.f_9 = unk_0xDD0E7998AE8AD485();
			}
			if (Local_80.f_C5 == 2)
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0))
				{
					unk_0x34D79252800B23FF(0);
					unk_0x5D96D8530B3D0904(&iLocal_84, 0);
				}
				else if (unk_0x02A813E6E0380440() > 0)
				{
					unk_0x34D79252800B23FF(0);
				}
			}
			func_29(1);
			func_448();
			func_478(0, 0);
			func_797();
			func_439();
			func_494(0);
			func_790();
			func_807();
			func_788();
			sVar1 = func_868();
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 13))
			{
				Var8 = { func_787() };
				if (!func_1004(1))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
					{
						if (func_622(0, 0, 1, 1))
						{
							if (!func_786(55))
							{
								func_621(&Var8, 30000);
								if (Local_80.f_C5 != 2)
								{
									func_620(1);
								}
								unk_0x5D96D8530B3D0904(&iLocal_82, 13);
							}
						}
					}
				}
				else
				{
					Var5 = { func_867() };
					Var6 = { func_861() };
					Var7 = { func_873() };
					if ((((((func_492(&Var8) || func_492(&Var7)) || func_492(&Var5)) || func_492(sVar1)) || func_492(&Var6)) || func_492("PEN_MPLAY")) || func_492("PEN_START2"))
					{
						unk_0xA37A90C62806D848(1);
					}
				}
			}
			else if (iLocal_86 != 0)
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 5))
				{
					if (func_622(0, 0, 1, 1))
					{
						if (!func_786(55))
						{
							func_621("PEN_STILLP", 30000);
							if (Local_80.f_C5 != 2)
							{
								func_620(1);
							}
							unk_0x5D96D8530B3D0904(&iLocal_82, 5);
						}
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 1))
			{
				Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 3;
				func_421();
				if (unk_0xE4EDC4B0E92C078B(iLocal_561))
				{
					unk_0x142CC44DB769B57E(&iLocal_561);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 12))
				{
					Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 3;
					func_421();
				}
			}
			if (Local_80.f_15 == 3)
			{
				func_434();
				func_421();
				Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 3;
			}
			if (func_446())
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
				{
					unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 0);
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
				{
					unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 6);
				}
				if (func_785())
				{
					func_784(0);
				}
				unk_0x5D96D8530B3D0904(&iLocal_83, 20);
				func_434();
				func_421();
				func_865(1);
				unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 8);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, false);
				Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 3;
			}
			else if (Local_80.f_15 == 4)
			{
				Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 4;
			}
			else if (Local_80.f_15 > 4)
			{
				Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 5;
			}
			else if (Local_80.f_C5 != 2 && func_808(2, 0, 1, 0, 0))
			{
				Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 5;
			}
			else if (func_481())
			{
				func_434();
				func_421();
				func_865(1);
				unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 8);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, false);
				Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 3;
			}
			break;
		
		case 3:
			if (!func_1004(1))
			{
				if ((!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 17) && !unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 16)) && !unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 18))
				{
					func_779();
					func_777();
				}
				func_807();
				if ((!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0) || unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 1)) || unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
				{
					if (Local_80.f_15 > 1 && Local_80.f_15 < 3)
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 17))
						{
							if (unk_0xE4EDC4B0E92C078B(iLocal_102))
							{
								unk_0x61755AC17D8F538E(iLocal_102, 55);
								unk_0x5D96D8530B3D0904(&iLocal_83, 17);
							}
						}
						func_29(1);
						func_448();
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0) || unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
					{
						func_478(0, 1);
					}
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 17))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_102))
				{
					unk_0x142CC44DB769B57E(&iLocal_102);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0))
			{
				unk_0x34D79252800B23FF(5);
				unk_0x0674E58A79778E99(&iLocal_84, 0);
			}
			if (func_785())
			{
				if (func_446())
				{
					func_784(0);
				}
			}
			func_37();
			if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 2))
				{
					func_494(1);
				}
			}
			else
			{
				func_776();
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 6))
			{
				if (unk_0x562F77A7F33D2E46("MP_Player_Inside_Bubble_Scene"))
				{
					unk_0x8910D3D58E0132B8("MP_Player_Inside_Bubble_Scene");
				}
				if (unk_0x562F77A7F33D2E46("MP_Player_Outside_Bubble_Scene"))
				{
					unk_0x8910D3D58E0132B8("MP_Player_Outside_Bubble_Scene");
				}
				unk_0x9A1335ECD7BD117F("pennedIn");
				unk_0x82A772610883F395("PennedInOut", 0, 0);
				unk_0x0674E58A79778E99(&iLocal_82, 6);
			}
			if (Local_80.f_C5 != 2)
			{
				if (func_47(unk_0xD803B885F5E47A62()))
				{
					func_819(0);
					func_818(0);
					unk_0x5D96D8530B3D0904(&iLocal_83, 24);
					func_750(136, 0, 1);
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 24))
			{
				func_818(0);
				unk_0x5D96D8530B3D0904(&iLocal_83, 24);
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 21))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 14) || unk_0xEAE0D21A50E6C7F4(iLocal_82, 20))
				{
					unk_0x5D96D8530B3D0904(&iLocal_83, 21);
				}
			}
			if (func_673())
			{
				if (func_737())
				{
					if (Local_80.f_15 == 4)
					{
						Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 4;
					}
					else if (Local_80.f_15 > 4)
					{
						Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 5;
					}
					else
					{
						func_485();
					}
				}
			}
			break;
		
		case 4:
			if (Local_80.f_15 > 4)
			{
				Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 = 5;
			}
			break;
		
		case 5:
			func_1160();
			break;
	}
}

int func_737()
{
	if ((func_484() && !func_19(vLocal_1298)) || unk_0xEAE0D21A50E6C7F4(iLocal_83, 23))
	{
		switch (iLocal_1300)
		{
			case 0:
				if (!unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(500);
				}
				else
				{
					iLocal_1300++;
				}
				break;
			
			case 1:
				if (unk_0x757EF87A33649210())
				{
					unk_0x5D96D8530B3D0904(&iLocal_83, 23);
					func_749();
					func_485();
					iLocal_1300++;
				}
				break;
			
			case 2:
				if (func_738(vLocal_1298, fLocal_1299, 0, 1, 0, 0, 1, 0, 1, 0, 0))
				{
					iLocal_1300++;
				}
				break;
			
			case 3:
				if (!unk_0x7BCE0E6DD4A1F749() && !unk_0xD0BB2359EC70FC37())
				{
					unk_0x82E51BCA72537B6C(500);
					iLocal_1300++;
				}
				break;
			
			case 4:
				if (unk_0x0F1CCD77290EE12F())
				{
					iLocal_1300++;
				}
				break;
			
			case 5:
				return 1;
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_738(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	Global_56C3.f_6 = 1;
	if (Global_2537E2.f_4D1 && Global_2537E2.f_4D9)
	{
		func_746(0, bParam7);
		return 1;
	}
	if (unk_0x991B1F0980C62628() && !bParam7)
	{
		if (Global_2537E2.f_4D1)
		{
			func_746(0, bParam7);
		}
		return 0;
	}
	if ((unk_0xEB880D98B5988D0C() && !bParam7) && !unk_0x0C2635BB5127C8FB())
	{
		return 0;
	}
	if (!func_745())
	{
		if (func_744(unk_0xD803B885F5E47A62(), 1, 0) && !(func_594() || func_743()))
		{
			if (((bParam7 && func_1274(unk_0xD803B885F5E47A62(), 1, 0)) && unk_0x991B1F0980C62628()) && Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_DE == 1)
			{
			}
			else if (func_742() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2537E2.f_4D1 && !bParam9)
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false) };
		if ((unk_0x755FF954DAE327E1((vVar1.x - vParam0.x)) < 0.2f && unk_0x755FF954DAE327E1((vVar1.y - vParam0.y)) < 0.2f) && unk_0x755FF954DAE327E1((vVar1.z - vParam0.z)) < 1.2f)
		{
			fVar2 = (fParam1 - unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (unk_0x755FF954DAE327E1(fVar2) < 1f)
			{
				Global_2537E2.f_4D1 = 0;
				Global_2537E2.f_4D2 = 0;
				if (unk_0x0C2635BB5127C8FB())
				{
					unk_0x5D29A7ED2621B332();
				}
				return 1;
			}
		}
	}
	if (((!vParam0.x == Global_2537E2.f_4D3 || !vParam0.y == Global_2537E2.f_4D3.f_1) || !vParam0.z == Global_2537E2.f_4D3.f_2) || !fParam1 == Global_2537E2.f_4D6)
	{
		if (Global_2537E2.f_4D1 == 1)
		{
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2537E2.f_4D7) < func_741(0))
			{
				return 0;
			}
			unk_0x5D29A7ED2621B332();
			Global_2537E2.f_4D2 = 1;
		}
		else
		{
			Global_2537E2.f_4D2 = 0;
		}
		Global_2537E2.f_4D3 = { vParam0 };
		Global_2537E2.f_4D6 = fParam1;
		Global_2537E2.f_4D1 = 0;
	}
	if (!Global_2537E2.f_4D1 && !unk_0x0C2635BB5127C8FB())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_181EC.f_54D[44], 16))
			{
				func_740(0);
			}
			if (!unk_0xC4AEA6B98479242E(unk_0x16F2683693E537C9(), &(Global_24B2D0.f_1F3)))
			{
				Global_24B2D0.f_1F3 = 0;
			}
		}
		if (bParam2)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if (unk_0x6CFEA4CFD9C496C8(iVar0))
				{
					Global_2537E2.f_4D8 = 0;
				}
			}
		}
		if (Global_2537E2.f_4D8 > 4294967295)
		{
			Global_2537E2.f_4D7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_4D1 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						if (unk_0xAFE0D3608EDA7039(iVar0))
						{
							unk_0xA47B46945FF6DE74(iVar0, vParam0, 0, true, 1, 1);
							unk_0xD8F6A53F4799FAFE(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								unk_0xC023D1C4BF532815(iVar0, fParam10, 0f, fParam1, 2, 1);
							}
						}
						else
						{
							unk_0x0C8A454B494DAA0D(iVar0);
						}
					}
					else
					{
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vParam0, 0, false, 0, 1);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fParam1);
					}
				}
				else
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vParam0, 0, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fParam1);
				}
				func_746(bParam4, bParam7);
				return 1;
			}
			else
			{
				unk_0x066C43E677C08D5C();
				unk_0x28B8A2632901EC2F(unk_0xD803B885F5E47A62(), vParam0, fParam1, bParam2, bParam8, 0);
			}
			Global_2537E2.f_4D7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_4D1 = 1;
		}
	}
	if (Global_2537E2.f_4D1)
	{
		Global_56C3.f_6 = 1;
		Global_2537E2.f_4D7 = unk_0x2B6E0A53779D29EA();
		if (Global_2537E2.f_4D8 > 4294967295)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
			}
			if (func_739(&(Global_2537E2.f_4D8), vParam0, fParam1, iVar0))
			{
				func_746(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), Global_2537E2.f_4D3) < 2f)
				{
					if (unk_0x0C2635BB5127C8FB())
					{
						unk_0x5D29A7ED2621B332();
					}
					func_746(bParam4, bParam7);
					return 1;
				}
			}
			if (!unk_0x0C2635BB5127C8FB())
			{
				if (fParam10 != 0f)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						unk_0xC023D1C4BF532815(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_2537E2.f_4D9 = 1;
						return 0;
					}
				}
				func_746(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_739(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(Global_2537E2.f_4DA) && !unk_0x437347B10A200C4B(Global_2537E2.f_4DA, 0))
	{
		unk_0x0C8A454B494DAA0D(Global_2537E2.f_4DA);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2537E2.f_4DA = iParam3;
			unk_0x0C8A454B494DAA0D(Global_2537E2.f_4DA);
			if (unk_0xAFE0D3608EDA7039(Global_2537E2.f_4DA))
			{
				if (!unk_0x437347B10A200C4B(Global_2537E2.f_4DA, 0))
				{
					unk_0xD8F6A53F4799FAFE(Global_2537E2.f_4DA, fParam2);
					unk_0xA47B46945FF6DE74(Global_2537E2.f_4DA, vParam1, 0, true, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_740(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_24B2D0.f_A7A;
	if ((unk_0x7E369B13C7215476() && Global_24B2D0.f_A78 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_24B2D0.f_A77)
	{
		if (!unk_0xEFFB47DC2D8F23F9())
		{
			Global_24B2D0.f_A77 = iVar0;
		}
	}
}

int func_741(bool bParam0)
{
	if (unk_0x757EF87A33649210())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_742()
{
	return Global_14082C;
}

bool func_743()
{
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 12) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 12)) && Global_19DEEC == 8);
}

int func_744(int iParam0, bool bParam1, int iParam2)
{
	if (Global_25033E[iParam0 /*421*/].f_DE == 99)
	{
		if ((iParam2 && Global_25033E[iParam0 /*421*/].f_E1 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_25033E[iParam0 /*421*/].f_DE == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_745()
{
	return Global_140856;
}

void func_746(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0xEF6276132B396452(0f, 1065353216);
		unk_0x2FB9A57162E54BAB(0f);
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
	}
	if (!bParam1)
	{
		unk_0x066C43E677C08D5C();
	}
	if (unk_0x0C2635BB5127C8FB())
	{
		unk_0x5D29A7ED2621B332();
	}
	func_660();
	if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 14) && !func_748())
	{
		func_747();
	}
}

void func_747()
{
	Global_26DA2B.f_52 = 1;
}

int func_748()
{
	if (!unk_0xA14BB9332558B949() && !func_745())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_3A31D[0 /*24*/].f_11, 0))
	{
		return 1;
	}
	return 0;
}

void func_749()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0xD59B17D2DFF98E26(unk_0x16F2683693E537C9()))
			{
				unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 1, true);
			}
		}
	}
}

void func_750(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0xD803B885F5E47A62() != 4294967295)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 13))
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 13);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 14))
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 14);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 21))
	{
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 21);
	}
	func_772();
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 0);
	unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_771(func_519(unk_0xD803B885F5E47A62()));
		func_769(func_770(iParam0), 0);
	}
	else
	{
		if ((bParam2 && unk_0xD803B885F5E47A62() != 4294967295) && func_768(unk_0xD803B885F5E47A62()) >= 12)
		{
			func_157(2546, 4294967295);
			iVar1 = func_50(2546, 4294967295, 0);
			if (iVar1 == 2)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 5);
			}
		}
		func_767();
		func_766();
		func_765();
		if ((!func_41(unk_0xD803B885F5E47A62()) && !func_39(unk_0xD803B885F5E47A62())) && !func_702())
		{
			func_689();
		}
		func_764();
		if (!unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0) && !unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 1))
		{
			func_862();
		}
		func_763();
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6D2), 2);
		func_762();
		func_761();
	}
	if (unk_0x70305AA977EFE679(1344549371))
	{
		unk_0x64366F76B4845277(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0xD803B885F5E47A62() != 4294967295 && !func_363(unk_0xD803B885F5E47A62(), 21)) && !func_363(unk_0xD803B885F5E47A62(), 25)) && !func_144(unk_0xD803B885F5E47A62(), 0))
		{
			func_713(0);
			func_759(0);
			if (!bParam1)
			{
				func_758();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_757(26, 4294967295))
		{
			Global_259486 = 4294967295;
			func_755(26, 4294967295);
		}
	}
	if (!func_751())
	{
		Global_2658D5 = 1;
	}
}

int func_751()
{
	if ((((((!func_583(unk_0xD803B885F5E47A62()) && !func_566(unk_0xD803B885F5E47A62())) && func_519(unk_0xD803B885F5E47A62()) != 146) && !func_754()) && !func_753()) && !func_752(Global_440000.f_38DB3)) && !func_103())
	{
		return 0;
	}
	return 1;
}

bool func_752(int iParam0)
{
	return iParam0 == 57;
}

int func_753()
{
	if (Global_440000.f_2F9AE == Global_40001.f_257C)
	{
		return 1;
	}
	return 0;
}

int func_754()
{
	if ((Global_440000 == 0 && unk_0xA14BB9332558B949()) && (((((((Global_440000.f_5 != 0 || Global_440000.f_38DB3 > 0) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 15)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 18)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 19)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 29)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 28)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_755(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_52();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x25C34E9F657F1C79(0, iParam1);
			break;
		
		default:
			iVar1 = func_756(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x0674E58A79778E99(&iVar0, iParam0);
				unk_0x25C34E9F657F1C79(iVar0, iParam1);
			}
			break;
	}
}

int func_756(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_52();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_757(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_52();
	}
	iVar0 = func_756(iParam1);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, iParam0);
}

void func_758()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1403FD)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar0 /*26*/].f_C, 11))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar0 /*26*/].f_D, 26))
			{
				unk_0x0674E58A79778E99(&(Global_2401A9[iVar0 /*26*/].f_D), 26);
			}
		}
		iVar0++;
	}
}

void func_759(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_181EC.f_8 = 1;
	}
	else
	{
		Global_181EC.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_760(iVar0);
		iVar0++;
	}
}

void func_760(int iParam0)
{
	Global_181EC.f_B5[iParam0] = 1;
	Global_181EC.f_B4 = 1;
}

void func_761()
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_7 = 0;
}

void func_762()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 1))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 1);
	}
	if (Global_26B66F.f_1361 > 0)
	{
		unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_KILL");
		unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
		unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0xBEF52C1D400C0A44(1);
		Global_26B66F.f_1361 = 0;
		unk_0x7352ACF3368DF65F("DisableFlightMusic", 0);
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
		unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
		if (!unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "am_pi_menu"))
		{
			if (Global_26B66F.f_136B > 4294967295)
			{
				unk_0x43A06902454A1172(Global_26B66F.f_136B);
				Global_26B66F.f_136B = 4294967295;
			}
		}
	}
}

void func_763()
{
	struct<25> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_15 = 4294967295;
	Global_1806FA = { Var0 };
}

void func_764()
{
	var uVar0;
	
	Global_1420BD = uVar0;
}

void func_765()
{
	Global_26B66F.f_1362 = 0;
}

void func_766()
{
	if (unk_0xD803B885F5E47A62() != 4294967295)
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1 = 0;
	}
}

void func_767()
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (iVar0 != 4294967295)
	{
		Global_18D84D[iVar0 /*615*/] = 4294967295;
	}
}

int func_768(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_D3.f_6;
}

void func_769(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
	}
}

int func_770(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

int func_771(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case 4294967295:
			return 1;
		
		case 146:
			if (func_42(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_772()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 3) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 4))
	{
		if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
		{
			unk_0x82E51BCA72537B6C(800);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 5))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C7), 5);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 3))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C7), 3);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 4))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C7), 4);
	}
	func_775(0);
	func_774(0);
	func_773(0);
}

void func_773(int iParam0)
{
	if (Global_26B66F.f_11A8 != iParam0)
	{
		Global_26B66F.f_11A8 = iParam0;
	}
}

void func_774(bool bParam0)
{
	if (Global_26B66F.f_11A7 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_26B66F.f_11A7 = bParam0;
	}
}

void func_775(int iParam0)
{
	if (Global_26B66F.f_11A5 != iParam0)
	{
		Global_26B66F.f_11A5 = iParam0;
	}
}

void func_776()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar1 = unk_0xA30B8362589C124A(iVar0, 4294967295, 0);
			if (iVar1 != 0)
			{
				if (iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0x34BFC6F0CB887BC2(iVar1))
					{
						iVar2 = unk_0x83FACCC48B68F9D1(iVar1);
						if (unk_0xFB75B0F82CA525F6(iVar2))
						{
							iVar3 = unk_0x7B9C1F53FE442D06(iVar2);
							iVar4 = iVar3;
							if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar4 /*8*/].f_1, 0))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar4 /*8*/].f_1, 1))
								{
									bVar5 = true;
								}
							}
						}
					}
				}
			}
		}
	}
	if (bVar5)
	{
		func_864();
	}
}

void func_777()
{
	struct<4> Var0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 12))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 10))
		{
			if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 == 3)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 1))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 20))
							{
								if (!func_481())
								{
									if (func_622(0, 1, 1, 1))
									{
										Var0 = { func_778() };
										func_621(&Var0, 30000);
										if (Local_80.f_C5 != 2)
										{
											func_620(1);
										}
										unk_0x5D96D8530B3D0904(&iLocal_82, 10);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

struct<4> func_778()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_NAVAIL", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NAVAIL", 16);
			break;
	}
	return Var0;
}

void func_779()
{
	struct<4> Var0;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 4))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 12))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
			{
				if (func_622(0, 1, 1, 1))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 1))
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 5))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 6))
							{
								Var0 = { func_783() };
								func_621(&Var0, 4294967295);
								if (Local_80.f_C5 != 2)
								{
									func_620(1);
								}
								unk_0x5D96D8530B3D0904(&iLocal_83, 6);
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 8))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 6))
							{
								Var0 = { func_782() };
								func_621(&Var0, 4294967295);
								if (Local_80.f_C5 != 2)
								{
									func_620(1);
								}
								unk_0x5D96D8530B3D0904(&iLocal_83, 6);
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 6))
							{
								Var0 = { func_782() };
								func_621(&Var0, 4294967295);
								if (Local_80.f_C5 != 2)
								{
									func_620(1);
								}
								unk_0x5D96D8530B3D0904(&iLocal_83, 6);
							}
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 5))
					{
						Var0 = { func_781() };
						func_621(&Var0, 30000);
						if (Local_80.f_C5 != 2)
						{
							func_620(1);
						}
					}
					unk_0x5D96D8530B3D0904(&iLocal_82, 4);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 1))
			{
				if (func_622(0, 1, 1, 1))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 20))
					{
						Var0 = { func_781() };
						func_621(&Var0, 30000);
						if (Local_80.f_C5 != 2)
						{
							func_620(1);
						}
						unk_0x5D96D8530B3D0904(&iLocal_82, 4);
					}
				}
			}
		}
		else
		{
			Var0 = { func_780() };
			func_53(&Var0);
			unk_0x5D96D8530B3D0904(&iLocal_82, 4);
		}
	}
}

struct<4> func_780()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXPD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXPD", 16);
			break;
	}
	return Var0;
}

struct<4> func_781()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_NAVAIL2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NAVAIL2", 16);
			break;
	}
	return Var0;
}

struct<4> func_782()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXITD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXITD", 16);
			break;
	}
	return Var0;
}

struct<4> func_783()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXITP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXITP", 16);
			break;
	}
	return Var0;
}

void func_784(int iParam0)
{
	Global_26B66F.f_13B7 = iParam0;
}

bool func_785()
{
	return Global_26B66F.f_13B7;
}

bool func_786(int iParam0)
{
	return Global_2537E2.f_AA3[0 /*80*/].f_1 == iParam0;
}

struct<4> func_787()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_NDRV2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NDRV2", 16);
			break;
	}
	return Var0;
}

void func_788()
{
	if (Local_80.f_C5 == 2)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 30))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 2))
					{
						if (!func_24(&uLocal_116))
						{
							func_388(&uLocal_116, 0, 0);
						}
						else if (func_23(&uLocal_116, 10000, 0))
						{
							if (!unk_0xFEBC1E4EC9E001F0())
							{
								func_789("BRS_BM_EXP1", 4294967295);
								unk_0x5D96D8530B3D0904(&iLocal_83, 30);
							}
						}
					}
				}
			}
		}
	}
}

void func_789(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_790()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 16))
	{
		if (Local_80.f_15 > 1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
					{
						iLocal_558 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
						if (unk_0xA30B8362589C124A(iLocal_558, 4294967295, 0) == unk_0x16F2683693E537C9())
						{
							if (unk_0xAFE0D3608EDA7039(iLocal_558))
							{
								if (((((!func_796(iLocal_558, 1) && !func_795(iLocal_558)) && !func_794(iLocal_558)) && !func_793(iLocal_558)) && !func_792(iLocal_558)) && !func_791(iLocal_558))
								{
									if (func_870(unk_0x134B62B726CEC8E6(iLocal_558)))
									{
										unk_0x73270B3C9CC833FD(iLocal_558, false, 1);
										unk_0x5D96D8530B3D0904(&iLocal_82, 16);
										iVar2 = 0;
										while (iVar2 < 32)
										{
											unk_0xCA84BD02FBA0BEA4(iLocal_558, false, Global_180837[iVar2]);
											iVar2++;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_558))
	{
		if (!func_796(iLocal_558, 1) && !func_793(iLocal_558))
		{
			if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iLocal_558)))
			{
				sVar1 = "PEN_BIKE";
			}
			else
			{
				sVar1 = "PEN_VEHG";
			}
			bVar3 = true;
		}
		else
		{
			if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iLocal_558)))
			{
				sVar1 = "PEN_PBIKE";
			}
			else
			{
				sVar1 = "PEN_PVEHG";
			}
			bVar3 = true;
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_558))
	{
		if (func_796(iLocal_558, 1) || func_793(iLocal_558))
		{
			if (Local_80.f_15 == 2)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 1))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_558, 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 5))
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (!unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_558))
								{
									if (!func_423(sVar1))
									{
										func_409(sVar1, 0);
									}
								}
								else if (func_423(sVar1))
								{
									func_421();
								}
							}
						}
						else if (func_423(sVar1))
						{
							func_421();
						}
					}
					else if (bVar3)
					{
						if (func_423(sVar1))
						{
							func_421();
						}
					}
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 16))
	{
		if (Local_80.f_15 == 2)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 1))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_558, 0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 5))
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (!unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_558))
							{
								if (!unk_0xE4EDC4B0E92C078B(iLocal_561))
								{
									iLocal_561 = unk_0x5C3B41825F6AC5A0(iLocal_558);
									unk_0x321E019A46034F39(iLocal_561, true);
								}
								if (!func_423(sVar1))
								{
									func_409(sVar1, 0);
								}
							}
							else if (func_870(unk_0x134B62B726CEC8E6(iLocal_558)))
							{
								if (unk_0xE4EDC4B0E92C078B(iLocal_561))
								{
									unk_0x142CC44DB769B57E(&iLocal_561);
								}
								if (bVar3)
								{
									if (func_423(sVar1))
									{
										func_421();
									}
								}
							}
						}
					}
					else if (bVar3)
					{
						if (func_423(sVar1))
						{
							func_421();
						}
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_561))
					{
						unk_0x142CC44DB769B57E(&iLocal_561);
					}
					if (bVar3)
					{
						if (func_423(sVar1))
						{
							func_421();
						}
					}
				}
			}
		}
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_561) || !unk_0xDF1306B443CD3D15(iLocal_558, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (func_870(unk_0x134B62B726CEC8E6(iVar0)))
				{
					if (iVar0 != iLocal_558)
					{
						if (unk_0xA30B8362589C124A(iVar0, 4294967295, 0) == unk_0x16F2683693E537C9())
						{
							if (unk_0xAFE0D3608EDA7039(iVar0))
							{
								iLocal_558 = iVar0;
								if (bVar3)
								{
									if (func_423(sVar1))
									{
										func_421();
									}
								}
								unk_0x142CC44DB769B57E(&iLocal_561);
								if (!func_796(iLocal_558, 1))
								{
									unk_0x73270B3C9CC833FD(iLocal_558, false, 1);
								}
							}
						}
						else if (bVar3)
						{
							if (func_423(sVar1))
							{
								func_421();
							}
						}
					}
				}
			}
			else if (unk_0xDF1306B443CD3D15(iLocal_558, 0))
			{
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 1))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				unk_0x5D96D8530B3D0904(&iLocal_83, 1);
				unk_0x0674E58A79778E99(&iLocal_83, 2);
			}
		}
	}
	else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 2))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (func_870(unk_0x134B62B726CEC8E6(iVar0)))
				{
					unk_0x0674E58A79778E99(&iLocal_83, 1);
					unk_0x0674E58A79778E99(&iLocal_83, 2);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&iLocal_83, 2);
				}
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 2))
		{
			unk_0x0674E58A79778E99(&iLocal_83, 2);
		}
	}
	if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 == 2)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 5))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iVar4 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
						if (unk_0xA30B8362589C124A(iVar4, 4294967295, 0) == unk_0x16F2683693E537C9())
						{
							unk_0x5D96D8530B3D0904(&iLocal_83, 5);
							func_421();
						}
					}
				}
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 8))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iVar4 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					if (unk_0xA30B8362589C124A(iVar4, 4294967295, 0) != unk_0x16F2683693E537C9() && unk_0xA30B8362589C124A(iVar4, 4294967295, 0) != 0)
					{
						unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 0);
						unk_0x5D96D8530B3D0904(&iLocal_83, 8);
					}
				}
			}
		}
	}
}

int func_791(int iParam0)
{
	if (Global_26B66F.f_13A == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_792(int iParam0)
{
	if (Global_26B66F.f_132 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_793(int iParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0xF1D385D359D58F72("MPBitset", 3) && unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_794(int iParam0)
{
	if (Global_26B66F.f_12E[0] == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_795(int iParam0)
{
	if (Global_26B66F.f_12D == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_796(int iParam0, bool bParam1)
{
	if (Global_12B4E)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_797()
{
	char* sVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3) || unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 10))
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 6))
		{
			if (unk_0x562F77A7F33D2E46("MP_Player_Inside_Bubble_Scene"))
			{
				unk_0x8910D3D58E0132B8("MP_Player_Inside_Bubble_Scene");
			}
			if (unk_0x562F77A7F33D2E46("MP_Player_Outside_Bubble_Scene"))
			{
				unk_0x8910D3D58E0132B8("MP_Player_Outside_Bubble_Scene");
			}
			unk_0x9A1335ECD7BD117F("pennedIn");
			unk_0x82A772610883F395("PennedInOut", 0, 0);
			unk_0x0674E58A79778E99(&iLocal_82, 6);
		}
		if (func_423("PEN_BAREA"))
		{
			func_421();
		}
		if (func_423("PEN_BAREA"))
		{
			func_421();
		}
		if (func_423("PEN_AREA"))
		{
			func_421();
		}
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
	{
		if (func_1004(1))
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 6))
			{
				if (unk_0x562F77A7F33D2E46("MP_Player_Inside_Bubble_Scene"))
				{
					unk_0x8910D3D58E0132B8("MP_Player_Inside_Bubble_Scene");
				}
				if (unk_0x562F77A7F33D2E46("MP_Player_Outside_Bubble_Scene"))
				{
					unk_0x8910D3D58E0132B8("MP_Player_Outside_Bubble_Scene");
				}
				unk_0x9A1335ECD7BD117F("pennedIn");
				unk_0x82A772610883F395("PennedInOut", 0, 0);
				unk_0x0674E58A79778E99(&iLocal_82, 6);
			}
			if (func_423("PEN_BAREA"))
			{
				func_421();
			}
			if (func_423("PEN_BAREA"))
			{
				func_421();
			}
			if (func_423("PEN_AREA"))
			{
				func_421();
			}
			func_434();
			return;
		}
	}
	if ((func_875(0) && !unk_0xEAE0D21A50E6C7F4(iLocal_83, 2)) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 9))
		{
			unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 9);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 10))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
			{
				unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 10);
			}
			else if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 9))
			{
				unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 10);
			}
		}
		if (func_24(&uLocal_111))
		{
			func_22(&uLocal_111);
			unk_0x9CB904FF326C2837(0, 255, 255, 255);
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 5))
		{
			unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 5);
			unk_0x4D7F4CC43D4D0DE3(4294967295, "OOB_Cancel", "GTAO_FM_Events_Soundset", false);
			unk_0x55D0A2DB35045A35(iLocal_562);
			unk_0x43A06902454A1172(iLocal_562);
			unk_0x0674E58A79778E99(&iLocal_83, 7);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
		{
			if (!func_786(55))
			{
				if ((unk_0xC844350D5D58C99A(iLocal_558) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && unk_0xDF1306B443CD3D15(iLocal_558, 0))
				{
					if (func_423("PEN_AREA"))
					{
						func_421();
					}
				}
				else if (!unk_0xE4EDC4B0E92C078B(iLocal_561))
				{
					if (!func_423("PEN_AREA"))
					{
						func_409("PEN_AREA", 0);
					}
				}
			}
		}
		else if (!func_423("PEN_AREA"))
		{
			func_409("PEN_AREA", 0);
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 6))
		{
			if (unk_0x562F77A7F33D2E46("MP_Player_Outside_Bubble_Scene"))
			{
				unk_0x8910D3D58E0132B8("MP_Player_Outside_Bubble_Scene");
			}
			unk_0x8BC9595FD2792B5D("MP_Player_Inside_Bubble_Scene");
			unk_0x82A772610883F395("pennedIn", 0, 1);
			unk_0x5D96D8530B3D0904(&iLocal_82, 6);
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 9))
		{
			unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 9);
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			func_804();
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 2))
			{
				if (!func_423("PEN_BAREA"))
				{
					func_409("PEN_BAREA", 0);
				}
			}
			else
			{
				if (!func_423("PEN_EXITV"))
				{
					func_409("PEN_EXITV", 0);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 24))
				{
					if (func_622(0, 1, 1, 1))
					{
						sVar0 = func_866();
						func_621(sVar0, 30000);
						if (Local_80.f_C5 != 2)
						{
							func_620(1);
						}
						unk_0x5D96D8530B3D0904(&iLocal_82, 24);
					}
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 6))
		{
			if (unk_0x562F77A7F33D2E46("MP_Player_Inside_Bubble_Scene"))
			{
				unk_0x8910D3D58E0132B8("MP_Player_Inside_Bubble_Scene");
			}
			unk_0x8BC9595FD2792B5D("MP_Player_Outside_Bubble_Scene");
			unk_0x9A1335ECD7BD117F("pennedIn");
			unk_0x82A772610883F395("PennedInOut", 0, 0);
			unk_0x0674E58A79778E99(&iLocal_82, 6);
		}
		if (!func_24(&uLocal_111))
		{
			func_388(&uLocal_111, 0, 0);
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 7))
		{
			unk_0x5D96D8530B3D0904(&iLocal_83, 7);
			unk_0x4D7F4CC43D4D0DE3(4294967295, "OOB_Start", "GTAO_FM_Events_Soundset", false);
			iLocal_562 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(iLocal_562, "OOB_Timer_Dynamic", "GTAO_FM_Events_Soundset", false);
			unk_0x6F6BA3FE885E6C91(iLocal_562, "Time", (SYSTEM::TO_FLOAT(func_438()) / 1000f));
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 5))
		{
			unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 5);
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 12))
		{
			if (func_24(&uLocal_111))
			{
				if ((func_438() - func_348(&uLocal_111, 0, 0)) >= 0)
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						func_435((func_438() - func_348(&uLocal_111, 0, 0)), "PEN_ELM", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, 4294967295);
					}
					else
					{
						func_801();
					}
				}
				else
				{
					func_801();
				}
			}
		}
	}
	func_798();
	func_864();
}

void func_798()
{
	int iVar0;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
	if (unk_0xA30B8362589C124A(iVar0, 4294967295, 0) != unk_0x16F2683693E537C9())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 1))
			{
				return;
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 2))
	{
		return;
	}
	func_799();
	func_806();
}

void func_799()
{
	struct<4> Var0;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 21))
	{
		if ((unk_0xBFC0798A6E3417F9(0, 75) || unk_0x06F8112AA79C53D9(0, 75)) || unk_0x7FEE810EE9E768EB(0, 75))
		{
			unk_0x5D96D8530B3D0904(&iLocal_82, 21);
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 22))
	{
		if (!unk_0xFEBC1E4EC9E001F0())
		{
			Var0 = { func_800() };
			func_621(&Var0, 30000);
			if (Local_80.f_C5 != 2)
			{
				func_620(1);
			}
			unk_0x5D96D8530B3D0904(&iLocal_82, 22);
		}
	}
}

struct<4> func_800()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXV", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXV", 16);
			break;
	}
	return Var0;
}

void func_801()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 1))
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 18))
	{
		unk_0x0674E58A79778E99(&iLocal_82, 18);
	}
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, false);
	unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 8);
	unk_0xDB605C06AC092620(0);
	if (!unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
	{
		func_340();
		unk_0x5D96D8530B3D0904(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 1);
		Local_115.f_2 = 1474196698;
		Local_115.f_A = unk_0xD803B885F5E47A62();
		func_802(Local_115, func_803(1));
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 398, false);
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0xAFE0D3608EDA7039(iVar0))
				{
				}
				if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iVar0)))
				{
					iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					unk_0xE910A68AA670B4AA(unk_0x16F2683693E537C9());
					unk_0xE910A68AA670B4AA(iVar0);
					if (Local_80.f_C5 == 2)
					{
						unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), false, false, false, false, false, false, 0, false);
						unk_0xAA6B3A4292417750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), false, false, false, false, false, false, 0, false);
						unk_0x0674E58A79778E99(&iLocal_84, 2);
						unk_0xDC4BBCD7EBECDC32(false);
					}
					else
					{
						func_865(1);
					}
					if (!unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar0)))
					{
						unk_0xCCB891029A74A633(iVar0, 1, 0, 4294967295);
					}
					else
					{
						unk_0xED2FE8C1F8C4F31C(iVar0, 1, 0, 0);
					}
					func_784(1);
					unk_0x5D96D8530B3D0904(&iLocal_82, 20);
				}
			}
			else
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 2))
				{
					unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), false, false, false, false, false, false, 0, false);
					unk_0x0674E58A79778E99(&iLocal_84, 2);
				}
				unk_0xE910A68AA670B4AA(unk_0x16F2683693E537C9());
				unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), 0, 0);
				func_784(1);
				unk_0x5D96D8530B3D0904(&iLocal_82, 20);
			}
		}
		else
		{
			func_784(1);
			unk_0x5D96D8530B3D0904(&iLocal_83, 14);
		}
		iLocal_1292 = func_348(&uLocal_118, 0, 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 5))
	{
		unk_0x0674E58A79778E99(&(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1), 5);
		unk_0x55D0A2DB35045A35(iLocal_562);
		unk_0x43A06902454A1172(iLocal_562);
		unk_0x0674E58A79778E99(&iLocal_83, 7);
	}
	unk_0x5D96D8530B3D0904(&iLocal_82, 12);
}

void func_802(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 1975453628;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Param0, 14, iParam13);
	}
}

int func_803(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_1274(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_804()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar1 = 80f;
	fVar2 = 0f;
	iVar3 = 130;
	iVar4 = 130;
	fVar0 = ((fVar1 + fVar2) + IntToFloat(unk_0x09AC81E49EA267F7(0, 3)));
	if (unk_0x2B6E0A53779D29EA() - iLocal_556) >= SYSTEM::ROUND((60000f / fVar0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 15))
		{
			unk_0x5D96D8530B3D0904(&iLocal_82, 15);
		}
		iLocal_556 = unk_0x2B6E0A53779D29EA();
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 15))
	{
		unk_0x0674E58A79778E99(&iLocal_82, 15);
	}
	if (func_805())
	{
		unk_0x5E858A00EAFA5B24(0, 0, 0);
		unk_0x5E858A00EAFA5B24(0, iVar3, iVar4);
		unk_0x9CB904FF326C2837(0, 255, 0, 0);
	}
	else
	{
		unk_0x9CB904FF326C2837(0, 255, 255, 255);
	}
}

bool func_805()
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_82, 15);
}

void func_806()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x38C3A68D7861DCFD(0, 75, 1);
	}
}

void func_807()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 14))
	{
		if ((Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 == 1 || Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 == 2) || (((func_427(unk_0xD803B885F5E47A62()) && func_875(0)) && unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0)) && !func_1004(1)))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					if (unk_0xAFE0D3608EDA7039(iVar0))
					{
						unk_0x9A8BCD43DBDDCDCA(iVar0, false, 0);
						unk_0x5D96D8530B3D0904(&iLocal_82, 14);
					}
				}
			}
		}
	}
	else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 >= 3 || unk_0xEAE0D21A50E6C7F4(iLocal_82, 31))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0xDF1306B443CD3D15(iVar0, 0))
				{
					if (unk_0xAFE0D3608EDA7039(iVar0))
					{
						unk_0x9A8BCD43DBDDCDCA(iVar0, true, 0);
						unk_0x0674E58A79778E99(&iLocal_82, 14);
					}
				}
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&iLocal_82, 14);
		}
	}
}

int func_808(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_144(unk_0xD803B885F5E47A62(), 0) || func_550(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_41(unk_0xD803B885F5E47A62()) || func_45(unk_0xD803B885F5E47A62()))
		{
			bParam2 = false;
		}
	}
	if (unk_0x981819F6C45DDB49() < iParam0)
	{
		if (bParam2)
		{
			func_810(sParam3, sParam4, 1);
		}
		if (func_757(26, 4294967295))
		{
			func_755(26, 4294967295);
		}
		return 1;
	}
	if (func_24(&(Global_1806FA.f_12)))
	{
		if (!func_23(&(Global_1806FA.f_12), 7500, 0))
		{
			return 0;
		}
		func_22(&(Global_1806FA.f_12));
	}
	if (func_809())
	{
		if (bParam2)
		{
			func_810(sParam3, sParam4, 0);
		}
		if (func_757(26, 4294967295))
		{
			func_755(26, 4294967295);
		}
		return 1;
	}
	if (iParam1 && unk_0x0DC0B2DBBD52B0C0() < iParam0)
	{
		if (bParam2)
		{
			func_810(sParam3, sParam4, 1);
		}
		if (func_757(26, 4294967295))
		{
			func_755(26, 4294967295);
		}
		return 1;
	}
	return 0;
}

bool func_809()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0);
}

void func_810(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 2) && !func_46(unk_0xD803B885F5E47A62())) && !func_366(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xEA6BC48857E0AC4C(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_134(66, sParam0, sParam1, 1, 4294967295, 2, 1, 0);
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 2);
	}
}

void func_811(int iParam0)
{
	unk_0xE17FDF9E3068281B(iParam0);
	unk_0x42740B44BA8D7B43("HUD_MINI_GAME_SOUNDSET");
}

void func_812(int iParam0, int iParam1, bool bParam2)
{
	if (func_44())
	{
		if (iParam1 == 1)
		{
			if (Global_26B66F.f_112B == 4294967295)
			{
				Global_26B66F.f_112B = Global_40001.f_6719;
			}
			func_165(&(Global_26B66F.f_1129), 0, 0);
			if (bParam2)
			{
				if (Global_26B66F.f_112E == 4294967295)
				{
					Global_26B66F.f_112E = Global_40001.f_671A;
				}
				func_165(&(Global_26B66F.f_112C), 0, 0);
			}
			else
			{
				Global_1406A2 = 0;
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0;
				func_865(1);
			}
		}
		else
		{
			Global_1406A2 = 0;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0;
			func_865(1);
		}
		if ((!unk_0xA14BB9332558B949() && !func_814()) && !func_813(unk_0xD803B885F5E47A62()))
		{
			Global_EC6CC = 0;
		}
		unk_0x6EC9FBED3024FDF5(0, 4294967295, 4294967295, iParam0);
	}
}

int func_813(int iParam0)
{
	if (func_598(iParam0, 1, 0))
	{
		if (Global_184507[iParam0 /*876*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_814()
{
	return Global_2564C8.f_2E4;
}

void func_815()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_817(&iVar0) && unk_0x30F813723591D02E(iVar0, "Veh_Modded_By_Player"))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar2 = unk_0x117658E336116132(iVar1);
			if (func_1274(iVar2, 0, 1))
			{
				if (unk_0x1E2DFB0EF4BB4566(iVar0, "Veh_Modded_By_Player") == unk_0xE86C2816EDC6CAF0(iVar2))
				{
					func_816(func_237(iVar2));
				}
			}
			iVar1++;
		}
	}
}

void func_816(int iParam0)
{
	struct<2> Var0;
	
	Var0 = 4102413394;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 2, iParam0);
	}
}

int func_817(var uParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		*uParam0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (unk_0xF1D385D359D58F72("bombdec1", 3))
		{
			if (unk_0x30F813723591D02E(*uParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (unk_0xF1D385D359D58F72("bombdec", 3))
		{
			if (unk_0x30F813723591D02E(*uParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (unk_0xF1D385D359D58F72("bombowner", 3))
		{
			if (unk_0x30F813723591D02E(*uParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_818(bool bParam0)
{
	if (bParam0)
	{
		Global_1406C3 = 1;
	}
	else
	{
		Global_1406C3 = 0;
	}
}

void func_819(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0))
		{
			Global_259486 = func_519(unk_0xD803B885F5E47A62());
			if (Global_259486 == 4294967295)
			{
				Global_259486 = Global_1806FA.f_4;
			}
			if (func_842(Global_259486) == 0)
			{
				if (func_841(1) > 0)
				{
					func_840(26, 4294967295);
				}
			}
			if (func_44())
			{
				func_812(2, 0, 1);
				func_839();
			}
			if (func_1064(0))
			{
				iVar1 = func_50(2480, 4294967295, 0);
				unk_0x0674E58A79778E99(&iVar1, 0);
				func_839();
			}
			if (func_1064(func_615(func_519(unk_0xD803B885F5E47A62()))))
			{
				iVar1 = func_50(2480, 4294967295, 0);
				unk_0x0674E58A79778E99(&iVar1, func_615(func_519(unk_0xD803B885F5E47A62())));
				func_839();
			}
			if (func_838())
			{
				func_839();
			}
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0))
	{
		if ((!func_837() && !func_836()) && !func_835())
		{
			Global_259486 = 4294967295;
			func_755(26, 4294967295);
		}
		else if (func_842(Global_259486) == 0)
		{
			iVar0 = func_822(1);
			if (iVar0 > 0)
			{
				func_820(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_212(1932, 1, 4294967295);
				func_820(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_757(26, 4294967295))
		{
			Global_259486 = 4294967295;
			func_755(26, 4294967295);
		}
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0);
	}
}

void func_820(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_198(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_821(iParam0))
	{
		func_196(iParam0, iVar0);
	}
	else
	{
		func_200(iParam0, iVar0);
	}
}

int func_821(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_822(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_259029 == 0)
	{
		return 0;
	}
	if (func_835())
	{
		if (unk_0xA14BB9332558B949() || (func_834() || func_832()))
		{
			Global_258C0C = 1;
		}
	}
	Global_259029 = 0;
	if (Global_141378)
	{
		iVar0 = 1;
	}
	if (Global_258C0C)
	{
		iVar0 = 1;
	}
	if (Global_258C0B)
	{
		iVar0 = 1;
	}
	if (func_72(Global_1B04A.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_258BBE)
	{
		iVar0 = 1;
	}
	if (func_831(512))
	{
		iVar0 = 1;
	}
	if (func_830(128))
	{
		iVar0 = 1;
	}
	if (Global_141390 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_745())
	{
		iVar0 = 0;
	}
	if (Global_258DF8)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_828())
		{
			if (Global_440000.f_30296 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_367(unk_0xD803B885F5E47A62(), 0))
	{
		iVar0 = 0;
	}
	if (func_827())
	{
		iVar0 = 0;
	}
	if ((Global_258C0C || Global_258C0B) || Global_141378)
	{
		if (func_832())
		{
			iVar0 = 0;
		}
	}
	Global_258DF8 = 0;
	Global_258C0B = 0;
	Global_258C0C = 0;
	Global_141378 = 0;
	Global_258BBE = 0;
	func_825(&(Global_1B04A.f_1), 32);
	func_824(512);
	func_823(128);
	return iVar0;
}

void func_823(int iParam0)
{
	Global_1B083 = (Global_1B083 - (Global_1B083 && iParam0));
}

void func_824(int iParam0)
{
	Global_1B084 = (Global_1B084 - (Global_1B084 && iParam0));
}

void func_825(var uParam0, int iParam1)
{
	func_826(uParam0, iParam1);
}

void func_826(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_827()
{
	if (((Global_18061C || Global_1805FE) || func_367(unk_0xD803B885F5E47A62(), 0)) || func_110())
	{
		return 1;
	}
	return 0;
}

int func_828()
{
	switch (func_829())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_829()
{
	return Global_2567E2.f_1.f_B06;
}

bool func_830(int iParam0)
{
	return (Global_1B083 && iParam0) != 0;
}

bool func_831(int iParam0)
{
	return (Global_1B084 && iParam0) != 0;
}

int func_832()
{
	if (func_842(Global_259486))
	{
		return 0;
	}
	if (func_833(unk_0xD803B885F5E47A62(), 146))
	{
		return 1;
	}
	return 0;
}

int func_833(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/] == iParam1)
	{
		return func_42(iParam0);
	}
	return 0;
}

int func_834()
{
	if (func_842(Global_259486))
	{
		return 0;
	}
	if (func_42(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

bool func_835()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1406A9, 0);
}

bool func_836()
{
	return Global_14084E;
}

bool func_837()
{
	return Global_14086D;
}

int func_838()
{
	if (Global_2537E2.f_484.f_5 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void func_839()
{
	if (func_838())
	{
		Global_2537E2.f_484.f_10 = 1;
	}
}

void func_840(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_52();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x25C34E9F657F1C79(0, iParam1);
			break;
		
		default:
			iVar1 = func_756(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x5D96D8530B3D0904(&iVar0, iParam0);
				unk_0x25C34E9F657F1C79(iVar0, iParam1);
			}
			break;
	}
}

int func_841(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_141390 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_745())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_828())
		{
			if (Global_440000.f_30296 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_367(unk_0xD803B885F5E47A62(), 0))
	{
		iVar0 = 0;
	}
	if (func_827())
	{
		iVar0 = 0;
	}
	Global_259029 = 1;
	return iVar0;
}

int func_842(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_40001.f_2C7D)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_40001.f_2C7F)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_40001.f_2C7C)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_40001.f_2C80)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_40001.f_2C81)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_40001.f_2C82)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_40001.f_2C7E)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_40001.f_2C83)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_40001.f_2C84)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_40001.f_2C85)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_40001.f_2C86)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

void func_843(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
	}
	Global_26B66F.f_136B = 4294967295;
	bVar0 = (func_144(unk_0xD803B885F5E47A62(), 0) && func_41(unk_0xD803B885F5E47A62()));
	if (bParam6)
	{
		func_769(func_770(iParam0), 1);
	}
	else
	{
		func_851(iParam0, 4294967295);
		if (func_46(unk_0xD803B885F5E47A62()))
		{
			Global_1806FA.f_3 = iParam0;
		}
		else
		{
			func_850(iParam0);
		}
		Global_1806FA.f_4 = 4294967295;
		if (func_46(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 5);
		}
		if (((func_44() && !func_364()) || func_363(unk_0xD803B885F5E47A62(), 21)) || func_363(unk_0xD803B885F5E47A62(), 25))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 4);
		}
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 17);
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 20);
		if (func_849(iParam0))
		{
			func_848();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_716(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x51B096AAC60548C1(fParam2);
			if (iParam0 == 146)
			{
				unk_0x34D79252800B23FF(0);
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			}
		}
		if (func_847(iParam0))
		{
			unk_0x34D79252800B23FF(0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_247C05)
			{
				func_713(1);
				if (func_49(0))
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 9);
				}
				if (!bParam6)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_759(1);
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 12);
		}
		if (bParam5)
		{
			func_846();
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_844(iParam0))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 21);
			}
		}
	}
	Global_2658D5 = 1;
}

int func_844(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_845())
	{
		return 1;
	}
	return 0;
}

int func_845()
{
	switch (func_578())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_846()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1362), 0);
}

int func_847(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_42(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_848()
{
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_C8 = 0;
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11D1), 1);
}

int func_849(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_850(int iParam0)
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/] = iParam0;
}

void func_851(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 4294967295 || iParam1 != 4294967295)
	{
		iVar0 = iParam0;
		if (iVar0 == 4294967295)
		{
			iVar0 = iParam1;
		}
		if (func_1064(0) || func_1064(func_615(iVar0)))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 2);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 2);
		}
	}
}

void func_852(bool bParam0)
{
	if (bParam0)
	{
		if (!func_40(unk_0xD803B885F5E47A62(), 9))
		{
			if (func_38(unk_0xD803B885F5E47A62()) != 0)
			{
				func_360(9);
			}
		}
	}
	else if (func_40(unk_0xD803B885F5E47A62(), 9))
	{
		func_362(9);
	}
}

void func_853(int iParam0)
{
	if (!func_45(unk_0xD803B885F5E47A62()))
	{
		if (iParam0 || func_38(unk_0xD803B885F5E47A62()) != 0)
		{
			func_360(20);
			func_854(func_856());
			if (func_47(unk_0xD803B885F5E47A62()))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 8))
				{
					unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 8);
				}
			}
		}
	}
}

void func_854(int iParam0)
{
	int iVar0;
	
	if (Global_40001.f_217B)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_200000[func_855() /*10930*/].f_181E.f_100F[iVar0 /*3*/] == iParam0)
		{
			if (Global_14073A.f_1[iVar0] == 4294967295)
			{
				Global_14073A.f_1[iVar0] = iParam0;
				Global_14073A = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_855()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_856()
{
	int iVar0;
	
	iVar0 = func_145(unk_0xD803B885F5E47A62());
	if (func_858(iVar0) == 0)
	{
		return 4294967295;
	}
	if (func_156(iVar0))
	{
		return 65;
	}
	if (func_161(iVar0))
	{
		return 66;
	}
	if (func_857(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_857(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_858(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return 4294967295;
}

struct<4> func_859()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_START2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_START2", 16);
			break;
	}
	return Var0;
}

struct<4> func_860()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_MPLAY", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_MPLAY", 16);
			break;
	}
	return Var0;
}

struct<4> func_861()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_QSTART", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_QSTART", 16);
			break;
	}
	return Var0;
}

void func_862()
{
	unk_0x34D79252800B23FF(5);
	func_711();
	unk_0x51B096AAC60548C1(1f);
	unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 8);
	func_863();
}

void func_863()
{
	if (Global_19824D)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 0))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 1))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 1);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 5))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 5);
		}
		if (unk_0x76395FF5E8D5E643(3939230146))
		{
			unk_0x1BA7FCEAFCE8D46E(3939230146, 1, false, false);
		}
		if (unk_0x76395FF5E8D5E643(3713987790))
		{
			unk_0x1BA7FCEAFCE8D46E(3713987790, 1, false, false);
		}
		if (unk_0x76395FF5E8D5E643(2868514821))
		{
			unk_0x1BA7FCEAFCE8D46E(2868514821, 1, false, false);
		}
		if (unk_0x76395FF5E8D5E643(745417724))
		{
			unk_0x1BA7FCEAFCE8D46E(745417724, 1, false, false);
		}
		if (unk_0x76395FF5E8D5E643(2989662390))
		{
			unk_0x1BA7FCEAFCE8D46E(2989662390, 1, false, false);
		}
		if (unk_0x76395FF5E8D5E643(2751792219))
		{
			unk_0x1BA7FCEAFCE8D46E(2751792219, 1, false, false);
		}
		if (unk_0x76395FF5E8D5E643(3483196299))
		{
			unk_0x1BA7FCEAFCE8D46E(3483196299, 1, false, false);
		}
		Global_19824E = 0;
	}
	Global_19824D = 0;
}

void func_864()
{
	unk_0x38C3A68D7861DCFD(0, 69, 1);
	unk_0x38C3A68D7861DCFD(0, 70, 1);
	unk_0x38C3A68D7861DCFD(0, 68, 1);
	unk_0x38C3A68D7861DCFD(0, 114, 1);
	unk_0x38C3A68D7861DCFD(0, 115, 1);
	unk_0x38C3A68D7861DCFD(0, 116, 1);
	unk_0x38C3A68D7861DCFD(0, 91, 1);
	unk_0x38C3A68D7861DCFD(0, 92, 1);
	unk_0x38C3A68D7861DCFD(0, 24, 1);
	unk_0x38C3A68D7861DCFD(0, 257, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
	if (Local_80.f_C5 != 2)
	{
		unk_0x38C3A68D7861DCFD(0, 99, 1);
		unk_0x38C3A68D7861DCFD(0, 100, 1);
	}
}

void func_865(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_44())
		{
			if (func_1274(unk_0xD803B885F5E47A62(), 1, 0))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 342, false);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 122, false);
			}
			unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 1f);
			unk_0x2F82E0AC5EC27DF2(0);
			unk_0xDC4BBCD7EBECDC32(true);
			if (Global_1406A2.f_1 == 0 || Global_1406A2.f_2 == 1)
			{
				Global_1406A2.f_2 = 0;
				if (bParam0)
				{
					unk_0x03718F4C6E876DE6(0, 0);
				}
			}
		}
		else
		{
			if (func_1274(unk_0xD803B885F5E47A62(), 1, 1))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 342, true);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 122, true);
				unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 0.5f);
				if (Global_1406A2.f_1 == 0 || Global_1406A2.f_2 == 1)
				{
					unk_0x03718F4C6E876DE6(1, 0);
				}
			}
			unk_0x2F82E0AC5EC27DF2(1);
			unk_0xDC4BBCD7EBECDC32(false);
		}
	}
}

char* func_866()
{
	char* sVar0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			sVar0 = "PEN_VALVEH";
			break;
		
		case 2:
			sVar0 = "CAG_VEH";
			break;
	}
	return sVar0;
}

struct<4> func_867()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_NDRV", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NDRV", 16);
			break;
	}
	return Var0;
}

char* func_868()
{
	char* sVar0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			sVar0 = "PEN_VEH";
			break;
		
		case 2:
			sVar0 = "CAG_VEH";
			break;
	}
	return sVar0;
}

int func_869(int iParam0)
{
	int iVar0;
	
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
		}
		if (unk_0xEAE0D21A50E6C7F4(iVar0, 10))
		{
			return 0;
		}
	}
	return 1;
}

int func_870(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if ((((iParam0 == joaat("rhino") || iParam0 == joaat("dump")) || iParam0 == joaat("limo2")) || iParam0 == 4008920556) || iParam0 == 3040635986)
	{
		iVar0 = 0;
	}
	switch (Local_80.f_C5)
	{
		case 0:
			break;
		
		case 2:
			if (((!unk_0x7D8B2A8F9EA82DB7(iParam0) && !unk_0xD1CC995EE5EB1EC1(iParam0)) && !func_871(iParam0)) || unk_0xAD09C9A4B56FA133(iParam0))
			{
				iVar0 = 0;
			}
			break;
	}
	if (Global_1806FA.f_C != 0 && iParam0 == Global_1806FA.f_C)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_871(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chimera"):
			return 1;
		
		default:
	}
	return 0;
}

void func_872(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 4);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 4);
	}
}

struct<4> func_873()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_REGS", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_REGS", 16);
			break;
	}
	return Var0;
}

void func_874()
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
	{
		unk_0x51B096AAC60548C1(0f);
		unk_0x34D79252800B23FF(0);
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 8);
	}
}

int func_875(bool bParam0)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (Local_80.f_C5 == 2)
	{
		if (func_38(unk_0xD803B885F5E47A62()) < 2)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			vVar2 = { func_482() };
			fVar0 = unk_0x0EB28750412C3A5A(vVar1, vVar2, false);
			fVar3 = (func_483() / 2f);
			if (fVar0 <= fVar3)
			{
				if (unk_0x755FF954DAE327E1((vVar2.z - vVar1.z)) <= fVar3)
				{
					return 1;
				}
			}
		}
	}
	else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (fLocal_108 < 10f)
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			fVar0 = unk_0x0EB28750412C3A5A(vVar1, vLocal_105, false);
			if (fVar0 <= fLocal_108)
			{
				if (unk_0x755FF954DAE327E1((vLocal_105.z - vVar1.z)) <= 10f)
				{
					return 1;
				}
			}
		}
		else
		{
			fVar0 = func_431(unk_0x16F2683693E537C9(), vLocal_105, 1);
			if (fVar0 <= fLocal_108)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_876(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0x6B012227B3921E18(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam3);
}

char* func_877()
{
	char* sVar0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			sVar0 = "PEN_START";
			break;
		
		case 2:
			sVar0 = "CAG_STARC";
			break;
	}
	return sVar0;
}

int func_878()
{
	if (Local_80.f_C5 != 2)
	{
		return 1;
	}
	else if (func_901())
	{
		return 1;
	}
	else if (func_38(unk_0xD803B885F5E47A62()) >= 2)
	{
		return 1;
	}
	return 0;
}

void func_879(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 != iParam0)
	{
		func_893(4294967295);
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 = iParam0;
		if (func_892() != 4294967295)
		{
			func_891(4294967295);
		}
		if (func_890() != 4294967295)
		{
			func_889(4294967295);
		}
		func_888(iParam2);
		func_886(iParam0);
		if (!func_721(iParam0))
		{
			fVar0 = func_720(iParam0);
			if (fVar0 != 1f)
			{
				func_716(fVar0);
				unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 1);
			}
		}
		if (!func_724(iParam0) || iParam3)
		{
			if (func_722(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x34D79252800B23FF(0);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
				}
				unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0);
			}
			else if (unk_0x02A813E6E0380440() < 5)
			{
				unk_0x51B096AAC60548C1(1f);
				unk_0x34D79252800B23FF(5);
			}
		}
		if (func_44())
		{
			func_360(27);
		}
		if (bParam1)
		{
			if (!func_359())
			{
				func_713(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 1) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 4)) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0))
			{
				func_240(6);
			}
			func_885();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
		}
		if (func_47(unk_0xD803B885F5E47A62()) && func_41(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 8);
		}
		func_881();
		if (func_880(iParam0))
		{
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
			unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 6);
		}
		Global_26B66F.f_19B3 = 0;
	}
}

int func_880(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_881()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_884();
	iVar2 = func_119(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (func_245(iVar1, iVar2, 1) || func_882(iVar1, unk_0xD803B885F5E47A62()))
			{
				unk_0xD463D0CE3DC66332(unk_0xD803B885F5E47A62(), iVar1, bVar3);
				unk_0xD463D0CE3DC66332(iVar1, unk_0xD803B885F5E47A62(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_882(int iParam0, int iParam1)
{
	if (func_131(iParam0, 1) && func_131(iParam1, 1))
	{
		return (func_883(iParam0) == func_119(iParam1) || func_883(iParam1) == func_119(iParam0));
	}
	return 0;
}

int func_883(int iParam0)
{
	if (func_131(iParam0, 1))
	{
		return Global_18D84D[func_119(iParam0) /*615*/].f_B.f_1E4;
	}
	return func_389();
}

int func_884()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_181();
	if (iVar0 != func_389())
	{
		if (func_1274(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != 4294967295)
			{
				return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar1 /*615*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_885()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 1))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 4))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 4);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 6))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 6);
	}
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 0);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 2);
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_2EF = 0;
	if (Global_26B66F.f_11CD > 0)
	{
		unk_0x34D79252800B23FF(Global_26B66F.f_11CD);
	}
	Global_26B66F.f_11CC = 0;
}

void func_886(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_50(3791, 4294967295, 0);
	iVar1 = func_887(iParam0);
	if (iVar1 != 4294967295)
	{
		unk_0x5D96D8530B3D0904(&iVar0, iVar1);
		func_159(3791, iVar0, 4294967295, 1, 0);
	}
}

int func_887(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return 4294967295;
}

void func_888(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (Global_18D84D[iVar0 /*615*/].f_B.f_B5 != iParam0)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_B5 = iParam0;
	}
}

void func_889(int iParam0)
{
	if (Global_26B66F.f_1404.f_154 != iParam0)
	{
		Global_26B66F.f_1404.f_154 = iParam0;
	}
}

int func_890()
{
	return Global_26B66F.f_1404.f_154;
}

void func_891(int iParam0)
{
	if (Global_26B66F.f_1404.f_153 != iParam0)
	{
		Global_26B66F.f_1404.f_153 = iParam0;
	}
}

int func_892()
{
	return Global_26B66F.f_1404.f_153;
}

void func_893(int iParam0)
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_20 = iParam0;
}

void func_894()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 9))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 4))
		{
			unk_0x5D96D8530B3D0904(&iLocal_83, 9);
		}
	}
	if (Local_80 != 4)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
				iVar5 = unk_0x9539D44F3E4492F6(iVar4);
				if (!func_367(iVar4, 0))
				{
					if (Local_81[iVar0 /*8*/].f_7 == 0)
					{
						if (iVar0 != unk_0x57270EE11514DC67())
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 0))
							{
								iVar1++;
							}
						}
						if (!func_46(iVar4))
						{
							iVar2++;
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 10))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 9))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 3))
							{
								unk_0x5D96D8530B3D0904(&iLocal_83, 9);
							}
						}
					}
					if (iVar0 != unk_0x57270EE11514DC67())
					{
						if (Local_80.f_C5 == 0 || Local_80.f_C5 == 2)
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_1290, iVar0))
							{
								unk_0xF8FCA0CD5B6B1935(iVar4, 0);
								unk_0x5D96D8530B3D0904(&iLocal_1290, iVar0);
							}
						}
						if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 == 2)
						{
							if (Local_81[iVar0 /*8*/].f_7 == 2)
							{
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 6) && !func_900(unk_0x16F2683693E537C9(), iVar5))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_86, iVar0))
										{
											if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 1))
											{
												unk_0x5D96D8530B3D0904(&iLocal_86, iVar0);
												func_898(iVar4, 441, 1, 0);
												if (Local_80.f_C5 == 2)
												{
													func_895(iVar4, 1, 1, 0);
												}
											}
										}
										else if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 1))
										{
											unk_0x0674E58A79778E99(&iLocal_86, iVar0);
											func_898(iVar4, 441, 0, 0);
											if (Local_80.f_C5 == 2)
											{
												func_895(iVar4, 1, 0, 0);
											}
										}
									}
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(iLocal_86, iVar0))
							{
								unk_0x0674E58A79778E99(&iLocal_86, iVar0);
								func_898(iVar4, 441, 0, 0);
								if (Local_80.f_C5 == 2)
								{
									func_895(iVar4, 1, 0, 0);
								}
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(iLocal_86, iVar0))
						{
							unk_0x0674E58A79778E99(&iLocal_86, iVar0);
							func_898(iVar4, 441, 0, 0);
							if (Local_80.f_C5 == 2)
							{
								func_895(iVar4, 1, 0, 0);
							}
						}
						if (Local_81[unk_0x57270EE11514DC67() /*8*/].f_7 > 0)
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_87, iVar0) && !unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
							{
								if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 9))
								{
									unk_0x2E1E5367A885F9B7(iVar5, "MP_Penned_In_Vehicles_In_Bubble_Group", 0f);
									unk_0x5D96D8530B3D0904(&iLocal_87, iVar0);
									if (unk_0x405E212DDE472467(iVar5, 0))
									{
										iVar3 = unk_0x6937EA2286828455(iVar5, 0);
										unk_0x2E1E5367A885F9B7(iVar3, "MP_Penned_In_Vehicles_In_Bubble_Group", 0f);
									}
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 9) || unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 3))
							{
								unk_0x06FF977AA95DCCE3(iVar5, 0f);
								unk_0x0674E58A79778E99(&iLocal_87, iVar0);
								if (unk_0x405E212DDE472467(iVar5, 0))
								{
									iVar3 = unk_0x6937EA2286828455(iVar5, 0);
									unk_0x06FF977AA95DCCE3(iVar3, 0f);
								}
							}
						}
						if (Local_80.f_C5 == 0 || Local_80.f_C5 == 2)
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (!unk_0xEB6A8945D1AC98A1(iVar5))
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 8))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_88, iVar0))
										{
											if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 8))
											{
												if (!func_900(unk_0x16F2683693E537C9(), iVar5))
												{
													if (!unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 11))
													{
														unk_0x5D96D8530B3D0904(&iLocal_88, iVar0);
														unk_0x5D96D8530B3D0904(&iLocal_89, iVar4);
														unk_0xF8FCA0CD5B6B1935(iVar4, 1);
													}
												}
											}
										}
										else if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 8))
										{
											unk_0x0674E58A79778E99(&iLocal_88, iVar0);
											unk_0x0674E58A79778E99(&iLocal_89, iVar4);
											unk_0xF8FCA0CD5B6B1935(iVar4, 0);
										}
										else if (unk_0xEAE0D21A50E6C7F4(Local_81[iVar0 /*8*/].f_1, 11))
										{
											unk_0x0674E58A79778E99(&iLocal_88, iVar0);
											unk_0x0674E58A79778E99(&iLocal_89, iVar4);
											unk_0xF8FCA0CD5B6B1935(iVar4, 0);
										}
										else if (func_900(unk_0x16F2683693E537C9(), iVar5))
										{
											unk_0x0674E58A79778E99(&iLocal_88, iVar0);
											unk_0x0674E58A79778E99(&iLocal_89, iVar4);
											unk_0xF8FCA0CD5B6B1935(iVar4, 0);
										}
									}
									else if (unk_0xEAE0D21A50E6C7F4(iLocal_88, iVar0))
									{
										unk_0xF8FCA0CD5B6B1935(iVar4, 0);
										unk_0x0674E58A79778E99(&iLocal_88, iVar0);
										unk_0x0674E58A79778E99(&iLocal_89, iVar4);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_557 != iVar1)
		{
			iLocal_557 = iVar1;
		}
		if (iLocal_1289 != iVar2)
		{
			iLocal_1289 = iVar2;
		}
	}
}

void func_895(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_897(iParam0))
	{
		return;
	}
	if (func_896(&(Global_24DDCF.f_26D[iParam0]), &(Global_24DDCF.f_3D8[iParam0]), &(Global_24DDCF.f_185), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1C8[iParam0] = iParam1;
		}
	}
}

int func_896(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x1727A44C562FBED2(*uParam1) || *uParam1 == unk_0x0D0A574C76D769AC())
		{
			*uParam1 = unk_0x0D0A574C76D769AC();
			*uParam0 = unk_0x0D0A574C76D769AC();
		}
	}
	if (!unk_0x1727A44C562FBED2(*uParam0) || *uParam0 == unk_0x0D0A574C76D769AC())
	{
		if (bParam3)
		{
			if (!unk_0xEAE0D21A50E6C7F4(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x5D96D8530B3D0904(iParam2, iParam4);
			}
			*uParam0 = unk_0x0D0A574C76D769AC();
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x0674E58A79778E99(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x0D0A574C76D769AC())
			{
				*uParam1 = 4294967295;
			}
			*uParam0 = 4294967295;
		}
		return 1;
	}
	else if (unk_0x1727A44C562FBED2(*uParam1) && !*uParam1 == unk_0x0D0A574C76D769AC())
	{
	}
	return 0;
}

int func_897(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 1;
	}
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_717())
	{
		return 1;
	}
	return 0;
}

void func_898(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_897(iParam0))
	{
		return;
	}
	if (func_896(&(Global_24DDCF.f_24C[iParam0]), &(Global_24DDCF.f_3B7[iParam0]), &(Global_24DDCF.f_184), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1A7[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_899();
		}
	}
}

void func_899()
{
	Global_24DDCF.f_64E = 1;
}

bool func_900(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x405E212DDE472467(iParam0, 0) || !unk_0x405E212DDE472467(iParam1, 0))
	{
		return 0;
	}
	return unk_0x6937EA2286828455(iParam0, 0) == unk_0x6937EA2286828455(iParam1, 0);
}

int func_901()
{
	if (func_131(unk_0xD803B885F5E47A62(), 1))
	{
		if (unk_0xD803B885F5E47A62() == func_384())
		{
			return 1;
		}
		else if (func_902(unk_0xD803B885F5E47A62(), func_384(), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_902(int iParam0, int iParam1, bool bParam2)
{
	return func_903(iParam0, iParam1, bParam2, 1);
}

int func_903(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_389() && iParam0 != func_389())
	{
		if (!bParam2)
		{
			if (func_905(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_389())
		{
			if (iParam1 == Global_18D84D[iParam0 /*615*/].f_B)
			{
				return func_904(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_904(int iParam0, int iParam1)
{
	if (func_132(iParam0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1;
	}
	return 0;
}

int func_905(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_389())
	{
		if (iParam0 != func_389())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_389())
			{
				if (Global_18D84D[iParam0 /*615*/].f_B == iParam0)
				{
					if (Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

void func_906(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_519(unk_0xD803B885F5E47A62());
		Global_198D8B = iVar0;
		Global_198D8B.f_1 = iParam0;
		if (func_181() != func_389())
		{
			Global_198D8B.f_2 = func_989(func_181());
			Global_198D8B.f_3 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_198D8B.f_2), &(Global_198D8B.f_3));
		}
		Global_198D8B.f_7 = unk_0xDD0E7998AE8AD485();
		Global_198D8B.f_1C = func_987(unk_0xD803B885F5E47A62());
		Global_198D8B.f_D = 0;
		Global_198D8B.f_E = 0;
		if (func_131(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198D8B.f_17 = func_986(func_233(1));
		}
	}
	else
	{
		iVar0 = func_145(unk_0xD803B885F5E47A62());
	}
	if (bParam2 || func_152(iVar0))
	{
		if (iParam3 != 4294967295 && bParam2)
		{
			iVar0 = iParam3;
		}
		Global_198C86 = iVar0;
		if (func_161(iVar0))
		{
			Global_198C86.f_1 = 4;
		}
		else if (func_985(iVar0))
		{
			Global_198C86.f_1 = 5;
		}
		else if (func_155(iVar0, 0))
		{
			Global_198C86.f_1 = 2;
			if (func_154(iVar0))
			{
				Global_198C86.f_1 = 3;
			}
		}
		else
		{
			Global_198C86.f_1 = 1;
		}
		if (func_181() != func_389())
		{
			Global_198C86.f_4 = func_989(func_181());
			Global_198C86.f_5 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_198C86.f_6), &(Global_198C86.f_7));
		}
		Global_198C86.f_9 = unk_0xDD0E7998AE8AD485();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_198C86.f_1B = 1;
			Global_198C86.f_1C = 1;
		}
		if (iParam0 != 4294967295)
		{
			Global_198C86.f_1A = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_198C86.f_28 = func_176(iParam1);
			Global_198C86.f_29 = func_984();
			Global_198C86.f_2A = func_293(unk_0xD803B885F5E47A62(), iParam1);
			Global_198C86.f_2C = func_983(unk_0xD803B885F5E47A62(), iParam1);
		}
		if (!func_175() || iVar0 != 192)
		{
			Global_198C86.f_35 = 0;
		}
	}
	else if (func_150(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_198CFB = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_198CFB = iParam0 + 1;
		}
		else
		{
			Global_198CFB = func_982(unk_0xD803B885F5E47A62());
		}
		switch (iVar0)
		{
			case 225:
				if (func_143(unk_0xD803B885F5E47A62()) == 0)
				{
					Global_198CFB.f_1 = 0;
				}
				else
				{
					Global_198CFB.f_1 = 1;
				}
				break;
			
			case 226:
				Global_198CFB.f_1 = 2;
				break;
			
			case 227:
				Global_198CFB.f_1 = 3;
				break;
		}
		Global_198CFB.f_15 = 1;
		Global_198CFB.f_16 = 1;
		if (func_181() != func_389())
		{
			Global_198CFB.f_4 = func_989(func_181());
			Global_198CFB.f_5 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_198CFB.f_4), &(Global_198CFB.f_5));
		}
		Global_198CFB.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 4294967295)
		{
			Global_198CFB.f_14 = iParam0;
		}
	}
	else if (func_151(iVar0))
	{
		if (iParam3 != 4294967295 && bParam2)
		{
		}
		Global_198CBC = iVar0;
		Global_198C86.f_1 = 1;
		if (func_181() != func_389())
		{
			Global_198CBC.f_4 = func_989(func_181());
			Global_198CBC.f_5 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_198CBC.f_6), &(Global_198CBC.f_7));
		}
		Global_198CBC.f_9 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 4294967295)
		{
			Global_198CBC.f_15 = iParam0;
		}
	}
	else if (func_149(iVar0))
	{
		Global_198D27 = iVar0;
		Global_198D27.f_1 = iParam0;
		Global_198D27.f_15 = 1;
		Global_198D27.f_16 = 1;
		if (func_181() != func_389())
		{
			Global_198D27.f_4 = func_989(func_181());
			Global_198D27.f_5 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_198D27.f_4), &(Global_198D27.f_5));
		}
		Global_198D27.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 4294967295)
		{
			Global_198D27.f_14 = iParam0;
		}
		Global_198D27.f_1B = func_980(func_52(), 5);
		Global_198D27.f_1C = func_986(func_979(unk_0xD803B885F5E47A62()));
		Global_198D27.f_1D = func_50(6107, 4294967295, 0);
		Global_198D27.f_1E = func_50(6103, 4294967295, 0);
		Global_198D27.f_1F = func_50(6104, 4294967295, 0);
		Global_198D27.f_20 = func_50(6106, 4294967295, 0);
		Global_198D27.f_21 = func_50(6105, 4294967295, 0);
		Global_198D27.f_22 = func_50(6108, 4294967295, 0);
		Global_198D27.f_7 = func_977();
		Global_198D27.f_33 = func_986(bParam4);
	}
	else if (func_148(iVar0))
	{
		Global_198D5D = iVar0;
		Global_198D5D.f_1 = iParam0;
		Global_198D5D.f_15 = 1;
		Global_198D5D.f_16 = 1;
		if (func_181() != func_389())
		{
			Global_198D5D.f_4 = func_989(func_181());
			Global_198D5D.f_5 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_198D5D.f_4), &(Global_198D5D.f_5));
		}
		Global_198D5D.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 4294967295)
		{
			Global_198D5D.f_14 = iParam0;
		}
		Global_198D5D.f_18 = func_50(6157, 4294967295, 0);
		Global_198D5D.f_19 = func_50(6162, 4294967295, 0);
		Global_198D5D.f_1A = func_50(6163, 4294967295, 0);
		Global_198D5D.f_1B = func_986((((func_976() || func_975()) || func_974()) || func_973(unk_0xD803B885F5E47A62())));
		Global_198D5D.f_1C = func_50(6164, 4294967295, 0);
		Global_198D5D.f_1D = func_986(func_972());
		Global_198D5D.f_1F = 0;
		Global_198D5D.f_1E = 0;
		Global_198D5D.f_20 = 0;
		Global_198D5D.f_21 = 0;
		Global_198D5D.f_22 = 0;
		Global_198D5D.f_10 = 0;
		Global_198D5D.f_7 = func_977();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_141(func_142(unk_0xD803B885F5E47A62()))))
	{
		Global_198DE5 = iVar0;
		Global_198DE5.f_1 = iParam0;
		Global_198DE5.f_15 = 1;
		Global_198DE5.f_16 = 1;
		Global_198DE5.f_7 = func_977();
		if (func_181() != func_389())
		{
			Global_198DE5.f_4 = func_989(func_181());
			Global_198DE5.f_5 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_198DE5.f_4), &(Global_198DE5.f_5));
		}
		if (func_181() != 4294967295)
		{
			Global_198DE5.f_11 = func_768(func_181());
		}
		Global_198DE5.f_8 = unk_0xDD0E7998AE8AD485();
		Global_198DE5.f_1C = func_987(unk_0xD803B885F5E47A62());
		Global_198DE5.f_10 = 0;
		Global_198DE5.f_18 = 0;
		Global_198DE5.f_17 = 0;
		if (func_131(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198DE5.f_21 = func_986(func_233(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_198DAF = iVar0;
		Global_198DAF.f_1 = iParam0;
		Global_198DAF.f_15 = 1;
		Global_198DAF.f_16 = 1;
		Global_198DAF.f_7 = func_977();
		Global_198DAF.f_18 = 0;
		Global_198DAF.f_17 = 0;
		Global_198DAF.f_10 = 0;
		if (func_181() != func_389())
		{
			Global_198DAF.f_4 = func_989(func_181());
			Global_198DAF.f_5 = func_988(func_181());
		}
		Global_198DAF.f_1C = func_987(unk_0xD803B885F5E47A62());
		if (Global_198DAF.f_1C)
		{
			Global_198DAF.f_1D = func_971(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_198DAF.f_1D = 0;
		}
		Global_198DAF.f_1E = func_955(unk_0xD803B885F5E47A62(), 4, 4294967295);
		Global_198DAF.f_1F = func_954(unk_0xD803B885F5E47A62());
		Global_198DAF.f_20 = func_986(func_953(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_21 = func_986(func_952(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_22 = func_986(func_951(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_23 = func_986(func_950(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_24 = func_949(unk_0xD803B885F5E47A62());
		Global_198DAF.f_25 = func_948(unk_0xD803B885F5E47A62());
		Global_198DAF.f_27 = func_947(unk_0xD803B885F5E47A62());
		if (func_131(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198DAF.f_29 = func_986(func_233(1));
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_198DAF.f_4), &(Global_198DAF.f_5));
		}
		Global_198DAF.f_8 = unk_0xDD0E7998AE8AD485();
		Global_198DAF.f_1C = func_987(unk_0xD803B885F5E47A62());
	}
	else if (func_139(iVar0))
	{
		Global_198E39 = iVar0;
		Global_198E39.f_1 = func_143(unk_0xD803B885F5E47A62());
		Global_198E39.f_2 = func_946();
		Global_198E39.f_3 = func_945();
		Global_198E39.f_4 = func_989(func_181());
		Global_198E39.f_5 = func_988(func_181());
		Global_198E39.f_7 = func_977();
		Global_198E39.f_8 = unk_0xDD0E7998AE8AD485();
		if (func_181() != 4294967295)
		{
			Global_198E39.f_11 = func_768(func_181());
		}
		Global_198E39.f_15 = 1;
		Global_198E39.f_16 = 1;
		Global_198E39.f_19 = iParam0;
		Global_198E39.f_1B = func_986(func_944(unk_0xD803B885F5E47A62()));
		Global_198E39.f_1C = func_942(21, 4294967295);
	}
	else if (func_138(iVar0))
	{
		Global_198E84 = Global_C0073.f_1;
		Global_198E84.f_2 = Global_C0073;
		Global_198E84.f_6 = func_989(func_181());
		Global_198E84.f_7 = func_988(func_181());
		if (func_131(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198E84.f_8 = func_986(func_233(1));
		}
		if (func_181() != 4294967295)
		{
			Global_198E84.f_9 = func_768(func_181());
		}
		Global_198E84.f_A = func_977();
		Global_198E84.f_13 = 1;
		Global_198E84.f_14 = 1;
		Global_198E84.f_15 = 0;
		Global_198E84.f_16 = 0;
		Global_198E84.f_17 = 0;
		Global_19FC3D = unk_0xDD0E7998AE8AD485();
	}
	else
	{
		if (func_181() != func_389())
		{
			Global_198C74 = func_989(func_181());
			Global_198C74.f_1 = func_988(func_181());
		}
		Global_198C74.f_5 = unk_0xDD0E7998AE8AD485();
		Global_198C74.f_D = func_941();
		Global_198C74.f_F = 0;
		if (func_179(1))
		{
			if (func_247() == func_181())
			{
				Global_198C74.f_F = 1;
			}
		}
		if (func_940())
		{
			Global_198CFB.f_1C = 1;
		}
		if (((((func_939() || func_938()) || func_937()) || func_936()) || func_935()) || func_934(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_1E = 1;
		}
		if (func_932(func_933(2413121211)))
		{
			Global_198CFB.f_20 = 1;
		}
		if (func_915(func_931(joaat("caddy"))))
		{
			Global_198CFB.f_1F = 1;
		}
		if (func_914(unk_0xD803B885F5E47A62()) || func_913(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_1D = 1;
		}
		if (func_912(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_21 = 1;
			Global_198CFB.f_22 = 1;
		}
		if (func_911(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_24 = 1;
		}
		if (func_910(0, unk_0xD803B885F5E47A62()) == 1)
		{
			Global_198CFB.f_23 = 1;
		}
		if (func_909(unk_0xD803B885F5E47A62(), 3, &uVar1))
		{
			Global_198CFB.f_25 = 1;
		}
		if (func_909(unk_0xD803B885F5E47A62(), 7, &uVar1))
		{
			Global_198CFB.f_26 = 1;
		}
		if (func_908(unk_0xD803B885F5E47A62()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_907(unk_0xD803B885F5E47A62(), iVar2);
				if (func_290(unk_0xD803B885F5E47A62(), iVar3, 0))
				{
					Global_198CFB.f_27 = 1;
				}
				if (func_290(unk_0xD803B885F5E47A62(), iVar3, 2))
				{
					Global_198CFB.f_28 = 1;
				}
				if (func_290(unk_0xD803B885F5E47A62(), iVar3, 1))
				{
					Global_198CFB.f_29 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_907(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_389())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_282(Global_184507[iParam0 /*876*/].f_112.f_B7[iParam1 /*12*/]))
	{
		uVar0 = Global_184507[iParam0 /*876*/].f_112.f_B7[iParam1 /*12*/];
	}
	return uVar0;
}

int func_908(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_389())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_909(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_389())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_910(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_910(int iParam0, int iParam1)
{
	if (iParam1 == func_389())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0))
			{
				return 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 3))
			{
				return 2;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 6))
			{
				return 4;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 9))
			{
				return 1;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 12))
			{
				return 7;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 15))
			{
				return 5;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 18))
			{
				return 6;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 21))
			{
				return 0;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 1))
			{
				return 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 4))
			{
				return 2;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 7))
			{
				return 4;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 10))
			{
				return 1;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 13))
			{
				return 7;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 16))
			{
				return 5;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 19))
			{
				return 6;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 22))
			{
				return 0;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 2))
			{
				return 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 5))
			{
				return 2;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 8))
			{
				return 4;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 11))
			{
				return 1;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 14))
			{
				return 7;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 17))
			{
				return 5;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 20))
			{
				return 6;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 23))
			{
				return 0;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_911(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 7);
}

bool func_912(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 8);
}

bool func_913(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 11);
}

bool func_914(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 10);
}

int func_915(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_942(11, 4294967295) == 0)
	{
		return 0;
	}
	if (iParam0 != 4294967295)
	{
		iVar0 = 4294967295;
		iVar1 = (iParam0 + func_929(11));
		func_928(iVar1, &iVar0, 1);
		iVar2 = func_942(func_917(iVar1), 4294967295);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_50(func_916(4, iVar0), 4294967295, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_916(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				case 281:
					return 8981;
				
				case 282:
					return 8988;
				
				case 283:
					return 8995;
				
				case 284:
					return 9002;
				
				case 285:
					return 9009;
				
				case 286:
					return 9016;
				
				case 287:
					return 9023;
				
				case 288:
					return 9030;
				
				case 289:
					return 9037;
				
				case 290:
					return 9044;
				
				case 291:
					return 9051;
				
				case 292:
					return 9057;
				
				case 293:
					return 9063;
				
				case 294:
					return 9069;
				
				case 295:
					return 9076;
				
				case 296:
					return 9083;
				
				case 297:
					return 9090;
				
				case 298:
					return 9097;
				
				case 299:
					return 9104;
				
				case 300:
					return 9111;
				
				case 301:
					return 9118;
				
				case 302:
					return 9125;
				
				case 303:
					return 9132;
				
				case 304:
					return 9139;
				
				case 305:
					return 9145;
				
				case 306:
					return 9151;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_917(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_929(iVar0) && iParam0 < func_918(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_918(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return 4294967295;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_927(iParam0);
		return func_926(iVar0);
	}
	return (func_919(iParam0, 4294967295) * iParam0 + 1);
}

int func_919(int iParam0, int iParam1)
{
	if (iParam0 == 4294967295)
	{
		if (iParam1 >= 1)
		{
			if (func_922(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_921(iParam1))
			{
				return 0;
			}
			else if (func_920(iParam1, 4294967295))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_100542[iParam1 /*1951*/].f_21 == 2)
				{
					return 3;
				}
				else if (Global_100542[iParam1 /*1951*/].f_21 == 6)
				{
					return 8;
				}
				else if (Global_100542[iParam1 /*1951*/].f_21 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_920(int iParam0, int iParam1)
{
	if (iParam1 == 4294967295)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_921(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_922(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_923(unk_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_923(unk_0xD803B885F5E47A62(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_923(int iParam0, bool bParam1)
{
	if (Global_184465 != func_389())
	{
		if (!func_925(Global_184465))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xD803B885F5E47A62() != Global_184465)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_184465 /*421*/].f_C3, 24) || func_924(Global_184465))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 24);
}

int func_924(int iParam0)
{
	if (iParam0 != func_389())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 9);
	}
	return 0;
}

int func_925(int iParam0)
{
	if (iParam0 != func_389())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 2);
	}
	return 0;
}

int func_926(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return 4294967295;
}

int func_927(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return 4294967295;
}

void func_928(int iParam0, int iParam1, bool bParam2)
{
	if (Global_40001.f_27B3)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_19801F[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0xF4CCC8CB6DE7F1AE() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = 4294967295;
	}
}

int func_929(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return 4294967295;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_927(iParam0);
		return func_930(iVar0);
	}
	return (func_919(iParam0, 4294967295) * iParam0);
}

int func_930(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return 4294967295;
}

int func_931(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return 4294967295;
}

int func_932(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != 4294967295)
	{
		iVar0 = 4294967295;
		iVar1 = iParam0 + 157;
		func_928(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_50(func_916(4, iVar0), 4294967295, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_933(int iParam0)
{
	switch (iParam0)
	{
		case 2413121211:
			return 0;
			break;
	}
	return 4294967295;
}

int func_934(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (Global_184507[iParam0 /*876*/].f_112.f_153 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_935()
{
	return func_50(6542, 4294967295, 0) != 0;
}

bool func_936()
{
	return func_50(6163, 4294967295, 0) != 0;
}

bool func_937()
{
	return func_50(5380, 4294967295, 0) != 0;
}

bool func_938()
{
	return func_50(3828, 4294967295, 0) != 0;
}

bool func_939()
{
	return func_50(3223, 4294967295, 0) != 0;
}

bool func_940()
{
	return func_50(5379, 4294967295, 0) != 0;
}

int func_941()
{
	int iVar0;
	
	iVar0 = func_181();
	if (iVar0 != func_389())
	{
		return Global_18D84D[iVar0 /*615*/].f_B.f_62;
	}
	return 0;
}

int func_942(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == 4294967295)
	{
		iVar0 = func_52();
	}
	if (iParam0 == 7 && !Global_40001.f_4258)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_927(iParam0);
		if (iVar1 == 0 && func_50(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_943(4294967295) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_987(unk_0xD803B885F5E47A62()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_152E22[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_277666[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2775D1[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_943(int iParam0)
{
	if (!Global_40001.f_5C6F)
	{
		return 0;
	}
	return func_50(7207, iParam0, 0) != 0;
}

int func_944(int iParam0)
{
	if (iParam0 != func_389())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_171 != 0;
	}
	return 0;
}

int func_945()
{
	if (Global_198C74.f_3 != 0)
	{
		return Global_198C74.f_3;
	}
	return 4294967295;
}

int func_946()
{
	if (Global_198C74.f_2 != 0)
	{
		return Global_198C74.f_2;
	}
	return 4294967295;
}

int func_947(int iParam0)
{
	if (iParam0 != func_389())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 12);
	}
	return 0;
}

int func_948(int iParam0)
{
	if (iParam0 != func_389())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 10);
	}
	return 0;
}

int func_949(int iParam0)
{
	if (iParam0 != func_389())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 11);
	}
	return 0;
}

bool func_950(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 4);
}

bool func_951(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 3);
}

bool func_952(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 2);
}

bool func_953(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 1);
}

bool func_954(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 31);
}

int func_955(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_389() || !func_970(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_965(iParam0, iParam2);
		
		case 1:
			return func_963(iParam0, iParam2);
		
		case 3:
			return func_962(iParam0);
		
		case 2:
			return func_957(iParam0, iParam2);
		
		case 4:
			return func_956(iParam0);
		
		default:
	}
	return 0;
}

bool func_956(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 6);
}

int func_957(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_961(iParam0);
		
		case 11:
			return func_960(iParam0);
		
		case 12:
			return func_959(iParam0);
		
		case 13:
			return func_958(iParam0);
		
		default:
	}
	return 0;
}

bool func_958(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 15);
}

bool func_959(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 14);
}

bool func_960(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 13);
}

bool func_961(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 12);
}

bool func_962(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 5);
}

int func_963(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_964(iParam0);
		
		case 6:
			return func_953(iParam0);
		
		case 7:
			return func_952(iParam0);
		
		case 8:
			return func_951(iParam0);
		
		case 9:
			return func_950(iParam0);
		
		default:
	}
	return 0;
}

bool func_964(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0);
}

int func_965(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_969(iParam0);
		
		case 1:
			return func_968(iParam0);
		
		case 2:
			return func_967(iParam0);
		
		case 3:
			return func_966(iParam0);
		
		case 4:
			return func_954(iParam0);
		
		default:
	}
	return 0;
}

bool func_966(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 10);
}

bool func_967(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 9);
}

bool func_968(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 8);
}

bool func_969(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 7);
}

bool func_970(int iParam0)
{
	return (iParam0 != 4294967295 && iParam0 != 6);
}

int func_971(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_389())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_955(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_955(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_955(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_955(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_972()
{
	return func_50(6156, 4294967295, 0) != 0;
}

int func_973(int iParam0)
{
	if (iParam0 != func_389())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_10F != 0;
	}
	return 0;
}

bool func_974()
{
	return func_50(6164, 4294967295, 0) == 3;
}

bool func_975()
{
	return func_50(6164, 4294967295, 0) == 2;
}

bool func_976()
{
	return func_50(6164, 4294967295, 0) == 1;
}

int func_977()
{
	int iVar0;
	
	if (func_162())
	{
		return 4;
	}
	else if (func_175())
	{
		if (func_317(unk_0xD803B885F5E47A62()))
		{
			return 8;
		}
		return 6;
	}
	if (func_233(1))
	{
		iVar0 = func_978(unk_0xD803B885F5E47A62());
		if (iVar0 == 4294967295)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_179(1))
	{
		if (func_317(func_181()))
		{
			return 9;
		}
		return 7;
	}
	return 4294967294;
}

int func_978(int iParam0)
{
	if (func_131(iParam0, 1))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1C3;
	}
	return 4294967295;
}

int func_979(int iParam0)
{
	if (iParam0 != func_389())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_108 != 0;
	}
	return 0;
}

int func_980(int iParam0, int iParam1)
{
	return func_50(func_981(iParam1), iParam0, 0);
}

int func_981(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

int func_982(int iParam0)
{
	if (func_145(iParam0) == 225 || func_145(iParam0) == 226)
	{
		return func_143(iParam0);
	}
	return 4294967295;
}

int func_983(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_389())
	{
		return 0;
	}
	if (func_282(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_984()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_292(unk_0xD803B885F5E47A62(), iVar0))
		{
			unk_0x5D96D8530B3D0904(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_985(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_986(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_987(int iParam0)
{
	if (iParam0 != func_389())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_142 != 0;
	}
	return 0;
}

int func_988(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 4294967295;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_8[1];
}

int func_989(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 4294967295;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_8[0];
}

void func_990(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_991("kwUfKUus6EuQyNSL8KpY-w");
					func_991("yMTOFLfO2UKwzKrmgPP7kg");
					func_991("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_991("tP5HSeCA0UiHnkRzakdO2Q");
					func_991("uEkrqoerQEmQ0uZRtp4rkw");
					func_991("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_991("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_991("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_991("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_991("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_991("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_991("uEkrqoerQEmQ0uZRtp4rkw");
					func_991("92t91kL3Wkqvl2Kc82cNSA");
					func_991("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_991("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_991("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_991("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_991("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_991("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_991("fOfm7nzMLkav0ldcSCNAzA");
					func_991("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_991("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_991("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_991("Ma78E44OMkGfYPmCPZXUNA");
					func_991("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_991("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_991("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_991("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_991("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_991("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_991("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_991("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_991("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_991("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_991("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_991("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_991("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_991("fOfm7nzMLkav0ldcSCNAzA");
							func_991("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_991("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_991("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_991("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_991("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_991("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_991("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_991("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_991("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_991("fOfm7nzMLkav0ldcSCNAzA");
							func_991("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_991("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_991("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_991("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_991("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_991("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_991("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_991("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_991("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_991("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_991("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_991("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_991("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_991("aGBjo2rKi0yMDLl3a2ATGA");
									func_991("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_991("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_991("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_991("f2lnL6wZPkGWUowu0yLm1Q");
									func_991("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_991("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_991("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_991("W-OJzHlM-0ym9PsIASYZtw");
									func_991("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_991("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_991("TjGz31AMYE6bGCjAIitu6w");
									func_991("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_991("QmlvLMLCwkOvoZlkAstYxw");
									func_991("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_991("BktATxH9R0Wp2x0kWSbqjw");
									func_991("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_991("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_991("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_991("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_991("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_991("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_991("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_991("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_991("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_991("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_991("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_991(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar1 /*26*/].f_C, 11))
		{
			if (func_992(&(Global_2401A9[iVar1 /*26*/].f_F)) == iVar0)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar1 /*26*/].f_D, 26))
				{
					unk_0x5D96D8530B3D0904(&(Global_2401A9[iVar1 /*26*/].f_D), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_992(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_C = 4294967295;
	iVar1 = 0;
	iVar2 = func_994(uParam0);
	if (iVar2 == 4294967295)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_993(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_993(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_C = 4294967295;
	iVar1 = func_994(uParam0);
	if (iVar1 == 4294967295)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_1A2B5[iVar1 /*13*/];
		
		case 62:
			return Global_E012E.f_24BD[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_994(var uParam0)
{
	int iVar0;
	
	if (unk_0xEA6BC48857E0AC4C(&(uParam0->f_3)))
	{
		return 4294967295;
	}
	if (func_996(uParam0->f_1))
	{
		if (func_995(uParam0))
		{
			return 9999;
		}
		return 4294967295;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_C2055.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (Global_14010B.f_5)
				{
					return 4294967295;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar0 /*88*/].f_4C, 13))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_C2055.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 4294967295;
		
		case 62:
			if (unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_E012E.f_25C[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (Global_14010B.f_5)
				{
					return 4294967295;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[iVar0 /*88*/].f_4C, 13))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_E012E.f_25C[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 4294967295;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 13))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_E55BC.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 13))
		{
			if (Global_14010B.f_5)
			{
				return 4294967295;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[iVar0 /*88*/].f_4C, 13))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_E55BC.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return 4294967295;
	}
	else if (uParam0->f_2 < 32)
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_995(var uParam0)
{
	if (Global_249797)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_249797.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_996(int iParam0)
{
	return iParam0 == 9999;
}

void func_997()
{
	struct<4> Var0;
	
	if (!unk_0xE4EDC4B0E92C078B(iLocal_103))
	{
		if (func_1001())
		{
			iLocal_103 = unk_0x6CC513A908911CF0(func_482());
			if (Local_80.f_C5 == 2)
			{
				unk_0xBC8E0A7390523199(iLocal_103, 493);
			}
			else
			{
				unk_0xBC8E0A7390523199(iLocal_103, 441);
			}
			unk_0xF412DD40DE84CE72(iLocal_103, true);
			unk_0x0EC848EFF66DF45A(iLocal_103, 7000);
			unk_0x2A065371C9D96655(iLocal_103, 9);
			Var0 = { func_1000() };
			unk_0xDC5B2F9D0CCE3A10(iLocal_103, &Var0);
			if (Local_80.f_C5 == 2)
			{
				func_998(&iLocal_103, iLocal_1291);
			}
			else
			{
				func_998(&iLocal_103, 29);
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_82, 30))
			{
				unk_0x4A51D2E4732BD556();
				unk_0x5D96D8530B3D0904(&iLocal_82, 30);
			}
		}
	}
}

void func_998(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		iVar0 = func_999(iParam1);
		unk_0x61755AC17D8F538E(*iParam0, iVar0);
	}
}

int func_999(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

struct<4> func_1000()
{
	struct<4> Var0;
	
	switch (Local_80.f_C5)
	{
		case 0:
			StringCopy(&Var0, "PEN_BLIP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_BLIP", 16);
			break;
	}
	return Var0;
}

int func_1001()
{
	if (Local_80.f_C5 != 2)
	{
		return 1;
	}
	else if (func_901())
	{
		return 1;
	}
	else if (func_38(unk_0xD803B885F5E47A62()) >= 2)
	{
		return 1;
	}
	return 0;
}

void func_1002(vector3 vParam0, bool bParam1)
{
	if (!unk_0xE4EDC4B0E92C078B(iLocal_102))
	{
		if (func_1001())
		{
			if (!bParam1)
			{
				iLocal_102 = unk_0x3F3860E60C44719E(vParam0, fLocal_108);
				if (Local_80.f_C5 != 2)
				{
					unk_0x61755AC17D8F538E(iLocal_102, 5);
				}
				else
				{
					unk_0x61755AC17D8F538E(iLocal_102, 5);
				}
			}
			else
			{
				iLocal_102 = unk_0x3F3860E60C44719E(func_482(), (func_483() / 2f));
				if (Local_80.f_C5 != 2)
				{
					func_998(&iLocal_102, 29);
				}
				else
				{
					func_998(&iLocal_102, iLocal_1291);
				}
			}
			unk_0x7F010F50CE03A8AF(iLocal_102, 100);
			unk_0xF2D30B8ACAF12A39(iLocal_102, false);
		}
	}
}

Vector3 func_1003()
{
	return vLocal_120[0 /*3*/];
}

int func_1004(bool bParam0)
{
	int iVar0;
	
	if (Local_80.f_C5 != 2)
	{
		if (func_366(unk_0xD803B885F5E47A62()))
		{
			iVar0 = 1;
		}
		if (func_1064(0))
		{
			iVar0 = 1;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
		{
			if (func_366(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 1;
			}
		}
	}
	else
	{
		if (func_359())
		{
			iVar0 = 1;
		}
		if (func_1056())
		{
			iVar0 = 1;
		}
		if (!func_1029(1, 1, 1, 0))
		{
			iVar0 = 1;
		}
		if (func_1028(200))
		{
			iVar0 = 1;
		}
	}
	if (bParam0)
	{
		if (Local_80.f_C5 == 2)
		{
			if (!func_1029(1, 1, 1, 0))
			{
				iVar0 = 1;
			}
		}
		else if (!func_1014(0, 1, 1))
		{
			iVar0 = 1;
		}
	}
	if (!func_1006(136, 0, 0))
	{
		iVar0 = 1;
	}
	if (Global_195C36)
	{
		iVar0 = 1;
	}
	if (func_1005(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1005(int iParam0)
{
	if (!func_1274(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

bool func_1006(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_40001.f_1E06 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_1010(unk_0xD803B885F5E47A62(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_40001.f_126E == 1)
		{
			return 1;
		}
	}
	if (func_1009() || func_1008())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_1007())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1806ED[iVar1], iVar0);
}

int func_1007()
{
	int iVar0;
	
	if (Global_1406C0)
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 23))
	{
		return 1;
	}
	if (func_1009())
	{
		return 1;
	}
	if (func_1008())
	{
		return 1;
	}
	iVar0 = Global_152E10[func_51(4294967295)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 7))
	{
		unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C3), 23);
		return 1;
	}
	return 0;
}

bool func_1008()
{
	return Global_140861;
}

bool func_1009()
{
	return Global_140863;
}

bool func_1010(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_1013())
	{
		return 0;
	}
	if (func_1012())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_1011(iParam1);
	iVar1 = uVar0;
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_2DA, iVar1);
}

int func_1011(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_1012()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92, 3);
}

int func_1013()
{
	if (Global_1406C0)
	{
		return 1;
	}
	if (func_1009())
	{
		return 1;
	}
	if (func_1008())
	{
		return 1;
	}
	return func_274(120, 4294967295);
}

int func_1014(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_1027(unk_0xD803B885F5E47A62(), 29))
	{
		return 0;
	}
	if (func_363(unk_0xD803B885F5E47A62(), 21))
	{
		return 0;
	}
	if (func_363(unk_0xD803B885F5E47A62(), 25))
	{
		return 0;
	}
	if (unk_0x09BE1E6DF7B80B43())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xF929B1A0A409FF93())
		{
			return 0;
		}
	}
	if (func_813(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_628())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_1026(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (func_606())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_45(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	else if (func_38(unk_0xD803B885F5E47A62()) == 3)
	{
		return 0;
	}
	if (func_1025(unk_0xD803B885F5E47A62()) != func_389() && func_1025(unk_0xD803B885F5E47A62()) == func_119(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_1023(func_1024()) && !func_1022(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_837())
	{
		return 0;
	}
	if (func_446())
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	if (func_599(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_602())
	{
		return 0;
	}
	if (func_363(unk_0xD803B885F5E47A62(), 0) || func_363(unk_0xD803B885F5E47A62(), 3))
	{
		return 0;
	}
	if ((func_363(unk_0xD803B885F5E47A62(), 12) || func_363(unk_0xD803B885F5E47A62(), 14)) || func_363(unk_0xD803B885F5E47A62(), 13))
	{
		return 0;
	}
	if (func_1021(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (!func_654() && !Global_265A4F)
		{
			return 0;
		}
	}
	if (func_1020(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_1019())
	{
		return 0;
	}
	if (Global_195C36)
	{
		return 0;
	}
	if (func_1005(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_1018())
	{
		return 0;
	}
	if (func_1017(unk_0xD803B885F5E47A62()) && Global_1843A8.f_AB)
	{
		return 0;
	}
	if (func_1016())
	{
		return 0;
	}
	if (func_623(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (Global_26B2C2)
	{
		return 0;
	}
	if (Global_19D9BB)
	{
		return 0;
	}
	if (!func_43(unk_0xD803B885F5E47A62()))
	{
		if (func_1015(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_1015(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_19FCF7[iVar0 /*13*/].f_C != 0;
	}
	return 0;
}

bool func_1016()
{
	return Global_199459.f_1DA;
}

int func_1017(int iParam0)
{
	if (func_921(Global_184507[iParam0 /*876*/].f_112.f_1C))
	{
		return 1;
	}
	return 0;
}

int func_1018()
{
	if (Global_40EB30.f_3AF > 4294967295)
	{
		return 1;
	}
	return 0;
}

bool func_1019()
{
	return Global_181EC.f_15A > 0;
}

bool func_1020(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 11);
}

int func_1021(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

int func_1022(int iParam0)
{
	if (func_519(iParam0) == 236 || func_519(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_1023(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_1024()
{
	return Global_2537E2.f_AA3[0 /*80*/].f_1;
}

int func_1025(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_23;
}

int func_1026(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_105.f_4 != 0 || Global_25033E[iParam0 /*421*/].f_105.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_1027(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_5, iParam1);
}

int func_1028(int iParam0)
{
	if (!func_175() && !func_131(unk_0xD803B885F5E47A62(), 1))
	{
		if (!func_41(unk_0xD803B885F5E47A62()))
		{
			if (func_359())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_1029(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1027(unk_0xD803B885F5E47A62(), 29))
	{
		return 0;
	}
	if (func_363(unk_0xD803B885F5E47A62(), 21))
	{
		return 0;
	}
	if (func_363(unk_0xD803B885F5E47A62(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x09BE1E6DF7B80B43())
		{
			return 0;
		}
	}
	if (!func_546(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xF929B1A0A409FF93())
		{
			return 0;
		}
	}
	if (func_813(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_628())
	{
		return 0;
	}
	if (func_606())
	{
		return 0;
	}
	if (func_837())
	{
		return 0;
	}
	if (func_446())
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	if (func_599(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_602())
	{
		return 0;
	}
	if (func_363(unk_0xD803B885F5E47A62(), 0) || func_363(unk_0xD803B885F5E47A62(), 3))
	{
		return 0;
	}
	if ((func_363(unk_0xD803B885F5E47A62(), 12) || func_363(unk_0xD803B885F5E47A62(), 14)) || func_363(unk_0xD803B885F5E47A62(), 13))
	{
		return 0;
	}
	if (func_1049(unk_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_1034())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_1019())
		{
			return 0;
		}
	}
	if (Global_195C36)
	{
		return 0;
	}
	if (func_1005(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_1018())
	{
		return 0;
	}
	if (func_1033(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((func_1032(unk_0xD803B885F5E47A62()) && func_1031(unk_0xD803B885F5E47A62()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_1030())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 4))
	{
		return 0;
	}
	if (func_1026(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_623(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_45(unk_0xD803B885F5E47A62()))
	{
		if (func_1015(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

bool func_1030()
{
	return Global_199459.f_10CF != 4294967295;
}

int func_1031(int iParam0)
{
	if (iParam0 != func_389() && func_1274(iParam0, 1, 1))
	{
		return Global_25033E[iParam0 /*421*/].f_136.f_E;
	}
	return 4294967295;
}

int func_1032(int iParam0)
{
	if (iParam0 != func_389() && func_1274(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 3);
	}
	return 0;
}

int func_1033(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 14))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 11))
	{
		return 1;
	}
	return 0;
}

int func_1034()
{
	int iVar0;
	
	iVar0 = func_145(unk_0xD803B885F5E47A62());
	if (((func_921(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C) || func_1048(unk_0xD803B885F5E47A62())) || func_1047(unk_0xD803B885F5E47A62())) || func_1046(unk_0xD803B885F5E47A62()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_1045(unk_0xD803B885F5E47A62()))
	{
		if (func_161(iVar0) || func_985(iVar0))
		{
			return 1;
		}
	}
	if (func_1044(unk_0xD803B885F5E47A62()))
	{
		if (func_985(iVar0))
		{
			return 1;
		}
	}
	if (func_1043(unk_0xD803B885F5E47A62()))
	{
		if (func_150(iVar0))
		{
			return 1;
		}
	}
	if (func_1042(unk_0xD803B885F5E47A62()))
	{
		if (func_149(iVar0))
		{
			return 1;
		}
	}
	if (func_1041(unk_0xD803B885F5E47A62()))
	{
		if (func_148(iVar0))
		{
			return 1;
		}
	}
	if (func_1040(unk_0xD803B885F5E47A62()))
	{
		if (func_1039(iVar0))
		{
			return 1;
		}
	}
	if (func_1038(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_857(iVar0))
		{
			if (func_1037(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
		}
	}
	if (func_1035(unk_0xD803B885F5E47A62()))
	{
		if (func_138(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1035(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_1036(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
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
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return 4294967295;
}

int func_1037(int iParam0)
{
	if (func_1025(iParam0) != func_389())
	{
		return func_1025(iParam0) == func_119(iParam0);
	}
	return 0;
}

int func_1038(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0x134B62B726CEC8E6(iVar0) == 2306538597)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295 && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_389())
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_1039(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_1040(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_1041(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_1042(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_1043(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_1044(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_1045(int iParam0)
{
	if (func_920(Global_184507[iParam0 /*876*/].f_112.f_1C, 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_1046(int iParam0)
{
	if (func_922(Global_184507[iParam0 /*876*/].f_112.f_1C, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_1047(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_1048(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_1049(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_184507[iParam0 /*876*/].f_112.f_1C > 0)
	{
		if (bParam1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_1048(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_1044(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_1047(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_1043(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_1042(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_1041(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_1055(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_1040(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_1054(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_1038(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_1053(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_1035(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_1052(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_1051(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_1050(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1050(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_1051(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_1052(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_1053(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_1054(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_1055(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (func_1274(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295 && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_389())
			{
				return func_1036(Global_25033E[iParam0 /*421*/].f_136.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_1056()
{
	return 0;
}

void func_1057()
{
	int iVar0;
	
	if (iLocal_1291 == 0)
	{
		iVar0 = func_384();
		if (iVar0 != func_389())
		{
			iLocal_1291 = func_1058(iVar0);
		}
	}
}

int func_1058(int iParam0)
{
	int iVar0;
	
	iVar0 = func_130(iParam0);
	if (iVar0 != 4294967295)
	{
		return func_128(iVar0);
	}
	return 1;
}

var func_1059()
{
	return Global_40001.f_2B8B;
}

float func_1060()
{
	if (Local_80.f_C5 != 2)
	{
		return Global_40001.f_2B88;
	}
	return Global_40001.f_47B9;
}

void func_1061()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (!func_31(vLocal_120[0 /*3*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	switch (Local_80.f_A7)
	{
		case 0:
			vLocal_120[0 /*3*/] = { 1476.637f, -2436.075f, 65.2401f };
			vLocal_120[1 /*3*/] = { 1591.158f, -1980.835f, 93.9884f };
			vLocal_120[2 /*3*/] = { 1105.58f, -1734.014f, 34.7122f };
			vLocal_120[3 /*3*/] = { 674.1869f, -1733.183f, 28.3527f };
			vLocal_120[4 /*3*/] = { 276.4475f, -1857.687f, 25.8607f };
			vLocal_120[5 /*3*/] = { 241.6554f, -1713.72f, 28.1339f };
			vLocal_120[6 /*3*/] = { 276.8612f, -1670.451f, 28.3137f };
			vLocal_120[7 /*3*/] = { 158.5084f, -1512.412f, 28.1416f };
			vLocal_120[8 /*3*/] = { 154.052f, -1394.604f, 28.3049f };
			vLocal_120[9 /*3*/] = { 297.3363f, -1202.901f, 28.1848f };
			vLocal_120[10 /*3*/] = { 216.0453f, -1130.863f, 28.3051f };
			vLocal_120[11 /*3*/] = { 303.6096f, -1124.259f, 28.4586f };
			vLocal_120[12 /*3*/] = { 349.6563f, -953.8064f, 28.4776f };
			vLocal_120[13 /*3*/] = { 228.3761f, -955.8815f, 28.3232f };
			iLocal_122 = 14;
			break;
		
		case 1:
			vLocal_120[0 /*3*/] = { -1900.185f, 2050.775f, 139.7211f };
			vLocal_120[1 /*3*/] = { -1797.919f, 1886.775f, 147.74f };
			vLocal_120[2 /*3*/] = { -1710.175f, 1885.316f, 160.217f };
			vLocal_120[3 /*3*/] = { -1610.52f, 2033.944f, 101.5237f };
			vLocal_120[4 /*3*/] = { -1517.004f, 2141.703f, 55.0511f };
			vLocal_120[5 /*3*/] = { -1337.505f, 2178.097f, 51.2807f };
			vLocal_120[6 /*3*/] = { -1147.637f, 2341.332f, 98.8094f };
			vLocal_120[7 /*3*/] = { -934.5955f, 2262.843f, 140.7183f };
			vLocal_120[8 /*3*/] = { -730.47f, 2344.86f, 68.405f };
			vLocal_120[9 /*3*/] = { -708.701f, 2426.99f, 61.1469f };
			vLocal_120[10 /*3*/] = { -573.3401f, 2500.494f, 50.3152f };
			vLocal_120[11 /*3*/] = { -545.0461f, 2672.93f, 44.4979f };
			vLocal_120[12 /*3*/] = { -436.4757f, 2756.389f, 44.6457f };
			vLocal_120[13 /*3*/] = { -322.5151f, 2775.025f, 61.0514f };
			vLocal_120[14 /*3*/] = { -149.1279f, 2737.515f, 54.9277f };
			vLocal_120[15 /*3*/] = { 222.302f, 2489.443f, 53.8394f };
			vLocal_120[16 /*3*/] = { 569.7415f, 2454.868f, 58.4488f };
			vLocal_120[17 /*3*/] = { 753.546f, 2518.788f, 72.1194f };
			vLocal_120[18 /*3*/] = { 924.3738f, 2593.375f, 60.2089f };
			vLocal_120[19 /*3*/] = { 965.1749f, 2621.371f, 45.0674f };
			vLocal_120[20 /*3*/] = { 1039.363f, 2671.289f, 38.5509f };
			iLocal_122 = 21;
			break;
		
		case 2:
			vLocal_120[0 /*3*/] = { 2304f, 1469f, 66f };
			vLocal_120[1 /*3*/] = { 2131f, 2031f, 96f };
			vLocal_120[2 /*3*/] = { 2059f, 2868f, 52f };
			vLocal_120[3 /*3*/] = { 2707f, 3485f, 64f };
			vLocal_120[4 /*3*/] = { 2855f, 3729f, 47f };
			vLocal_120[5 /*3*/] = { 2506f, 4153f, 41f };
			vLocal_120[6 /*3*/] = { 2885f, 4472f, 51f };
			vLocal_120[7 /*3*/] = { 2786.236f, 4941.378f, 32.6857f };
			vLocal_120[8 /*3*/] = { 2890.608f, 5034.026f, 30.7725f };
			vLocal_120[9 /*3*/] = { 3058.765f, 5052.091f, 24.441f };
			vLocal_120[10 /*3*/] = { 3063.052f, 5094.116f, 23.0524f };
			vLocal_120[11 /*3*/] = { 3131.718f, 5101.371f, 20.6628f };
			vLocal_120[12 /*3*/] = { 3175.018f, 5118.771f, 16.61f };
			vLocal_120[13 /*3*/] = { 3228.467f, 5133.4f, 18.321f };
			vLocal_120[14 /*3*/] = { 3283.499f, 5150.864f, 17.6323f };
			vLocal_120[15 /*3*/] = { 3297.67f, 5150.701f, 17.3023f };
			vLocal_120[16 /*3*/] = { 3320.565f, 5151.295f, 17.3289f };
			vLocal_120[17 /*3*/] = { 3337.017f, 5151.827f, 17.4344f };
			vLocal_120[18 /*3*/] = { 3348.801f, 5152.016f, 18.4475f };
			iLocal_122 = 19;
			break;
		
		case 3:
			func_1063();
			vLocal_120[0 /*3*/] = { -1210.197f, -2437.739f, 12.9452f };
			vLocal_120[1 /*3*/] = { -1342.587f, -2667.462f, 12.9449f };
			vLocal_120[2 /*3*/] = { -1220.798f, -2861.65f, 12.9455f };
			vLocal_120[3 /*3*/] = { -1126.435f, -2699.413f, 22.00294f };
			vLocal_120[4 /*3*/] = { -1017.039f, -2713.215f, 34.56547f };
			vLocal_120[5 /*3*/] = { -936.5955f, -2585.454f, 21.38621f };
			vLocal_120[6 /*3*/] = { -841.7922f, -2569.529f, 16.83603f };
			vLocal_120[7 /*3*/] = { -723.1095f, -2396.833f, 17.03123f };
			vLocal_120[8 /*3*/] = { -616.2985f, -2279.408f, 13.04065f };
			vLocal_120[9 /*3*/] = { -677.7834f, -2181.811f, 14.21462f };
			vLocal_120[10 /*3*/] = { -613.1539f, -2109.985f, 21.81665f };
			vLocal_120[11 /*3*/] = { -475.038f, -2148f, 17.4868f };
			vLocal_120[12 /*3*/] = { -336.4597f, -2143.653f, 13.9572f };
			vLocal_120[13 /*3*/] = { -256.3312f, -2131.896f, 22.1408f };
			vLocal_120[14 /*3*/] = { -162.249f, -2084.908f, 26.85073f };
			vLocal_120[15 /*3*/] = { -161.8921f, -2043.37f, 21.8606f };
			vLocal_120[16 /*3*/] = { -154.6475f, -2009.529f, 21.8819f };
			vLocal_120[17 /*3*/] = { -186.8038f, -2005.34f, 26.6204f };
			vLocal_120[18 /*3*/] = { -216.7214f, -1999.232f, 26.7554f };
			iLocal_122 = 19;
			break;
		
		case 4:
			vLocal_120[0 /*3*/] = { 105.443f, 7028.38f, 10.2844f };
			vLocal_120[1 /*3*/] = { 157.7284f, 6525.143f, 30.6533f };
			vLocal_120[2 /*3*/] = { -59.2422f, 6653.804f, 28.721f };
			vLocal_120[3 /*3*/] = { -168.4514f, 6476.554f, 29.0678f };
			vLocal_120[4 /*3*/] = { -111.8802f, 6419.246f, 30.4455f };
			vLocal_120[5 /*3*/] = { -154.2424f, 6339.732f, 30.6176f };
			vLocal_120[6 /*3*/] = { -93.9484f, 6279.499f, 30.3124f };
			vLocal_120[7 /*3*/] = { -182.7545f, 6195.686f, 30.1968f };
			vLocal_120[8 /*3*/] = { -260.1141f, 6185.812f, 30.4429f };
			vLocal_120[9 /*3*/] = { -304.2122f, 6227.968f, 30.4542f };
			vLocal_120[10 /*3*/] = { -473.7666f, 6066.529f, 29.34f };
			vLocal_120[11 /*3*/] = { -715.7206f, 6049.093f, -0.0726f };
			vLocal_120[12 /*3*/] = { -811.3691f, 5957.282f, 19.4103f };
			vLocal_120[13 /*3*/] = { -897.6384f, 6050.558f, 43.1834f };
			iLocal_122 = 14;
			break;
		
		case 6:
			vLocal_120[0 /*3*/] = { 770.8729f, -232.9857f, 65.1145f };
			vLocal_120[1 /*3*/] = { 838.7502f, -256.9497f, 64.6297f };
			vLocal_120[2 /*3*/] = { 903.3063f, -221.7793f, 68.666f };
			vLocal_120[3 /*3*/] = { 935.5661f, -166.9423f, 73.4974f };
			vLocal_120[4 /*3*/] = { 935.502f, -150.7537f, 73.7236f };
			vLocal_120[5 /*3*/] = { 903.4067f, -123.2328f, 76.2099f };
			vLocal_120[6 /*3*/] = { 881.9219f, -103.4221f, 78.4213f };
			vLocal_120[7 /*3*/] = { 880.8146f, -80.6718f, 77.7643f };
			vLocal_120[8 /*3*/] = { 924.9553f, -20.0444f, 77.7643f };
			vLocal_120[9 /*3*/] = { 953.8312f, -19.9404f, 77.764f };
			vLocal_120[10 /*3*/] = { 968.3574f, -3.2091f, 79.9909f };
			vLocal_120[11 /*3*/] = { 1009.373f, 64.5172f, 79.9909f };
			vLocal_120[12 /*3*/] = { 1004.334f, 70.7857f, 79.9909f };
			vLocal_120[13 /*3*/] = { 961.9669f, 97.0632f, 79.9909f };
			vLocal_120[14 /*3*/] = { 974.4698f, 116.5434f, 79.9909f };
			vLocal_120[15 /*3*/] = { 1023.872f, 169.1899f, 79.9905f };
			vLocal_120[16 /*3*/] = { 1023.795f, 181.0932f, 79.8559f };
			vLocal_120[17 /*3*/] = { 1003.224f, 191.8311f, 79.9087f };
			vLocal_120[18 /*3*/] = { 945.6973f, 122.5348f, 79.7235f };
			vLocal_120[19 /*3*/] = { 931.2999f, 104.402f, 78.3884f };
			vLocal_120[20 /*3*/] = { 884.1791f, 48.7134f, 77.631f };
			vLocal_120[21 /*3*/] = { 820.7046f, -20.0586f, 79.7007f };
			vLocal_120[22 /*3*/] = { 824.5161f, -65.76f, 79.6442f };
			vLocal_120[23 /*3*/] = { 854.3058f, -113.1723f, 78.3323f };
			vLocal_120[24 /*3*/] = { 847.928f, -140.3758f, 77.3008f };
			vLocal_120[25 /*3*/] = { 825.0543f, -176.4968f, 71.886f };
			vLocal_120[26 /*3*/] = { 803.1815f, -203.4303f, 71.9304f };
			vLocal_120[27 /*3*/] = { 772.341f, -248.5203f, 65.1143f };
			vLocal_120[28 /*3*/] = { 766.5759f, -268.8026f, 65.4267f };
			vLocal_120[29 /*3*/] = { 751.6126f, -300.7643f, 58.892f };
			vLocal_120[30 /*3*/] = { 723.4518f, -321.204f, 51.9976f };
			vLocal_120[31 /*3*/] = { 691.1819f, -341.8955f, 39.0741f };
			vLocal_120[32 /*3*/] = { 644.3198f, -353.9926f, 29.0699f };
			vLocal_120[33 /*3*/] = { 628.4379f, -365.0165f, 23.5751f };
			vLocal_120[34 /*3*/] = { 607.2872f, -399.7075f, 23.7997f };
			vLocal_120[35 /*3*/] = { 599.2954f, -478.0787f, 23.7562f };
			vLocal_120[36 /*3*/] = { 566.7018f, -553.8478f, 23.7368f };
			vLocal_120[37 /*3*/] = { 538.7103f, -643.3187f, 23.7397f };
			vLocal_120[38 /*3*/] = { 508.0503f, -682.8132f, 24.2827f };
			vLocal_120[39 /*3*/] = { 456.5249f, -685.2498f, 26.8735f };
			vLocal_120[40 /*3*/] = { 456.4284f, -821.7599f, 26.5584f };
			vLocal_120[41 /*3*/] = { 406.9605f, -830.3608f, 28.3306f };
			vLocal_120[42 /*3*/] = { 406.1039f, -876.7354f, 28.3905f };
			vLocal_120[43 /*3*/] = { 402.9865f, -938.0498f, 28.4551f };
			vLocal_120[44 /*3*/] = { 404.8474f, -950.4066f, 28.4433f };
			vLocal_120[45 /*3*/] = { 416.964f, -954.1458f, 28.4324f };
			vLocal_120[46 /*3*/] = { 485.1107f, -954.6018f, 26.3922f };
			vLocal_120[47 /*3*/] = { 496.7718f, -957.6362f, 26.1527f };
			vLocal_120[48 /*3*/] = { 500.8447f, -966.6793f, 26.4009f };
			vLocal_120[49 /*3*/] = { 499.6066f, -1038.969f, 27.357f };
			vLocal_120[50 /*3*/] = { 482.2613f, -1070.182f, 28.2113f };
			vLocal_120[51 /*3*/] = { 462.5394f, -1125.002f, 28.3189f };
			vLocal_120[52 /*3*/] = { 452.1105f, -1131.479f, 28.4588f };
			vLocal_120[53 /*3*/] = { 411.7074f, -1132.298f, 28.4582f };
			vLocal_120[54 /*3*/] = { 401.2792f, -1126.838f, 28.4871f };
			vLocal_120[55 /*3*/] = { 398.4309f, -1108.895f, 28.4618f };
			vLocal_120[56 /*3*/] = { 398.5521f, -1011.637f, 28.4602f };
			vLocal_120[57 /*3*/] = { 391.9118f, -1000.936f, 28.4172f };
			vLocal_120[58 /*3*/] = { 384.0373f, -999.108f, 28.4212f };
			vLocal_120[59 /*3*/] = { 280.6655f, -998.2255f, 28.2999f };
			vLocal_120[60 /*3*/] = { 274.747f, -997.3961f, 28.3239f };
			vLocal_120[61 /*3*/] = { 254.8134f, -990.8824f, 28.2714f };
			vLocal_120[62 /*3*/] = { 244.1949f, -980.8467f, 28.3573f };
			vLocal_120[63 /*3*/] = { 244.9183f, -958.1761f, 28.3041f };
			vLocal_120[64 /*3*/] = { 265.0497f, -896.29f, 27.9801f };
			vLocal_120[65 /*3*/] = { 259.8165f, -869.8301f, 28.273f };
			vLocal_120[66 /*3*/] = { 226.9681f, -839.9088f, 29.2632f };
			vLocal_120[67 /*3*/] = { 224.8172f, -815.2034f, 29.5278f };
			vLocal_120[68 /*3*/] = { 223.5029f, -758.9518f, 29.8235f };
			vLocal_120[69 /*3*/] = { 234.023f, -729.6653f, 29.8196f };
			vLocal_120[70 /*3*/] = { 268.7956f, -743.4052f, 33.64f };
			vLocal_120[71 /*3*/] = { 224.9066f, -736.6704f, 33.2013f };
			vLocal_120[72 /*3*/] = { 172.0603f, -721.1422f, 32.1324f };
			vLocal_120[73 /*3*/] = { 75.1364f, -688.8935f, 30.6218f };
			vLocal_120[74 /*3*/] = { 112.1867f, -577.6705f, 30.47f };
			vLocal_120[75 /*3*/] = { 58.5058f, -554.6415f, 32.7843f };
			vLocal_120[76 /*3*/] = { -35.6377f, -545.9135f, 38.9156f };
			vLocal_120[77 /*3*/] = { -77.4362f, -537.5404f, 39.1736f };
			iLocal_122 = 78;
			break;
		
		case 7:
			vLocal_120[0 /*3*/] = { 174.5999f, -2079.691f, 16.7487f };
			vLocal_120[1 /*3*/] = { 152.0048f, -2053.034f, 17.3217f };
			vLocal_120[2 /*3*/] = { 150.1924f, -2031.796f, 17.3217f };
			vLocal_120[3 /*3*/] = { 152.2747f, -2013.484f, 17.1417f };
			vLocal_120[4 /*3*/] = { 156.9549f, -2002.106f, 17.2518f };
			vLocal_120[5 /*3*/] = { 164.4116f, -1991.569f, 17.2641f };
			vLocal_120[6 /*3*/] = { 205.3133f, -1942.91f, 20.535f };
			vLocal_120[7 /*3*/] = { 211.3832f, -1932.955f, 21.5803f };
			vLocal_120[8 /*3*/] = { 208.533f, -1920.367f, 22.2848f };
			vLocal_120[9 /*3*/] = { 196.7893f, -1907.76f, 22.6872f };
			vLocal_120[10 /*3*/] = { 182.3722f, -1898.424f, 22.5606f };
			vLocal_120[11 /*3*/] = { 108.5148f, -1864.741f, 23.4672f };
			vLocal_120[12 /*3*/] = { 86.2217f, -1841.194f, 24.2874f };
			vLocal_120[13 /*3*/] = { 43.7092f, -1805.996f, 24.4549f };
			vLocal_120[14 /*3*/] = { 17.8062f, -1777.351f, 28.2925f };
			vLocal_120[15 /*3*/] = { 21.8941f, -1750.064f, 28.3031f };
			vLocal_120[16 /*3*/] = { 44.7469f, -1721.505f, 28.3031f };
			vLocal_120[17 /*3*/] = { 63.9396f, -1707.914f, 28.2608f };
			vLocal_120[18 /*3*/] = { 76.1903f, -1681.886f, 28.3242f };
			vLocal_120[19 /*3*/] = { 86.0975f, -1653.219f, 28.3469f };
			vLocal_120[20 /*3*/] = { 116.5378f, -1632.756f, 28.3471f };
			vLocal_120[21 /*3*/] = { 152.7263f, -1602.194f, 28.3415f };
			vLocal_120[22 /*3*/] = { 143.9074f, -1564.712f, 28.2093f };
			vLocal_120[23 /*3*/] = { 145.1265f, -1550.904f, 28.1529f };
			vLocal_120[24 /*3*/] = { 153.1621f, -1536.478f, 28.3099f };
			vLocal_120[25 /*3*/] = { 156.3295f, -1515.14f, 28.1416f };
			vLocal_120[26 /*3*/] = { 148.7433f, -1498.556f, 28.1416f };
			vLocal_120[27 /*3*/] = { 128.6626f, -1476.814f, 28.1416f };
			vLocal_120[28 /*3*/] = { 104.1582f, -1414.095f, 28.1921f };
			vLocal_120[29 /*3*/] = { 83.6966f, -1380.602f, 28.2915f };
			vLocal_120[30 /*3*/] = { 50.458f, -1383.531f, 28.2943f };
			vLocal_120[31 /*3*/] = { -1.9688f, -1383.943f, 28.3059f };
			vLocal_120[32 /*3*/] = { -24.7047f, -1377.866f, 28.1996f };
			vLocal_120[33 /*3*/] = { -92.3499f, -1377.083f, 28.3276f };
			vLocal_120[34 /*3*/] = { -130.9038f, -1387.612f, 28.4695f };
			vLocal_120[35 /*3*/] = { -148.5784f, -1398.707f, 29.0652f };
			vLocal_120[36 /*3*/] = { -148.0146f, -1415.724f, 29.7007f };
			vLocal_120[37 /*3*/] = { -140.9057f, -1431.51f, 29.8724f };
			vLocal_120[38 /*3*/] = { -172.1216f, -1469.894f, 31.0887f };
			vLocal_120[39 /*3*/] = { -200.9877f, -1510.344f, 30.632f };
			vLocal_120[40 /*3*/] = { -228.8574f, -1535.488f, 30.6189f };
			vLocal_120[41 /*3*/] = { -242.2845f, -1539.538f, 30.5592f };
			vLocal_120[42 /*3*/] = { -256.5187f, -1570.94f, 30.9427f };
			vLocal_120[43 /*3*/] = { -268.7609f, -1629.413f, 30.8488f };
			vLocal_120[44 /*3*/] = { -255.8852f, -1689.953f, 30.8488f };
			vLocal_120[45 /*3*/] = { -224.6088f, -1727.568f, 31.5576f };
			vLocal_120[46 /*3*/] = { -182.6528f, -1758.622f, 28.8952f };
			vLocal_120[47 /*3*/] = { -148.3479f, -1787.901f, 28.7988f };
			vLocal_120[48 /*3*/] = { -122.57f, -1807.999f, 27.3089f };
			vLocal_120[49 /*3*/] = { -73.0749f, -1876.611f, 7.596f };
			vLocal_120[50 /*3*/] = { -39.416f, -1901.59f, 9.9099f };
			vLocal_120[51 /*3*/] = { 7.5512f, -1955.098f, 4.4117f };
			vLocal_120[52 /*3*/] = { 55.3094f, -2021.311f, 0.4589f };
			vLocal_120[53 /*3*/] = { 69.4583f, -2095.662f, 0.2051f };
			vLocal_120[54 /*3*/] = { 49.8936f, -2146.708f, 1.5683f };
			vLocal_120[55 /*3*/] = { 41.0185f, -2157.943f, 4.4323f };
			vLocal_120[56 /*3*/] = { 24.7718f, -2164.335f, 8.1637f };
			vLocal_120[57 /*3*/] = { -2.2288f, -2158.396f, 9.2835f };
			vLocal_120[58 /*3*/] = { -22.7019f, -2158.668f, 9.3111f };
			vLocal_120[59 /*3*/] = { -38.4647f, -2199.598f, 6.8117f };
			vLocal_120[60 /*3*/] = { -45.3264f, -2212.231f, 6.8117f };
			vLocal_120[61 /*3*/] = { -55.3598f, -2222.49f, 6.8117f };
			vLocal_120[62 /*3*/] = { -82.3358f, -2223.918f, 6.8117f };
			vLocal_120[63 /*3*/] = { -131.381f, -2223.081f, 6.8117f };
			vLocal_120[64 /*3*/] = { -150.9629f, -2233.896f, 6.8117f };
			vLocal_120[65 /*3*/] = { -158.0284f, -2244.346f, 6.8117f };
			vLocal_120[66 /*3*/] = { -181.3241f, -2250.348f, 6.8117f };
			vLocal_120[67 /*3*/] = { -262.8565f, -2253.175f, 6.9858f };
			vLocal_120[68 /*3*/] = { -294.0698f, -2233.267f, 7.2625f };
			vLocal_120[69 /*3*/] = { -297.9966f, -2218.1f, 8.5029f };
			vLocal_120[70 /*3*/] = { -313.9771f, -2206.949f, 8.4925f };
			vLocal_120[71 /*3*/] = { -327.7408f, -2209.155f, 7.2109f };
			vLocal_120[72 /*3*/] = { -364.1004f, -2262.198f, 6.6082f };
			vLocal_120[73 /*3*/] = { -374.4983f, -2272.426f, 6.6082f };
			vLocal_120[74 /*3*/] = { -375.8295f, -2282.563f, 6.6082f };
			iLocal_122 = 75;
			break;
		
		case 8:
			vLocal_120[0 /*3*/] = { -2653.049f, 1505.637f, 116.9031f };
			vLocal_120[1 /*3*/] = { -2663.594f, 1470.743f, 122.7177f };
			vLocal_120[2 /*3*/] = { -2681.781f, 1433.767f, 120.1581f };
			vLocal_120[3 /*3*/] = { -2701.294f, 1403.518f, 112.9536f };
			vLocal_120[4 /*3*/] = { -2717.157f, 1376.807f, 105.1303f };
			vLocal_120[5 /*3*/] = { -2748.094f, 1336.441f, 89.7583f };
			vLocal_120[6 /*3*/] = { -2772.662f, 1306.338f, 82.0139f };
			vLocal_120[7 /*3*/] = { -2807.116f, 1282.497f, 71.1255f };
			vLocal_120[8 /*3*/] = { -2860.727f, 1279.025f, 58.2654f };
			vLocal_120[9 /*3*/] = { -2904.519f, 1259.097f, 40.7003f };
			vLocal_120[10 /*3*/] = { -2921.85f, 1257.993f, 37.2144f };
			vLocal_120[11 /*3*/] = { -2945.241f, 1243.167f, 31.8372f };
			vLocal_120[12 /*3*/] = { -2971.91f, 1212.205f, 23.1993f };
			vLocal_120[13 /*3*/] = { -2993.662f, 1208.524f, 18.0748f };
			vLocal_120[14 /*3*/] = { -3038.551f, 1209.651f, 14.0096f };
			vLocal_120[15 /*3*/] = { -3107.971f, 1226.064f, 9.658f };
			vLocal_120[16 /*3*/] = { -3199.303f, 1252.489f, 4.3497f };
			vLocal_120[17 /*3*/] = { -3218.386f, 1252.134f, 2.8398f };
			vLocal_120[18 /*3*/] = { -3236.587f, 1234.213f, 2.2581f };
			vLocal_120[19 /*3*/] = { -3257.229f, 1188.7f, 1.6827f };
			vLocal_120[20 /*3*/] = { -3268.847f, 1110.996f, 1.1708f };
			vLocal_120[21 /*3*/] = { -3286.199f, 1046.93f, 2.2738f };
			vLocal_120[22 /*3*/] = { -3291.467f, 984.0225f, 2.3848f };
			vLocal_120[23 /*3*/] = { -3291.941f, 951.162f, 1.1346f };
			vLocal_120[24 /*3*/] = { -3284.428f, 937.3236f, 1.0801f };
			vLocal_120[25 /*3*/] = { -3266.242f, 925.3865f, 1.6379f };
			vLocal_120[26 /*3*/] = { -3234.646f, 874.3011f, 1.695f };
			vLocal_120[27 /*3*/] = { -3219.083f, 829.6504f, 1.2816f };
			vLocal_120[28 /*3*/] = { -3198.246f, 813.9434f, 2.7979f };
			vLocal_120[29 /*3*/] = { -3165.079f, 798.1581f, 6.5002f };
			vLocal_120[30 /*3*/] = { -3143.296f, 790.5193f, 7.0137f };
			vLocal_120[31 /*3*/] = { -3124.516f, 789.1387f, 16.9934f };
			vLocal_120[32 /*3*/] = { -3094.212f, 777.5895f, 18.5135f };
			vLocal_120[33 /*3*/] = { -3086.898f, 756.6077f, 19.5227f };
			vLocal_120[34 /*3*/] = { -3093.979f, 726.5751f, 20.3224f };
			vLocal_120[35 /*3*/] = { -3082.263f, 693.1727f, 15.8985f };
			vLocal_120[36 /*3*/] = { -3056.846f, 661.2524f, 9.0803f };
			vLocal_120[37 /*3*/] = { -3043.558f, 636.358f, 6.5869f };
			vLocal_120[38 /*3*/] = { -3024.625f, 583.9476f, 6.8377f };
			vLocal_120[39 /*3*/] = { -3019.437f, 554.1682f, 6.6729f };
			vLocal_120[40 /*3*/] = { -3021.381f, 512.9918f, 6.234f };
			vLocal_120[41 /*3*/] = { -3031.198f, 466.6764f, 5.5596f };
			vLocal_120[42 /*3*/] = { -3049.935f, 424.7576f, 5.5665f };
			vLocal_120[43 /*3*/] = { -3066.961f, 377.4491f, 6.0668f };
			vLocal_120[44 /*3*/] = { -3057.431f, 345.7499f, 8.5701f };
			vLocal_120[45 /*3*/] = { -3046.631f, 292.6304f, 18.9137f };
			vLocal_120[46 /*3*/] = { -3041.826f, 279.6342f, 16.9957f };
			vLocal_120[47 /*3*/] = { -3035.306f, 269.0156f, 14.7234f };
			vLocal_120[48 /*3*/] = { -3012.362f, 233.9675f, 15.2325f };
			vLocal_120[49 /*3*/] = { -3013.188f, 213.9026f, 15.268f };
			vLocal_120[50 /*3*/] = { -3011.671f, 196.2197f, 15.146f };
			vLocal_120[51 /*3*/] = { -3006.454f, 177.695f, 14.8855f };
			vLocal_120[52 /*3*/] = { -2994.663f, 154.9807f, 14.3746f };
			vLocal_120[53 /*3*/] = { -2979.672f, 136.2853f, 13.7377f };
			vLocal_120[54 /*3*/] = { -2950.832f, 112.3324f, 12.904f };
			vLocal_120[55 /*3*/] = { -2921.329f, 97.7186f, 12.7178f };
			vLocal_120[56 /*3*/] = { -2851.489f, 75.2672f, 13.5427f };
			vLocal_120[57 /*3*/] = { -2836.61f, 32.9254f, 12.8794f };
			vLocal_120[58 /*3*/] = { -2831.988f, 18.7339f, 10.4085f };
			vLocal_120[59 /*3*/] = { -2824.56f, -8.0105f, 6.1181f };
			vLocal_120[60 /*3*/] = { -2803.649f, -81.9439f, -0.221f };
			vLocal_120[61 /*3*/] = { -2780.207f, -96.5313f, 0.3584f };
			vLocal_120[62 /*3*/] = { -2736.673f, -109.0135f, 0.5296f };
			vLocal_120[63 /*3*/] = { -2700.451f, -141.5591f, 0.9655f };
			vLocal_120[64 /*3*/] = { -2671.83f, -175.5449f, 1.0133f };
			vLocal_120[65 /*3*/] = { -2630.613f, -198.3817f, 2.1479f };
			vLocal_120[66 /*3*/] = { -2547.985f, -249.0516f, 2.2801f };
			vLocal_120[67 /*3*/] = { -2473.847f, -295.0556f, 2.7219f };
			vLocal_120[68 /*3*/] = { -2434.094f, -326.3175f, 3.0194f };
			vLocal_120[69 /*3*/] = { -2410.113f, -331.2293f, 2.6013f };
			vLocal_120[70 /*3*/] = { -2376.031f, -335.9692f, 2.5363f };
			vLocal_120[71 /*3*/] = { -2356.186f, -344.7604f, 2.6766f };
			vLocal_120[72 /*3*/] = { -2327.246f, -365.7754f, 2.3142f };
			vLocal_120[73 /*3*/] = { -2276.542f, -398.5323f, 1.8233f };
			vLocal_120[74 /*3*/] = { -2230.823f, -415.3987f, 3.087f };
			vLocal_120[75 /*3*/] = { -2213.564f, -418.7813f, 5.5765f };
			vLocal_120[76 /*3*/] = { -2199.396f, -420.4765f, 11.8061f };
			vLocal_120[77 /*3*/] = { -2176.137f, -416.0254f, 12.2345f };
			vLocal_120[78 /*3*/] = { -2126.029f, -402.4269f, 11.7143f };
			vLocal_120[79 /*3*/] = { -2102.225f, -366.2369f, 11.8076f };
			vLocal_120[80 /*3*/] = { -2095.268f, -318.8827f, 12.0248f };
			vLocal_120[81 /*3*/] = { -2093.999f, -264.2969f, 18.7933f };
			vLocal_120[82 /*3*/] = { -2089.104f, -214.1321f, 19.5783f };
			vLocal_120[83 /*3*/] = { -2071.153f, -210.7178f, 21.0689f };
			vLocal_120[84 /*3*/] = { -2050.075f, -223.6322f, 25.6497f };
			vLocal_120[85 /*3*/] = { -2030.981f, -224.0641f, 27.9967f };
			vLocal_120[86 /*3*/] = { -1998.867f, -224.0556f, 31.1763f };
			vLocal_120[87 /*3*/] = { -1987.922f, -232.1616f, 32.9357f };
			vLocal_120[88 /*3*/] = { -1986.724f, -241.0943f, 33.9168f };
			vLocal_120[89 /*3*/] = { -1980.237f, -257.3627f, 33.6684f };
			vLocal_120[90 /*3*/] = { -1966.573f, -261.1625f, 34.9521f };
			vLocal_120[91 /*3*/] = { -1948.827f, -242.7568f, 34.8759f };
			vLocal_120[92 /*3*/] = { -1938.963f, -233.8106f, 35.8376f };
			vLocal_120[93 /*3*/] = { -1911.051f, -214.8513f, 35.2168f };
			vLocal_120[94 /*3*/] = { -1874.86f, -185.5185f, 37.115f };
			vLocal_120[95 /*3*/] = { -1864.559f, -180.1412f, 43.2547f };
			vLocal_120[96 /*3*/] = { -1850.851f, -185.8726f, 45.6611f };
			vLocal_120[97 /*3*/] = { -1834.413f, -189.1538f, 48.8693f };
			vLocal_120[98 /*3*/] = { -1815.983f, -200.1424f, 50.7411f };
			vLocal_120[99 /*3*/] = { -1805.788f, -203.853f, 51.7412f };
			vLocal_120[100 /*3*/] = { -1792.717f, -217.502f, 50.9357f };
			vLocal_120[101 /*3*/] = { -1774.695f, -229.8553f, 51.7138f };
			vLocal_120[102 /*3*/] = { -1756.903f, -238.1252f, 52.0989f };
			vLocal_120[103 /*3*/] = { -1736.251f, -241.4447f, 52.672f };
			vLocal_120[104 /*3*/] = { -1712.573f, -240.3414f, 53.0528f };
			vLocal_120[105 /*3*/] = { -1699.116f, -234.5364f, 54.4754f };
			vLocal_120[106 /*3*/] = { -1689.302f, -217.4817f, 56.5364f };
			vLocal_120[107 /*3*/] = { -1682.485f, -202.5944f, 56.595f };
			vLocal_120[108 /*3*/] = { -1680.894f, -188.3022f, 56.5344f };
			vLocal_120[109 /*3*/] = { -1682.963f, -173.7911f, 56.5401f };
			vLocal_120[110 /*3*/] = { -1689.333f, -162.1221f, 56.5802f };
			vLocal_120[111 /*3*/] = { -1702.223f, -155.7313f, 56.3958f };
			vLocal_120[112 /*3*/] = { -1709.647f, -161.5643f, 56.4539f };
			vLocal_120[113 /*3*/] = { -1715.474f, -168.1092f, 56.503f };
			vLocal_120[114 /*3*/] = { -1725.536f, -168.0596f, 56.7325f };
			vLocal_120[115 /*3*/] = { -1733.644f, -169.4988f, 57.5363f };
			vLocal_120[116 /*3*/] = { -1733.434f, -177.1803f, 58.3052f };
			vLocal_120[117 /*3*/] = { -1731.431f, -182.4709f, 57.4901f };
			vLocal_120[118 /*3*/] = { -1730.025f, -191.5667f, 57.3605f };
			iLocal_122 = 119;
			break;
		
		case 9:
			vLocal_120[0 /*3*/] = { -1463.912f, 2789.826f, 20.0877f };
			vLocal_120[1 /*3*/] = { -1477.148f, 2845.476f, 25.45f };
			vLocal_120[2 /*3*/] = { -1506.965f, 2872.34f, 30.2234f };
			vLocal_120[3 /*3*/] = { -1577.26f, 2932.705f, 31.917f };
			vLocal_120[4 /*3*/] = { -1591.626f, 2997.577f, 32.261f };
			vLocal_120[5 /*3*/] = { -1639.98f, 3059.17f, 29.948f };
			vLocal_120[6 /*3*/] = { -1645.001f, 3178.496f, 29.4591f };
			vLocal_120[7 /*3*/] = { -1655.642f, 3226.443f, 33.7777f };
			vLocal_120[8 /*3*/] = { -1694.704f, 3249.402f, 32.0673f };
			vLocal_120[9 /*3*/] = { -1725.478f, 3262.473f, 31.5433f };
			vLocal_120[10 /*3*/] = { -1951.812f, 3391.708f, 31.1172f };
			vLocal_120[11 /*3*/] = { -1984.661f, 3398.118f, 31.1172f };
			vLocal_120[12 /*3*/] = { -2011.397f, 3398.739f, 30.4796f };
			vLocal_120[13 /*3*/] = { -2034.775f, 3383.387f, 30.2602f };
			vLocal_120[14 /*3*/] = { -2065.773f, 3384.615f, 30.3096f };
			vLocal_120[15 /*3*/] = { -2109.027f, 3382.438f, 30.9568f };
			vLocal_120[16 /*3*/] = { -2137.183f, 3393.041f, 31.1325f };
			vLocal_120[17 /*3*/] = { -2143.365f, 3397.595f, 32.7541f };
			vLocal_120[18 /*3*/] = { -2161.112f, 3410.701f, 31.6593f };
			vLocal_120[19 /*3*/] = { -2187.906f, 3415.621f, 31.7261f };
			vLocal_120[20 /*3*/] = { -2199.671f, 3426.611f, 31.6199f };
			vLocal_120[21 /*3*/] = { -2217.014f, 3434.519f, 31.6187f };
			vLocal_120[22 /*3*/] = { -2237.547f, 3433.59f, 31.6194f };
			vLocal_120[23 /*3*/] = { -2251.789f, 3432.903f, 32.4218f };
			vLocal_120[24 /*3*/] = { -2256.215f, 3432.564f, 31.059f };
			vLocal_120[25 /*3*/] = { -2276.618f, 3439.096f, 31.0393f };
			vLocal_120[26 /*3*/] = { -2292.811f, 3446.875f, 30.8394f };
			vLocal_120[27 /*3*/] = { -2315.683f, 3443.764f, 30.3699f };
			vLocal_120[28 /*3*/] = { -2341.133f, 3432.404f, 28.5928f };
			vLocal_120[29 /*3*/] = { -2365.814f, 3428.073f, 26.8742f };
			vLocal_120[30 /*3*/] = { -2381.983f, 3423.883f, 30.3016f };
			vLocal_120[31 /*3*/] = { -2394.041f, 3416.595f, 30.5506f };
			vLocal_120[32 /*3*/] = { -2530.589f, 3337.515f, 30.4319f };
			vLocal_120[33 /*3*/] = { -2548.137f, 3339.134f, 28.6846f };
			vLocal_120[34 /*3*/] = { -2562.008f, 3341.58f, 28.0224f };
			vLocal_120[35 /*3*/] = { -2588.223f, 3351.021f, 24.6836f };
			vLocal_120[36 /*3*/] = { -2594.071f, 3356.079f, 22.1251f };
			vLocal_120[37 /*3*/] = { -2595.745f, 3365.915f, 17.9894f };
			vLocal_120[38 /*3*/] = { -2595.793f, 3377.574f, 12.8038f };
			vLocal_120[39 /*3*/] = { -2608.662f, 3392.612f, 13.1174f };
			vLocal_120[40 /*3*/] = { -2623.495f, 3407.143f, 13.6065f };
			vLocal_120[41 /*3*/] = { -2653.212f, 3424.437f, 13.7192f };
			vLocal_120[42 /*3*/] = { -2699.876f, 3437.248f, 12.9223f };
			vLocal_120[43 /*3*/] = { -2721.948f, 3443.959f, 11.9598f };
			vLocal_120[44 /*3*/] = { -2779.478f, 3456.656f, 10.6559f };
			vLocal_120[45 /*3*/] = { -2804.644f, 3470.18f, 9.7878f };
			vLocal_120[46 /*3*/] = { -2825.771f, 3501.169f, 7.9953f };
			vLocal_120[47 /*3*/] = { -2837.044f, 3518.584f, 7.4085f };
			vLocal_120[48 /*3*/] = { -2864.506f, 3523.516f, 7.1469f };
			vLocal_120[49 /*3*/] = { -2913.54f, 3523.989f, 7.2342f };
			vLocal_120[50 /*3*/] = { -2944.496f, 3519.349f, 7.215f };
			vLocal_120[51 /*3*/] = { -2957.936f, 3509.118f, 7.5977f };
			vLocal_120[52 /*3*/] = { -2968.712f, 3494.814f, 8.0967f };
			vLocal_120[53 /*3*/] = { -2982.313f, 3472.155f, 8.5156f };
			vLocal_120[54 /*3*/] = { -2997.359f, 3440.916f, 8.5745f };
			vLocal_120[55 /*3*/] = { -3006.354f, 3441.868f, 8.3125f };
			vLocal_120[56 /*3*/] = { -3010.171f, 3442.161f, 7.8361f };
			vLocal_120[57 /*3*/] = { -3016.127f, 3442.632f, 6.1649f };
			vLocal_120[58 /*3*/] = { -3044.019f, 3439.902f, 2.6837f };
			vLocal_120[59 /*3*/] = { -3083.78f, 3434.43f, 0.6736f };
			vLocal_120[60 /*3*/] = { -3108.864f, 3426.914f, 0.5969f };
			vLocal_120[61 /*3*/] = { -3121.052f, 3417.526f, 0.8856f };
			vLocal_120[62 /*3*/] = { -3128.933f, 3401.378f, 0.723f };
			vLocal_120[63 /*3*/] = { -3127.117f, 3385.608f, -0.0289f };
			vLocal_120[64 /*3*/] = { -3120.614f, 3370.245f, -0.3007f };
			vLocal_120[65 /*3*/] = { -3120.843f, 3355.337f, -0.3184f };
			vLocal_120[66 /*3*/] = { -3131.457f, 3337.666f, -0.4124f };
			vLocal_120[67 /*3*/] = { -3130.055f, 3331.133f, 0.453f };
			vLocal_120[68 /*3*/] = { -3126.044f, 3311.187f, 1.9264f };
			vLocal_120[69 /*3*/] = { -3121.625f, 3297.583f, 4.969f };
			vLocal_120[70 /*3*/] = { -3114.625f, 3288.416f, 5.7302f };
			vLocal_120[71 /*3*/] = { -3109.753f, 3286.727f, 5.3114f };
			vLocal_120[72 /*3*/] = { -3094.209f, 3285.138f, 3.4169f };
			vLocal_120[73 /*3*/] = { -3078.461f, 3294.387f, 3.5013f };
			vLocal_120[74 /*3*/] = { -3064.696f, 3299.328f, 4.393f };
			vLocal_120[75 /*3*/] = { -3042.485f, 3298.661f, 4.2975f };
			vLocal_120[76 /*3*/] = { -3012.822f, 3298.938f, 8.3148f };
			vLocal_120[77 /*3*/] = { -3005.919f, 3298.79f, 8.8372f };
			vLocal_120[78 /*3*/] = { -2979.524f, 3296.409f, 9.4458f };
			vLocal_120[79 /*3*/] = { -2965.909f, 3290.236f, 10.2551f };
			vLocal_120[80 /*3*/] = { -2956.04f, 3279.582f, 10.3873f };
			vLocal_120[81 /*3*/] = { -2941.26f, 3267.032f, 10.8597f };
			vLocal_120[82 /*3*/] = { -2928.623f, 3259.063f, 10.4515f };
			vLocal_120[83 /*3*/] = { -2922.033f, 3248.532f, 9.6349f };
			vLocal_120[84 /*3*/] = { -2917.52f, 3233.934f, 9.5718f };
			vLocal_120[85 /*3*/] = { -2907.681f, 3215.423f, 9.8787f };
			vLocal_120[86 /*3*/] = { -2879.219f, 3175.582f, 9.9335f };
			vLocal_120[87 /*3*/] = { -2837.914f, 3137.461f, 9.104f };
			vLocal_120[88 /*3*/] = { -2778.595f, 3095.414f, 7.9147f };
			vLocal_120[89 /*3*/] = { -2755.339f, 3093.435f, 7.9238f };
			vLocal_120[90 /*3*/] = { -2732.754f, 3091.263f, 11.8101f };
			vLocal_120[91 /*3*/] = { -2715.51f, 3088.629f, 18.9392f };
			vLocal_120[92 /*3*/] = { -2704.912f, 3088.065f, 22.5439f };
			vLocal_120[93 /*3*/] = { -2698.571f, 3088.829f, 24.5249f };
			vLocal_120[94 /*3*/] = { -2688.089f, 3088.755f, 26.9138f };
			vLocal_120[95 /*3*/] = { -2668.202f, 3087.626f, 31.0204f };
			vLocal_120[96 /*3*/] = { -2663.953f, 3087.523f, 31.2972f };
			vLocal_120[97 /*3*/] = { -2649.556f, 3076.861f, 31.3129f };
			vLocal_120[98 /*3*/] = { -2625.872f, 3048.057f, 31.3104f };
			vLocal_120[99 /*3*/] = { -2598.408f, 3019.676f, 31.4648f };
			vLocal_120[100 /*3*/] = { -2586.226f, 3015.642f, 31.7198f };
			vLocal_120[101 /*3*/] = { -2560.566f, 2996.848f, 37.5706f };
			vLocal_120[102 /*3*/] = { -2552.737f, 2986.765f, 36.5308f };
			vLocal_120[103 /*3*/] = { -2545.417f, 2969.709f, 35.8487f };
			vLocal_120[104 /*3*/] = { -2540.366f, 2955.316f, 35.0142f };
			vLocal_120[105 /*3*/] = { -2532.989f, 2947.141f, 34.4408f };
			vLocal_120[106 /*3*/] = { -2527.326f, 2945.037f, 33.7632f };
			vLocal_120[107 /*3*/] = { -2510.012f, 2935.014f, 31.8324f };
			vLocal_120[108 /*3*/] = { -2506.855f, 2927.783f, 31.8324f };
			vLocal_120[109 /*3*/] = { -2502f, 2923.38f, 31.8656f };
			vLocal_120[110 /*3*/] = { -2453.283f, 2895.443f, 31.827f };
			vLocal_120[111 /*3*/] = { -2448.633f, 2893.234f, 31.8105f };
			vLocal_120[112 /*3*/] = { -2441.97f, 2894.076f, 31.8161f };
			vLocal_120[113 /*3*/] = { -2435.053f, 2899.211f, 31.8101f };
			vLocal_120[114 /*3*/] = { -2419.494f, 2912.728f, 31.8101f };
			vLocal_120[115 /*3*/] = { -2410.999f, 2920.665f, 31.8101f };
			vLocal_120[116 /*3*/] = { -2402.981f, 2926.109f, 31.8101f };
			vLocal_120[117 /*3*/] = { -2388.711f, 2931.548f, 31.8101f };
			vLocal_120[118 /*3*/] = { -2376.195f, 2935.068f, 31.8101f };
			vLocal_120[119 /*3*/] = { -2362.174f, 2937.172f, 31.8101f };
			vLocal_120[120 /*3*/] = { -2349.693f, 2937.485f, 31.8097f };
			vLocal_120[121 /*3*/] = { -2335.747f, 2935.854f, 31.8095f };
			vLocal_120[122 /*3*/] = { -2318.942f, 2929.66f, 31.7445f };
			vLocal_120[123 /*3*/] = { -2297.421f, 2923.055f, 31.402f };
			vLocal_120[124 /*3*/] = { -2273.065f, 2913.495f, 31.1485f };
			vLocal_120[125 /*3*/] = { -2255.359f, 2902.834f, 31.3591f };
			vLocal_120[126 /*3*/] = { -2229.69f, 2883.807f, 31.236f };
			vLocal_120[127 /*3*/] = { -2202.925f, 2869.314f, 31.1578f };
			vLocal_120[128 /*3*/] = { -2183.306f, 2857.042f, 31.1936f };
			vLocal_120[129 /*3*/] = { -2163.49f, 2841.464f, 31.3816f };
			vLocal_120[130 /*3*/] = { -2149.862f, 2823.891f, 31.4544f };
			vLocal_120[131 /*3*/] = { -2144.587f, 2808.735f, 31.4497f };
			vLocal_120[132 /*3*/] = { -2132.177f, 2795.02f, 31.7241f };
			vLocal_120[133 /*3*/] = { -2108.141f, 2785.463f, 31.7808f };
			vLocal_120[134 /*3*/] = { -2068.579f, 2784.021f, 31.4615f };
			vLocal_120[135 /*3*/] = { -2051.136f, 2791.31f, 31.825f };
			vLocal_120[136 /*3*/] = { -2042.002f, 2795.728f, 31.2093f };
			vLocal_120[137 /*3*/] = { -2024.121f, 2799.866f, 31.5836f };
			vLocal_120[138 /*3*/] = { -2004.372f, 2797.404f, 31.7003f };
			vLocal_120[139 /*3*/] = { -1976.047f, 2791.383f, 31.5104f };
			vLocal_120[140 /*3*/] = { -1947.483f, 2778.565f, 31.1414f };
			vLocal_120[141 /*3*/] = { -1936.379f, 2768.897f, 31.1447f };
			vLocal_120[142 /*3*/] = { -1929.758f, 2758.106f, 30.6489f };
			vLocal_120[143 /*3*/] = { -1925.991f, 2751.949f, 25.9925f };
			vLocal_120[144 /*3*/] = { -1921.41f, 2746.268f, 24.8392f };
			vLocal_120[145 /*3*/] = { -1915.137f, 2739.659f, 23.8019f };
			vLocal_120[146 /*3*/] = { -1900.307f, 2727.201f, 21.1878f };
			vLocal_120[147 /*3*/] = { -1883.745f, 2715.262f, 19.6892f };
			vLocal_120[148 /*3*/] = { -1875.748f, 2711.08f, 12.552f };
			vLocal_120[149 /*3*/] = { -1867.896f, 2703.139f, 3.0778f };
			vLocal_120[150 /*3*/] = { -1861.963f, 2692.423f, 3.1018f };
			vLocal_120[151 /*3*/] = { -1857.476f, 2683.575f, 3.2905f };
			vLocal_120[152 /*3*/] = { -1848.774f, 2668.988f, 2.0379f };
			vLocal_120[153 /*3*/] = { -1842.34f, 2663.985f, 1.5316f };
			vLocal_120[154 /*3*/] = { -1838.295f, 2661.605f, 0.5979f };
			vLocal_120[155 /*3*/] = { -1815.526f, 2665.483f, 0.7053f };
			vLocal_120[156 /*3*/] = { -1805.632f, 2669.156f, 2.2314f };
			vLocal_120[157 /*3*/] = { -1786.138f, 2670.602f, 2.2725f };
			vLocal_120[158 /*3*/] = { -1771.023f, 2668.491f, 2.1361f };
			vLocal_120[159 /*3*/] = { -1760.869f, 2665.975f, 1.8861f };
			vLocal_120[160 /*3*/] = { -1755.284f, 2664.367f, 1.7509f };
			vLocal_120[161 /*3*/] = { -1748.707f, 2663.003f, 1.9587f };
			vLocal_120[162 /*3*/] = { -1736.189f, 2659.886f, 1.9917f };
			vLocal_120[163 /*3*/] = { -1728.476f, 2658.183f, 1.9464f };
			vLocal_120[164 /*3*/] = { -1722.725f, 2657.996f, 2.0025f };
			vLocal_120[165 /*3*/] = { -1719.555f, 2657.884f, 1.4411f };
			vLocal_120[166 /*3*/] = { -1715.606f, 2657.734f, 0.7234f };
			vLocal_120[167 /*3*/] = { -1710.382f, 2658.301f, 0.4668f };
			vLocal_120[168 /*3*/] = { -1707.359f, 2659.483f, 0.282f };
			vLocal_120[169 /*3*/] = { -1703.736f, 2660.578f, 0.5126f };
			vLocal_120[170 /*3*/] = { -1697.277f, 2662.122f, 0.7382f };
			vLocal_120[171 /*3*/] = { -1694.411f, 2662.705f, 1.5014f };
			vLocal_120[172 /*3*/] = { -1690.597f, 2663.54f, 1.8258f };
			vLocal_120[173 /*3*/] = { -1683.022f, 2665.116f, 1.8626f };
			vLocal_120[174 /*3*/] = { -1677.613f, 2664.286f, 1.8642f };
			vLocal_120[175 /*3*/] = { -1675.041f, 2662.993f, 1.525f };
			vLocal_120[176 /*3*/] = { -1669.615f, 2661.57f, 1.3865f };
			vLocal_120[177 /*3*/] = { -1660.996f, 2660.514f, 1.5346f };
			vLocal_120[178 /*3*/] = { -1654.274f, 2660.621f, 1.3163f };
			vLocal_120[179 /*3*/] = { -1652.602f, 2661.721f, 0.846f };
			vLocal_120[180 /*3*/] = { -1650.772f, 2663.604f, 0.3205f };
			vLocal_120[181 /*3*/] = { -1648.723f, 2666.767f, -0.3498f };
			vLocal_120[182 /*3*/] = { -1646.614f, 2670.389f, -0.2246f };
			vLocal_120[183 /*3*/] = { -1645.298f, 2672.659f, 0.4074f };
			vLocal_120[184 /*3*/] = { -1643.886f, 2675.479f, 1.3415f };
			vLocal_120[185 /*3*/] = { -1643.052f, 2678.978f, 1.7816f };
			vLocal_120[186 /*3*/] = { -1643.81f, 2684.713f, 1.9387f };
			vLocal_120[187 /*3*/] = { -1644.436f, 2692.437f, 2.6905f };
			vLocal_120[188 /*3*/] = { -1643.396f, 2700.886f, 4.7337f };
			vLocal_120[189 /*3*/] = { -1642.371f, 2702.699f, 4.6934f };
			vLocal_120[190 /*3*/] = { -1634.92f, 2708.292f, 4.7769f };
			vLocal_120[191 /*3*/] = { -1622.842f, 2712.665f, 4.7364f };
			vLocal_120[192 /*3*/] = { -1616.741f, 2718.592f, 4.7278f };
			vLocal_120[193 /*3*/] = { -1615.26f, 2726.292f, 4.782f };
			vLocal_120[194 /*3*/] = { -1615.372f, 2740.197f, 5.415f };
			vLocal_120[195 /*3*/] = { -1615.563f, 2747.673f, 7.4045f };
			vLocal_120[196 /*3*/] = { -1615.097f, 2751.565f, 8.8844f };
			vLocal_120[197 /*3*/] = { -1611.762f, 2755.532f, 10.7072f };
			vLocal_120[198 /*3*/] = { -1608.429f, 2757.899f, 11.9354f };
			vLocal_120[199 /*3*/] = { -1603.668f, 2759.287f, 13.1858f };
			vLocal_120[200 /*3*/] = { -1595.852f, 2761.264f, 15.6171f };
			vLocal_120[201 /*3*/] = { -1591.107f, 2762.998f, 17.0786f };
			vLocal_120[202 /*3*/] = { -1588.631f, 2765.09f, 17.4527f };
			vLocal_120[203 /*3*/] = { -1583.653f, 2766.244f, 17.432f };
			vLocal_120[204 /*3*/] = { -1575.535f, 2763.518f, 17.2576f };
			vLocal_120[205 /*3*/] = { -1568.713f, 2759.889f, 17.0294f };
			vLocal_120[206 /*3*/] = { -1560.931f, 2756.537f, 16.5327f };
			vLocal_120[207 /*3*/] = { -1550.389f, 2752.672f, 16.8426f };
			vLocal_120[208 /*3*/] = { -1539.915f, 2745.988f, 16.6513f };
			vLocal_120[209 /*3*/] = { -1329.159f, 2560.402f, 16.6908f };
			vLocal_120[210 /*3*/] = { -1312.168f, 2545.424f, 17.302f };
			vLocal_120[211 /*3*/] = { -1299.685f, 2536.006f, 17.8598f };
			vLocal_120[212 /*3*/] = { -1294.188f, 2532.739f, 18.3548f };
			vLocal_120[213 /*3*/] = { -1288.149f, 2528.114f, 18.6202f };
			iLocal_122 = 214;
			break;
		
		case 10:
			vLocal_120[0 /*3*/] = { 1007.392f, -677.4196f, 55.6986f };
			vLocal_120[1 /*3*/] = { 1015.88f, -640.8702f, 57.6189f };
			vLocal_120[2 /*3*/] = { 1028.693f, -521.0793f, 60.0037f };
			vLocal_120[3 /*3*/] = { 1001.013f, -469.0658f, 62.3685f };
			vLocal_120[4 /*3*/] = { 1024.273f, -438.0688f, 64.0854f };
			vLocal_120[5 /*3*/] = { 1099.331f, -371.6267f, 66.0863f };
			vLocal_120[6 /*3*/] = { 1154.278f, -350.7854f, 66.0453f };
			vLocal_120[7 /*3*/] = { 1196.453f, -317.2407f, 68.006f };
			vLocal_120[8 /*3*/] = { 1228.658f, -285.5526f, 69.5564f };
			vLocal_120[9 /*3*/] = { 1269.14f, -280.8539f, 78.9299f };
			vLocal_120[10 /*3*/] = { 1303.481f, -279.4128f, 89.277f };
			vLocal_120[11 /*3*/] = { 1307.264f, -261.738f, 93.4534f };
			vLocal_120[12 /*3*/] = { 1275.53f, -228.7392f, 97.2897f };
			vLocal_120[13 /*3*/] = { 1280.287f, -201.123f, 100.2999f };
			vLocal_120[14 /*3*/] = { 1316.522f, -182.0543f, 106.8589f };
			vLocal_120[15 /*3*/] = { 1328.355f, -161.1792f, 109.7738f };
			vLocal_120[16 /*3*/] = { 1330.984f, -124.4583f, 116.3178f };
			vLocal_120[17 /*3*/] = { 1349.718f, -112.3109f, 120.3794f };
			vLocal_120[18 /*3*/] = { 1440.839f, -126.4933f, 136.0253f };
			vLocal_120[19 /*3*/] = { 1547.464f, -88.492f, 155.8418f };
			vLocal_120[20 /*3*/] = { 1572.396f, -73.2005f, 158.7627f };
			vLocal_120[21 /*3*/] = { 1617.536f, -76.5607f, 164.2157f };
			vLocal_120[22 /*3*/] = { 1634.688f, -86.0398f, 166.32f };
			vLocal_120[23 /*3*/] = { 1652.054f, -86.2994f, 169.5492f };
			vLocal_120[24 /*3*/] = { 1677.106f, -69.6387f, 172.8701f };
			vLocal_120[25 /*3*/] = { 1708.012f, -81.5238f, 176.1925f };
			vLocal_120[26 /*3*/] = { 1727.578f, -106.2123f, 177.8113f };
			vLocal_120[27 /*3*/] = { 1743.88f, -104.5237f, 180.5338f };
			vLocal_120[28 /*3*/] = { 1787.022f, -75.6841f, 189.1488f };
			vLocal_120[29 /*3*/] = { 1830.548f, -88.8782f, 185.5151f };
			vLocal_120[30 /*3*/] = { 1869.148f, -84.2897f, 188.3576f };
			vLocal_120[31 /*3*/] = { 1908.125f, -94.0947f, 189.7598f };
			vLocal_120[32 /*3*/] = { 1935.856f, -70.0841f, 194.3318f };
			vLocal_120[33 /*3*/] = { 1965.012f, -81.9638f, 206.0977f };
			vLocal_120[34 /*3*/] = { 1994.382f, -81.4886f, 210.8208f };
			vLocal_120[35 /*3*/] = { 2015.317f, -15.1936f, 200.4373f };
			vLocal_120[36 /*3*/] = { 2045.597f, -7.7503f, 209.3502f };
			vLocal_120[37 /*3*/] = { 2097.736f, 3.6562f, 214.3764f };
			vLocal_120[38 /*3*/] = { 2170.912f, -23.0015f, 227.7495f };
			vLocal_120[39 /*3*/] = { 2216.6f, -39.4283f, 202.1804f };
			vLocal_120[40 /*3*/] = { 2265.253f, -42.4669f, 176.595f };
			vLocal_120[41 /*3*/] = { 2317.634f, -62.7793f, 143.5891f };
			vLocal_120[42 /*3*/] = { 2361.621f, -88.1377f, 114.5316f };
			vLocal_120[43 /*3*/] = { 2415.541f, -127.203f, 88.2837f };
			vLocal_120[44 /*3*/] = { 2442.605f, -132.4298f, 88.5436f };
			vLocal_120[45 /*3*/] = { 2467.73f, -87.5151f, 90.4025f };
			vLocal_120[46 /*3*/] = { 2478.927f, -49.3336f, 91.7194f };
			vLocal_120[47 /*3*/] = { 2514.862f, -54.7729f, 90.5497f };
			vLocal_120[48 /*3*/] = { 2535.467f, -44.4498f, 95.4292f };
			vLocal_120[49 /*3*/] = { 2551.987f, -14.4109f, 96.8787f };
			vLocal_120[50 /*3*/] = { 2564.848f, 7.4979f, 95.322f };
			vLocal_120[51 /*3*/] = { 2574.244f, 28.346f, 94.1519f };
			vLocal_120[52 /*3*/] = { 2583.104f, 64.6646f, 97.2344f };
			vLocal_120[53 /*3*/] = { 2590.313f, 90.8608f, 96.7709f };
			vLocal_120[54 /*3*/] = { 2605.615f, 146.4206f, 97.0373f };
			vLocal_120[55 /*3*/] = { 2608.438f, 159.9902f, 97.7789f };
			vLocal_120[56 /*3*/] = { 2616.801f, 193.4394f, 97.8768f };
			vLocal_120[57 /*3*/] = { 2620.917f, 208.1355f, 99.8613f };
			vLocal_120[58 /*3*/] = { 2622.716f, 214.0569f, 100.3944f };
			vLocal_120[59 /*3*/] = { 2625.155f, 223.4091f, 100.4454f };
			vLocal_120[60 /*3*/] = { 2628.51f, 238.1807f, 98.0427f };
			vLocal_120[61 /*3*/] = { 2631.146f, 251.6104f, 99.134f };
			vLocal_120[62 /*3*/] = { 2644.033f, 286.1281f, 96.6342f };
			vLocal_120[63 /*3*/] = { 2668.01f, 344.2533f, 93.6781f };
			vLocal_120[64 /*3*/] = { 2674.79f, 475.0252f, 93.3655f };
			vLocal_120[65 /*3*/] = { 2677.321f, 563.7356f, 92.1778f };
			vLocal_120[66 /*3*/] = { 2676.736f, 657.8879f, 88.5073f };
			vLocal_120[67 /*3*/] = { 2689.552f, 707.0382f, 83.2467f };
			vLocal_120[68 /*3*/] = { 2694.685f, 719.9797f, 79.118f };
			vLocal_120[69 /*3*/] = { 2705.136f, 742.6617f, 63.8294f };
			vLocal_120[70 /*3*/] = { 2732.751f, 770.7942f, 48.8289f };
			vLocal_120[71 /*3*/] = { 2754.752f, 779.1329f, 37.7362f };
			vLocal_120[72 /*3*/] = { 2795.073f, 775.9935f, 19.6025f };
			vLocal_120[73 /*3*/] = { 2815.378f, 772.0298f, 18.5162f };
			vLocal_120[74 /*3*/] = { 2823.101f, 760.8618f, 18.5399f };
			vLocal_120[75 /*3*/] = { 2829.417f, 747.6486f, 18.4988f };
			vLocal_120[76 /*3*/] = { 2838.551f, 742.6433f, 18.5283f };
			vLocal_120[77 /*3*/] = { 2852.99f, 747.0413f, 18.3301f };
			vLocal_120[78 /*3*/] = { 2866.382f, 755.1819f, 18.1503f };
			vLocal_120[79 /*3*/] = { 2876.903f, 759.4967f, 16.8825f };
			vLocal_120[80 /*3*/] = { 2883.941f, 767.9843f, 17.9021f };
			vLocal_120[81 /*3*/] = { 2890.169f, 774.4565f, 18.7225f };
			vLocal_120[82 /*3*/] = { 2898.975f, 775.8782f, 19.8196f };
			vLocal_120[83 /*3*/] = { 2908.946f, 777.8163f, 22.677f };
			vLocal_120[84 /*3*/] = { 2911.956f, 780.126f, 23.7715f };
			vLocal_120[85 /*3*/] = { 2917.168f, 783.8945f, 24.2316f };
			vLocal_120[86 /*3*/] = { 2924.857f, 790.0166f, 24.7335f };
			vLocal_120[87 /*3*/] = { 2934.356f, 798.6711f, 23.9277f };
			vLocal_120[88 /*3*/] = { 2940.85f, 803.635f, 23.7534f };
			vLocal_120[89 /*3*/] = { 2944.641f, 806.6476f, 23.5292f };
			vLocal_120[90 /*3*/] = { 2951.772f, 813.8921f, 22.0205f };
			iLocal_122 = 91;
			break;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_122)
	{
		vVar1 = { vLocal_120[iVar0 /*3*/] };
		vVar2 = { vLocal_120[iVar0 + 1 /*3*/] };
		if (!func_31(vVar2, 0f, 0f, 0f, 0))
		{
			fLocal_121[iVar0] = unk_0x0EB28750412C3A5A(vVar1, vVar2, true);
			fLocal_123 = (fLocal_123 + fLocal_121[iVar0]);
		}
		iVar0++;
	}
	fLocal_125 = ((fLocal_123 * 70f) / 100f);
	func_1062(vLocal_120[0 /*3*/]);
}

void func_1062(vector3 vParam0)
{
	Global_1806FA.f_6 = { vParam0 };
}

void func_1063()
{
	Global_19824D = 1;
	if (!unk_0xEAE0D21A50E6C7F4(Global_26D9AC, 0))
	{
		unk_0x5D96D8530B3D0904(&Global_26D9AC, 0);
		unk_0x5D96D8530B3D0904(&Global_19824E, 0);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_26D9AC, 1))
	{
		unk_0x5D96D8530B3D0904(&Global_26D9AC, 1);
		unk_0x5D96D8530B3D0904(&Global_19824E, 1);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_26D9AC, 5))
	{
		unk_0x5D96D8530B3D0904(&Global_26D9AC, 5);
		unk_0x5D96D8530B3D0904(&Global_19824E, 5);
	}
	if (unk_0x76395FF5E8D5E643(3939230146))
	{
		unk_0x1BA7FCEAFCE8D46E(3939230146, 0, false, false);
	}
	if (unk_0x76395FF5E8D5E643(3713987790))
	{
		unk_0x1BA7FCEAFCE8D46E(3713987790, 0, false, false);
	}
	if (unk_0x76395FF5E8D5E643(2868514821))
	{
		unk_0x1BA7FCEAFCE8D46E(2868514821, 0, false, false);
	}
	if (unk_0x76395FF5E8D5E643(745417724))
	{
		unk_0x1BA7FCEAFCE8D46E(745417724, 0, false, false);
	}
	if (unk_0x76395FF5E8D5E643(2989662390))
	{
		unk_0x1BA7FCEAFCE8D46E(2989662390, 0, false, false);
	}
	if (unk_0x76395FF5E8D5E643(2751792219))
	{
		unk_0x1BA7FCEAFCE8D46E(2751792219, 0, false, false);
	}
	if (unk_0x76395FF5E8D5E643(3483196299))
	{
		unk_0x1BA7FCEAFCE8D46E(3483196299, 0, false, false);
	}
}

bool func_1064(int iParam0)
{
	int iVar0;
	
	iVar0 = func_50(2480, 4294967295, 0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

int func_1065()
{
	return 1;
}

int func_1066()
{
	return Local_80;
}

int func_1067(int iParam0)
{
	return Local_81[iParam0 /*8*/];
}

void func_1068(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_519(unk_0xD803B885F5E47A62());
		Global_198D8B.f_4 = func_946();
		Global_198D8B.f_5 = func_945();
		if (func_42(unk_0xD803B885F5E47A62()) || func_43(unk_0xD803B885F5E47A62()))
		{
			Global_198D8B.f_6 = 1;
		}
		else
		{
			Global_198D8B.f_6 = 0;
		}
		Global_198D8B.f_1 = func_1119(bParam9);
		Global_198D8B.f_8 = unk_0xDD0E7998AE8AD485();
		Global_198D8B.f_9 = func_986(bParam0);
		Global_198D8B.f_A = iParam1;
		Global_198D8B.f_11 = Global_198D8B.f_2;
		Global_198D8B.f_12 = Global_198D8B.f_2;
		Global_198D8B.f_13 = func_977();
		Global_198D8B.f_15 = (Global_198D8B.f_8 - Global_198D8B.f_7);
		if (func_131(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198D8B.f_17 = func_986(func_233(1));
		}
		Global_198D8B.f_18 = func_1118(unk_0xD803B885F5E47A62());
		Global_198D8B.f_1C = func_987(unk_0xD803B885F5E47A62());
		if (Global_198D8B.f_18 > 2)
		{
			Global_198D8B.f_18 = 2;
		}
		func_1116(iVar0);
	}
	else
	{
		iVar0 = func_145(unk_0xD803B885F5E47A62());
	}
	if (func_152(iVar0))
	{
		Global_198C86.f_2 = func_946();
		Global_198C86.f_3 = func_945();
		Global_198C86.f_32 = iParam4;
		Global_198C86.f_33 = iParam5;
		Global_198C86.f_A = unk_0xDD0E7998AE8AD485();
		Global_198C86.f_14 = (Global_198C86.f_A - Global_198C86.f_9);
		Global_198C86.f_C = iParam1;
		Global_198C86.f_13 = func_1112(iVar0, bParam0, func_1115(bParam3));
		if (bParam0)
		{
			Global_198C86.f_B = 1;
		}
		else
		{
			Global_198C86.f_B = 0;
		}
		if ((func_41(unk_0xD803B885F5E47A62()) || func_39(unk_0xD803B885F5E47A62())) || func_45(unk_0xD803B885F5E47A62()))
		{
			Global_198C86.f_8 = 1;
		}
		else
		{
			Global_198C86.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_198C86.f_2B = 0;
			Global_198C86.f_2D = func_983(func_181(), iParam2);
			Global_198C86.f_2F = iParam7;
			Global_198C86.f_2E = iParam6;
			Global_198C86.f_34 = func_1111(func_181(), iParam2);
		}
		func_1109(iVar0);
	}
	else if (func_151(iVar0))
	{
		Global_198CBC.f_2 = func_946();
		Global_198CBC.f_3 = func_945();
		Global_198CBC.f_A = unk_0xDD0E7998AE8AD485();
		Global_198CBC.f_13 = (Global_198CBC.f_A - Global_198CBC.f_9);
		Global_198CBC.f_C = iParam1;
		if (bParam0)
		{
			Global_198CBC.f_B = 1;
		}
		else
		{
			Global_198CBC.f_B = 0;
		}
		if ((func_41(unk_0xD803B885F5E47A62()) || func_39(unk_0xD803B885F5E47A62())) || func_45(unk_0xD803B885F5E47A62()))
		{
			Global_198CBC.f_8 = 1;
		}
		else
		{
			Global_198CBC.f_8 = 0;
		}
		func_1107(iVar0);
	}
	else if (func_150(iVar0))
	{
		Global_198CFB.f_2 = func_946();
		Global_198CFB.f_3 = func_945();
		Global_198CFB.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198CFB.f_12 = (Global_198CFB.f_9 - Global_198CFB.f_8);
		Global_198CFB.f_B = iParam1;
		Global_198CFB.f_7 = func_977();
		Global_198CFB.f_2A = func_980(func_52(), 5);
		iVar1 = unk_0xD803B885F5E47A62();
		iVar2 = func_174(iVar1);
		Global_198CFB.f_1C = iVar2;
		Global_198CFB.f_1D = func_986((func_914(iVar1) || func_913(iVar1)));
		Global_198CFB.f_1E = func_986(func_1106(iVar1));
		Global_198CFB.f_20 = func_986(func_911(iVar1));
		Global_198CFB.f_21 = func_986(func_912(iVar1));
		Global_198CFB.f_22 = func_986(func_1105(iVar1));
		Global_198CFB.f_23 = func_986(func_910(0, iVar1) == 1);
		Global_198CFB.f_24 = func_986(func_1104(iVar1));
		Global_198CFB.f_25 = func_986(func_1103(iVar1));
		Global_198CFB.f_26 = func_986(func_1102(iVar1));
		Global_198CFB.f_27 = func_986(func_290(iVar1, iVar2, 0));
		Global_198CFB.f_28 = func_986(func_290(iVar1, iVar2, 2));
		Global_198CFB.f_29 = func_986(func_290(iVar1, iVar2, 1));
		if (func_1101(iVar1))
		{
			Global_198CFB.f_1F = 2;
		}
		else if (func_1100(iVar1))
		{
			Global_198CFB.f_1F = 1;
		}
		if (bParam0)
		{
			Global_198CFB.f_A = 1;
		}
		else
		{
			Global_198CFB.f_A = 0;
		}
		if ((func_41(unk_0xD803B885F5E47A62()) || func_39(unk_0xD803B885F5E47A62())) || func_45(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_6 = 1;
		}
		else
		{
			Global_198CFB.f_6 = 0;
		}
		Global_198CFB.f_15 = 4294967294;
		Global_198CFB.f_16 = 4294967294;
		func_1098(iVar0);
	}
	else if (func_149(iVar0))
	{
		Global_198D27.f_2 = func_946();
		Global_198D27.f_3 = func_945();
		if ((func_41(unk_0xD803B885F5E47A62()) || func_39(unk_0xD803B885F5E47A62())) || func_45(unk_0xD803B885F5E47A62()))
		{
			Global_198D27.f_6 = 1;
		}
		else
		{
			Global_198D27.f_6 = 0;
		}
		Global_198D27.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198D27.f_A = func_986(bParam0);
		Global_198D27.f_B = iParam1;
		Global_198D27.f_11 = func_978(func_247());
		Global_198D27.f_12 = (Global_198D27.f_9 - Global_198D27.f_8);
		Global_198D27.f_14 = iParam8;
		Global_198D27.f_15 = 4294967294;
		Global_198D27.f_16 = 4294967294;
		Global_198D27.f_1B = func_1097();
		Global_198D27.f_1D = func_50(6107, 4294967295, 0);
		Global_198D27.f_1E = func_50(6103, 4294967295, 0);
		Global_198D27.f_1F = func_50(6104, 4294967295, 0);
		Global_198D27.f_20 = func_50(6106, 4294967295, 0);
		Global_198D27.f_21 = func_50(6105, 4294967295, 0);
		Global_198D27.f_22 = func_50(6108, 4294967295, 0);
		Global_198D27.f_24 = func_986(func_233(1));
		Global_198D27.f_25 = func_1095();
		func_1085();
		func_1083(iVar0);
	}
	else if (func_148(iVar0))
	{
		Global_198D5D.f_2 = func_946();
		Global_198D5D.f_3 = func_945();
		if ((func_41(unk_0xD803B885F5E47A62()) || func_39(unk_0xD803B885F5E47A62())) || func_45(unk_0xD803B885F5E47A62()))
		{
			Global_198D5D.f_6 = 1;
		}
		else
		{
			Global_198D5D.f_6 = 0;
		}
		Global_198D5D.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198D5D.f_A = func_986(bParam0);
		Global_198D5D.f_B = iParam1;
		Global_198D5D.f_12 = (Global_198D5D.f_9 - Global_198D5D.f_8);
		Global_198D5D.f_14 = iParam8;
		Global_198D5D.f_17 = Global_C0073;
		Global_198D5D.f_24 = Global_C0073.f_1;
		Global_198D5D.f_18 = func_50(6157, 4294967295, 0);
		Global_198D5D.f_19 = func_50(6162, 4294967295, 0);
		Global_198D5D.f_1A = func_50(6163, 4294967295, 0);
		Global_198D5D.f_1B = func_986((((func_976() || func_975()) || func_974()) || func_973(unk_0xD803B885F5E47A62())));
		Global_198D5D.f_1C = func_50(6164, 4294967295, 0);
		Global_198D5D.f_1D = func_986(func_972());
		Global_198D5D.f_23 = 4294967295;
		Global_198D5D.f_26 = 4294967295;
		Global_198D5D.f_27 = Global_198D5D.f_4;
		Global_198D5D.f_28 = Global_198D5D.f_5;
		Global_198D5D.f_29 = func_946();
		Global_198D5D.f_2A = func_986(func_233(1));
		Global_198D5D.f_2C = Global_198D5D.f_12;
		func_1081(iVar0);
	}
	else if (func_140(iVar0))
	{
		if (Global_198DE5.f_2 == 4294967295)
		{
			Global_198DE5.f_2 = func_946();
		}
		if (Global_198DE5.f_3 == 4294967295)
		{
			Global_198DE5.f_3 = func_945();
		}
		if ((func_41(unk_0xD803B885F5E47A62()) || func_39(unk_0xD803B885F5E47A62())) || func_45(unk_0xD803B885F5E47A62()))
		{
			Global_198DE5.f_6 = 1;
		}
		else
		{
			Global_198DE5.f_6 = 0;
		}
		Global_198DE5.f_1 = func_1119(0);
		Global_198DE5.f_7 = func_977();
		Global_198DE5.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198DE5.f_A = func_986(bParam0);
		Global_198DE5.f_B = iParam1;
		if (func_181() != 4294967295)
		{
			Global_198DE5.f_11 = func_768(func_181());
		}
		Global_198DE5.f_12 = (Global_198DE5.f_9 - Global_198DE5.f_8);
		Global_198DE5.f_13 = Global_26B66F.f_19B3;
		Global_198DE5.f_1C = func_987(unk_0xD803B885F5E47A62());
		Global_198DE5.f_1D = func_986(func_1080(unk_0xD803B885F5E47A62()));
		Global_198DE5.f_1E = func_986(func_1079(unk_0xD803B885F5E47A62()));
		Global_198DE5.f_1F = func_954(unk_0xD803B885F5E47A62());
		if (func_131(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198DE5.f_21 = func_986(func_233(1));
		}
		if (Global_198DE5.f_22 > 2)
		{
			Global_198DE5.f_22 = 2;
		}
		func_1077(iVar0);
	}
	else if (func_146(iVar0))
	{
		Global_198DAF.f_2 = func_946();
		Global_198DAF.f_3 = func_945();
		if ((func_41(unk_0xD803B885F5E47A62()) || func_39(unk_0xD803B885F5E47A62())) || func_45(unk_0xD803B885F5E47A62()))
		{
			Global_198DAF.f_6 = 1;
		}
		else
		{
			Global_198DAF.f_6 = 0;
		}
		Global_198DAF.f_1 = func_1119(0);
		Global_198DAF.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198DAF.f_A = func_986(bParam0);
		Global_198DAF.f_B = iParam1;
		Global_198DAF.f_12 = (Global_198DAF.f_9 - Global_198DAF.f_8);
		Global_198DAF.f_1C = func_987(unk_0xD803B885F5E47A62());
		if (Global_198DAF.f_1C)
		{
			Global_198DAF.f_1D = func_971(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_198DAF.f_1D = 0;
		}
		Global_198DAF.f_1E = func_955(unk_0xD803B885F5E47A62(), 4, 4294967295);
		Global_198DAF.f_1F = func_954(unk_0xD803B885F5E47A62());
		Global_198DAF.f_20 = func_986(func_953(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_21 = func_986(func_952(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_22 = func_986(func_951(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_23 = func_986(func_950(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_24 = func_949(unk_0xD803B885F5E47A62());
		Global_198DAF.f_25 = func_948(unk_0xD803B885F5E47A62());
		Global_198DAF.f_27 = func_947(unk_0xD803B885F5E47A62());
		if (func_131(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198DAF.f_29 = func_986(func_233(1));
		}
		if (Global_198DAF.f_2A > 2)
		{
			Global_198DAF.f_2A = 2;
		}
		func_1075(iVar0);
	}
	else if (func_139(iVar0))
	{
		Global_198E39.f_2 = func_946();
		Global_198E39.f_3 = func_945();
		Global_198E39.f_4 = func_989(func_181());
		Global_198E39.f_5 = func_988(func_181());
		if ((func_41(unk_0xD803B885F5E47A62()) || func_39(unk_0xD803B885F5E47A62())) || func_45(unk_0xD803B885F5E47A62()))
		{
			Global_198E39.f_6 = 1;
		}
		else
		{
			Global_198E39.f_6 = 0;
		}
		Global_198E39.f_7 = func_977();
		Global_198E39.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198E39.f_A = func_986(bParam0);
		Global_198E39.f_B = iParam1;
		if (func_247() != 4294967295)
		{
			Global_198E39.f_11 = func_768(func_247());
		}
		Global_198E39.f_12 = (Global_198E39.f_9 - Global_198E39.f_8);
		Global_198E39.f_15 = 1;
		Global_198E39.f_16 = 1;
		Global_198E39.f_19 = func_1074(unk_0xD803B885F5E47A62());
		Global_198E39.f_1B = func_986(func_944(unk_0xD803B885F5E47A62()));
		Global_198E39.f_1C = func_942(21, 4294967295);
		Global_198E39.f_1D = func_986(func_1073(unk_0xD803B885F5E47A62()));
		func_1071(iVar0);
	}
	else if (func_138(iVar0))
	{
		Global_198E84.f_6 = func_989(func_181());
		Global_198E84.f_7 = func_988(func_181());
		if (func_131(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198E84.f_8 = func_986(func_233(1));
		}
		Global_198E84.f_A = func_977();
		Global_198E84.f_B = 1;
		Global_198E84.f_D = (unk_0xDD0E7998AE8AD485() - Global_19FC3D);
		Global_198E84.f_E = iParam1;
		Global_198E84.f_13 = 1;
		Global_198E84.f_14 = 1;
		func_1069(iVar0);
	}
	else
	{
		Global_198C74.f_6 = unk_0xDD0E7998AE8AD485();
		if (bParam0)
		{
			Global_198C74.f_7 = 1;
		}
		else
		{
			Global_198C74.f_7 = 0;
		}
		Global_198C74.f_8 = iParam1;
		if (Global_198C74.f_4 == 0)
		{
			if ((func_41(unk_0xD803B885F5E47A62()) || func_39(unk_0xD803B885F5E47A62())) || func_45(unk_0xD803B885F5E47A62()))
			{
				Global_198C74.f_4 = 1;
			}
		}
	}
}

void func_1069(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x9CA4259CC8E87599(&Global_198E84);
	func_1070();
}

void func_1070()
{
	struct<36> Var0;
	
	Global_198E84 = { Var0 };
	Global_198E84.f_17 = 0;
	Global_198E84.f_16 = 0;
	Global_198E84.f_15 = 0;
}

void func_1071(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x62CC3DEF90BBBB82(&Global_198E39);
	func_1072();
}

void func_1072()
{
	struct<31> Var0;
	
	Global_198E39 = { Var0 };
}

int func_1073(int iParam0)
{
	if (iParam0 != func_389())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_171.f_2, 6);
	}
	return 0;
}

int func_1074(int iParam0)
{
	if (func_145(iParam0) == 243)
	{
		return func_143(iParam0);
	}
	return 4294967295;
}

void func_1075(int iParam0)
{
	unk_0x26ABE31DF89E0806(&Global_198DAF);
	func_1076();
}

void func_1076()
{
	struct<54> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Global_198DAF = { Var0 };
}

void func_1077(int iParam0)
{
	unk_0xEB3BD00621D19C22(&Global_198DE5);
	func_1078();
}

void func_1078()
{
	struct<39> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Global_198DE5 = { Var0 };
}

bool func_1079(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0);
}

bool func_1080(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 19);
}

void func_1081(int iParam0)
{
	unk_0xD620402A9DD91217(&Global_198D5D);
	func_1082();
}

void func_1082()
{
	struct<46> Var0;
	
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Global_198D5D = { Var0 };
	Global_198D5D.f_10 = 0;
}

void func_1083(int iParam0)
{
	unk_0x51EB431C1612B9CA(&Global_198D27);
	func_1084();
}

void func_1084()
{
	struct<54> Var0;
	
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Global_198D27 = { Var0 };
	Global_198D27.f_17 = 0;
	Global_198D27.f_18 = 0;
	Global_198D27.f_10 = 0;
}

void func_1085()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = 4294967295;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_929(12));
		func_928(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_14325F[iVar1 /*141*/].f_42 != 0 && func_1087(Global_14325F[iVar1 /*141*/].f_42, 1))
			{
				if (Global_26B66F.f_380 != iVar1)
				{
					if (func_1086(Global_14325F[iVar1 /*141*/].f_42))
					{
						if (Global_14325F[iVar1 /*141*/].f_42 != 0)
						{
							iVar3 = Global_14325F[iVar1 /*141*/].f_42;
						}
						switch (iVar0)
						{
							case 0:
								Global_198D27.f_26 = iVar3;
								break;
							
							case 1:
								Global_198D27.f_27 = iVar3;
								break;
							
							case 2:
								Global_198D27.f_28 = iVar3;
								break;
							
							case 3:
								Global_198D27.f_29 = iVar3;
								break;
							
							case 4:
								Global_198D27.f_2A = iVar3;
								break;
							
							case 5:
								Global_198D27.f_2B = iVar3;
								break;
							
							case 6:
								Global_198D27.f_2C = iVar3;
								break;
							
							case 7:
								Global_198D27.f_2D = iVar3;
								break;
							
							case 8:
								Global_198D27.f_2E = iVar3;
								break;
							
							case 9:
								Global_198D27.f_2F = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_1086(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case 2310691317:
		case 4252008158:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case 3545667823:
		case 3319621991:
		case 2594093022:
		case 3902291871:
		case 2531412055:
		case 1043222410:
		case joaat("lazer"):
		case 2908775872:
		case 1565978651:
		case 1036591958:
		case 3287439187:
		case 4262088844:
		case 2771347558:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case 3568198617:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_1087(int iParam0, bool bParam1)
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
		if (!func_1094())
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
		if ((((!func_1093() && !func_1092()) && !func_1091()) && !func_1090()) && !func_1094())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_1091())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_1089(iParam0))
		{
			return 0;
		}
	}
	if (!func_1088(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1088(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_337())
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

int func_1089(int iParam0)
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

int func_1090()
{
	return 0;
}

int func_1091()
{
	return 1;
}

int func_1092()
{
	return 1;
}

int func_1093()
{
	if (unk_0xC146D5FBD23C6954(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_1094()
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

var func_1095()
{
	var uVar0;
	
	uVar0 = func_1096();
	if (!func_175())
	{
		if (func_181() != func_389())
		{
			uVar0 = func_1118(func_181()) + 1;
		}
	}
	return uVar0;
}

int func_1096()
{
	return func_1118(unk_0xD803B885F5E47A62()) + 1;
}

int func_1097()
{
	return func_50(6113, 4294967295, 0);
}

void func_1098(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x09B65A782EA88A3D(&Global_198CFB);
	func_1099();
}

void func_1099()
{
	struct<44> Var0;
	
	Global_198CFB = { Var0 };
	Global_198CFB.f_17 = 0;
	Global_198CFB.f_18 = 0;
	Global_198CFB.f_10 = 0;
}

bool func_1100(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 12);
}

bool func_1101(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 13);
}

int func_1102(int iParam0)
{
	if (iParam0 != func_389())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 12) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 13)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_1103(int iParam0)
{
	if (iParam0 != func_389())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 1)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1104(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (((((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 3) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 4)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 5)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 1)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1105(int iParam0)
{
	if (iParam0 != func_389())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 6) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 7)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1106(int iParam0)
{
	if (iParam0 == func_389())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 9);
}

void func_1107(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x3315867670EACADD(&Global_198CBC);
	func_1108();
}

void func_1108()
{
	struct<63> Var0;
	
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Var0.f_36 = 4294967295;
	Var0.f_37 = 4294967295;
	Var0.f_38 = 4294967295;
	Var0.f_39 = 4294967295;
	Var0.f_3A = 4294967295;
	Var0.f_3B = 4294967295;
	Var0.f_3C = 4294967295;
	Var0.f_3D = 4294967295;
	Var0.f_3E = 4294967295;
	Global_198CBC = { Var0 };
	Global_198CBC.f_18 = 0;
	Global_198CBC.f_19 = 0;
	Global_198CBC.f_11 = 0;
}

void func_1109(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x9D44809E7CAF1A79(&Global_198C86);
	func_1110();
}

void func_1110()
{
	struct<54> Var0;
	
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Global_198C86 = { Var0 };
	Global_198C86.f_1D = 0;
	Global_198C86.f_1E = 0;
	Global_198C86.f_11 = 0;
}

int func_1111(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_290(iParam0, iParam1, 2);
	bVar1 = func_290(iParam0, iParam1, 1);
	bVar2 = func_290(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_1112(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_161(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_4523;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_4522;
		}
		else
		{
			iVar0 = Global_40001.f_4510;
		}
		iVar1 = 19;
	}
	else if (func_985(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_155(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_40001.f_450F;
			iVar1 = 20;
		}
	}
	else if (func_152(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_4523;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_4522;
		}
		else
		{
			iVar0 = Global_40001.f_4510;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xF9647457141B11A7(func_989(func_181()), func_988(func_181()), func_946(), func_945(), iVar1, iVar0);
	}
	func_1114(iVar0);
	func_1113(iVar0);
	return iVar0;
}

void func_1113(int iParam0)
{
	int iVar0;
	
	iVar0 = func_50(3968, 4294967295, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1EA = iVar0;
	func_159(3968, iVar0, 4294967295, 1, 0);
}

void func_1114(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 + iParam0);
	if (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 < 4294957297)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = 9999;
	}
	else if (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 > 9999)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = 9999;
	}
}

int func_1115(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_41(unk_0xD803B885F5E47A62()) || func_45(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

void func_1116(int iParam0)
{
	unk_0xC56A8C7E94A60EE3(&Global_198D8B);
	func_1117();
}

void func_1117()
{
	struct<36> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Global_198D8B = { Var0 };
}

int func_1118(int iParam0)
{
	if (func_119(iParam0) == func_389())
	{
		return 0;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_13;
}

int func_1119(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	if (bParam0)
	{
		iVar0 = func_519(unk_0xD803B885F5E47A62());
	}
	else
	{
		iVar0 = func_145(unk_0xD803B885F5E47A62());
	}
	if (iVar0 != 4294967295)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_1124(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_1122(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_1121(unk_0xD803B885F5E47A62());
			if (func_141(func_142(unk_0xD803B885F5E47A62())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_1121(unk_0xD803B885F5E47A62());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_1120(unk_0xD803B885F5E47A62());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_1120(unk_0xD803B885F5E47A62());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_1120(int iParam0)
{
	if (func_145(unk_0xD803B885F5E47A62()) == 238 || func_145(unk_0xD803B885F5E47A62()) == 249)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F3;
	}
	return 4294967295;
}

int func_1121(int iParam0)
{
	if (func_145(unk_0xD803B885F5E47A62()) == 237 || func_145(unk_0xD803B885F5E47A62()) == 250)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F2;
	}
	return 4294967295;
}

int func_1122(int iParam0)
{
	return func_1123(iParam0, 150);
}

int func_1123(int iParam0, int iParam1)
{
	if (func_519(iParam0) == iParam1)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F0;
	}
	return 4294967295;
}

int func_1124(int iParam0)
{
	return func_1123(iParam0, 236);
}

int func_1125(bool bParam0)
{
	if (func_1128(1))
	{
		return 1;
	}
	if (Global_26B66F.f_1404.f_29)
	{
		Global_26B66F.f_1404.f_29 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_247() == func_389() || !func_1274(func_247(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_1037(unk_0xD803B885F5E47A62()))
	{
		if (func_1127(unk_0xD803B885F5E47A62()) && func_1126())
		{
			return 1;
		}
	}
	return 0;
}

int func_1126()
{
	switch (func_1036(func_1031(unk_0xD803B885F5E47A62())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_1127(int iParam0)
{
	if (iParam0 != func_389() && func_1274(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 4);
	}
	return 0;
}

int func_1128(bool bParam0)
{
	bool bVar0;
	
	if (!func_179(1))
	{
		bVar0 = false;
		if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 != func_389())
		{
			if (func_1274(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39, 0, 1))
			{
				if ((Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 4 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 8) || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_858(func_145(unk_0xD803B885F5E47A62())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_240(31);
				if (func_152(func_145(unk_0xD803B885F5E47A62())))
				{
					func_240(81);
				}
				if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 != func_389() && unk_0x40B8C182D63932FC(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39))
				{
					Global_18D265 = func_86(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39, 4294967294, 0, 0, 0);
					if (!func_163(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39))
					{
						func_240(88);
					}
				}
				else
				{
					Global_18D265 = 1;
				}
				Global_18D255 = { Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_68 };
			}
			return 1;
		}
	}
	return 0;
}

void func_1129()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 6))
	{
		func_862();
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 6);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 7))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 4) || unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 16))
		{
			if (((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_559()) && func_1274(unk_0xD803B885F5E47A62(), 1, 1))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 7);
				func_621("FME_PASINT", 30000);
				func_620(1);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 17))
		{
			if (func_44() && !func_364())
			{
				unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 17);
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 16);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 23))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 2)) && func_1274(unk_0xD803B885F5E47A62(), 1, 1)) && !Global_12061) && !Global_E545) && !unk_0xFEBC1E4EC9E001F0())
		{
			if (func_1146())
			{
				func_621("AMEV_GA_RP", 4294967295);
				if (func_145(unk_0xD803B885F5E47A62()) != 200)
				{
					func_620(1);
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 23);
			}
		}
	}
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 15)
	{
		if (func_42(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x70305AA977EFE679(1344549371))
			{
				unk_0x8134AB7E30C9809E(1344549371);
			}
		}
		else if (unk_0x70305AA977EFE679(1344549371))
		{
			unk_0x64366F76B4845277(1344549371);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 9))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_559()) && func_1274(unk_0xD803B885F5E47A62(), 1, 1)) && !func_363(unk_0xD803B885F5E47A62(), 21)) && !func_363(unk_0xD803B885F5E47A62(), 25))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 9);
			func_1145(0);
			func_621("FME_TBL00", 4294967295);
			func_620(1);
		}
	}
	if (func_47(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 18))
		{
			if ((func_363(unk_0xD803B885F5E47A62(), 21) && unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 20)) && !unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 19))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 18);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 18))
		{
			if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_559()) && func_1274(unk_0xD803B885F5E47A62(), 1, 1)) && unk_0x0F1CCD77290EE12F()) && !Global_26B66F.f_13C1)
			{
				unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 18);
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 19);
				func_621("AMTT_RPAS", 4294967295);
				func_620(1);
			}
		}
	}
	if (((((func_47(unk_0xD803B885F5E47A62()) && !func_46(unk_0xD803B885F5E47A62())) && func_519(unk_0xD803B885F5E47A62()) != 146) && !func_366(unk_0xD803B885F5E47A62())) && !func_1144(unk_0xD803B885F5E47A62())) && !func_1140())
	{
		if (func_847(func_519(unk_0xD803B885F5E47A62())))
		{
			unk_0x25A1F489CCEE528A(unk_0xD803B885F5E47A62());
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 22))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 22);
		}
		if (func_43(unk_0xD803B885F5E47A62()) || func_845())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 10))
			{
				if (func_1138(func_519(unk_0xD803B885F5E47A62())))
				{
					if (func_49(0) && !Global_247C05)
					{
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 9);
					}
					if (!Global_247C05)
					{
						func_713(1);
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 14);
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 10);
			}
		}
		if (func_42(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 11))
			{
				if (!Global_181EC.f_8)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 12);
					func_759(1);
				}
				if (!func_1137())
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 13);
					func_846();
				}
				if (!Global_247C05)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 14);
					if (func_49(0) && !Global_247C05)
					{
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 9);
					}
					func_713(1);
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 11);
			}
		}
		else
		{
			func_1135(0);
		}
	}
	else
	{
		func_1135(1);
	}
	func_1130();
	if (func_844(func_519(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 21))
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 21);
	}
	if (((func_44() && !func_364()) || func_363(unk_0xD803B885F5E47A62(), 21)) || func_363(unk_0xD803B885F5E47A62(), 25))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 10))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 10);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 10))
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 10);
	}
}

void func_1130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_559())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_786(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 26))
				{
					unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 26);
				}
				func_1131(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 26))
	{
		func_22(&(Global_1806FA.f_16));
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 26);
	}
}

void func_1131(int iParam0, int iParam1)
{
	if (!func_24(&(Global_1806FA.f_16)))
	{
		func_388(&(Global_1806FA.f_16), 0, 0);
	}
	else if (func_23(&(Global_1806FA.f_16), iParam1, 0))
	{
		if (func_608() > 0)
		{
			func_1134(iParam0);
			if (func_492("AMEV_LBD_HELP"))
			{
				unk_0xA37A90C62806D848(1);
			}
			func_22(&(Global_1806FA.f_16));
		}
	}
	else
	{
		func_1133(0);
		func_1132();
	}
}

void func_1132()
{
	Global_26B66F.f_11B4 = 0;
}

void func_1133(int iParam0)
{
	Global_150392.f_44 = iParam0;
}

void func_1134(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
			func_113(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 1);
		}
		iVar0++;
	}
}

void func_1135(int iParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 11) || (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 10) && iParam0)) || (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 22) && iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 12))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 12);
			func_759(0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 13))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 13);
			func_1136();
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 14) && !func_144(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 14);
			func_713(0);
		}
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 11);
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 10);
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 22);
	}
}

void func_1136()
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1362), 0);
}

bool func_1137()
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1362, 0);
}

int func_1138(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_42(unk_0xD803B885F5E47A62());
		
		case 133:
			return (func_845() || func_1139(func_578()));
		
		default:
	}
	return 0;
}

int func_1139(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_1140()
{
	if (((((((((func_679() || func_479()) || func_678()) || func_446()) || (func_675() && !unk_0xA14BB9332558B949())) || (func_1143() && !func_1142())) || Global_248A6D) || Global_248A6D.f_1 != 0) || Global_248AB7 != 0) || (func_1141() == 2 && !unk_0xA14BB9332558B949()))
	{
		return 1;
	}
	return 0;
}

int func_1141()
{
	return Global_EC6CD;
}

bool func_1142()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 27);
}

int func_1143()
{
	if (func_671() || func_670())
	{
		return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 == 8;
	}
	return 0;
}

bool func_1144(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		if (((func_44() && !func_364()) || func_363(unk_0xD803B885F5E47A62(), 21)) || func_363(unk_0xD803B885F5E47A62(), 25))
		{
			return 1;
		}
		if (func_24(&(Global_1806FA.f_D)))
		{
			if (!func_23(&(Global_1806FA.f_D), Global_40001.f_E, 0))
			{
				return 1;
			}
			func_22(&(Global_1806FA.f_D));
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 9);
}

void func_1145(int iParam0)
{
	int iVar0;
	
	iVar0 = func_50(2534, 4294967295, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 1))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 1);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 2))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 3))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 3);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 4))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 4);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 5))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 6))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 6);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 7))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 7);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 8))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 9))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 9);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 10))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 10);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 11))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 11);
		}
	}
	func_159(2534, iVar0, 4294967295, 1, 0);
}

int func_1146()
{
	int iVar0;
	
	if (!func_24(&(Global_1806FA.f_F)))
	{
		func_388(&(Global_1806FA.f_F), 0, 0);
		Global_1806FA.f_11 = 0;
	}
	else if (func_23(&(Global_1806FA.f_F), 1000, 0))
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Global_1806FA.f_11)))
		{
			iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Global_1806FA.f_11));
			if (unk_0x40B8C182D63932FC(iVar0))
			{
				if (func_1274(iVar0, 1, 1) && func_1147(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_218(unk_0xD803B885F5E47A62()), func_218(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1806FA.f_11++;
		if (Global_1806FA.f_11 >= 32)
		{
			Global_1806FA.f_11 = 0;
			func_22(&(Global_1806FA.f_F));
		}
	}
	return 0;
}

int func_1147(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_719() != 0)
	{
		return 0;
	}
	if (!func_210(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_184507[iVar0 /*876*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_1148()
{
	return Global_1806FA.f_18;
}

bool func_1149(int iParam0)
{
	return !func_1150(iParam0);
}

int func_1150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_40001.f_1A04)
			{
				return 0;
			}
			if (func_363(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_40001.f_1A05)
			{
				return 0;
			}
			if (func_363(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_40001.f_1A06)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_40001.f_1A07)
			{
				return 0;
			}
			if (func_363(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_1151(4))
			{
				return 0;
			}
			if (func_363(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_1151(4))
			{
				return 0;
			}
			if (func_363(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_1151(4))
			{
				return 0;
			}
			if (func_363(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_1151(4))
			{
				return 0;
			}
			if (func_363(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_1151(4))
			{
				return 0;
			}
			if (func_363(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_1151(4))
			{
				return 0;
			}
			if (func_363(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_1151(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1274(unk_0x117658E336116132(iVar0), 0, 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iVar0 /*421*/].f_D0, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1152()
{
	var uVar0;
	
	func_1156(&uVar0);
	if (Global_140856 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_1155())
	{
		return 1;
	}
	if (Global_2594CA)
	{
		return 1;
	}
	if (func_1154())
	{
		return 1;
	}
	if (func_1153(159))
	{
		if (!func_679())
		{
			return 1;
		}
	}
	if (func_1153(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_717() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_717()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1153(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1154()
{
	return Global_258C08;
}

bool func_1155()
{
	return Global_2564C8.f_251;
}

void func_1156(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 2441846426:
					func_1157(iVar0);
					break;
				
				case 589125870:
					unk_0x218F818E64020C17(1, iVar0, &vVar3, 4);
					if (vVar3.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_1157(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_1274(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_1158(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_1158(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1159()
{
	SYSTEM::WAIT(0);
}

void func_1160()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0))
	{
		unk_0x34D79252800B23FF(5);
		unk_0x0674E58A79778E99(&iLocal_84, 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 5) || unk_0xEAE0D21A50E6C7F4(Local_80.f_1, 12))
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_B8.f_3))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_80.f_B8.f_3)))
			{
				if (unk_0xAFE0D3608EDA7039(unk_0x1B50683925F00106(Local_80.f_B8.f_3)))
				{
					if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_80.f_B8.f_2), 0))
					{
						unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_80.f_B8.f_3));
						if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(Local_80.f_B8.f_7)) && !unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(Local_80.f_B8.f_7), 0))
						{
							unk_0x9AFA0796FDCABCD5(unk_0x1B50683925F00106(Local_80.f_B8.f_3), unk_0xB177666FAB6F4417(Local_80.f_B8.f_2), 0, unk_0x9539D44F3E4492F6(Local_80.f_B8.f_7), 0f, 0f, 0f, 8, 20f, 1000f, -1f, 60, 50, 3212836864, 0);
						}
						else
						{
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_80.f_B8.f_3), 2048, true);
							unk_0xEEB67C3D0A71A47B(unk_0x1B50683925F00106(Local_80.f_B8.f_3), unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(Local_80.f_B8.f_3), true), 10000f, 999999, 0, 0);
						}
						unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_80.f_B8.f_3), true);
					}
				}
			}
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0) || unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 6))
		{
			if (func_735())
			{
				func_733();
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 3))
	{
		if (unk_0xC844350D5D58C99A(iLocal_560))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_560, 0))
			{
				unk_0xAA6B3A4292417750(iLocal_560, false, false, false, false, false, false, 0, false);
				unk_0x0674E58A79778E99(&iLocal_84, 3);
			}
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_484())
		{
			func_658(unk_0xD803B885F5E47A62(), 1, 0, 0);
			func_485();
		}
	}
	func_769(24, 0);
	func_1220(0);
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 24))
	{
		if (Local_80.f_C5 == 2)
		{
			func_1169(1, 0);
		}
		else if (unk_0x8CD06866876216F2())
		{
			func_750(136, 0, unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 2));
		}
		else
		{
			func_750(136, 0, 0);
		}
	}
	else if (Local_80.f_C5 == 2)
	{
		func_1169(1, 0);
	}
	if (unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()) == iLocal_99)
	{
		unk_0x6DF7BF67E86AAE86(unk_0x16F2683693E537C9(), iLocal_101);
	}
	if (Local_80.f_C5 == 2)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 8))
		{
			func_862();
		}
	}
	if (unk_0xD803B885F5E47A62() != 4294967295)
	{
		if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 136)
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/] = 4294967295;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_82, 6))
	{
		unk_0x9A1335ECD7BD117F("pennedIn");
		unk_0x82A772610883F395("PennedInOut", 0, 0);
		unk_0x0674E58A79778E99(&iLocal_82, 6);
	}
	if (unk_0x562F77A7F33D2E46("MP_Player_Inside_Bubble_Scene"))
	{
		unk_0x8910D3D58E0132B8("MP_Player_Inside_Bubble_Scene");
	}
	if (unk_0x562F77A7F33D2E46("MP_Player_Outside_Bubble_Scene"))
	{
		unk_0x8910D3D58E0132B8("MP_Player_Outside_Bubble_Scene");
	}
	func_811(&iLocal_1271);
	func_1168();
	if (unk_0x8CD06866876216F2())
	{
		func_807();
	}
	func_818(0);
	func_614(0, 136);
	unk_0xDB605C06AC092620(0);
	if (unk_0xEAE0D21A50E6C7F4(iLocal_83, 11))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 12))
		{
			unk_0xBEF52C1D400C0A44(1);
			unk_0xC92DB9682A650680("MP_MC_STOP");
		}
	}
	if (Local_80.f_C5 != 2)
	{
		if (func_1152())
		{
			Local_1277.f_5 = 5;
		}
		else if (func_808(2, 0, 1, 0, 0))
		{
			Local_1277.f_5 = 6;
		}
		else if (func_133() == unk_0xD803B885F5E47A62())
		{
			Local_1277.f_5 = 1;
		}
		else
		{
			Local_1277.f_5 = 2;
		}
		Local_1277 = Local_80.f_B3;
		Local_1277.f_1 = Local_80.f_B4;
		Local_1277.f_4 = Local_80.f_B5;
		Local_1277.f_3 = Local_80.f_B7;
		Local_1277.f_A = (unk_0xDD0E7998AE8AD485() - Local_1277.f_9);
		func_1166(Local_1277, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295);
	}
	else
	{
		Global_198C86.f_19 = Local_80.f_B5;
		Global_198C74.f_2 = Local_80.f_B3;
		Global_198C74.f_3 = Local_80.f_B4;
		func_1164(Global_198C74, 4294967295, 4294967295, 4294967295, 4294967295);
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_83, 31))
		{
			if (unk_0x57270EE11514DC67() > 4294967295)
			{
				func_1068(0, 4, 0, !unk_0xEAE0D21A50E6C7F4(Local_81[unk_0x57270EE11514DC67() /*8*/].f_1, 0), 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
			}
		}
	}
	if (!func_325())
	{
		if (Local_1277.f_6 > 0)
		{
			if (Local_1277.f_5 == 1)
			{
				if (Local_80.f_C5 != 2)
				{
					func_1163();
				}
			}
		}
	}
	func_863();
	func_784(0);
	func_429(0);
	if (func_427(unk_0xD803B885F5E47A62()))
	{
		func_872(0);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x0B1BF75E4AE17AC1(unk_0x16F2683693E537C9()))
	{
		unk_0x545E1397F38D9D5A(unk_0x16F2683693E537C9(), 0);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
		}
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 398, false);
	}
	func_1162(0);
	unk_0x0674E58A79778E99(&iLocal_82, 18);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_89, iVar0))
		{
			if (unk_0x40B8C182D63932FC(unk_0x117658E336116132(iVar0)))
			{
				unk_0xF8FCA0CD5B6B1935(unk_0x117658E336116132(iVar0), 0);
			}
		}
		iVar0++;
	}
	func_865(1);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 422, false);
	if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 2))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), false, false, false, false, false, false, 0, false);
			unk_0x0674E58A79778E99(&iLocal_84, 2);
		}
	}
	func_1161();
}

void func_1161()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_1162(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 6);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 6);
	}
}

void func_1163()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C6), 18);
}

void func_1164(struct<14> Param0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	char* sVar0;
	struct<15> Var1;
	struct<19> Var2;
	struct<19> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<15> Var6;
	struct<17> Var7;
	struct<17> Var8;
	
	sVar0 = unk_0xBB0808A181D4745C();
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_E = iParam1;
			unk_0xB047F6117D395ACC(&Var1);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ROB_SHOP"))
		{
			Var2 = { Param0 };
			Var2.f_E = Global_198C74.f_E;
			Var2.f_F = iParam1;
			Var2.f_10 = iParam2;
			Var2.f_11 = iParam3;
			Var2.f_12 = iParam4;
			unk_0x9BB0AC5E4A8F404F(&Var2);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_COLLECT_MONEY"))
		{
			Var3 = { Param0 };
			Var3.f_E = Global_198C74.f_E;
			Var3.f_F = iParam1;
			Var3.f_10 = iParam2;
			Var3.f_11 = iParam3;
			Var3.f_12 = iParam4;
			unk_0xE93B0B1B12C1E1E1(&Var3);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FIVESTAR"))
		{
			Var4 = { Param0 };
			Var4.f_E = Global_198C74.f_E;
			Var4.f_F = iParam1;
			unk_0xCD81BB1970E3B8E2(&Var4);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var5 = { Param0 };
			Var5.f_E = Global_198C74.f_E;
			Var5.f_F = iParam1;
			Var5.f_10 = iParam2;
			unk_0x28D613A77A383381(&Var5);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_POINT_TO_POINT"))
		{
			Var6 = { Param0 };
			Var6.f_E = Global_198C74.f_E;
			unk_0x438700D865B444D6(&Var6);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CASHING_OUT"))
		{
			Var7 = { Param0 };
			Var7.f_E = iParam1;
			Var7.f_F = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(iParam2));
			Var7.f_10 = iParam3;
			unk_0x49B509F5A7E9A84A(&Var7);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SALVAGE"))
		{
			Var8 = { Param0 };
			Var8.f_E = iParam1;
			Var8.f_F = iParam2;
			Var8.f_10 = Global_198C74.f_E;
			unk_0xCF5A5AEF9EB03B45(&Var8);
		}
	}
	func_1165();
}

void func_1165()
{
	struct<18> Var0;
	
	Global_198C74 = { Var0 };
}

void func_1166(struct<12> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = unk_0xBB0808A181D4745C();
	if (Param0.f_9 == 0)
	{
		Param0.f_A = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_12B4E)
	{
		if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_C = iParam1;
			unk_0x9534DF96382FA79D(&Var1);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, func_1167()))
		{
			Var2 = { Param0 };
			Var2.f_C = iParam1;
			Var2.f_D = iParam2;
			unk_0x68F74D8294339590(&Var2);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_C = iParam1;
			Var3.f_D = iParam2;
			Var3.f_E = iParam3;
			Var3.f_F = iParam4;
			Var3.f_10 = iParam5;
			Var3.f_11 = iParam6;
			unk_0xB4378BE34ED99E2A(&Var3);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_C = iParam1;
			Var4.f_D = SYSTEM::TO_FLOAT(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_D = (Var4.f_D / 10f);
			}
			unk_0xE20208601F5C75BD(&Var4);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_penned_in"))
		{
			unk_0xAE4A25D32825E179(&Param0);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_C = iParam1;
			unk_0xAD412B113AE8E374(&Var5);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_C = iParam1;
			Var6.f_D = iParam2;
			unk_0xAFD26850D8F9D951(&Var6);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_C = iParam1;
			Var7.f_D = iParam2;
			unk_0x2320D6A9337F16FD(&Var7);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_C = iParam1;
			Var8.f_D = iParam2;
			Var8.f_E = iParam3;
			Var8.f_F = iParam4;
			unk_0x8EFE08564F2B2A96(&Var8);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_C = iParam1;
			unk_0x99DAD54B2D0F4291(&Var9);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_C = iParam1;
				Var10.f_D = iParam2;
				unk_0xC6463777F834DA6F(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_C = iParam1;
				Var11.f_D = iParam2;
				unk_0x9563472595C7B3E7(&Var11);
			}
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_C = iParam1;
			unk_0x9BF192C4E1EF8A54(&Var12);
		}
	}
}

char* func_1167()
{
	switch (Global_259530)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_1168()
{
	unk_0x51732B934211201A(iLocal_100);
	unk_0x51732B934211201A(iLocal_99);
}

void func_1169(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14DB79.f_1.f_6C != 0)
	{
		Global_14DB79.f_1.f_6C = 0;
	}
	Global_14DB79.f_1.f_6D = 4294967295;
	Global_14DB79.f_1.f_6E = 4294967295;
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 167 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 168)
	{
		func_1218();
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 4);
	}
	if ((func_162() && iParam1 != 0) && Global_40001.f_4255)
	{
		if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 190 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 192)
		{
			func_1200(unk_0xD803B885F5E47A62(), iParam1, 1, 0);
		}
	}
	if (((Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 164 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 208) || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 250) || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 237)
	{
		unk_0x15EA7F4313456B1D(3, true);
		unk_0x15EA7F4313456B1D(5, true);
	}
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 != 4294967295)
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 = 4294967295;
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 14) && !func_47(unk_0xD803B885F5E47A62()))
		{
			func_713(0);
		}
	}
	else if (func_403(unk_0xD803B885F5E47A62()) != 4294967295)
	{
		func_893(4294967295);
	}
	func_1199(func_389());
	if (func_234(16))
	{
		func_688(16);
	}
	func_1196(0);
	func_888(4294967295);
	func_1195();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1194(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1192(iVar1);
		iVar1++;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0))
	{
		unk_0x51B096AAC60548C1(1f);
		unk_0x34D79252800B23FF(5);
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 5))
	{
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 5);
	}
	iVar2 = func_1191();
	if ((func_551(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1190(4294967295);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_161(iVar2))
	{
		func_1187(4294967295, 1);
	}
	else if (((((func_1186(iVar2) || func_1185(iVar2)) || func_1184(iVar2)) || func_150(iVar2)) || func_149(iVar2)) || func_148(iVar2))
	{
	}
	else
	{
		func_1187(4294967295, 1);
	}
	func_362(19);
	func_362(20);
	func_362(21);
	func_362(22);
	func_362(27);
	func_688(3);
	func_688(4);
	func_688(7);
	func_1183();
	if (func_41(unk_0xD803B885F5E47A62()))
	{
		func_852(0);
	}
	func_362(29);
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 = func_389();
	if (Global_26B66F.f_1404.f_29 != 0)
	{
		Global_26B66F.f_1404.f_29 = 0;
	}
	if (bParam0)
	{
		func_689();
	}
	if (!func_47(unk_0xD803B885F5E47A62()))
	{
		func_711();
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 6))
	{
		unk_0x15EA7F4313456B1D(3, true);
		unk_0x15EA7F4313456B1D(5, true);
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 6);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 7))
	{
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 7);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 8))
	{
		func_1182("IMPEXP_SELFDES", 0);
		func_1172("IMPEXP_SELFDES");
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 8);
	}
	func_1170(iVar2, 0);
}

void func_1170(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 9))
		{
			unk_0x8BC9595FD2792B5D(func_1171(iParam0));
			unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 9);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 9))
	{
		unk_0x8910D3D58E0132B8(func_1171(iParam0));
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 9);
	}
}

char* func_1171(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_1172(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_1B416.f_3738[iVar0 /*104*/])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar0 /*104*/]), sParam0))
			{
				if (Global_1B416.f_3738[iVar0 /*104*/].f_18 == 2)
				{
				}
				else
				{
					func_1174();
					Global_1B416.f_3738[iVar0 /*104*/].f_63[Global_4C1E] = 0;
					if (func_1173(iVar0))
					{
					}
					else
					{
						Global_1B416.f_3738[iVar0 /*104*/].f_18 = 0;
						Global_1B416.f_3738[iVar0 /*104*/].f_1C = 0;
						Global_1B416.f_3738[iVar0 /*104*/].f_1D = 0;
					}
					unk_0xD59AE843FA2C6B40(Global_1B416.f_3738[iVar0 /*104*/].f_10);
				}
			}
		}
		iVar0++;
	}
}

int func_1173(int iParam0)
{
	if ((Global_1B416.f_3738[iParam0 /*104*/].f_63[0] == 1 || Global_1B416.f_3738[iParam0 /*104*/].f_63[1] == 1) || Global_1B416.f_3738[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1174()
{
	if (func_1181(14))
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
		Global_4C1E = func_1175();
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

var func_1175()
{
	func_1176();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_1176()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_1179(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_1178(unk_0x16F2683693E537C9());
			if (func_1177(iVar0) && (!func_1181(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_1177(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_1177(int iParam0)
{
	return iParam0 < 3;
}

int func_1178(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_1179(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_1179(int iParam0)
{
	if (func_1177(iParam0))
	{
		return func_1180(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_1180(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_1181(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_1182(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_1B416.f_3738[iVar0 /*104*/])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar0 /*104*/]), sParam0))
			{
				if (Global_1B416.f_3738[iVar0 /*104*/].f_18 == 0)
				{
				}
				Global_1B416.f_3738[iVar0 /*104*/].f_18 = 1;
				if (Global_1B416.f_3738[iVar0 /*104*/].f_19 == 1)
				{
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[0] == 1)
					{
						Global_1B416.f_36DE[0 /*20*/].f_11 = 0;
					}
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[1] == 1)
					{
						Global_1B416.f_36DE[1 /*20*/].f_11 = 0;
					}
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[2] == 1)
					{
						Global_1B416.f_36DE[2 /*20*/].f_11 = 0;
					}
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[3] == 1)
					{
						Global_1B416.f_36DE[3 /*20*/].f_11 = 0;
					}
					Global_1B416.f_3738[iVar0 /*104*/].f_19 = 0;
					if (iParam1 == 1)
					{
						Global_1B416.f_3738[iVar0 /*104*/].f_1B = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1183()
{
	if (func_729(unk_0xD803B885F5E47A62()))
	{
		func_362(25);
	}
}

int func_1184(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_1185(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_1186(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

void func_1187(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_1191();
	}
	if (iParam0 > 0)
	{
		if (func_181() != func_389())
		{
			if (func_1025(unk_0xD803B885F5E47A62()) == unk_0xD803B885F5E47A62())
			{
				Global_265EAE.f_5D[func_1189(iParam0)] = 1;
			}
		}
		iVar0 = func_1189(159);
		if (func_1188(iVar0, Global_40001.f_313E, bParam1))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(157);
		if (func_1188(iVar0, Global_40001.f_313E, bParam1))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(148);
		if (func_1188(iVar0, Global_40001.f_313E, bParam1))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(164);
		if (func_1188(iVar0, Global_40001.f_313E, bParam1))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(142);
		if (func_1188(iVar0, Global_40001.f_313E, bParam1))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(152);
		if (func_1188(iVar0, Global_40001.f_313E, bParam1))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(166);
		if (func_1188(iVar0, Global_40001.f_313E, bParam1))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(170);
		if (func_1188(iVar0, Global_40001.f_313E, bParam1))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(173);
		if (func_1188(iVar0, Global_40001.f_313E, bParam1))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(179);
		if (func_1188(iVar0, Global_40001.f_313E, bParam1))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(200);
		if (func_1188(iVar0, Global_40001.f_313E, bParam1))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(201);
		if (func_1188(iVar0, Global_40001.f_313E, bParam1))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(182);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(183);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(185);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(186);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(180);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(195);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(197);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(198);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(207);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(208);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(209);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(214);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(215);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(216);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(217);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(218);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(219);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(220);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(221);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1188(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_40(unk_0xD803B885F5E47A62(), 19) && !func_40(unk_0xD803B885F5E47A62(), 20)) && !func_40(unk_0xD803B885F5E47A62(), 9))
		{
			return 0;
		}
	}
	if (Global_265EAE.f_5D[iParam0] == 1 && func_24(&(Global_265EAE[iParam0 /*2*/])))
	{
		if (func_348(&(Global_265EAE[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_265EAE.f_5D[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1189(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return 4294967295;
}

void func_1190(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_1191();
	}
	if (iParam0 > 0)
	{
		if (func_181() != func_389())
		{
			Global_265EAE.f_5D[func_1189(iParam0)] = 1;
		}
		iVar0 = func_1189(155);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(163);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(160);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(153);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(162);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(154);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(171);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(172);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(199);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(194);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(193);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(210);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(205);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(189);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(211);
		if (func_1188(iVar0, Global_40001.f_313F, 0))
		{
			func_22(&(Global_265EAE[iVar0 /*2*/]));
			func_388(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1191()
{
	char* sVar0;
	
	sVar0 = unk_0xBB0808A181D4745C();
	if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_1192(int iParam0)
{
	if (!func_31(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_151[iParam0 /*3*/], func_1193(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_151[iParam0 /*3*/] = { func_1193() };
	}
	if (!func_31(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_144[iParam0 /*3*/], func_1193(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_144[iParam0 /*3*/] = { func_1193() };
	}
}

Vector3 func_1193()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_1194(int iParam0)
{
	if (!func_31(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_96[iParam0 /*3*/], func_1193(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_96[iParam0 /*3*/] = { func_1193() };
	}
	if (!func_31(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_7D[iParam0 /*3*/], func_1193(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_7D[iParam0 /*3*/] = { func_1193() };
	}
}

void func_1195()
{
	struct<20> Var0;
	
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Global_18040E = { Var0 };
	Global_18040E.f_D = func_389();
	if (unk_0xEAE0D21A50E6C7F4(Global_1801E0, 3))
	{
		unk_0x0674E58A79778E99(&Global_1801E0, 3);
	}
}

void func_1196(bool bParam0)
{
	if (bParam0)
	{
		if (!func_1027(unk_0xD803B885F5E47A62(), 14))
		{
			func_1198(14);
		}
	}
	else if (func_1027(unk_0xD803B885F5E47A62(), 14))
	{
		func_1197(14);
	}
}

void func_1197(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

void func_1198(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

void func_1199(int iParam0)
{
	if (func_132(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xD803B885F5E47A62() != iParam0)
		{
			if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1E4 != iParam0)
			{
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1E4 = iParam0;
				if (iParam0 != func_389())
				{
				}
			}
		}
	}
}

void func_1200(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_292(iParam0, iParam1) && func_1217(iParam0, iParam1))
	{
		iVar0 = func_291(iParam0, iParam1);
		func_1204(iVar0, bParam2, bParam3);
		func_1201(iVar0, 1);
	}
}

void func_1201(int iParam0, bool bParam1)
{
	if (!func_1203(iParam0))
	{
		return;
	}
	func_275(func_1202(iParam0), bParam1, 4294967295, 1);
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_6 = bParam1;
}

int func_1202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_1203(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1204(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_907(unk_0xD803B885F5E47A62(), iParam0);
	if (!bParam1)
	{
		func_1216(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_265A43[iParam0];
		iVar0 = func_1215(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1993C9 = 4294967295;
		}
		func_1214(iParam0, 0, bParam2);
	}
	else if (func_1212(iParam0, bParam2))
	{
		iVar0 = func_1211(iVar2, 0);
		iVar3 = func_983(unk_0xD803B885F5E47A62(), iVar2);
		iVar4 = func_1210(iVar2, bParam2);
		iVar5 = func_1211(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1209(iVar2) && func_1208(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1216(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1207(unk_0xD803B885F5E47A62(), iVar2) > 0)
		{
			func_1206(iParam0, (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2 - (func_1210(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1211(iVar2, bParam2) / func_1207(unk_0xD803B885F5E47A62(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1209(iVar2) && func_1208(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1205(unk_0xD803B885F5E47A62(), iVar2, iVar0, bParam2);
}

void func_1205(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_389())
	{
		return;
	}
	if (func_282(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_184507[iParam0 /*876*/].f_112.f_101 = iParam2;
				}
				else
				{
					Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1206(int iParam0, int iParam1)
{
	if (iParam0 != 4294967295 && iParam1 != Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2)
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1207(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_389())
	{
		return 0;
	}
	if (func_282(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1208(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_389())
	{
		return 0;
	}
	if (func_282(iParam1) && func_1209(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_B;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1209(int iParam0)
{
	return func_176(iParam0) == 5;
}

int func_1210(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_176(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_40001.f_4236;
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_423B;
			}
			break;
		
		case 3:
			uVar0 = Global_40001.f_4235;
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_423A;
			}
			break;
		
		case 4:
			uVar0 = Global_40001.f_4234;
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_4239;
			}
			break;
		
		case 0:
			uVar0 = Global_40001.f_4232;
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_4237;
			}
			break;
		
		case 2:
			uVar0 = Global_40001.f_4233;
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_4238;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_40001.f_5252;
				if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_40001.f_5253;
				}
			}
			else
			{
				uVar0 = Global_40001.f_5242;
				if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_40001.f_5243;
				}
			}
			break;
	}
	return uVar0;
}

int func_1211(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_176(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_40001.f_4223;
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_422C);
			}
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_4231);
			}
			break;
		
		case 3:
			iVar0 = Global_40001.f_4224;
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_422B);
			}
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_4230);
			}
			break;
		
		case 4:
			iVar0 = Global_40001.f_4225;
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_422A);
			}
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_422F);
			}
			break;
		
		case 0:
			iVar0 = Global_40001.f_4226;
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_4228);
			}
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_422D);
			}
			break;
		
		case 2:
			iVar0 = Global_40001.f_4227;
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_4229);
			}
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_422E);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_40001.f_524F;
			}
			else
			{
				iVar0 = Global_40001.f_523F;
			}
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_5250);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_5240);
				}
			}
			if (func_290(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_5251);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_5241);
				}
			}
			if (func_1208(unk_0xD803B885F5E47A62(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1212(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_276(15384, 4294967295, 4294967295);
	}
	return func_276(func_1213(iParam0), 4294967295, 4294967295);
}

int func_1213(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_1214(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_275(15384, bParam1, 4294967295, 1);
		return;
	}
	func_275(func_1213(iParam0), bParam1, 4294967295, 1);
}

int func_1215(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_265A43[iParam0];
	iVar1 = func_907(unk_0xD803B885F5E47A62(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_265A4A;
	}
	if (func_1209(iVar1))
	{
		if (func_1208(unk_0xD803B885F5E47A62(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1216(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_265A4A = iParam1;
		return;
	}
	Global_265A43[iParam0] = iParam1;
}

int func_1217(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_292(iParam0, iParam1))
	{
		iVar0 = func_291(iParam0, iParam1);
		if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_4 > 0 && Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1218()
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 28);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 29);
	func_1219(24);
}

void func_1219(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

void func_1220(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C6, 9))
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C6), 9);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C6, 9))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C6), 9);
	}
}

void func_1221(struct<21> Param0)
{
	int iVar0;
	
	func_1273();
	func_1271(func_1272(Param0), Param0);
	unk_0x28E5F00F131890E3(1);
	func_1270(0, 4294967295, 0);
	if (func_402())
	{
		func_1228(0, 0, 0);
	}
	else
	{
		func_1226(136);
	}
	unk_0x9752E7BAEABA939E(&Local_80, 199);
	unk_0x35B62793EAE9ADDF(&Local_81, 257);
	if (!func_1225())
	{
		func_1160();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0);
		if (unk_0xBFF81ED3B99522C7())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_80.f_3[iVar0] = func_389();
				iVar0++;
			}
			unk_0xCB466C2A425A9168(&(Local_80.f_B3), &(Local_80.f_B4));
		}
		Local_1277.f_2 = unk_0x981819F6C45DDB49();
		Local_1277.f_8 = unk_0xDD0E7998AE8AD485();
		func_769(24, 1);
		func_1222();
		if (func_1004(1))
		{
		}
		Local_81[unk_0x57270EE11514DC67() /*8*/] = 0;
	}
	else
	{
		func_1160();
	}
}

void func_1222()
{
	int iVar0;
	
	unk_0xF63400DBE3303D26("relPennedInPlayer", &iLocal_99);
	unk_0xF63400DBE3303D26("relUWAi", &iLocal_100);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x0E2400AB9174FA81(1, Global_180837[iVar0], iLocal_99);
		unk_0x0E2400AB9174FA81(1, iLocal_99, Global_180837[iVar0]);
		iVar0++;
	}
	unk_0x0E2400AB9174FA81(5, iLocal_99, iLocal_100);
	unk_0x0E2400AB9174FA81(5, iLocal_100, iLocal_99);
	unk_0x0E2400AB9174FA81(1, 2017343592, iLocal_100);
	unk_0x0E2400AB9174FA81(5, 2017343592, iLocal_99);
	func_1224(1, &iLocal_100);
	func_1223(&iLocal_100);
	func_1223(&iLocal_99);
}

void func_1223(int iParam0)
{
	unk_0x0E2400AB9174FA81(1, 2429016672, *iParam0);
	unk_0x0E2400AB9174FA81(1, *iParam0, 2429016672);
	unk_0x0E2400AB9174FA81(1, 296331235, *iParam0);
	unk_0x0E2400AB9174FA81(1, *iParam0, 296331235);
	unk_0x0E2400AB9174FA81(1, 1166638144, *iParam0);
	unk_0x0E2400AB9174FA81(1, *iParam0, 1166638144);
	unk_0x0E2400AB9174FA81(1, 2037579709, *iParam0);
	unk_0x0E2400AB9174FA81(1, *iParam0, 2037579709);
	unk_0x0E2400AB9174FA81(1, 2017343592, *iParam0);
	unk_0x0E2400AB9174FA81(1, *iParam0, 2017343592);
	unk_0x0E2400AB9174FA81(1, 2473492219, *iParam0);
	unk_0x0E2400AB9174FA81(1, *iParam0, 2473492219);
	unk_0x0E2400AB9174FA81(1, 1782292358, *iParam0);
	unk_0x0E2400AB9174FA81(1, *iParam0, 1782292358);
	unk_0x0E2400AB9174FA81(1, 3261945386, *iParam0);
	unk_0x0E2400AB9174FA81(1, *iParam0, 3261945386);
	unk_0x0E2400AB9174FA81(1, 3008990876, *iParam0);
	unk_0x0E2400AB9174FA81(1, *iParam0, 3008990876);
}

void func_1224(int iParam0, int iParam1)
{
	unk_0x0E2400AB9174FA81(iParam0, 2761840924, *iParam1);
	unk_0x0E2400AB9174FA81(iParam0, *iParam1, 2761840924);
	unk_0x0E2400AB9174FA81(iParam0, 3822679795, *iParam1);
	unk_0x0E2400AB9174FA81(iParam0, *iParam1, 3822679795);
	unk_0x0E2400AB9174FA81(iParam0, 4111159735, *iParam1);
	unk_0x0E2400AB9174FA81(iParam0, *iParam1, 4111159735);
}

int func_1225()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 1;
		}
		if (func_1155())
		{
			return 0;
		}
		if (func_1153(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_1226(int iParam0)
{
	func_763();
	func_1227();
	func_765();
	Global_1806FA.f_4 = iParam0;
	Global_1806FA.f_5 = iParam0;
	func_851(iParam0, 4294967295);
	func_165(&(Global_1806FA.f_12), 0, 0);
	Global_26B66F.f_11EC = 0;
	Global_259033[0] = func_389();
	Global_259033[1] = func_389();
	Global_259033[2] = func_389();
	Global_259033[3] = func_389();
	Global_259033[4] = func_389();
	func_761();
	if (!func_1023(func_1024()))
	{
		func_558();
	}
	if (func_44() && !func_364())
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 16);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 17);
	}
}

void func_1227()
{
	var uVar0;
	
	Global_180713 = uVar0;
}

void func_1228(int iParam0, int iParam1, bool bParam2)
{
	func_1269();
	if (func_1037(unk_0xD803B885F5E47A62()))
	{
		func_1231(1);
	}
	if ((iParam0 != 0 && unk_0x40B8C182D63932FC(iParam1)) && func_1230(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x5D96D8530B3D0904(&Global_198C66, 0);
				break;
			}
	}
	if (!func_175() && !func_131(unk_0xD803B885F5E47A62(), 1))
	{
		if (func_365())
		{
			func_712(3);
		}
	}
	func_712(4);
	if (func_179(0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 = func_181();
	}
	if (func_152(iParam0))
	{
		func_1110();
		Global_198C86.f_12 = func_978(func_247());
	}
	else if (func_151(func_403(unk_0xD803B885F5E47A62())))
	{
		func_1108();
		Global_198CBC.f_12 = func_978(func_247());
	}
	if (bParam2)
	{
		if (!func_359())
		{
			func_713(1);
		}
	}
	func_1229();
}

void func_1229()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_14DB79.f_216[iVar0 /*42*/].f_1 = func_389();
		Global_14DB79.f_216[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1230(int iParam0, bool bParam1)
{
	return func_245(unk_0xD803B885F5E47A62(), iParam0, bParam1);
}

void func_1231(bool bParam0)
{
	int iVar0;
	
	func_1219(33);
	func_1219(34);
	func_1219(35);
	func_1219(36);
	func_1219(37);
	func_1219(38);
	func_1219(39);
	func_1219(40);
	func_1219(43);
	func_1219(41);
	func_1219(54);
	func_1219(42);
	func_1219(47);
	func_1268(23);
	func_1268(24);
	func_1219(92);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 2);
	func_1267();
	func_1262();
	func_1257();
	func_1252();
	func_1241();
	func_1237();
	func_1233();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26B66F.f_1404.f_E[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1232(3))
	{
		func_1268(3);
	}
	else if (func_1232(4))
	{
		func_1268(4);
	}
	else if (func_1232(5))
	{
		func_1268(5);
	}
	else if (func_1232(6))
	{
		func_1268(6);
	}
	else if (func_1232(7))
	{
		func_1268(7);
	}
	else if (((((((((((((((((func_1232(0) || func_1232(1)) || func_1232(2)) || func_1232(8)) || func_1232(9)) || func_1232(10)) || func_1232(11)) || func_1232(12)) || func_1232(13)) || func_1232(14)) || func_1232(15)) || func_1232(16)) || func_1232(17)) || func_1232(18)) || func_1232(19)) || func_1232(20)) || func_1232(21)) || func_1232(22))
	{
		func_1268(8);
		func_1268(0);
		func_1268(1);
		func_1268(2);
		func_1268(9);
		func_1268(10);
		func_1268(11);
		func_1268(12);
		func_1268(13);
		func_1268(14);
		func_1268(15);
		func_1268(16);
		func_1268(17);
		func_1268(18);
		func_1268(19);
		func_1268(20);
		func_1268(21);
		func_1268(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26B66F.f_1404.f_E[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1232(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_E[iVar0], iVar1);
}

void func_1233()
{
	if (func_1235())
	{
		func_1234(0);
		func_1234(1);
		func_1234(2);
		func_1234(3);
	}
}

void func_1234(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_21[iVar0]), iVar1);
}

int func_1235()
{
	if (((func_1236(0) || func_1236(1)) || func_1236(2)) || func_1236(3))
	{
		return 1;
	}
	return 0;
}

bool func_1236(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_21[iVar0], iVar1);
}

void func_1237()
{
	if (func_1239())
	{
		func_1238(4);
		func_1238(5);
		func_1238(6);
		func_1238(7);
	}
}

void func_1238(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_1F[iVar0]), iVar1);
}

int func_1239()
{
	if (((func_1240(4) || func_1240(5)) || func_1240(6)) || func_1240(7))
	{
		return 1;
	}
	return 0;
}

bool func_1240(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_1F[iVar0], iVar1);
}

void func_1241()
{
	int iVar0;
	
	if (func_1251())
	{
		func_1250(8);
		func_1250(9);
		func_1250(10);
		func_1250(12);
		func_1250(13);
		func_1250(14);
		func_1250(19);
		func_1250(20);
		func_1250(21);
		func_1250(22);
		func_1250(23);
		func_1250(24);
		func_1250(25);
		func_1250(26);
		func_1250(15);
		func_1250(16);
		func_1250(17);
		func_1250(18);
		func_1250(35);
		func_1250(45);
		func_1250(46);
		if (func_1249(11))
		{
			func_1250(11);
			iVar0 = func_50(7226, 4294967295, 0);
			unk_0x5D96D8530B3D0904(&iVar0, 2);
			func_159(7226, iVar0, 4294967295, 1, 0);
		}
	}
	if (func_1249(48))
	{
		if (func_1247(151, 3))
		{
			func_1245(151, 3);
		}
		func_1250(48);
	}
	if (func_1249(49))
	{
		if (func_1247(152, 3))
		{
			func_1245(152, 3);
		}
		func_1250(49);
	}
	if (func_1249(50))
	{
		if (func_1247(153, 3))
		{
			func_1245(153, 3);
		}
		func_1250(50);
	}
	if (func_1249(51))
	{
		if (func_1247(func_1242(), 3))
		{
			func_1245(func_1242(), 3);
		}
		func_1250(51);
	}
}

int func_1242()
{
	if (func_1244())
	{
		func_1243(154, Global_4C1E, 1);
	}
	return 154;
}

void func_1243(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_18[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_18[iParam1] = iParam2;
	}
}

int func_1244()
{
	int iVar0;
	
	iVar0 = func_119(unk_0xD803B885F5E47A62());
	if (((iVar0 != unk_0xD803B885F5E47A62() && iVar0 != func_389()) && unk_0x40B8C182D63932FC(iVar0)) && iVar0 != 4294967295)
	{
		return 1;
	}
	return 0;
}

void func_1245(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_1246(iParam0, iVar0, 0);
			func_1243(iParam0, iVar0, 0);
		}
	}
}

void func_1246(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_C[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_C[iParam1] = iParam2;
	}
}

int func_1247(int iParam0, int iParam1)
{
	if (func_1248(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_1248(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

bool func_1249(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_1A[iVar0], iVar1);
}

void func_1250(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_1A[iVar0]), iVar1);
}

int func_1251()
{
	if (((((((((((((((((((((func_1249(8) || func_1249(9)) || func_1249(10)) || func_1249(12)) || func_1249(11)) || func_1249(13)) || func_1249(14)) || func_1249(19)) || func_1249(20)) || func_1249(21)) || func_1249(22)) || func_1249(23)) || func_1249(24)) || func_1249(25)) || func_1249(26)) || func_1249(15)) || func_1249(16)) || func_1249(17)) || func_1249(18)) || func_1249(35)) || func_1249(45)) || func_1249(46))
	{
		return 1;
	}
	return 0;
}

void func_1252()
{
	if (func_1256())
	{
		func_1255(0);
		func_1255(1);
		func_1255(2);
		func_1255(3);
		func_1255(4);
		func_1255(5);
		if (func_1254(32))
		{
			if (func_1247(func_1253(), 3))
			{
				func_1245(func_1253(), 3);
			}
			func_1255(32);
		}
	}
}

int func_1253()
{
	if (func_1244())
	{
		func_1243(12, Global_4C1E, 1);
	}
	return 12;
}

bool func_1254(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_17[iVar0], iVar1);
}

void func_1255(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_17[iVar0]), iVar1);
}

int func_1256()
{
	if ((((func_1254(1) || func_1254(0)) || func_1254(2)) || func_1254(4)) || func_1254(5))
	{
		return 1;
	}
	return 0;
}

void func_1257()
{
	if (func_1261())
	{
		func_1260(0);
		func_1260(1);
		func_1260(2);
		func_1260(3);
		func_1260(4);
		func_1260(5);
		func_1260(6);
		func_1260(7);
		if (func_1259(8))
		{
			func_1260(8);
		}
		if (func_1259(15))
		{
			if (func_1247(func_1258(), 3))
			{
				func_1245(func_1258(), 3);
			}
			func_1260(15);
		}
	}
}

int func_1258()
{
	if (func_1244())
	{
		func_1243(20, Global_4C1E, 1);
	}
	return 20;
}

bool func_1259(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_15[iVar0], iVar1);
}

void func_1260(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_15[iVar0]), iVar1);
}

int func_1261()
{
	if ((((((((func_1259(0) || func_1259(1)) || func_1259(2)) || func_1259(3)) || func_1259(4)) || func_1259(5)) || func_1259(6)) || func_1259(7)) || func_1259(8))
	{
		return 1;
	}
	return 0;
}

void func_1262()
{
	if (func_1266())
	{
		func_1265(0);
		func_1265(1);
		func_1265(2);
		func_1265(3);
		func_1265(4);
		func_1265(5);
		func_1265(6);
		func_1265(7);
		func_1265(8);
		func_1265(9);
		func_1265(10);
		func_1265(11);
		func_1265(12);
		if (func_1264(13))
		{
			if (func_1247(func_1263(), 3))
			{
				func_1245(func_1263(), 3);
			}
			func_1265(13);
		}
	}
}

int func_1263()
{
	if (func_1244())
	{
		func_1243(76, Global_4C1E, 1);
	}
	return 76;
}

bool func_1264(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_13[iVar0], iVar1);
}

void func_1265(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_13[iVar0]), iVar1);
}

int func_1266()
{
	if ((((((((((((func_1264(0) || func_1264(1)) || func_1264(2)) || func_1264(3)) || func_1264(4)) || func_1264(5)) || func_1264(6)) || func_1264(7)) || func_1264(8)) || func_1264(9)) || func_1264(10)) || func_1264(11)) || func_1264(12))
	{
		return 1;
	}
	return 0;
}

void func_1267()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_26B66F.f_1404.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_1268(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_E[iVar0]), iVar1);
}

void func_1269()
{
	struct<14> Var0;
	
	Global_198C74 = { Var0 };
	Global_198C74.f_E = 0;
	Global_198C74.f_F = 0;
}

int func_1270(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1161();
			}
			else
			{
				return 0;
			}
		}
		if (!func_745())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_1161();
					}
					else
					{
						return 0;
					}
				}
				if (func_1155())
				{
					if (!bParam2)
					{
						func_1161();
					}
					else
					{
						return 0;
					}
				}
				if (func_1153(157))
				{
					if (!bParam2)
					{
						func_1161();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_1161();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > 4294967295)
	{
		Global_1406F5 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_1161();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_1161();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1271(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_1161();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_10);
}

int func_1272(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

void func_1273()
{
	struct<42> Var0;
	int iVar1;
	
	Var0 = 4294967295;
	Var0.f_16 = 3212836864;
	Var0.f_17 = 3;
	Var0.f_27 = 4294967295;
	Var0.f_29 = 4294967295;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Global_14E2D0[iVar1 /*42*/] = { Var0 };
		iVar1++;
	}
}

int func_1274(int iParam0, bool bParam1, bool bParam2)
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

