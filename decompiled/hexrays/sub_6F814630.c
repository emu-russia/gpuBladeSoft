int __cdecl sub_6F814630(int a1)
{
  int v1; // ebx@1
  unsigned int v2; // et0@1
  unsigned int v3; // ST04_4@1
  unsigned int v4; // et0@1
  unsigned int v5; // eax@1
  unsigned int v6; // et0@1
  int v12; // esi@2
  int v13; // et1@2
  int result; // eax@11
  int v20; // ebx@16
  char v21; // di@16
  int v28; // esi@18
  char v33; // al@18
  int v34; // ebp@19
  char v35; // al@19
  char v36; // bp@19
  char v37; // dl@23
  char v38; // di@27
  int v44; // esi@34
  char v45; // si@34
  int v51; // esi@42
  char v52; // bp@42
  char v53; // si@42
  char v54; // di@46
  char v55; // dl@48
  char v56; // bp@50
  char v62; // di@53
  int v63; // edi@54
  char v64; // al@54
  char v65; // di@54
  int v66; // ebp@59
  char v67; // al@59
  char v68; // bp@59

  v1 = a1;
  v2 = __readeflags();
  v3 = v2;
  v4 = __readeflags();
  v5 = v4;
  __writeeflags(v4 ^ 0x200000);
  v6 = __readeflags();
  __writeeflags(v3);
  if ( v6 == v5 )
    return sub_6F805C40(v1);
  _EAX = 0;
  __asm { cpuid }
  v13 = _EBX;
  v1 = a1;
  v12 = v13;
  if ( _EDX != 1231384169 || _ECX != 1818588270 )
  {
    if ( _EDX != 1415933545 || _ECX != 909670477 || v12 != 1970169159 )
      goto LABEL_5;
LABEL_33:
    _EAX = 1;
    __asm { cpuid }
    v1 = a1;
    if ( _EDX & 0x800000 )
    {
      v44 = (_EDX & 0x2000000u) < 1 ? 0xFFFFFFE8 : 0;
      v38 = v44 + 57;
      v45 = v44 + 25;
      if ( !(_EDX & 0x4000000) )
        v38 = v45;
      if ( _ECX & 1 )
        v38 |= 0x40u;
      if ( BYTE1(_ECX) & 1 )
        v38 |= 0x80u;
      goto LABEL_28;
    }
    return sub_6F805C40(v1);
  }
  if ( v12 == 1970169159 )
    goto LABEL_33;
LABEL_5:
  if ( _ECX == 1145913699 && _EDX == 1769238117 && v12 == 1752462657
    || _ECX == 1129532960 && _EDX == 2036473957 && v12 == 1685022023 )
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
        v66 = (_EDX & 0x400000u) < 1 ? 0xFFFFFFF8 : 0;
        v67 = v66 + 11;
        v68 = v66 + 9;
        if ( _EDX >= 0 )
          v67 = v68;
        if ( _EDX & 0x40000000 )
          v67 |= 4u;
        v21 = v67;
        if ( !(BYTE1(_ECX) & 8) )
          v21 = v67;
      }
    }
    _EAX = 1;
    v28 = v20;
    __asm { cpuid }
    v1 = v28;
    v33 = 0;
    if ( _EDX & 0x800000 )
    {
      v34 = (_EDX & 0x2000000u) < 1 ? 0xFFFFFFE8 : 0;
      v35 = v34 + 57;
      v36 = v34 + 25;
      if ( _EDX & 0x4000000 )
        v36 = v35;
      if ( _ECX & 1 )
        v36 |= 0x40u;
      v37 = v36 | 0x80;
      if ( !(BYTE1(_ECX) & 1) )
        v37 = v36;
      v33 = v37;
      if ( !(_ECX & 0x80000) )
        v33 = v37;
    }
    v38 = v33 | v21;
    goto LABEL_28;
  }
  if ( _ECX != 1936487777 || _EDX != 1215460705 || v12 != 1953391939 )
    return sub_6F805C40(v1);
  _EAX = 1;
  __asm { cpuid }
  v1 = a1;
  if ( _EDX & 0x800000 )
  {
    v51 = (_EDX & 0x2000000u) < 1 ? 0xFFFFFFE8 : 0;
    v52 = v51 + 57;
    v53 = v51 + 25;
    if ( _EDX & 0x4000000 )
      v53 = v52;
    if ( _ECX & 1 )
      v53 |= 0x40u;
    v54 = v53;
    if ( BYTE1(_ECX) & 1 )
      v54 = v53 | 0x80;
    v55 = v54;
    if ( !(_ECX & 0x80000) )
      v55 = v54;
    v56 = v55;
    if ( !(_ECX & 0x100000) )
      v56 = v55;
    v38 = v56;
    if ( _EAX <= 0x80000000 )
      goto LABEL_28;
    goto LABEL_53;
  }
  if ( _EAX <= 0x80000000 )
    return sub_6F805C40(v1);
  v56 = 0;
LABEL_53:
  _EAX = -2147483647;
  __asm { cpuid }
  v1 = a1;
  v62 = 0;
  if ( _EDX & 0x800000 )
  {
    v63 = (_EDX & 0x400000u) < 1 ? 0xFFFFFFF8 : 0;
    v64 = v63 + 11;
    v65 = v63 + 9;
    if ( _EDX >= 0 )
      v64 = v65;
    v62 = v64 | 4;
    if ( !(_EDX & 0x40000000) )
      v62 = v64;
  }
  v38 = v56 | v62;
LABEL_28:
  result = sub_6F805C40(v1);
  if ( v38 & 1 )
  {
    *(_DWORD *)(v1 + 175304) = sub_6F82C140;
    *(_DWORD *)(v1 + 175308) = sub_6F82C2B0;
    *(_DWORD *)(v1 + 175316) = sub_6F818BA0;
    *(_DWORD *)(v1 + 175320) = sub_6F818C70;
    *(_DWORD *)(v1 + 175324) = sub_6F82C4C0;
  }
  if ( v38 & 8 )
  {
    *(_DWORD *)(v1 + 175280) = sub_6F82B960;
    *(_DWORD *)(v1 + 175284) = sub_6F82B9F0;
    *(_DWORD *)(v1 + 175288) = sub_6F82BA80;
    *(_DWORD *)(v1 + 175292) = sub_6F82BBD0;
    *(_DWORD *)(v1 + 175296) = sub_6F82BBF0;
    *(_DWORD *)(v1 + 175300) = sub_6F82BD20;
    *(_DWORD *)(v1 + 175312) = sub_6F82C3B0;
  }
  return result;
}
