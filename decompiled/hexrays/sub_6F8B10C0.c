int *__cdecl sub_6F8B10C0(double a1, int a2, int a3)
{
  int *result; // eax@1
  int v6; // edx@2
  unsigned int v8; // esi@5
  int v9; // ebx@7
  double v11; // [sp+18h] [bp-24h]@1

  v11 = a1;
  result = sub_6F8B0700(1);
  if ( result )
  {
    _ESI = LODWORD(v11);
    _EBX = HIDWORD(v11) & 0xFFFFF;
    v6 = (HIDWORD(v11) >> 20) & 0x7FF;
    if ( v6 )
      _EBX = HIDWORD(v11) & 0xFFFFF | 0x100000;
    if ( LODWORD(v11) )
    {
      __asm { tzcnt   edi, esi }
      v8 = LODWORD(v11) >> _EDI;
      if ( _EDI )
      {
        v8 |= _EBX << (32 - _EDI);
        _EBX >>= _EDI;
      }
      result[6] = _EBX;
      result[5] = v8;
      v9 = (_EBX != 0) + 1;
      result[4] = v9;
      if ( !v6 )
        goto LABEL_8;
    }
    else
    {
      result[4] = 1;
      __asm { tzcnt   ecx, ebx }
      _EDI = _ECX + 32;
      result[5] = _EBX >> _ECX;
      v9 = 1;
      if ( !v6 )
      {
LABEL_8:
        _BitScanReverse((unsigned int *)&v6, result[v9 + 4]);
        *(_DWORD *)a2 = _EDI - 1074;
        *(_DWORD *)a3 = 32 * v9 - (v6 ^ 0x1F);
        return result;
      }
    }
    *(_DWORD *)a2 = v6 + _EDI - 1075;
    *(_DWORD *)a3 = 53 - _EDI;
  }
  return result;
}
