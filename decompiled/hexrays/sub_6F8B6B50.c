signed int __cdecl sub_6F8B6B50(int *a1)
{
  signed int result; // eax@1
  int v2; // esi@2
  int v3; // edx@3
  signed int v4; // ST1C_4@9
  signed int v5; // eax@9

  result = sub_6F8B6350(a1);
  if ( !result )
  {
    v2 = *a1;
    if ( *(_DWORD *)(*a1 + 8) )
    {
      _InterlockedSub((volatile signed __int32 *)(v2 + 8), 1u);
      v3 = sub_6F8B6400(v2, 0);
    }
    else
    {
      v3 = sub_6F8B2F50((volatile signed __int32 *)(v2 + 24));
      if ( !v3 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v2 + 16), 1u);
        if ( *(_DWORD *)(v2 + 16) )
        {
          v3 = sub_6F8B3270((volatile signed __int32 *)(v2 + 24));
        }
        else
        {
          v4 = sub_6F8B26D0((int *)(v2 + 28));
          v5 = sub_6F8B3270((volatile signed __int32 *)(v2 + 24));
          v3 = v4;
          if ( !v4 )
            v3 = v5;
        }
      }
    }
    result = sub_6F8B6470((int)a1, v3);
  }
  return result;
}
