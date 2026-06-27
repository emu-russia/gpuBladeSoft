int __usercall sub_6F969F17@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int result; // eax@1

  result = *(_DWORD *)(a3 + 8)
         + sub_6F969D8F(
             *(_DWORD *)(a1 + 2984),
             *(_DWORD *)(a1 + 2988),
             a2,
             *(_DWORD *)(a4 + 4) - *(_DWORD *)(a3 + 4),
             *(_BYTE *)(a3 + 12),
             *(_BYTE *)(a4 + 12));
  *(_DWORD *)(a4 + 8) = result;
  return result;
}
