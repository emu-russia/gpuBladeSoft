_BYTE *__cdecl sub_6F853077(int a1, _BYTE *a2)
{
  _BYTE *result; // eax@1
  _BYTE *v3; // [sp+4h] [bp-Ch]@2
  _BYTE *v4; // [sp+8h] [bp-8h]@3
  _BYTE *i; // [sp+Ch] [bp-4h]@9

  result = (_BYTE *)*(_BYTE *)(a1 + 9);
  if ( (unsigned __int8)result <= 7u )
  {
    v3 = &a2[*(_DWORD *)(a1 + 4)];
    if ( *(_BYTE *)(a1 + 9) == 1 )
    {
      v4 = &unk_6FB9B580;
    }
    else if ( *(_BYTE *)(a1 + 9) == 2 )
    {
      v4 = &unk_6FB9B680;
    }
    else
    {
      result = (_BYTE *)*(_BYTE *)(a1 + 9);
      if ( (_BYTE)result != 4 )
        return result;
      v4 = &unk_6FB9B780;
    }
    for ( i = a2; ; ++i )
    {
      result = i;
      if ( i >= v3 )
        break;
      *i = v4[*i];
    }
  }
  return result;
}
