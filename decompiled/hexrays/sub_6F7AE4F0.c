int __usercall sub_6F7AE4F0@<eax>(int result@<eax>, unsigned __int16 a2@<dx>, int a3@<ecx>, int a4, __int16 a5)
{
  int v5; // edi@2
  _BYTE *v6; // ebx@4

  if ( *(_WORD *)(result + 298) && (v5 = 8 * a2, *(_DWORD *)(v5 + *(_DWORD *)(result + 124)) += a3, (_BYTE)a5) )
  {
    *(_BYTE *)(a2 + *(_DWORD *)(result + 132)) |= 8u;
    if ( *(_WORD *)(result + 300) )
    {
      v6 = (_BYTE *)(*(_DWORD *)(result + 132) + a2);
      *(_DWORD *)(*(_DWORD *)(result + 124) + v5 + 4) += a4;
      *v6 |= 0x10u;
    }
  }
  else if ( *(_WORD *)(result + 300) )
  {
    *(_DWORD *)(*(_DWORD *)(result + 124) + 8 * a2 + 4) += a4;
    if ( (_BYTE)a5 )
      *(_BYTE *)(*(_DWORD *)(result + 132) + a2) |= 0x10u;
  }
  return result;
}
