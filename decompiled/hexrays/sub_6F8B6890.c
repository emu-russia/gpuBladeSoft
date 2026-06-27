signed int __cdecl sub_6F8B6890(int *a1)
{
  signed int result; // eax@1
  int v2; // esi@2
  volatile signed __int32 *v3; // edi@2
  signed int v4; // eax@2
  int v5; // edx@5
  signed int v6; // ebp@7

  result = sub_6F8B6750(a1);
  if ( !result )
  {
    v2 = *a1;
    v3 = (volatile signed __int32 *)(*a1 + 20);
    v4 = sub_6F8B2F50(v3);
    if ( !v4 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v2 + 12), 1u);
      if ( *(_DWORD *)(v2 + 12) == 0x7FFFFFFF )
      {
        v6 = sub_6F8B2F50((volatile signed __int32 *)(v2 + 24));
        if ( v6 )
        {
          sub_6F8B3270(v3);
          v5 = v6;
          goto LABEL_6;
        }
        *(_DWORD *)(v2 + 12) -= *(_DWORD *)(v2 + 16);
        *(_DWORD *)(v2 + 16) = 0;
        v4 = sub_6F8B6400(v2, 0);
      }
      else
      {
        v4 = sub_6F8B3270(v3);
      }
    }
    v5 = v4;
LABEL_6:
    result = sub_6F8B6470((int)a1, v5);
  }
  return result;
}
