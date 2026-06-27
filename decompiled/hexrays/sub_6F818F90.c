__int16 __cdecl sub_6F818F90(int a1)
{
  int v2; // ebx@1
  unsigned int v3; // et0@1
  unsigned int v4; // ST04_4@1
  unsigned int v5; // et0@1
  unsigned int v6; // eax@1
  unsigned int v7; // et0@1
  int v13; // esi@2
  int v14; // et1@2
  int v20; // ebx@17
  int v21; // edi@17
  int v28; // esi@19
  int v33; // ebp@20
  int v34; // eax@20
  int v35; // ebp@20
  int v36; // edx@24
  int v37; // edi@30
  int v43; // esi@34
  int v44; // esi@34
  int v45; // edx@40
  int v50; // esi@45
  int v51; // ebp@45
  int v52; // esi@45
  int v53; // edx@49
  int v54; // edi@49
  int v55; // edx@51
  int v56; // ebp@53
  int v61; // edi@56
  int v62; // edi@57
  int v63; // edi@57
  int v64; // edx@61
  int v65; // ebp@66
  int v66; // eax@66
  int v67; // ebp@66
  int v68; // edx@70

  v2 = a1;
  v3 = __readeflags();
  v4 = v3;
  v5 = __readeflags();
  v6 = v5;
  __writeeflags(v5 ^ 0x200000);
  v7 = __readeflags();
  __writeeflags(v4);
  if ( v7 == v6 )
    goto LABEL_11;
  _EAX = 0;
  __asm { cpuid }
  v14 = _EBX;
  v2 = a1;
  v13 = v14;
  if ( _EDX != 1231384169 || _ECX != 1818588270 )
  {
    if ( _EDX != 1415933545 || _ECX != 909670477 || v13 != 1970169159 )
      goto LABEL_5;
LABEL_33:
    _EAX = 1;
    __asm { cpuid }
    v2 = a1;
    if ( _EDX & 0x800000 )
    {
      v43 = (_EDX & 0x2000000u) < 1 ? 0xFFFFFFE8 : 0;
      v37 = v43 + 57;
      v44 = v43 + 25;
      if ( !(_EDX & 0x4000000) )
        v37 = v44;
      if ( _ECX & 1 )
        v37 |= 0x40u;
      _EAX = v37;
      LOBYTE(_EAX) = v37 | 0x80;
      if ( BYTE1(_ECX) & 1 )
        v37 = _EAX;
      v45 = v37;
      BYTE1(v45) |= 1u;
      if ( _ECX & 0x80000 )
        v37 = v45;
      if ( _ECX & 0x100000 )
        v37 |= 0x200u;
      goto LABEL_31;
    }
LABEL_11:
    *(_DWORD *)(v2 + 104) = 0;
    goto LABEL_12;
  }
  if ( v13 == 1970169159 )
    goto LABEL_33;
LABEL_5:
  if ( _ECX == 1145913699 && _EDX == 1769238117 && v13 == 1752462657
    || _ECX == 1129532960 && _EDX == 2036473957 && v13 == 1685022023 )
  {
    _EAX = 2147483648;
    __asm { cpuid }
    v20 = a1;
    v21 = 0;
    if ( _EAX > 0x80000000 )
    {
      _EAX = -2147483647;
      __asm { cpuid }
      v20 = a1;
      if ( _EDX & 0x800000 )
      {
        v65 = (_EDX & 0x400000u) < 1 ? 0xFFFFFFF8 : 0;
        v66 = v65 + 11;
        v67 = v65 + 9;
        if ( _EDX >= 0 )
          v66 = v67;
        if ( _EDX & 0x40000000 )
          v66 |= 4u;
        v68 = v66;
        BYTE1(v68) |= 4u;
        if ( _ECX & 0x40 )
          v66 = v68;
        v21 = v66 | 0x800;
        if ( !(BYTE1(_ECX) & 8) )
          v21 = v66;
      }
    }
    _EAX = 1;
    v28 = v20;
    __asm { cpuid }
    v2 = v28;
    _EAX = _EDX & 0x800000;
    if ( _EDX & 0x800000 )
    {
      v33 = (_EDX & 0x2000000u) < 1 ? 0xFFFFFFE8 : 0;
      v34 = v33 + 57;
      v35 = v33 + 25;
      if ( _EDX & 0x4000000 )
        v35 = v34;
      if ( _ECX & 1 )
        v35 |= 0x40u;
      v36 = v35;
      LOBYTE(v36) = v35 | 0x80;
      if ( !(BYTE1(_ECX) & 1) )
        v36 = v35;
      _EAX = v36;
      BYTE1(_EAX) |= 1u;
      if ( !(_ECX & 0x80000) )
        _EAX = v36;
      if ( _ECX & 0x100000 )
        BYTE1(_EAX) |= 2u;
    }
    v37 = _EAX | v21;
    goto LABEL_31;
  }
  if ( _ECX != 1936487777 || _EDX != 1215460705 || v13 != 1953391939 )
    goto LABEL_11;
  _EAX = 1;
  __asm { cpuid }
  v2 = a1;
  if ( !(_EDX & 0x800000) )
  {
    if ( _EAX > 0x80000000 )
    {
      v56 = 0;
LABEL_56:
      _EAX = -2147483647;
      __asm { cpuid }
      v2 = a1;
      v61 = _EDX & 0x800000;
      if ( _EDX & 0x800000 )
      {
        v62 = (_EDX & 0x400000u) < 1 ? 0xFFFFFFF8 : 0;
        _EAX = v62 + 11;
        v63 = v62 + 9;
        if ( _EDX >= 0 )
          _EAX = v63;
        v61 = _EAX | 4;
        if ( !(_EDX & 0x40000000) )
          v61 = _EAX;
        v64 = v61;
        BYTE1(v64) |= 4u;
        if ( _ECX & 0x40 )
          v61 = v64;
        if ( BYTE1(_ECX) & 8 )
          v61 |= 0x800u;
      }
      v37 = v56 | v61;
      goto LABEL_31;
    }
    goto LABEL_11;
  }
  v50 = (_EDX & 0x2000000u) < 1 ? 0xFFFFFFE8 : 0;
  v51 = v50 + 57;
  v52 = v50 + 25;
  if ( _EDX & 0x4000000 )
    v52 = v51;
  if ( _ECX & 1 )
    v52 |= 0x40u;
  v53 = v52;
  v54 = v52;
  if ( BYTE1(_ECX) & 1 )
  {
    LOBYTE(v53) = v52 | 0x80;
    v54 = v53;
  }
  v55 = v54;
  BYTE1(v55) |= 1u;
  if ( !(_ECX & 0x80000) )
    v55 = v54;
  v56 = v55 | 0x200;
  if ( !(_ECX & 0x100000) )
    v56 = v55;
  v37 = v56;
  if ( _EAX > 0x80000000 )
    goto LABEL_56;
LABEL_31:
  *(_DWORD *)(v2 + 104) = v37;
  if ( v37 & 1 )
  {
    *(_DWORD *)(v2 + 64) = sub_6F818B40;
    *(_DWORD *)(v2 + 68) = sub_6F818BA0;
    *(_DWORD *)(v2 + 72) = sub_6F818C70;
    *(_DWORD *)(v2 + 76) = sub_6F818D80;
    *(_DWORD *)(v2 + 80) = sub_6F82E000;
    *(_DWORD *)(v2 + 84) = sub_6F82E9A0;
    *(_DWORD *)(v2 + 88) = sub_6F82EB40;
    *(_DWORD *)(v2 + 92) = sub_6F82F140;
    *(_DWORD *)(v2 + 96) = sub_6F818F80;
    *(_DWORD *)(v2 + 100) = &unk_6FB8EB00;
    return _EAX;
  }
LABEL_12:
  LOWORD(_EAX) = v2;
  *(_DWORD *)(v2 + 64) = sub_6F814A20;
  *(_DWORD *)(v2 + 68) = sub_6F814AD0;
  *(_DWORD *)(v2 + 72) = sub_6F814C30;
  *(_DWORD *)(v2 + 76) = sub_6F814DF0;
  *(_DWORD *)(v2 + 80) = sub_6F82D9E0;
  *(_DWORD *)(v2 + 84) = sub_6F815CB0;
  *(_DWORD *)(v2 + 88) = sub_6F815AA0;
  *(_DWORD *)(v2 + 92) = sub_6F815FF0;
  *(_DWORD *)(v2 + 96) = nullsub_13;
  *(_DWORD *)(v2 + 100) = byte_6FB8E900;
  return _EAX;
}
