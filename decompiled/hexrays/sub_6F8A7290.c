double __cdecl sub_6F8A7290(double a1, double a2)
{
  double v2; // st7@1
  __int16 v4; // fps@1
  __int16 v6; // dx@1
  __int16 v7; // fps@1
  int v9; // eax@1
  bool v10; // cl@2
  int v11; // edx@5
  __int16 v14; // fps@10
  __int16 v16; // fps@12
  double result; // st7@14
  __int16 v19; // fps@15
  double v21; // st5@16
  double v22; // st6@16
  __int16 v23; // fps@19
  bool v25; // cf@27
  __int16 v26; // fps@27
  __int16 v31; // fps@32
  double v33; // st6@33
  double v34; // st7@33
  double v35; // st7@36
  __int16 v38; // fps@36
  double v41; // st4@37
  double v42; // st6@37
  double v43; // st7@37
  __int16 v44; // fps@38
  __int16 v46; // fps@39
  char v48; // al@40
  __int16 v49; // fps@43
  __int16 v51; // fps@44
  char v53; // al@45
  __int16 v54; // fps@48
  char v56; // ah@48
  __int16 v57; // fps@48
  __int16 v61; // fps@49
  char v63; // ah@49
  char v64; // al@50
  bool v65; // zf@54
  __int16 v66; // fps@54
  __int16 v71; // fps@61
  __int16 v75; // fps@62
  __int16 v77; // fps@63
  double v81; // st6@66
  double v82; // st7@66
  double v83; // ST34_8@69
  double v84; // st7@69
  __int16 v87; // fps@69
  double v90; // st4@70
  __int16 v91; // fps@70
  double v92; // st6@70
  __int16 v96; // fps@72
  _TBYTE v100; // ST0C_10@79
  __int16 v101; // fps@79
  double v103; // st7@80
  __int16 v106; // fps@80
  double v108; // st5@81
  __int16 v111; // fps@86
  __int16 v113; // fps@87
  __int16 v117; // fps@92
  __int16 v122; // fps@98
  bool v127; // dl@99
  __int16 v128; // ax@102
  unsigned int v129; // eax@105
  long double v130; // st5@105
  long double v131; // st6@106
  long double v132; // st5@108
  long double v133; // rtt@110
  long double v134; // st5@110
  long double v135; // st6@110
  unsigned int v136; // eax@110
  __int16 v137; // fps@114
  long double v138; // rt0@114
  long double v143; // rt1@115
  __int16 v144; // fps@120
  __int16 v148; // fps@125
  double v149; // st6@126
  _TBYTE v150; // [sp+Ch] [bp-5Ch]@0
  double v151; // [sp+34h] [bp-34h]@36
  double v152; // [sp+34h] [bp-34h]@80
  double v153; // [sp+3Ch] [bp-2Ch]@36
  double v154; // [sp+3Ch] [bp-2Ch]@69
  signed int v155; // [sp+74h] [bp+Ch]@78

  v2 = a1;
  _ST6 = a2;
  _ST5 = a1;
  __asm { fxam }
  v6 = v4;
  _ST5 = a2;
  __asm { fxam }
  v9 = v7 & 0x4500;
  if ( v9 == 0x4000 )
    return 1.0;
  v10 = 1;
  if ( 1.0 != a1 )
    v10 = v9 == 0x4000;
  if ( v10 )
    return 1.0;
  v11 = v6 & 0x4500;
  if ( v11 == 256 || v9 == 256 )
  {
    _ST5 = a1;
    __asm { fxam }
    if ( HIBYTE(v19) & 2 )
    {
      v21 = a2;
      v22 = -5.1042355e38/*NaN*/;
    }
    else
    {
      v21 = a2;
      v22 = 5.1042355e38/*NaN*/;
    }
    *errno() = 33;
    sub_6F8B6F30(1, (int)&unk_6FBA6908, a1, v21, v22);
    return v22;
  }
  if ( v11 == 0x4000 )
  {
    if ( v9 != 1280 )
    {
      _ST5 = a1;
      __asm { fxam }
      if ( HIBYTE(v71) & 2 )
      {
        _ST5 = a2;
        __asm { frndint }
        _ST4 = a2;
        __asm { fxam }
        if ( (v75 & 0x4500) == 1280 )
        {
          v81 = a1;
          v82 = a2;
        }
        else
        {
          if ( a2 - _ST5 != 0.0 )
          {
            __asm { fxam }
            if ( !(HIBYTE(v77) & 2) )
              return 0.0;
            return -1.0 / a1;
          }
          v81 = a1;
          v82 = a2;
        }
      }
      else
      {
        v81 = a1;
        v82 = a2;
      }
      v154 = v81;
      v83 = v82;
      v84 = sub_6F8ADB50(v82);
      _ST6 = v84;
      __asm { frndint }
      _ST5 = v84;
      __asm { fxam }
      _ST5 = v83;
      if ( (v87 & 0x4500) == 1280 )
      {
        v92 = 0.0;
        _ST7 = v154;
      }
      else
      {
        v90 = v84;
        _ST7 = v154;
        v92 = v90 - _ST6;
      }
      __asm { fxam }
      if ( !(HIBYTE(v91) & 2) )
      {
        v65 = v92 == 0.0;
        goto LABEL_55;
      }
      if ( v92 == 0.0 )
        return 3.4028237e38/*+Inf*/;
      __asm { fxam }
      if ( !(HIBYTE(v96) & 2) )
        return 3.4028237e38/*+Inf*/;
      __asm { fxam }
      if ( !(HIBYTE(v96) & 2) )
        return 3.4028237e38/*+Inf*/;
      return -3.4028237e38/*-Inf*/;
    }
    _ST7 = a2;
    goto LABEL_58;
  }
  if ( v9 == 1280 )
  {
    if ( v11 == 1280 )
    {
      _ST7 = a2;
      goto LABEL_30;
    }
    _ST5 = a1;
    __asm { fxam }
    if ( HIBYTE(v23) & 2 )
    {
      if ( a1 == -1.0 )
        return 1.0;
      _ST6 = a2;
      v2 = -a1;
    }
    v25 = v2 < 1.0;
    v65 = v2 == 1.0;
    _ST7 = _ST6;
    if ( !v25 && !v65 )
    {
LABEL_30:
      __asm { fxam }
      if ( HIBYTE(v26) & 2 )
        return 0.0;
      return 3.4028237e38/*+Inf*/;
    }
LABEL_58:
    __asm { fxam }
    if ( !(HIBYTE(v26) & 2) )
      return 0.0;
    return 3.4028237e38/*+Inf*/;
  }
  if ( v11 == 1280 )
  {
    _ST5 = a1;
    __asm { fxam }
    if ( !(HIBYTE(v31) & 2) )
    {
      v33 = a1;
      v34 = a2;
      goto LABEL_36;
    }
    _ST5 = a2;
    __asm { frndint }
    _ST4 = a2;
    __asm { fxam }
    if ( (v111 & 0x4500) == 1280 )
    {
      v33 = a1;
      v34 = a2;
    }
    else
    {
      if ( a2 - _ST5 != 0.0 )
      {
        __asm { fxam }
        if ( !(HIBYTE(v113) & 2) )
          return -a1;
        return -1.0 / a1;
      }
      v33 = a1;
      v34 = a2;
    }
LABEL_36:
    v153 = v33;
    v151 = v34;
    v35 = sub_6F8ADB50(v34);
    _ST6 = v35;
    __asm { frndint }
    _ST5 = v35;
    __asm { fxam }
    _ST5 = v151;
    if ( (v38 & 0x4500) == 1280 )
    {
      v42 = v153;
      v43 = 0.0;
    }
    else
    {
      v41 = _ST6;
      v42 = v153;
      v43 = v35 - v41;
    }
    _ST4 = v42;
    __asm { fxam }
    if ( HIBYTE(v44) & 2 )
    {
      _ST4 = v151;
      __asm { fxam }
      if ( HIBYTE(v46) & 2 )
      {
        v48 = 1;
        if ( 0.0 != v43 )
          v48 = 0;
        if ( v48 )
          return 0.0;
      }
    }
    _ST4 = v42;
    __asm { fxam }
    if ( !(HIBYTE(v49) & 2) )
      goto LABEL_150;
    _ST4 = v151;
    __asm { fxam }
    if ( HIBYTE(v51) & 2 )
      goto LABEL_150;
    v53 = 0;
    if ( 0.0 != v43 )
      v53 = 1;
    if ( !v53 )
    {
LABEL_150:
      _ST4 = v42;
      __asm { fxam }
      v56 = HIBYTE(v54);
      if ( v56 & 2 )
      {
        _ST4 = v151;
        __asm { fxam }
        v63 = HIBYTE(v61);
        if ( !(v63 & 2) )
        {
          v64 = 1;
          if ( 0.0 != v43 )
            v64 = 0;
          if ( v64 )
            return 3.4028237e38/*+Inf*/;
        }
      }
      __asm { fxam }
      if ( HIBYTE(v57) & 2 )
      {
        v65 = v43 == 0.0;
        _ST7 = v42;
LABEL_55:
        if ( !v65 )
        {
          __asm { fxam }
          if ( HIBYTE(v66) & 2 )
            return -0.0;
        }
        return 0.0;
      }
      v65 = v43 == 0.0;
      _ST7 = v42;
      if ( v65 )
        return 3.4028237e38/*+Inf*/;
      __asm { fxam }
      if ( !(HIBYTE(v117) & 2) )
        return 3.4028237e38/*+Inf*/;
    }
    return -3.4028237e38/*-Inf*/;
  }
  _ST5 = a2;
  __asm { frndint }
  _ST4 = a2;
  __asm { fxam }
  if ( (v14 & 0x4500) != 1280 && a2 - _ST5 != 0.0 )
  {
    _ST5 = a1;
    __asm { fxam }
    if ( HIBYTE(v16) & 2 )
    {
      *errno() = 33;
      sub_6F8B6F30(1, (int)&unk_6FBA6908, a1, a2, -5.1042355e38/*NaN*/);
      return -5.1042355e38/*NaN*/;
    }
    if ( a2 == 0.5 )
      return sqrt(a1);
    goto LABEL_79;
  }
  if ( _ST5 > 2147483647.0 || _ST5 < -2147483600.0 )
  {
LABEL_79:
    *(double *)&v150 = fabs(a1);
    *(double *)&v100 = sub_6F8ADBE0(v150) * a2;
    result = sub_6F8ADB00(v100);
    _ST6 = a1;
    __asm { fxam }
    if ( HIBYTE(v101) & 2 )
    {
      v152 = result;
      v103 = sub_6F8ADB50(a2);
      _ST6 = v103;
      __asm { frndint }
      _ST5 = v103;
      __asm { fxam }
      if ( (v106 & 0x4500) == 1280 )
      {
        result = v152;
      }
      else
      {
        v108 = v103;
        result = v152;
        if ( v108 - _ST6 != 0.0 )
          result = -v152;
      }
    }
    return result;
  }
  v155 = (signed int)a2;
  _ST7 = a1;
  __asm { fxam }
  if ( !v155 )
    return 1.0;
  v127 = 1;
  if ( 1.0 != a1 )
    v127 = v155 == 0;
  if ( v127 )
    return 1.0;
  v128 = v122 & 0x4500;
  if ( (v122 & 0x4500) == 256 )
  {
    __asm { fxam }
    if ( HIBYTE(v148) & 2 )
    {
      v149 = a1;
      result = -5.1042355e38/*NaN*/;
    }
    else
    {
      v149 = a1;
      result = 5.1042355e38/*NaN*/;
    }
    *errno() = 33;
    sub_6F8B6F30(1, (int)"__powi", v149, (double)v155, result);
    return result;
  }
  if ( v128 == 0x4000 )
  {
    if ( v155 < 0 )
    {
      if ( !(v155 & 1) )
        return 3.4028237e38/*+Inf*/;
      __asm { fxam }
      if ( !(HIBYTE(v144) & 2) )
        return 3.4028237e38/*+Inf*/;
LABEL_145:
      __asm { fxam }
      if ( HIBYTE(v144) & 2 )
        return -3.4028237e38/*-Inf*/;
      return 3.4028237e38/*+Inf*/;
    }
LABEL_121:
    if ( v155 & 1 )
    {
      __asm { fxam }
      result = 0.0;
      if ( !(HIBYTE(v144) & 2) )
        return result;
      goto LABEL_123;
    }
    return 0.0;
  }
  if ( v128 == 1280 )
  {
    __asm { fxam }
    if ( HIBYTE(v144) & 2 && v155 < 0 && !(v155 & 1) )
      return 0.0;
    __asm { fxam }
    if ( HIBYTE(v144) & 2 && v155 >= 0 && v155 & 1 )
      return -3.4028237e38/*-Inf*/;
    __asm { fxam }
    if ( HIBYTE(v144) & 2 && ~v155 < 0 && ~(_BYTE)v155 & 1 )
      return 3.4028237e38/*+Inf*/;
    if ( v155 >= 0 )
    {
      if ( !(v155 & 1) )
        return 3.4028237e38/*+Inf*/;
      goto LABEL_145;
    }
    goto LABEL_121;
  }
  v129 = v155;
  v130 = fabs(a1);
  if ( v155 < 0 )
  {
    v131 = 1.0 / v130;
    v129 = -v155;
  }
  else
  {
    v131 = v130;
  }
  if ( v129 == 1 )
  {
    v143 = v131;
    _ST6 = a1;
    result = v143;
  }
  else
  {
    v132 = v131;
    if ( !(v129 & 1) )
      v132 = 1.0;
    v133 = v132;
    v134 = v131;
    v135 = v133;
    v136 = v129 >> 1;
    do
    {
      v134 = v134 * v134;
      if ( v136 & 1 )
        v135 = v135 * v134;
      v136 >>= 1;
    }
    while ( v136 );
    v138 = v135;
    _ST6 = a1;
    result = v138;
  }
  __asm { fxam }
  if ( HIBYTE(v137) & 2 && v155 & 1 )
LABEL_123:
    result = -result;
  return result;
}
